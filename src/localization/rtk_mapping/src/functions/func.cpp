#include "func.h"

rtk_pose::rtk_pose()
{
    e_ = 0.0818191908425;
    R_ = 6378137;
    torad_ = M_PI / 180;
    Re_ = 0;

    init_ = false;
}

void rtk_pose::rtk_data_in(const location_msgs::RTK rtk)
{
    longitude_.push_back(rtk.longitude);
    latitude_.push_back(rtk.latitude);

    Eigen::Vector3d t(0, 0, 0);
    Eigen::Quaternion<double> q(1, 0, 0, 0);

    if (!init_)
    {
        R_ENU2IMU_ = Eigen::AngleAxisd(rtk.heading * torad_, Eigen::Vector3d::UnitZ()) *
                     Eigen::AngleAxisd(rtk.roll * torad_, Eigen::Vector3d::UnitY()) *
                     Eigen::AngleAxisd(rtk.pitch * torad_, Eigen::Vector3d::UnitX());
        Re_ = R_ / sqrt(1 - e_ * e_ * sin(rtk.latitude * torad_) * cos(rtk.longitude * torad_));
        t_ECEF2ENU_[0] = (Re_ + rtk.height) * cos(rtk.latitude * torad_) * cos(rtk.longitude * torad_);
        t_ECEF2ENU_[1] = (Re_ + rtk.height) * cos(rtk.latitude * torad_) * sin(rtk.longitude * torad_);
        t_ECEF2ENU_[2] = (Re_ * (1 - e_ * e_) + rtk.height) * sin(rtk.latitude * torad_);

        map_q_.push_back(q);
        map_t_.push_back(t);
        map_time_.push_back(rtk.stamp.toSec());

        init_ = true;
    }
    else
    {
        Eigen::Matrix3d R_ENU;
        Eigen::Matrix3d R_IMU;

        R_ENU = Eigen::AngleAxisd(rtk.heading * torad_, Eigen::Vector3d::UnitZ()) *
                Eigen::AngleAxisd(rtk.roll * torad_, Eigen::Vector3d::UnitY()) *
                Eigen::AngleAxisd(rtk.pitch * torad_, Eigen::Vector3d::UnitX());
        R_IMU = R_ENU * R_ENU2IMU_.inverse();

        q = R_IMU.inverse();

        Eigen::Vector3d t_ECEF(0, 0, 0);
        Eigen::Vector3d t_ENU(0, 0, 0);

        t_ECEF[0] = (Re_ + rtk.height) * cos(rtk.latitude * torad_) * cos(rtk.longitude * torad_) - t_ECEF2ENU_[0];
        t_ECEF[1] = (Re_ + rtk.height) * cos(rtk.latitude * torad_) * sin(rtk.longitude * torad_) - t_ECEF2ENU_[1];
        t_ECEF[2] = (Re_ * (1 - e_ * e_) + rtk.height) * sin(rtk.latitude * torad_) - t_ECEF2ENU_[2];

        t_ENU[0] = -sin(rtk.longitude * torad_) * t_ECEF[0] + cos(rtk.longitude * torad_) * t_ECEF[1];
        t_ENU[1] = -sin(rtk.latitude * torad_) * cos(rtk.longitude * torad_) * t_ECEF[0] - sin(rtk.latitude * torad_) * sin(rtk.longitude * torad_) * t_ECEF[1] + cos(rtk.latitude * torad_) * t_ECEF[2];
        t_ENU[2] = cos(rtk.latitude * torad_) * cos(rtk.longitude * torad_) * t_ECEF[0] + cos(rtk.latitude * torad_) * sin(rtk.longitude * torad_) * t_ECEF[1] + sin(rtk.latitude * torad_) * t_ECEF[2];

        t = R_ENU2IMU_ * t_ENU;

        map_q_.push_back(q);
        map_t_.push_back(t);
        map_time_.push_back(rtk.stamp.toSec());
    }
}

void rtk_pose::ll2file(string path)
{
    FILE *fp = NULL;
    char end1 = 0x0d; // "/n"
    char end2 = 0x0a;

    fp = fopen(path.c_str(), "w+");

    if (fp == NULL)
    {
        printf("fail to open file (longitude and latitude) ! \n");
        exit(1);
    }
    else
    {
        printf("write data to %s \n", path.c_str());
    }

    printf("the num of points : %ld \n", longitude_.size());
    for (int i = 0; i < longitude_.size(); i++)
    {
        fprintf(fp, "%.8lf,%.8lf%c", latitude_[i], longitude_[i], end2);
    }

    fclose(fp);
}

bool rtk_pose::get_pose(double time, Eigen::Quaternion<double> &q, Eigen::Vector3d &t)
{
    int index_after = 0;

    for (; index_after < map_time_.size(); index_after++)
    {
        if (time <= map_time_[index_after])
            break;
    }

    int index_before = index_after - 1;
    index_before = index_before >= 0 ? index_before : 0;

    double coff = (time - map_time_[index_before]) / (map_time_[index_after] - map_time_[index_before]);
    if (coff < 0 || coff > 1)
        return false;

    // printf("time : %.5lf between : %.5lf ~ %.5lf, coff : %.5lf \n", time, map_time_[index_before], map_time_[index_after], coff);

    Eigen::Quaterniond q_before = map_q_[index_before];
    Eigen::Quaterniond q_after = map_q_[index_after];
    q = q_before.slerp(coff, q_after);
    t = coff * (map_t_[index_after] - map_t_[index_before]) + map_t_[index_before];

    return true;
}

void pose_pub(ros::NodeHandle nh, const vector<Eigen::Quaternion<double>> &q, const vector<Eigen::Vector3d> &t)
{
    nav_msgs::Path pathGT;

    ros::Publisher pubOdomGT;
    ros::Publisher pubPathGT;
    pubOdomGT = nh.advertise<nav_msgs::Odometry>("/odometry_gt", 5);
    pubPathGT = nh.advertise<nav_msgs::Path>("/path_gt", 5);

    for (int i = 0; i < q.size(); i++)
    {
        nav_msgs::Odometry odomGT;
        odomGT.header.frame_id = "/map";
        odomGT.child_frame_id = "/rtk_truth";

        odomGT.header.stamp = ros::Time::now();
        odomGT.pose.pose.orientation.x = q[i].x();
        odomGT.pose.pose.orientation.y = q[i].y();
        odomGT.pose.pose.orientation.z = q[i].z();
        odomGT.pose.pose.orientation.w = q[i].w();
        odomGT.pose.pose.position.x = t[i](0);
        odomGT.pose.pose.position.y = t[i](1);
        odomGT.pose.pose.position.z = t[i](2);
        pubOdomGT.publish(odomGT);

        geometry_msgs::PoseStamped poseGT;
        poseGT.header = odomGT.header;
        poseGT.pose = odomGT.pose.pose;
        pathGT.header.frame_id = "/map";
        pathGT.header.stamp = odomGT.header.stamp;
        pathGT.poses.push_back(poseGT);
        pubPathGT.publish(pathGT);
        usleep(5e3);
    }
}

pcl::PointCloud<pcl::PointXYZI>::Ptr transformPointCloud(const Eigen::Quaterniond &q, const Eigen::Vector3d &t, pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_in)
{   
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud_out(new pcl::PointCloud<pcl::PointXYZI>());
    cloud_out->resize(cloud_in->points.size());

    for (uint32_t i = 0; i < cloud_in->points.size(); i++)
    {
        Eigen::Vector3d point(cloud_in->points[i].x, cloud_in->points[i].y, cloud_in->points[i].z);
        Eigen::Vector3d point2 = q * point + t;

        pcl::PointXYZI p;
        p.x = point2[0];
        p.y = point2[1];
        p.z = point2[2];
        p.intensity = cloud_in->points[i].intensity;

        cloud_out->points[i] = p;
    }

    cloud_out->height = 1;
    cloud_out->width = cloud_in->points.size();

    return cloud_out;
}

void pointcloud_in_range(const double min_range, const double max_range,
                         pcl::PointCloud<pcl::PointXYZI>::Ptr pcloud_in,
                         pcl::PointCloud<pcl::PointXYZI>::Ptr pcloud_out)
{
    pcloud_out->clear();
    for (uint32_t i = 0; i < pcloud_in->points.size(); i++)
    {
        double x = pcloud_in->points[i].x;
        double y = pcloud_in->points[i].y;
        double s = sqrt(x * x + y * y);
        if (s >= min_range && s <= max_range)
            pcloud_out->points.push_back(pcloud_in->points[i]);
    }

    pcloud_out->height = 1;
    pcloud_out->width = pcloud_out->points.size();
}

void save_sc_pcd_pose(const string &folder_path,
                      pcl::PointCloud<pcl::PointXYZI>::Ptr pcloud,
                      const Eigen::Quaternion<double> &q, const Eigen::Vector3d &t)
{
    int x = floor(t(0) * 100);
    int y = floor(t(1) * 100);

    string pcd_path = folder_path + "/pcd/" + std::to_string(x) + "_" + std::to_string(y) + ".pcd";
    pcl::io::savePCDFileASCII(pcd_path, *pcloud);

    string txt_path = folder_path + "/sc.txt";
    ofstream file(txt_path.c_str(), ios::app);
    file << x*0.01 << " " << y*0.01 << " " << t(2) << " " << q.x() << " " << q.y() << " " << q.z() << " " << q.w() << endl;
}

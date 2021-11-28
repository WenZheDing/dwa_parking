// Generated by gencpp from file can_decode/rtk.msg
// DO NOT EDIT!


#ifndef CAN_DECODE_MESSAGE_RTK_H
#define CAN_DECODE_MESSAGE_RTK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace can_decode
{
template <class ContainerAllocator>
struct rtk_
{
  typedef rtk_<ContainerAllocator> Type;

  rtk_()
    : stamp()
    , gpstime(0.0)
    , longitude(0.0)
    , latitude(0.0)
    , height(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , AngRateRawX(0.0)
    , AngRateRawY(0.0)
    , AngRateRawZ(0.0)
    , AccelRawX(0.0)
    , AccelRawY(0.0)
    , AccelRawZ(0.0)  {
    }
  rtk_(const ContainerAllocator& _alloc)
    : stamp()
    , gpstime(0.0)
    , longitude(0.0)
    , latitude(0.0)
    , height(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , AngRateRawX(0.0)
    , AngRateRawY(0.0)
    , AngRateRawZ(0.0)
    , AccelRawX(0.0)
    , AccelRawY(0.0)
    , AccelRawZ(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef double _gpstime_type;
  _gpstime_type gpstime;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _height_type;
  _height_type height;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _AngRateRawX_type;
  _AngRateRawX_type AngRateRawX;

   typedef double _AngRateRawY_type;
  _AngRateRawY_type AngRateRawY;

   typedef double _AngRateRawZ_type;
  _AngRateRawZ_type AngRateRawZ;

   typedef double _AccelRawX_type;
  _AccelRawX_type AccelRawX;

   typedef double _AccelRawY_type;
  _AccelRawY_type AccelRawY;

   typedef double _AccelRawZ_type;
  _AccelRawZ_type AccelRawZ;





  typedef boost::shared_ptr< ::can_decode::rtk_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::can_decode::rtk_<ContainerAllocator> const> ConstPtr;

}; // struct rtk_

typedef ::can_decode::rtk_<std::allocator<void> > rtk;

typedef boost::shared_ptr< ::can_decode::rtk > rtkPtr;
typedef boost::shared_ptr< ::can_decode::rtk const> rtkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::can_decode::rtk_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::can_decode::rtk_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::can_decode::rtk_<ContainerAllocator1> & lhs, const ::can_decode::rtk_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.gpstime == rhs.gpstime &&
    lhs.longitude == rhs.longitude &&
    lhs.latitude == rhs.latitude &&
    lhs.height == rhs.height &&
    lhs.heading == rhs.heading &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.AngRateRawX == rhs.AngRateRawX &&
    lhs.AngRateRawY == rhs.AngRateRawY &&
    lhs.AngRateRawZ == rhs.AngRateRawZ &&
    lhs.AccelRawX == rhs.AccelRawX &&
    lhs.AccelRawY == rhs.AccelRawY &&
    lhs.AccelRawZ == rhs.AccelRawZ;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::can_decode::rtk_<ContainerAllocator1> & lhs, const ::can_decode::rtk_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace can_decode

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::can_decode::rtk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::can_decode::rtk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_decode::rtk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_decode::rtk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_decode::rtk_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_decode::rtk_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::can_decode::rtk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "625a96b477911aaf9ca097ca8e357640";
  }

  static const char* value(const ::can_decode::rtk_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x625a96b477911aafULL;
  static const uint64_t static_value2 = 0x9ca097ca8e357640ULL;
};

template<class ContainerAllocator>
struct DataType< ::can_decode::rtk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "can_decode/rtk";
  }

  static const char* value(const ::can_decode::rtk_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::can_decode::rtk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n"
"float64 gpstime\n"
"\n"
"float64 longitude\n"
"float64 latitude\n"
"float64 height\n"
"\n"
"float64 heading\n"
"float64 pitch\n"
"float64 roll\n"
"\n"
"float64 AngRateRawX\n"
"float64 AngRateRawY\n"
"float64 AngRateRawZ\n"
"\n"
"float64 AccelRawX\n"
"float64 AccelRawY\n"
"float64 AccelRawZ\n"
;
  }

  static const char* value(const ::can_decode::rtk_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::can_decode::rtk_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.gpstime);
      stream.next(m.longitude);
      stream.next(m.latitude);
      stream.next(m.height);
      stream.next(m.heading);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.AngRateRawX);
      stream.next(m.AngRateRawY);
      stream.next(m.AngRateRawZ);
      stream.next(m.AccelRawX);
      stream.next(m.AccelRawY);
      stream.next(m.AccelRawZ);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rtk_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::can_decode::rtk_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::can_decode::rtk_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "gpstime: ";
    Printer<double>::stream(s, indent + "  ", v.gpstime);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "AngRateRawX: ";
    Printer<double>::stream(s, indent + "  ", v.AngRateRawX);
    s << indent << "AngRateRawY: ";
    Printer<double>::stream(s, indent + "  ", v.AngRateRawY);
    s << indent << "AngRateRawZ: ";
    Printer<double>::stream(s, indent + "  ", v.AngRateRawZ);
    s << indent << "AccelRawX: ";
    Printer<double>::stream(s, indent + "  ", v.AccelRawX);
    s << indent << "AccelRawY: ";
    Printer<double>::stream(s, indent + "  ", v.AccelRawY);
    s << indent << "AccelRawZ: ";
    Printer<double>::stream(s, indent + "  ", v.AccelRawZ);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAN_DECODE_MESSAGE_RTK_H

// Generated by gencpp from file vehicle_msgs/vehicle_status.msg
// DO NOT EDIT!


#ifndef VEHICLE_MSGS_MESSAGE_VEHICLE_STATUS_H
#define VEHICLE_MSGS_MESSAGE_VEHICLE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vehicle_msgs
{
template <class ContainerAllocator>
struct vehicle_status_
{
  typedef vehicle_status_<ContainerAllocator> Type;

  vehicle_status_()
    : head1(0)
    , head2(0)
    , length(0)
    , steering(0)
    , brake_status(0)
    , pedal_ratio(0)
    , gear_position(0)
    , speed_left_front(0)
    , speed_right_front(0)
    , speed_left_rear(0)
    , speed_right_rear(0)
    , command(0)
    , work_mode(0)
    , racing_num(0)
    , fault_type(0)
    , checksum(0)  {
    }
  vehicle_status_(const ContainerAllocator& _alloc)
    : head1(0)
    , head2(0)
    , length(0)
    , steering(0)
    , brake_status(0)
    , pedal_ratio(0)
    , gear_position(0)
    , speed_left_front(0)
    , speed_right_front(0)
    , speed_left_rear(0)
    , speed_right_rear(0)
    , command(0)
    , work_mode(0)
    , racing_num(0)
    , fault_type(0)
    , checksum(0)  {
  (void)_alloc;
    }



   typedef uint8_t _head1_type;
  _head1_type head1;

   typedef uint8_t _head2_type;
  _head2_type head2;

   typedef uint8_t _length_type;
  _length_type length;

   typedef uint8_t _steering_type;
  _steering_type steering;

   typedef uint8_t _brake_status_type;
  _brake_status_type brake_status;

   typedef uint8_t _pedal_ratio_type;
  _pedal_ratio_type pedal_ratio;

   typedef uint8_t _gear_position_type;
  _gear_position_type gear_position;

   typedef uint16_t _speed_left_front_type;
  _speed_left_front_type speed_left_front;

   typedef uint16_t _speed_right_front_type;
  _speed_right_front_type speed_right_front;

   typedef uint16_t _speed_left_rear_type;
  _speed_left_rear_type speed_left_rear;

   typedef uint16_t _speed_right_rear_type;
  _speed_right_rear_type speed_right_rear;

   typedef uint8_t _command_type;
  _command_type command;

   typedef uint8_t _work_mode_type;
  _work_mode_type work_mode;

   typedef uint8_t _racing_num_type;
  _racing_num_type racing_num;

   typedef uint8_t _fault_type_type;
  _fault_type_type fault_type;

   typedef uint16_t _checksum_type;
  _checksum_type checksum;





  typedef boost::shared_ptr< ::vehicle_msgs::vehicle_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vehicle_msgs::vehicle_status_<ContainerAllocator> const> ConstPtr;

}; // struct vehicle_status_

typedef ::vehicle_msgs::vehicle_status_<std::allocator<void> > vehicle_status;

typedef boost::shared_ptr< ::vehicle_msgs::vehicle_status > vehicle_statusPtr;
typedef boost::shared_ptr< ::vehicle_msgs::vehicle_status const> vehicle_statusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vehicle_msgs::vehicle_status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vehicle_msgs::vehicle_status_<ContainerAllocator1> & lhs, const ::vehicle_msgs::vehicle_status_<ContainerAllocator2> & rhs)
{
  return lhs.head1 == rhs.head1 &&
    lhs.head2 == rhs.head2 &&
    lhs.length == rhs.length &&
    lhs.steering == rhs.steering &&
    lhs.brake_status == rhs.brake_status &&
    lhs.pedal_ratio == rhs.pedal_ratio &&
    lhs.gear_position == rhs.gear_position &&
    lhs.speed_left_front == rhs.speed_left_front &&
    lhs.speed_right_front == rhs.speed_right_front &&
    lhs.speed_left_rear == rhs.speed_left_rear &&
    lhs.speed_right_rear == rhs.speed_right_rear &&
    lhs.command == rhs.command &&
    lhs.work_mode == rhs.work_mode &&
    lhs.racing_num == rhs.racing_num &&
    lhs.fault_type == rhs.fault_type &&
    lhs.checksum == rhs.checksum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vehicle_msgs::vehicle_status_<ContainerAllocator1> & lhs, const ::vehicle_msgs::vehicle_status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vehicle_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vehicle_msgs::vehicle_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vehicle_msgs::vehicle_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vehicle_msgs::vehicle_status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "846750d88d04873a7a68c897999f240c";
  }

  static const char* value(const ::vehicle_msgs::vehicle_status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x846750d88d04873aULL;
  static const uint64_t static_value2 = 0x7a68c897999f240cULL;
};

template<class ContainerAllocator>
struct DataType< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vehicle_msgs/vehicle_status";
  }

  static const char* value(const ::vehicle_msgs::vehicle_status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 head1\n"
"uint8 head2\n"
"uint8 length\n"
"uint8 steering\n"
"uint8 brake_status\n"
"uint8 pedal_ratio\n"
"uint8 gear_position\n"
"uint16 speed_left_front\n"
"uint16 speed_right_front\n"
"uint16 speed_left_rear\n"
"uint16 speed_right_rear\n"
"uint8 command\n"
"uint8 work_mode\n"
"uint8 racing_num\n"
"uint8 fault_type\n"
"uint16 checksum\n"
"\n"
"\n"
;
  }

  static const char* value(const ::vehicle_msgs::vehicle_status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.head1);
      stream.next(m.head2);
      stream.next(m.length);
      stream.next(m.steering);
      stream.next(m.brake_status);
      stream.next(m.pedal_ratio);
      stream.next(m.gear_position);
      stream.next(m.speed_left_front);
      stream.next(m.speed_right_front);
      stream.next(m.speed_left_rear);
      stream.next(m.speed_right_rear);
      stream.next(m.command);
      stream.next(m.work_mode);
      stream.next(m.racing_num);
      stream.next(m.fault_type);
      stream.next(m.checksum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vehicle_status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vehicle_msgs::vehicle_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vehicle_msgs::vehicle_status_<ContainerAllocator>& v)
  {
    s << indent << "head1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.head1);
    s << indent << "head2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.head2);
    s << indent << "length: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.length);
    s << indent << "steering: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.steering);
    s << indent << "brake_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_status);
    s << indent << "pedal_ratio: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pedal_ratio);
    s << indent << "gear_position: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gear_position);
    s << indent << "speed_left_front: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.speed_left_front);
    s << indent << "speed_right_front: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.speed_right_front);
    s << indent << "speed_left_rear: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.speed_left_rear);
    s << indent << "speed_right_rear: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.speed_right_rear);
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
    s << indent << "work_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.work_mode);
    s << indent << "racing_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.racing_num);
    s << indent << "fault_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_type);
    s << indent << "checksum: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.checksum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VEHICLE_MSGS_MESSAGE_VEHICLE_STATUS_H

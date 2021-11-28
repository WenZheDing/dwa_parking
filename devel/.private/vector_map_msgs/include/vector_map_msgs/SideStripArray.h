// Generated by gencpp from file vector_map_msgs/SideStripArray.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_SIDESTRIPARRAY_H
#define VECTOR_MAP_MSGS_MESSAGE_SIDESTRIPARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vector_map_msgs/SideStrip.h>

namespace vector_map_msgs
{
template <class ContainerAllocator>
struct SideStripArray_
{
  typedef SideStripArray_<ContainerAllocator> Type;

  SideStripArray_()
    : header()
    , data()  {
    }
  SideStripArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::vector_map_msgs::SideStrip_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::vector_map_msgs::SideStrip_<ContainerAllocator> >::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::vector_map_msgs::SideStripArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::SideStripArray_<ContainerAllocator> const> ConstPtr;

}; // struct SideStripArray_

typedef ::vector_map_msgs::SideStripArray_<std::allocator<void> > SideStripArray;

typedef boost::shared_ptr< ::vector_map_msgs::SideStripArray > SideStripArrayPtr;
typedef boost::shared_ptr< ::vector_map_msgs::SideStripArray const> SideStripArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::SideStripArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::SideStripArray_<ContainerAllocator1> & lhs, const ::vector_map_msgs::SideStripArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::SideStripArray_<ContainerAllocator1> & lhs, const ::vector_map_msgs::SideStripArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::SideStripArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::SideStripArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::SideStripArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c3d42730e39beb0eefa7bf92f9214be3";
  }

  static const char* value(const ::vector_map_msgs::SideStripArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc3d42730e39beb0eULL;
  static const uint64_t static_value2 = 0xefa7bf92f9214be3ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/SideStripArray";
  }

  static const char* value(const ::vector_map_msgs::SideStripArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"SideStrip[] data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: vector_map_msgs/SideStrip\n"
"# Ver 1.10\n"
"int32 id\n"
"int32 lid\n"
"int32 linkid\n"
;
  }

  static const char* value(const ::vector_map_msgs::SideStripArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SideStripArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::SideStripArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::SideStripArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::vector_map_msgs::SideStrip_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_SIDESTRIPARRAY_H

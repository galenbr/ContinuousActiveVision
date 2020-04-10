// Generated by gencpp from file netft_utils/StopSimResponse.msg
// DO NOT EDIT!


#ifndef NETFT_UTILS_MESSAGE_STOPSIMRESPONSE_H
#define NETFT_UTILS_MESSAGE_STOPSIMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace netft_utils
{
template <class ContainerAllocator>
struct StopSimResponse_
{
  typedef StopSimResponse_<ContainerAllocator> Type;

  StopSimResponse_()
    {
    }
  StopSimResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::netft_utils::StopSimResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::netft_utils::StopSimResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StopSimResponse_

typedef ::netft_utils::StopSimResponse_<std::allocator<void> > StopSimResponse;

typedef boost::shared_ptr< ::netft_utils::StopSimResponse > StopSimResponsePtr;
typedef boost::shared_ptr< ::netft_utils::StopSimResponse const> StopSimResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::netft_utils::StopSimResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::netft_utils::StopSimResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace netft_utils

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'netft_utils': ['/home/agandhi2/mer_lab/ros_ws/src/projects/piercing_experiments/netft_utils/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::netft_utils::StopSimResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::netft_utils::StopSimResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::StopSimResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::StopSimResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::StopSimResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::StopSimResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::netft_utils::StopSimResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::netft_utils::StopSimResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::netft_utils::StopSimResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "netft_utils/StopSimResponse";
  }

  static const char* value(const ::netft_utils::StopSimResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::netft_utils::StopSimResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
";
  }

  static const char* value(const ::netft_utils::StopSimResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::netft_utils::StopSimResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopSimResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::netft_utils::StopSimResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::netft_utils::StopSimResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NETFT_UTILS_MESSAGE_STOPSIMRESPONSE_H

// Generated by gencpp from file netft_utils/SetMaxRequest.msg
// DO NOT EDIT!


#ifndef NETFT_UTILS_MESSAGE_SETMAXREQUEST_H
#define NETFT_UTILS_MESSAGE_SETMAXREQUEST_H


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
struct SetMaxRequest_
{
  typedef SetMaxRequest_<ContainerAllocator> Type;

  SetMaxRequest_()
    : forceMax(0.0)
    , torqueMax(0.0)  {
    }
  SetMaxRequest_(const ContainerAllocator& _alloc)
    : forceMax(0.0)
    , torqueMax(0.0)  {
  (void)_alloc;
    }



   typedef double _forceMax_type;
  _forceMax_type forceMax;

   typedef double _torqueMax_type;
  _torqueMax_type torqueMax;





  typedef boost::shared_ptr< ::netft_utils::SetMaxRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::netft_utils::SetMaxRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetMaxRequest_

typedef ::netft_utils::SetMaxRequest_<std::allocator<void> > SetMaxRequest;

typedef boost::shared_ptr< ::netft_utils::SetMaxRequest > SetMaxRequestPtr;
typedef boost::shared_ptr< ::netft_utils::SetMaxRequest const> SetMaxRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::netft_utils::SetMaxRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::netft_utils::SetMaxRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::netft_utils::SetMaxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::netft_utils::SetMaxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::netft_utils::SetMaxRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83b478659c66695e91b11173ad5854f9";
  }

  static const char* value(const ::netft_utils::SetMaxRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83b478659c66695eULL;
  static const uint64_t static_value2 = 0x91b11173ad5854f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "netft_utils/SetMaxRequest";
  }

  static const char* value(const ::netft_utils::SetMaxRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 forceMax\n\
float64 torqueMax\n\
";
  }

  static const char* value(const ::netft_utils::SetMaxRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.forceMax);
      stream.next(m.torqueMax);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetMaxRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::netft_utils::SetMaxRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::netft_utils::SetMaxRequest_<ContainerAllocator>& v)
  {
    s << indent << "forceMax: ";
    Printer<double>::stream(s, indent + "  ", v.forceMax);
    s << indent << "torqueMax: ";
    Printer<double>::stream(s, indent + "  ", v.torqueMax);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NETFT_UTILS_MESSAGE_SETMAXREQUEST_H

// Generated by gencpp from file pcl_recorder/EndPointCloudRangeRequest.msg
// DO NOT EDIT!


#ifndef PCL_RECORDER_MESSAGE_ENDPOINTCLOUDRANGEREQUEST_H
#define PCL_RECORDER_MESSAGE_ENDPOINTCLOUDRANGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pcl_recorder
{
template <class ContainerAllocator>
struct EndPointCloudRangeRequest_
{
  typedef EndPointCloudRangeRequest_<ContainerAllocator> Type;

  EndPointCloudRangeRequest_()
    {
    }
  EndPointCloudRangeRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EndPointCloudRangeRequest_

typedef ::pcl_recorder::EndPointCloudRangeRequest_<std::allocator<void> > EndPointCloudRangeRequest;

typedef boost::shared_ptr< ::pcl_recorder::EndPointCloudRangeRequest > EndPointCloudRangeRequestPtr;
typedef boost::shared_ptr< ::pcl_recorder::EndPointCloudRangeRequest const> EndPointCloudRangeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pcl_recorder

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pcl_recorder/EndPointCloudRangeRequest";
  }

  static const char* value(const ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndPointCloudRangeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pcl_recorder::EndPointCloudRangeRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PCL_RECORDER_MESSAGE_ENDPOINTCLOUDRANGEREQUEST_H

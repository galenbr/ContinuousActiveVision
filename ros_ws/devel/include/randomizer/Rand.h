// Generated by gencpp from file randomizer/Rand.msg
// DO NOT EDIT!


#ifndef RANDOMIZER_MESSAGE_RAND_H
#define RANDOMIZER_MESSAGE_RAND_H

#include <ros/service_traits.h>


#include <randomizer/RandRequest.h>
#include <randomizer/RandResponse.h>


namespace randomizer
{

struct Rand
{

typedef RandRequest Request;
typedef RandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Rand
} // namespace randomizer


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::randomizer::Rand > {
  static const char* value()
  {
    return "cb0da9f8cfc2a14ca80d5a9fa236c5fd";
  }

  static const char* value(const ::randomizer::Rand&) { return value(); }
};

template<>
struct DataType< ::randomizer::Rand > {
  static const char* value()
  {
    return "randomizer/Rand";
  }

  static const char* value(const ::randomizer::Rand&) { return value(); }
};


// service_traits::MD5Sum< ::randomizer::RandRequest> should match 
// service_traits::MD5Sum< ::randomizer::Rand > 
template<>
struct MD5Sum< ::randomizer::RandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::randomizer::Rand >::value();
  }
  static const char* value(const ::randomizer::RandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::randomizer::RandRequest> should match 
// service_traits::DataType< ::randomizer::Rand > 
template<>
struct DataType< ::randomizer::RandRequest>
{
  static const char* value()
  {
    return DataType< ::randomizer::Rand >::value();
  }
  static const char* value(const ::randomizer::RandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::randomizer::RandResponse> should match 
// service_traits::MD5Sum< ::randomizer::Rand > 
template<>
struct MD5Sum< ::randomizer::RandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::randomizer::Rand >::value();
  }
  static const char* value(const ::randomizer::RandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::randomizer::RandResponse> should match 
// service_traits::DataType< ::randomizer::Rand > 
template<>
struct DataType< ::randomizer::RandResponse>
{
  static const char* value()
  {
    return DataType< ::randomizer::Rand >::value();
  }
  static const char* value(const ::randomizer::RandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RANDOMIZER_MESSAGE_RAND_H

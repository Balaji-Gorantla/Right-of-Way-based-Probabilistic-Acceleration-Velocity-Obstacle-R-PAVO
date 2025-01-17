// Generated by gencpp from file move_robot/SyncMotionResponse.msg
// DO NOT EDIT!


#ifndef MOVE_ROBOT_MESSAGE_SYNCMOTIONRESPONSE_H
#define MOVE_ROBOT_MESSAGE_SYNCMOTIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace move_robot
{
template <class ContainerAllocator>
struct SyncMotionResponse_
{
  typedef SyncMotionResponse_<ContainerAllocator> Type;

  SyncMotionResponse_()
    : sync_success(false)  {
    }
  SyncMotionResponse_(const ContainerAllocator& _alloc)
    : sync_success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _sync_success_type;
  _sync_success_type sync_success;





  typedef boost::shared_ptr< ::move_robot::SyncMotionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::move_robot::SyncMotionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SyncMotionResponse_

typedef ::move_robot::SyncMotionResponse_<std::allocator<void> > SyncMotionResponse;

typedef boost::shared_ptr< ::move_robot::SyncMotionResponse > SyncMotionResponsePtr;
typedef boost::shared_ptr< ::move_robot::SyncMotionResponse const> SyncMotionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::move_robot::SyncMotionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::move_robot::SyncMotionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::move_robot::SyncMotionResponse_<ContainerAllocator1> & lhs, const ::move_robot::SyncMotionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sync_success == rhs.sync_success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::move_robot::SyncMotionResponse_<ContainerAllocator1> & lhs, const ::move_robot::SyncMotionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace move_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_robot::SyncMotionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::SyncMotionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::SyncMotionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24f79b536c77d75cf8239dd37b943368";
  }

  static const char* value(const ::move_robot::SyncMotionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24f79b536c77d75cULL;
  static const uint64_t static_value2 = 0xf8239dd37b943368ULL;
};

template<class ContainerAllocator>
struct DataType< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "move_robot/SyncMotionResponse";
  }

  static const char* value(const ::move_robot::SyncMotionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool sync_success\n"
"\n"
;
  }

  static const char* value(const ::move_robot::SyncMotionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sync_success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncMotionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::move_robot::SyncMotionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::move_robot::SyncMotionResponse_<ContainerAllocator>& v)
  {
    s << indent << "sync_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sync_success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVE_ROBOT_MESSAGE_SYNCMOTIONRESPONSE_H

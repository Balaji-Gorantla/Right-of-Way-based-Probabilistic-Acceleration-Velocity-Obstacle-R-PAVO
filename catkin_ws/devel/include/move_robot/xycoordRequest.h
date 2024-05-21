// Generated by gencpp from file move_robot/xycoordRequest.msg
// DO NOT EDIT!


#ifndef MOVE_ROBOT_MESSAGE_XYCOORDREQUEST_H
#define MOVE_ROBOT_MESSAGE_XYCOORDREQUEST_H


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
struct xycoordRequest_
{
  typedef xycoordRequest_<ContainerAllocator> Type;

  xycoordRequest_()
    : occ_theta(0.0)
    , l(0.0)
    , w(0.0)  {
    }
  xycoordRequest_(const ContainerAllocator& _alloc)
    : occ_theta(0.0)
    , l(0.0)
    , w(0.0)  {
  (void)_alloc;
    }



   typedef double _occ_theta_type;
  _occ_theta_type occ_theta;

   typedef double _l_type;
  _l_type l;

   typedef double _w_type;
  _w_type w;





  typedef boost::shared_ptr< ::move_robot::xycoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::move_robot::xycoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct xycoordRequest_

typedef ::move_robot::xycoordRequest_<std::allocator<void> > xycoordRequest;

typedef boost::shared_ptr< ::move_robot::xycoordRequest > xycoordRequestPtr;
typedef boost::shared_ptr< ::move_robot::xycoordRequest const> xycoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::move_robot::xycoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::move_robot::xycoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::move_robot::xycoordRequest_<ContainerAllocator1> & lhs, const ::move_robot::xycoordRequest_<ContainerAllocator2> & rhs)
{
  return lhs.occ_theta == rhs.occ_theta &&
    lhs.l == rhs.l &&
    lhs.w == rhs.w;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::move_robot::xycoordRequest_<ContainerAllocator1> & lhs, const ::move_robot::xycoordRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace move_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::move_robot::xycoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_robot::xycoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::xycoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::xycoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::xycoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::xycoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::move_robot::xycoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e6c6843b6e6b025f0c29760d99afee3";
  }

  static const char* value(const ::move_robot::xycoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e6c6843b6e6b025ULL;
  static const uint64_t static_value2 = 0xf0c29760d99afee3ULL;
};

template<class ContainerAllocator>
struct DataType< ::move_robot::xycoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "move_robot/xycoordRequest";
  }

  static const char* value(const ::move_robot::xycoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::move_robot::xycoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 occ_theta\n"
"float64 l\n"
"float64 w \n"
;
  }

  static const char* value(const ::move_robot::xycoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::move_robot::xycoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.occ_theta);
      stream.next(m.l);
      stream.next(m.w);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct xycoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::move_robot::xycoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::move_robot::xycoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "occ_theta: ";
    Printer<double>::stream(s, indent + "  ", v.occ_theta);
    s << indent << "l: ";
    Printer<double>::stream(s, indent + "  ", v.l);
    s << indent << "w: ";
    Printer<double>::stream(s, indent + "  ", v.w);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVE_ROBOT_MESSAGE_XYCOORDREQUEST_H
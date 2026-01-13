// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__GripperState __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__GripperState __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperState_
{
  using Type = GripperState_<ContainerAllocator>;

  explicit GripperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->is_grasped = false;
    }
  }

  explicit GripperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->is_grasped = false;
    }
  }

  // field types and members
  using _width_type =
    double;
  _width_type width;
  using _is_grasped_type =
    bool;
  _is_grasped_type is_grasped;

  // setters for named parameter idiom
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__is_grasped(
    const bool & _arg)
  {
    this->is_grasped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::GripperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::GripperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::GripperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::GripperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::GripperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::GripperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::GripperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::GripperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__GripperState
    std::shared_ptr<franky_msgs::msg::GripperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__GripperState
    std::shared_ptr<franky_msgs::msg::GripperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperState_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->is_grasped != other.is_grasped) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperState_

// alias to use template instance with default allocator
using GripperState =
  franky_msgs::msg::GripperState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_

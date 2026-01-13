// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__GripperGrasp __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__GripperGrasp __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperGrasp_
{
  using Type = GripperGrasp_<ContainerAllocator>;

  explicit GripperGrasp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->speed = 0.0;
      this->force = 0.0;
      this->epsilon_inner = 0.0;
      this->epsilon_outer = 0.0;
    }
  }

  explicit GripperGrasp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->speed = 0.0;
      this->force = 0.0;
      this->epsilon_inner = 0.0;
      this->epsilon_outer = 0.0;
    }
  }

  // field types and members
  using _width_type =
    double;
  _width_type width;
  using _speed_type =
    double;
  _speed_type speed;
  using _force_type =
    double;
  _force_type force;
  using _epsilon_inner_type =
    double;
  _epsilon_inner_type epsilon_inner;
  using _epsilon_outer_type =
    double;
  _epsilon_outer_type epsilon_outer;

  // setters for named parameter idiom
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__force(
    const double & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__epsilon_inner(
    const double & _arg)
  {
    this->epsilon_inner = _arg;
    return *this;
  }
  Type & set__epsilon_outer(
    const double & _arg)
  {
    this->epsilon_outer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::GripperGrasp_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::GripperGrasp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::GripperGrasp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::GripperGrasp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__GripperGrasp
    std::shared_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__GripperGrasp
    std::shared_ptr<franky_msgs::msg::GripperGrasp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperGrasp_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->epsilon_inner != other.epsilon_inner) {
      return false;
    }
    if (this->epsilon_outer != other.epsilon_outer) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperGrasp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperGrasp_

// alias to use template instance with default allocator
using GripperGrasp =
  franky_msgs::msg::GripperGrasp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_HPP_

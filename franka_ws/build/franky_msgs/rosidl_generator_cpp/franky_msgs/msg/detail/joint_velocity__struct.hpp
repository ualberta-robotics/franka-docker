// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/JointVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__JointVelocity __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__JointVelocity __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointVelocity_
{
  using Type = JointVelocity_<ContainerAllocator>;

  explicit JointVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_millis = 0ul;
    }
  }

  explicit JointVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_millis = 0ul;
    }
  }

  // field types and members
  using _duration_millis_type =
    uint32_t;
  _duration_millis_type duration_millis;
  using _vels_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vels_type vels;

  // setters for named parameter idiom
  Type & set__duration_millis(
    const uint32_t & _arg)
  {
    this->duration_millis = _arg;
    return *this;
  }
  Type & set__vels(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::JointVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::JointVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::JointVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::JointVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__JointVelocity
    std::shared_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__JointVelocity
    std::shared_ptr<franky_msgs::msg::JointVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointVelocity_ & other) const
  {
    if (this->duration_millis != other.duration_millis) {
      return false;
    }
    if (this->vels != other.vels) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointVelocity_

// alias to use template instance with default allocator
using JointVelocity =
  franky_msgs::msg::JointVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__STRUCT_HPP_

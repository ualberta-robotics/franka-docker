// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__CartesianVelocity __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__CartesianVelocity __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianVelocity_
{
  using Type = CartesianVelocity_<ContainerAllocator>;

  explicit CartesianVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_millis = 0ul;
    }
  }

  explicit CartesianVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _twist_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__duration_millis(
    const uint32_t & _arg)
  {
    this->duration_millis = _arg;
    return *this;
  }
  Type & set__twist(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::CartesianVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::CartesianVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::CartesianVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::CartesianVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__CartesianVelocity
    std::shared_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__CartesianVelocity
    std::shared_ptr<franky_msgs::msg::CartesianVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianVelocity_ & other) const
  {
    if (this->duration_millis != other.duration_millis) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianVelocity_

// alias to use template instance with default allocator
using CartesianVelocity =
  franky_msgs::msg::CartesianVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_

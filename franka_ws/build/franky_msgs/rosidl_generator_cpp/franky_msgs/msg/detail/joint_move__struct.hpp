// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__JointMove __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__JointMove __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointMove_
{
  using Type = JointMove_<ContainerAllocator>;

  explicit JointMove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative = false;
    }
  }

  explicit JointMove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative = false;
    }
  }

  // field types and members
  using _relative_type =
    bool;
  _relative_type relative;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__relative(
    const bool & _arg)
  {
    this->relative = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::JointMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::JointMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::JointMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::JointMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::JointMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::JointMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::JointMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::JointMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::JointMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::JointMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__JointMove
    std::shared_ptr<franky_msgs::msg::JointMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__JointMove
    std::shared_ptr<franky_msgs::msg::JointMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMove_ & other) const
  {
    if (this->relative != other.relative) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMove_

// alias to use template instance with default allocator
using JointMove =
  franky_msgs::msg::JointMove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:msg/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franky_msgs__msg__CartesianMove __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__msg__CartesianMove __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianMove_
{
  using Type = CartesianMove_<ContainerAllocator>;

  explicit CartesianMove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relative = false;
    }
  }

  explicit CartesianMove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
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
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__relative(
    const bool & _arg)
  {
    this->relative = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::msg::CartesianMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::msg::CartesianMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::CartesianMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::msg::CartesianMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__msg__CartesianMove
    std::shared_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__msg__CartesianMove
    std::shared_ptr<franky_msgs::msg::CartesianMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianMove_ & other) const
  {
    if (this->relative != other.relative) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianMove_

// alias to use template instance with default allocator
using CartesianMove =
  franky_msgs::msg::CartesianMove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_

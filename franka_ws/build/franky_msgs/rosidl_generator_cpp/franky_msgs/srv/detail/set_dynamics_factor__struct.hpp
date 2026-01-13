// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_HPP_
#define FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Request __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Request __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDynamicsFactor_Request_
{
  using Type = SetDynamicsFactor_Request_<ContainerAllocator>;

  explicit SetDynamicsFactor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_limit = 0.0;
      this->acceleration_limit = 0.0;
      this->jerk_limit = 0.0;
    }
  }

  explicit SetDynamicsFactor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_limit = 0.0;
      this->acceleration_limit = 0.0;
      this->jerk_limit = 0.0;
    }
  }

  // field types and members
  using _velocity_limit_type =
    double;
  _velocity_limit_type velocity_limit;
  using _acceleration_limit_type =
    double;
  _acceleration_limit_type acceleration_limit;
  using _jerk_limit_type =
    double;
  _jerk_limit_type jerk_limit;

  // setters for named parameter idiom
  Type & set__velocity_limit(
    const double & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__acceleration_limit(
    const double & _arg)
  {
    this->acceleration_limit = _arg;
    return *this;
  }
  Type & set__jerk_limit(
    const double & _arg)
  {
    this->jerk_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Request
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Request
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDynamicsFactor_Request_ & other) const
  {
    if (this->velocity_limit != other.velocity_limit) {
      return false;
    }
    if (this->acceleration_limit != other.acceleration_limit) {
      return false;
    }
    if (this->jerk_limit != other.jerk_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDynamicsFactor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDynamicsFactor_Request_

// alias to use template instance with default allocator
using SetDynamicsFactor_Request =
  franky_msgs::srv::SetDynamicsFactor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franky_msgs


#ifndef _WIN32
# define DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Response __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Response __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDynamicsFactor_Response_
{
  using Type = SetDynamicsFactor_Response_<ContainerAllocator>;

  explicit SetDynamicsFactor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetDynamicsFactor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Response
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__srv__SetDynamicsFactor_Response
    std::shared_ptr<franky_msgs::srv::SetDynamicsFactor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDynamicsFactor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDynamicsFactor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDynamicsFactor_Response_

// alias to use template instance with default allocator
using SetDynamicsFactor_Response =
  franky_msgs::srv::SetDynamicsFactor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franky_msgs

namespace franky_msgs
{

namespace srv
{

struct SetDynamicsFactor
{
  using Request = franky_msgs::srv::SetDynamicsFactor_Request;
  using Response = franky_msgs::srv::SetDynamicsFactor_Response;
};

}  // namespace srv

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_HPP_

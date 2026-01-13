// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franky_msgs:srv/BlockingGripperGrasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__BLOCKING_GRIPPER_GRASP__STRUCT_HPP_
#define FRANKY_MSGS__SRV__DETAIL__BLOCKING_GRIPPER_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "franky_msgs/msg/detail/gripper_grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Request __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Request __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockingGripperGrasp_Request_
{
  using Type = BlockingGripperGrasp_Request_<ContainerAllocator>;

  explicit BlockingGripperGrasp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit BlockingGripperGrasp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    franky_msgs::msg::GripperGrasp_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const franky_msgs::msg::GripperGrasp_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Request
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Request
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockingGripperGrasp_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockingGripperGrasp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockingGripperGrasp_Request_

// alias to use template instance with default allocator
using BlockingGripperGrasp_Request =
  franky_msgs::srv::BlockingGripperGrasp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franky_msgs


#ifndef _WIN32
# define DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Response __attribute__((deprecated))
#else
# define DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Response __declspec(deprecated)
#endif

namespace franky_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockingGripperGrasp_Response_
{
  using Type = BlockingGripperGrasp_Response_<ContainerAllocator>;

  explicit BlockingGripperGrasp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BlockingGripperGrasp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Response
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franky_msgs__srv__BlockingGripperGrasp_Response
    std::shared_ptr<franky_msgs::srv::BlockingGripperGrasp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockingGripperGrasp_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockingGripperGrasp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockingGripperGrasp_Response_

// alias to use template instance with default allocator
using BlockingGripperGrasp_Response =
  franky_msgs::srv::BlockingGripperGrasp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franky_msgs

namespace franky_msgs
{

namespace srv
{

struct BlockingGripperGrasp
{
  using Request = franky_msgs::srv::BlockingGripperGrasp_Request;
  using Response = franky_msgs::srv::BlockingGripperGrasp_Response;
};

}  // namespace srv

}  // namespace franky_msgs

#endif  // FRANKY_MSGS__SRV__DETAIL__BLOCKING_GRIPPER_GRASP__STRUCT_HPP_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice
#include "franky_msgs/msg/detail/gripper_grasp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franky_msgs/msg/detail/gripper_grasp__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace franky_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franky_msgs
cdr_serialize(
  const franky_msgs::msg::GripperGrasp & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: width
  cdr << ros_message.width;
  // Member: speed
  cdr << ros_message.speed;
  // Member: force
  cdr << ros_message.force;
  // Member: epsilon_inner
  cdr << ros_message.epsilon_inner;
  // Member: epsilon_outer
  cdr << ros_message.epsilon_outer;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franky_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franky_msgs::msg::GripperGrasp & ros_message)
{
  // Member: width
  cdr >> ros_message.width;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: force
  cdr >> ros_message.force;

  // Member: epsilon_inner
  cdr >> ros_message.epsilon_inner;

  // Member: epsilon_outer
  cdr >> ros_message.epsilon_outer;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franky_msgs
get_serialized_size(
  const franky_msgs::msg::GripperGrasp & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force
  {
    size_t item_size = sizeof(ros_message.force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epsilon_inner
  {
    size_t item_size = sizeof(ros_message.epsilon_inner);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epsilon_outer
  {
    size_t item_size = sizeof(ros_message.epsilon_outer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franky_msgs
max_serialized_size_GripperGrasp(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: force
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: epsilon_inner
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: epsilon_outer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franky_msgs::msg::GripperGrasp;
    is_plain =
      (
      offsetof(DataType, epsilon_outer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GripperGrasp__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franky_msgs::msg::GripperGrasp *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GripperGrasp__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franky_msgs::msg::GripperGrasp *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GripperGrasp__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franky_msgs::msg::GripperGrasp *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GripperGrasp__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GripperGrasp(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GripperGrasp__callbacks = {
  "franky_msgs::msg",
  "GripperGrasp",
  _GripperGrasp__cdr_serialize,
  _GripperGrasp__cdr_deserialize,
  _GripperGrasp__get_serialized_size,
  _GripperGrasp__max_serialized_size
};

static rosidl_message_type_support_t _GripperGrasp__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GripperGrasp__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace franky_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franky_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franky_msgs::msg::GripperGrasp>()
{
  return &franky_msgs::msg::typesupport_fastrtps_cpp::_GripperGrasp__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franky_msgs, msg, GripperGrasp)() {
  return &franky_msgs::msg::typesupport_fastrtps_cpp::_GripperGrasp__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__TRAITS_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franky_msgs/msg/detail/joint_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franky_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointMove & msg,
  std::ostream & out)
{
  out << "{";
  // member: relative
  {
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << "\n";
  }

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointMove & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace franky_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franky_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franky_msgs::msg::JointMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::msg::JointMove & msg)
{
  return franky_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::msg::JointMove>()
{
  return "franky_msgs::msg::JointMove";
}

template<>
inline const char * name<franky_msgs::msg::JointMove>()
{
  return "franky_msgs/msg/JointMove";
}

template<>
struct has_fixed_size<franky_msgs::msg::JointMove>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franky_msgs::msg::JointMove>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franky_msgs::msg::JointMove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__TRAITS_HPP_

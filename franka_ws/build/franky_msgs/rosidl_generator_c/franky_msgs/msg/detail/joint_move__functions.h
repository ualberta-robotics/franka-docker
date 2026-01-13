// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__FUNCTIONS_H_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "franky_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "franky_msgs/msg/detail/joint_move__struct.h"

/// Initialize msg/JointMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franky_msgs__msg__JointMove
 * )) before or use
 * franky_msgs__msg__JointMove__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__init(franky_msgs__msg__JointMove * msg);

/// Finalize msg/JointMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
void
franky_msgs__msg__JointMove__fini(franky_msgs__msg__JointMove * msg);

/// Create msg/JointMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franky_msgs__msg__JointMove__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
franky_msgs__msg__JointMove *
franky_msgs__msg__JointMove__create();

/// Destroy msg/JointMove message.
/**
 * It calls
 * franky_msgs__msg__JointMove__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
void
franky_msgs__msg__JointMove__destroy(franky_msgs__msg__JointMove * msg);

/// Check for msg/JointMove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__are_equal(const franky_msgs__msg__JointMove * lhs, const franky_msgs__msg__JointMove * rhs);

/// Copy a msg/JointMove message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__copy(
  const franky_msgs__msg__JointMove * input,
  franky_msgs__msg__JointMove * output);

/// Initialize array of msg/JointMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * franky_msgs__msg__JointMove__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__Sequence__init(franky_msgs__msg__JointMove__Sequence * array, size_t size);

/// Finalize array of msg/JointMove messages.
/**
 * It calls
 * franky_msgs__msg__JointMove__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
void
franky_msgs__msg__JointMove__Sequence__fini(franky_msgs__msg__JointMove__Sequence * array);

/// Create array of msg/JointMove messages.
/**
 * It allocates the memory for the array and calls
 * franky_msgs__msg__JointMove__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
franky_msgs__msg__JointMove__Sequence *
franky_msgs__msg__JointMove__Sequence__create(size_t size);

/// Destroy array of msg/JointMove messages.
/**
 * It calls
 * franky_msgs__msg__JointMove__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
void
franky_msgs__msg__JointMove__Sequence__destroy(franky_msgs__msg__JointMove__Sequence * array);

/// Check for msg/JointMove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__Sequence__are_equal(const franky_msgs__msg__JointMove__Sequence * lhs, const franky_msgs__msg__JointMove__Sequence * rhs);

/// Copy an array of msg/JointMove messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franky_msgs
bool
franky_msgs__msg__JointMove__Sequence__copy(
  const franky_msgs__msg__JointMove__Sequence * input,
  franky_msgs__msg__JointMove__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__FUNCTIONS_H_

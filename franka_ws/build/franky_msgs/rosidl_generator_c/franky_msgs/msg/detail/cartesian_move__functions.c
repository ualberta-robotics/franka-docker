// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franky_msgs:msg/CartesianMove.idl
// generated code does not contain a copyright notice
#include "franky_msgs/msg/detail/cartesian_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
franky_msgs__msg__CartesianMove__init(franky_msgs__msg__CartesianMove * msg)
{
  if (!msg) {
    return false;
  }
  // relative
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    franky_msgs__msg__CartesianMove__fini(msg);
    return false;
  }
  return true;
}

void
franky_msgs__msg__CartesianMove__fini(franky_msgs__msg__CartesianMove * msg)
{
  if (!msg) {
    return;
  }
  // relative
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
franky_msgs__msg__CartesianMove__are_equal(const franky_msgs__msg__CartesianMove * lhs, const franky_msgs__msg__CartesianMove * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // relative
  if (lhs->relative != rhs->relative) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
franky_msgs__msg__CartesianMove__copy(
  const franky_msgs__msg__CartesianMove * input,
  franky_msgs__msg__CartesianMove * output)
{
  if (!input || !output) {
    return false;
  }
  // relative
  output->relative = input->relative;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

franky_msgs__msg__CartesianMove *
franky_msgs__msg__CartesianMove__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__CartesianMove * msg = (franky_msgs__msg__CartesianMove *)allocator.allocate(sizeof(franky_msgs__msg__CartesianMove), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franky_msgs__msg__CartesianMove));
  bool success = franky_msgs__msg__CartesianMove__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franky_msgs__msg__CartesianMove__destroy(franky_msgs__msg__CartesianMove * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franky_msgs__msg__CartesianMove__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franky_msgs__msg__CartesianMove__Sequence__init(franky_msgs__msg__CartesianMove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__CartesianMove * data = NULL;

  if (size) {
    data = (franky_msgs__msg__CartesianMove *)allocator.zero_allocate(size, sizeof(franky_msgs__msg__CartesianMove), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franky_msgs__msg__CartesianMove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franky_msgs__msg__CartesianMove__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
franky_msgs__msg__CartesianMove__Sequence__fini(franky_msgs__msg__CartesianMove__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      franky_msgs__msg__CartesianMove__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

franky_msgs__msg__CartesianMove__Sequence *
franky_msgs__msg__CartesianMove__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__CartesianMove__Sequence * array = (franky_msgs__msg__CartesianMove__Sequence *)allocator.allocate(sizeof(franky_msgs__msg__CartesianMove__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franky_msgs__msg__CartesianMove__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franky_msgs__msg__CartesianMove__Sequence__destroy(franky_msgs__msg__CartesianMove__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franky_msgs__msg__CartesianMove__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franky_msgs__msg__CartesianMove__Sequence__are_equal(const franky_msgs__msg__CartesianMove__Sequence * lhs, const franky_msgs__msg__CartesianMove__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franky_msgs__msg__CartesianMove__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franky_msgs__msg__CartesianMove__Sequence__copy(
  const franky_msgs__msg__CartesianMove__Sequence * input,
  franky_msgs__msg__CartesianMove__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franky_msgs__msg__CartesianMove);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franky_msgs__msg__CartesianMove * data =
      (franky_msgs__msg__CartesianMove *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franky_msgs__msg__CartesianMove__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franky_msgs__msg__CartesianMove__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franky_msgs__msg__CartesianMove__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

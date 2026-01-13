// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice
#include "franky_msgs/msg/detail/gripper_grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
franky_msgs__msg__GripperGrasp__init(franky_msgs__msg__GripperGrasp * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // speed
  // force
  // epsilon_inner
  // epsilon_outer
  return true;
}

void
franky_msgs__msg__GripperGrasp__fini(franky_msgs__msg__GripperGrasp * msg)
{
  if (!msg) {
    return;
  }
  // width
  // speed
  // force
  // epsilon_inner
  // epsilon_outer
}

bool
franky_msgs__msg__GripperGrasp__are_equal(const franky_msgs__msg__GripperGrasp * lhs, const franky_msgs__msg__GripperGrasp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // epsilon_inner
  if (lhs->epsilon_inner != rhs->epsilon_inner) {
    return false;
  }
  // epsilon_outer
  if (lhs->epsilon_outer != rhs->epsilon_outer) {
    return false;
  }
  return true;
}

bool
franky_msgs__msg__GripperGrasp__copy(
  const franky_msgs__msg__GripperGrasp * input,
  franky_msgs__msg__GripperGrasp * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // speed
  output->speed = input->speed;
  // force
  output->force = input->force;
  // epsilon_inner
  output->epsilon_inner = input->epsilon_inner;
  // epsilon_outer
  output->epsilon_outer = input->epsilon_outer;
  return true;
}

franky_msgs__msg__GripperGrasp *
franky_msgs__msg__GripperGrasp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__GripperGrasp * msg = (franky_msgs__msg__GripperGrasp *)allocator.allocate(sizeof(franky_msgs__msg__GripperGrasp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franky_msgs__msg__GripperGrasp));
  bool success = franky_msgs__msg__GripperGrasp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franky_msgs__msg__GripperGrasp__destroy(franky_msgs__msg__GripperGrasp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franky_msgs__msg__GripperGrasp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franky_msgs__msg__GripperGrasp__Sequence__init(franky_msgs__msg__GripperGrasp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__GripperGrasp * data = NULL;

  if (size) {
    data = (franky_msgs__msg__GripperGrasp *)allocator.zero_allocate(size, sizeof(franky_msgs__msg__GripperGrasp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franky_msgs__msg__GripperGrasp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franky_msgs__msg__GripperGrasp__fini(&data[i - 1]);
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
franky_msgs__msg__GripperGrasp__Sequence__fini(franky_msgs__msg__GripperGrasp__Sequence * array)
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
      franky_msgs__msg__GripperGrasp__fini(&array->data[i]);
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

franky_msgs__msg__GripperGrasp__Sequence *
franky_msgs__msg__GripperGrasp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__msg__GripperGrasp__Sequence * array = (franky_msgs__msg__GripperGrasp__Sequence *)allocator.allocate(sizeof(franky_msgs__msg__GripperGrasp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franky_msgs__msg__GripperGrasp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franky_msgs__msg__GripperGrasp__Sequence__destroy(franky_msgs__msg__GripperGrasp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franky_msgs__msg__GripperGrasp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franky_msgs__msg__GripperGrasp__Sequence__are_equal(const franky_msgs__msg__GripperGrasp__Sequence * lhs, const franky_msgs__msg__GripperGrasp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franky_msgs__msg__GripperGrasp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franky_msgs__msg__GripperGrasp__Sequence__copy(
  const franky_msgs__msg__GripperGrasp__Sequence * input,
  franky_msgs__msg__GripperGrasp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franky_msgs__msg__GripperGrasp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franky_msgs__msg__GripperGrasp * data =
      (franky_msgs__msg__GripperGrasp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franky_msgs__msg__GripperGrasp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franky_msgs__msg__GripperGrasp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franky_msgs__msg__GripperGrasp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

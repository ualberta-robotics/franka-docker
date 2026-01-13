// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice
#include "franky_msgs/srv/detail/set_dynamics_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
franky_msgs__srv__SetDynamicsFactor_Request__init(franky_msgs__srv__SetDynamicsFactor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // velocity_limit
  // acceleration_limit
  // jerk_limit
  return true;
}

void
franky_msgs__srv__SetDynamicsFactor_Request__fini(franky_msgs__srv__SetDynamicsFactor_Request * msg)
{
  if (!msg) {
    return;
  }
  // velocity_limit
  // acceleration_limit
  // jerk_limit
}

bool
franky_msgs__srv__SetDynamicsFactor_Request__are_equal(const franky_msgs__srv__SetDynamicsFactor_Request * lhs, const franky_msgs__srv__SetDynamicsFactor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity_limit
  if (lhs->velocity_limit != rhs->velocity_limit) {
    return false;
  }
  // acceleration_limit
  if (lhs->acceleration_limit != rhs->acceleration_limit) {
    return false;
  }
  // jerk_limit
  if (lhs->jerk_limit != rhs->jerk_limit) {
    return false;
  }
  return true;
}

bool
franky_msgs__srv__SetDynamicsFactor_Request__copy(
  const franky_msgs__srv__SetDynamicsFactor_Request * input,
  franky_msgs__srv__SetDynamicsFactor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity_limit
  output->velocity_limit = input->velocity_limit;
  // acceleration_limit
  output->acceleration_limit = input->acceleration_limit;
  // jerk_limit
  output->jerk_limit = input->jerk_limit;
  return true;
}

franky_msgs__srv__SetDynamicsFactor_Request *
franky_msgs__srv__SetDynamicsFactor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Request * msg = (franky_msgs__srv__SetDynamicsFactor_Request *)allocator.allocate(sizeof(franky_msgs__srv__SetDynamicsFactor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franky_msgs__srv__SetDynamicsFactor_Request));
  bool success = franky_msgs__srv__SetDynamicsFactor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franky_msgs__srv__SetDynamicsFactor_Request__destroy(franky_msgs__srv__SetDynamicsFactor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franky_msgs__srv__SetDynamicsFactor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__init(franky_msgs__srv__SetDynamicsFactor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Request * data = NULL;

  if (size) {
    data = (franky_msgs__srv__SetDynamicsFactor_Request *)allocator.zero_allocate(size, sizeof(franky_msgs__srv__SetDynamicsFactor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franky_msgs__srv__SetDynamicsFactor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franky_msgs__srv__SetDynamicsFactor_Request__fini(&data[i - 1]);
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
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__fini(franky_msgs__srv__SetDynamicsFactor_Request__Sequence * array)
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
      franky_msgs__srv__SetDynamicsFactor_Request__fini(&array->data[i]);
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

franky_msgs__srv__SetDynamicsFactor_Request__Sequence *
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Request__Sequence * array = (franky_msgs__srv__SetDynamicsFactor_Request__Sequence *)allocator.allocate(sizeof(franky_msgs__srv__SetDynamicsFactor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franky_msgs__srv__SetDynamicsFactor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__destroy(franky_msgs__srv__SetDynamicsFactor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franky_msgs__srv__SetDynamicsFactor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__are_equal(const franky_msgs__srv__SetDynamicsFactor_Request__Sequence * lhs, const franky_msgs__srv__SetDynamicsFactor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franky_msgs__srv__SetDynamicsFactor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franky_msgs__srv__SetDynamicsFactor_Request__Sequence__copy(
  const franky_msgs__srv__SetDynamicsFactor_Request__Sequence * input,
  franky_msgs__srv__SetDynamicsFactor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franky_msgs__srv__SetDynamicsFactor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franky_msgs__srv__SetDynamicsFactor_Request * data =
      (franky_msgs__srv__SetDynamicsFactor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franky_msgs__srv__SetDynamicsFactor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franky_msgs__srv__SetDynamicsFactor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franky_msgs__srv__SetDynamicsFactor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
franky_msgs__srv__SetDynamicsFactor_Response__init(franky_msgs__srv__SetDynamicsFactor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
franky_msgs__srv__SetDynamicsFactor_Response__fini(franky_msgs__srv__SetDynamicsFactor_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
franky_msgs__srv__SetDynamicsFactor_Response__are_equal(const franky_msgs__srv__SetDynamicsFactor_Response * lhs, const franky_msgs__srv__SetDynamicsFactor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
franky_msgs__srv__SetDynamicsFactor_Response__copy(
  const franky_msgs__srv__SetDynamicsFactor_Response * input,
  franky_msgs__srv__SetDynamicsFactor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

franky_msgs__srv__SetDynamicsFactor_Response *
franky_msgs__srv__SetDynamicsFactor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Response * msg = (franky_msgs__srv__SetDynamicsFactor_Response *)allocator.allocate(sizeof(franky_msgs__srv__SetDynamicsFactor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franky_msgs__srv__SetDynamicsFactor_Response));
  bool success = franky_msgs__srv__SetDynamicsFactor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franky_msgs__srv__SetDynamicsFactor_Response__destroy(franky_msgs__srv__SetDynamicsFactor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franky_msgs__srv__SetDynamicsFactor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__init(franky_msgs__srv__SetDynamicsFactor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Response * data = NULL;

  if (size) {
    data = (franky_msgs__srv__SetDynamicsFactor_Response *)allocator.zero_allocate(size, sizeof(franky_msgs__srv__SetDynamicsFactor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franky_msgs__srv__SetDynamicsFactor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franky_msgs__srv__SetDynamicsFactor_Response__fini(&data[i - 1]);
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
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__fini(franky_msgs__srv__SetDynamicsFactor_Response__Sequence * array)
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
      franky_msgs__srv__SetDynamicsFactor_Response__fini(&array->data[i]);
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

franky_msgs__srv__SetDynamicsFactor_Response__Sequence *
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franky_msgs__srv__SetDynamicsFactor_Response__Sequence * array = (franky_msgs__srv__SetDynamicsFactor_Response__Sequence *)allocator.allocate(sizeof(franky_msgs__srv__SetDynamicsFactor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franky_msgs__srv__SetDynamicsFactor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__destroy(franky_msgs__srv__SetDynamicsFactor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franky_msgs__srv__SetDynamicsFactor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__are_equal(const franky_msgs__srv__SetDynamicsFactor_Response__Sequence * lhs, const franky_msgs__srv__SetDynamicsFactor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franky_msgs__srv__SetDynamicsFactor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franky_msgs__srv__SetDynamicsFactor_Response__Sequence__copy(
  const franky_msgs__srv__SetDynamicsFactor_Response__Sequence * input,
  franky_msgs__srv__SetDynamicsFactor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franky_msgs__srv__SetDynamicsFactor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franky_msgs__srv__SetDynamicsFactor_Response * data =
      (franky_msgs__srv__SetDynamicsFactor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franky_msgs__srv__SetDynamicsFactor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franky_msgs__srv__SetDynamicsFactor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franky_msgs__srv__SetDynamicsFactor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

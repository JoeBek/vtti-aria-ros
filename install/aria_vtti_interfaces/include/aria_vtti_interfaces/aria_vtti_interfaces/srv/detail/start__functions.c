// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice
#include "aria_vtti_interfaces/srv/detail/start__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
aria_vtti_interfaces__srv__Start_Request__init(aria_vtti_interfaces__srv__Start_Request * msg)
{
  if (!msg) {
    return false;
  }
  // optval
  return true;
}

void
aria_vtti_interfaces__srv__Start_Request__fini(aria_vtti_interfaces__srv__Start_Request * msg)
{
  if (!msg) {
    return;
  }
  // optval
}

bool
aria_vtti_interfaces__srv__Start_Request__are_equal(const aria_vtti_interfaces__srv__Start_Request * lhs, const aria_vtti_interfaces__srv__Start_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // optval
  if (lhs->optval != rhs->optval) {
    return false;
  }
  return true;
}

bool
aria_vtti_interfaces__srv__Start_Request__copy(
  const aria_vtti_interfaces__srv__Start_Request * input,
  aria_vtti_interfaces__srv__Start_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // optval
  output->optval = input->optval;
  return true;
}

aria_vtti_interfaces__srv__Start_Request *
aria_vtti_interfaces__srv__Start_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Request * msg = (aria_vtti_interfaces__srv__Start_Request *)allocator.allocate(sizeof(aria_vtti_interfaces__srv__Start_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aria_vtti_interfaces__srv__Start_Request));
  bool success = aria_vtti_interfaces__srv__Start_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aria_vtti_interfaces__srv__Start_Request__destroy(aria_vtti_interfaces__srv__Start_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aria_vtti_interfaces__srv__Start_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aria_vtti_interfaces__srv__Start_Request__Sequence__init(aria_vtti_interfaces__srv__Start_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Request * data = NULL;

  if (size) {
    data = (aria_vtti_interfaces__srv__Start_Request *)allocator.zero_allocate(size, sizeof(aria_vtti_interfaces__srv__Start_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aria_vtti_interfaces__srv__Start_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aria_vtti_interfaces__srv__Start_Request__fini(&data[i - 1]);
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
aria_vtti_interfaces__srv__Start_Request__Sequence__fini(aria_vtti_interfaces__srv__Start_Request__Sequence * array)
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
      aria_vtti_interfaces__srv__Start_Request__fini(&array->data[i]);
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

aria_vtti_interfaces__srv__Start_Request__Sequence *
aria_vtti_interfaces__srv__Start_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Request__Sequence * array = (aria_vtti_interfaces__srv__Start_Request__Sequence *)allocator.allocate(sizeof(aria_vtti_interfaces__srv__Start_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aria_vtti_interfaces__srv__Start_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aria_vtti_interfaces__srv__Start_Request__Sequence__destroy(aria_vtti_interfaces__srv__Start_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aria_vtti_interfaces__srv__Start_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aria_vtti_interfaces__srv__Start_Request__Sequence__are_equal(const aria_vtti_interfaces__srv__Start_Request__Sequence * lhs, const aria_vtti_interfaces__srv__Start_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aria_vtti_interfaces__srv__Start_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aria_vtti_interfaces__srv__Start_Request__Sequence__copy(
  const aria_vtti_interfaces__srv__Start_Request__Sequence * input,
  aria_vtti_interfaces__srv__Start_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aria_vtti_interfaces__srv__Start_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aria_vtti_interfaces__srv__Start_Request * data =
      (aria_vtti_interfaces__srv__Start_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aria_vtti_interfaces__srv__Start_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aria_vtti_interfaces__srv__Start_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aria_vtti_interfaces__srv__Start_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
aria_vtti_interfaces__srv__Start_Response__init(aria_vtti_interfaces__srv__Start_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
aria_vtti_interfaces__srv__Start_Response__fini(aria_vtti_interfaces__srv__Start_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
aria_vtti_interfaces__srv__Start_Response__are_equal(const aria_vtti_interfaces__srv__Start_Response * lhs, const aria_vtti_interfaces__srv__Start_Response * rhs)
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
aria_vtti_interfaces__srv__Start_Response__copy(
  const aria_vtti_interfaces__srv__Start_Response * input,
  aria_vtti_interfaces__srv__Start_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

aria_vtti_interfaces__srv__Start_Response *
aria_vtti_interfaces__srv__Start_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Response * msg = (aria_vtti_interfaces__srv__Start_Response *)allocator.allocate(sizeof(aria_vtti_interfaces__srv__Start_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aria_vtti_interfaces__srv__Start_Response));
  bool success = aria_vtti_interfaces__srv__Start_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aria_vtti_interfaces__srv__Start_Response__destroy(aria_vtti_interfaces__srv__Start_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aria_vtti_interfaces__srv__Start_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aria_vtti_interfaces__srv__Start_Response__Sequence__init(aria_vtti_interfaces__srv__Start_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Response * data = NULL;

  if (size) {
    data = (aria_vtti_interfaces__srv__Start_Response *)allocator.zero_allocate(size, sizeof(aria_vtti_interfaces__srv__Start_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aria_vtti_interfaces__srv__Start_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aria_vtti_interfaces__srv__Start_Response__fini(&data[i - 1]);
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
aria_vtti_interfaces__srv__Start_Response__Sequence__fini(aria_vtti_interfaces__srv__Start_Response__Sequence * array)
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
      aria_vtti_interfaces__srv__Start_Response__fini(&array->data[i]);
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

aria_vtti_interfaces__srv__Start_Response__Sequence *
aria_vtti_interfaces__srv__Start_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aria_vtti_interfaces__srv__Start_Response__Sequence * array = (aria_vtti_interfaces__srv__Start_Response__Sequence *)allocator.allocate(sizeof(aria_vtti_interfaces__srv__Start_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aria_vtti_interfaces__srv__Start_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aria_vtti_interfaces__srv__Start_Response__Sequence__destroy(aria_vtti_interfaces__srv__Start_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aria_vtti_interfaces__srv__Start_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aria_vtti_interfaces__srv__Start_Response__Sequence__are_equal(const aria_vtti_interfaces__srv__Start_Response__Sequence * lhs, const aria_vtti_interfaces__srv__Start_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aria_vtti_interfaces__srv__Start_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aria_vtti_interfaces__srv__Start_Response__Sequence__copy(
  const aria_vtti_interfaces__srv__Start_Response__Sequence * input,
  aria_vtti_interfaces__srv__Start_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aria_vtti_interfaces__srv__Start_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aria_vtti_interfaces__srv__Start_Response * data =
      (aria_vtti_interfaces__srv__Start_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aria_vtti_interfaces__srv__Start_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aria_vtti_interfaces__srv__Start_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aria_vtti_interfaces__srv__Start_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

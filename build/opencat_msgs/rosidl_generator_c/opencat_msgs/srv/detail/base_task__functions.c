// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice
#include "opencat_msgs/srv/detail/base_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `arguments`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
opencat_msgs__srv__BaseTask_Request__init(opencat_msgs__srv__BaseTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  // arguments
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->arguments, 0)) {
    opencat_msgs__srv__BaseTask_Request__fini(msg);
    return false;
  }
  // delay
  return true;
}

void
opencat_msgs__srv__BaseTask_Request__fini(opencat_msgs__srv__BaseTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  // arguments
  rosidl_runtime_c__int16__Sequence__fini(&msg->arguments);
  // delay
}

bool
opencat_msgs__srv__BaseTask_Request__are_equal(const opencat_msgs__srv__BaseTask_Request * lhs, const opencat_msgs__srv__BaseTask_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (lhs->cmd != rhs->cmd) {
    return false;
  }
  // arguments
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->arguments), &(rhs->arguments)))
  {
    return false;
  }
  // delay
  if (lhs->delay != rhs->delay) {
    return false;
  }
  return true;
}

bool
opencat_msgs__srv__BaseTask_Request__copy(
  const opencat_msgs__srv__BaseTask_Request * input,
  opencat_msgs__srv__BaseTask_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  output->cmd = input->cmd;
  // arguments
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->arguments), &(output->arguments)))
  {
    return false;
  }
  // delay
  output->delay = input->delay;
  return true;
}

opencat_msgs__srv__BaseTask_Request *
opencat_msgs__srv__BaseTask_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Request * msg = (opencat_msgs__srv__BaseTask_Request *)allocator.allocate(sizeof(opencat_msgs__srv__BaseTask_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencat_msgs__srv__BaseTask_Request));
  bool success = opencat_msgs__srv__BaseTask_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencat_msgs__srv__BaseTask_Request__destroy(opencat_msgs__srv__BaseTask_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencat_msgs__srv__BaseTask_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencat_msgs__srv__BaseTask_Request__Sequence__init(opencat_msgs__srv__BaseTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Request * data = NULL;

  if (size) {
    data = (opencat_msgs__srv__BaseTask_Request *)allocator.zero_allocate(size, sizeof(opencat_msgs__srv__BaseTask_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencat_msgs__srv__BaseTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencat_msgs__srv__BaseTask_Request__fini(&data[i - 1]);
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
opencat_msgs__srv__BaseTask_Request__Sequence__fini(opencat_msgs__srv__BaseTask_Request__Sequence * array)
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
      opencat_msgs__srv__BaseTask_Request__fini(&array->data[i]);
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

opencat_msgs__srv__BaseTask_Request__Sequence *
opencat_msgs__srv__BaseTask_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Request__Sequence * array = (opencat_msgs__srv__BaseTask_Request__Sequence *)allocator.allocate(sizeof(opencat_msgs__srv__BaseTask_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencat_msgs__srv__BaseTask_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencat_msgs__srv__BaseTask_Request__Sequence__destroy(opencat_msgs__srv__BaseTask_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencat_msgs__srv__BaseTask_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencat_msgs__srv__BaseTask_Request__Sequence__are_equal(const opencat_msgs__srv__BaseTask_Request__Sequence * lhs, const opencat_msgs__srv__BaseTask_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencat_msgs__srv__BaseTask_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencat_msgs__srv__BaseTask_Request__Sequence__copy(
  const opencat_msgs__srv__BaseTask_Request__Sequence * input,
  opencat_msgs__srv__BaseTask_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencat_msgs__srv__BaseTask_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencat_msgs__srv__BaseTask_Request * data =
      (opencat_msgs__srv__BaseTask_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencat_msgs__srv__BaseTask_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencat_msgs__srv__BaseTask_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencat_msgs__srv__BaseTask_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
opencat_msgs__srv__BaseTask_Response__init(opencat_msgs__srv__BaseTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
opencat_msgs__srv__BaseTask_Response__fini(opencat_msgs__srv__BaseTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
opencat_msgs__srv__BaseTask_Response__are_equal(const opencat_msgs__srv__BaseTask_Response * lhs, const opencat_msgs__srv__BaseTask_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
opencat_msgs__srv__BaseTask_Response__copy(
  const opencat_msgs__srv__BaseTask_Response * input,
  opencat_msgs__srv__BaseTask_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

opencat_msgs__srv__BaseTask_Response *
opencat_msgs__srv__BaseTask_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Response * msg = (opencat_msgs__srv__BaseTask_Response *)allocator.allocate(sizeof(opencat_msgs__srv__BaseTask_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencat_msgs__srv__BaseTask_Response));
  bool success = opencat_msgs__srv__BaseTask_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencat_msgs__srv__BaseTask_Response__destroy(opencat_msgs__srv__BaseTask_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencat_msgs__srv__BaseTask_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencat_msgs__srv__BaseTask_Response__Sequence__init(opencat_msgs__srv__BaseTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Response * data = NULL;

  if (size) {
    data = (opencat_msgs__srv__BaseTask_Response *)allocator.zero_allocate(size, sizeof(opencat_msgs__srv__BaseTask_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencat_msgs__srv__BaseTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencat_msgs__srv__BaseTask_Response__fini(&data[i - 1]);
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
opencat_msgs__srv__BaseTask_Response__Sequence__fini(opencat_msgs__srv__BaseTask_Response__Sequence * array)
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
      opencat_msgs__srv__BaseTask_Response__fini(&array->data[i]);
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

opencat_msgs__srv__BaseTask_Response__Sequence *
opencat_msgs__srv__BaseTask_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencat_msgs__srv__BaseTask_Response__Sequence * array = (opencat_msgs__srv__BaseTask_Response__Sequence *)allocator.allocate(sizeof(opencat_msgs__srv__BaseTask_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencat_msgs__srv__BaseTask_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencat_msgs__srv__BaseTask_Response__Sequence__destroy(opencat_msgs__srv__BaseTask_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencat_msgs__srv__BaseTask_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencat_msgs__srv__BaseTask_Response__Sequence__are_equal(const opencat_msgs__srv__BaseTask_Response__Sequence * lhs, const opencat_msgs__srv__BaseTask_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencat_msgs__srv__BaseTask_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencat_msgs__srv__BaseTask_Response__Sequence__copy(
  const opencat_msgs__srv__BaseTask_Response__Sequence * input,
  opencat_msgs__srv__BaseTask_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencat_msgs__srv__BaseTask_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencat_msgs__srv__BaseTask_Response * data =
      (opencat_msgs__srv__BaseTask_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencat_msgs__srv__BaseTask_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencat_msgs__srv__BaseTask_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencat_msgs__srv__BaseTask_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

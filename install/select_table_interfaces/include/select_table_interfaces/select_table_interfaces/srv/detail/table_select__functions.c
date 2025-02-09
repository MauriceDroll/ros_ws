// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from select_table_interfaces:srv/TableSelect.idl
// generated code does not contain a copyright notice
#include "select_table_interfaces/srv/detail/table_select__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
select_table_interfaces__srv__TableSelect_Request__init(select_table_interfaces__srv__TableSelect_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  return true;
}

void
select_table_interfaces__srv__TableSelect_Request__fini(select_table_interfaces__srv__TableSelect_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
}

bool
select_table_interfaces__srv__TableSelect_Request__are_equal(const select_table_interfaces__srv__TableSelect_Request * lhs, const select_table_interfaces__srv__TableSelect_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (lhs->request != rhs->request) {
    return false;
  }
  return true;
}

bool
select_table_interfaces__srv__TableSelect_Request__copy(
  const select_table_interfaces__srv__TableSelect_Request * input,
  select_table_interfaces__srv__TableSelect_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  output->request = input->request;
  return true;
}

select_table_interfaces__srv__TableSelect_Request *
select_table_interfaces__srv__TableSelect_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Request * msg = (select_table_interfaces__srv__TableSelect_Request *)allocator.allocate(sizeof(select_table_interfaces__srv__TableSelect_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(select_table_interfaces__srv__TableSelect_Request));
  bool success = select_table_interfaces__srv__TableSelect_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
select_table_interfaces__srv__TableSelect_Request__destroy(select_table_interfaces__srv__TableSelect_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    select_table_interfaces__srv__TableSelect_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
select_table_interfaces__srv__TableSelect_Request__Sequence__init(select_table_interfaces__srv__TableSelect_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Request * data = NULL;

  if (size) {
    data = (select_table_interfaces__srv__TableSelect_Request *)allocator.zero_allocate(size, sizeof(select_table_interfaces__srv__TableSelect_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = select_table_interfaces__srv__TableSelect_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        select_table_interfaces__srv__TableSelect_Request__fini(&data[i - 1]);
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
select_table_interfaces__srv__TableSelect_Request__Sequence__fini(select_table_interfaces__srv__TableSelect_Request__Sequence * array)
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
      select_table_interfaces__srv__TableSelect_Request__fini(&array->data[i]);
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

select_table_interfaces__srv__TableSelect_Request__Sequence *
select_table_interfaces__srv__TableSelect_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Request__Sequence * array = (select_table_interfaces__srv__TableSelect_Request__Sequence *)allocator.allocate(sizeof(select_table_interfaces__srv__TableSelect_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = select_table_interfaces__srv__TableSelect_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
select_table_interfaces__srv__TableSelect_Request__Sequence__destroy(select_table_interfaces__srv__TableSelect_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    select_table_interfaces__srv__TableSelect_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
select_table_interfaces__srv__TableSelect_Request__Sequence__are_equal(const select_table_interfaces__srv__TableSelect_Request__Sequence * lhs, const select_table_interfaces__srv__TableSelect_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!select_table_interfaces__srv__TableSelect_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
select_table_interfaces__srv__TableSelect_Request__Sequence__copy(
  const select_table_interfaces__srv__TableSelect_Request__Sequence * input,
  select_table_interfaces__srv__TableSelect_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(select_table_interfaces__srv__TableSelect_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    select_table_interfaces__srv__TableSelect_Request * data =
      (select_table_interfaces__srv__TableSelect_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!select_table_interfaces__srv__TableSelect_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          select_table_interfaces__srv__TableSelect_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!select_table_interfaces__srv__TableSelect_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
select_table_interfaces__srv__TableSelect_Response__init(select_table_interfaces__srv__TableSelect_Response * msg)
{
  if (!msg) {
    return false;
  }
  // table_id
  return true;
}

void
select_table_interfaces__srv__TableSelect_Response__fini(select_table_interfaces__srv__TableSelect_Response * msg)
{
  if (!msg) {
    return;
  }
  // table_id
}

bool
select_table_interfaces__srv__TableSelect_Response__are_equal(const select_table_interfaces__srv__TableSelect_Response * lhs, const select_table_interfaces__srv__TableSelect_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_id
  if (lhs->table_id != rhs->table_id) {
    return false;
  }
  return true;
}

bool
select_table_interfaces__srv__TableSelect_Response__copy(
  const select_table_interfaces__srv__TableSelect_Response * input,
  select_table_interfaces__srv__TableSelect_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // table_id
  output->table_id = input->table_id;
  return true;
}

select_table_interfaces__srv__TableSelect_Response *
select_table_interfaces__srv__TableSelect_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Response * msg = (select_table_interfaces__srv__TableSelect_Response *)allocator.allocate(sizeof(select_table_interfaces__srv__TableSelect_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(select_table_interfaces__srv__TableSelect_Response));
  bool success = select_table_interfaces__srv__TableSelect_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
select_table_interfaces__srv__TableSelect_Response__destroy(select_table_interfaces__srv__TableSelect_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    select_table_interfaces__srv__TableSelect_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
select_table_interfaces__srv__TableSelect_Response__Sequence__init(select_table_interfaces__srv__TableSelect_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Response * data = NULL;

  if (size) {
    data = (select_table_interfaces__srv__TableSelect_Response *)allocator.zero_allocate(size, sizeof(select_table_interfaces__srv__TableSelect_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = select_table_interfaces__srv__TableSelect_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        select_table_interfaces__srv__TableSelect_Response__fini(&data[i - 1]);
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
select_table_interfaces__srv__TableSelect_Response__Sequence__fini(select_table_interfaces__srv__TableSelect_Response__Sequence * array)
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
      select_table_interfaces__srv__TableSelect_Response__fini(&array->data[i]);
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

select_table_interfaces__srv__TableSelect_Response__Sequence *
select_table_interfaces__srv__TableSelect_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  select_table_interfaces__srv__TableSelect_Response__Sequence * array = (select_table_interfaces__srv__TableSelect_Response__Sequence *)allocator.allocate(sizeof(select_table_interfaces__srv__TableSelect_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = select_table_interfaces__srv__TableSelect_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
select_table_interfaces__srv__TableSelect_Response__Sequence__destroy(select_table_interfaces__srv__TableSelect_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    select_table_interfaces__srv__TableSelect_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
select_table_interfaces__srv__TableSelect_Response__Sequence__are_equal(const select_table_interfaces__srv__TableSelect_Response__Sequence * lhs, const select_table_interfaces__srv__TableSelect_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!select_table_interfaces__srv__TableSelect_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
select_table_interfaces__srv__TableSelect_Response__Sequence__copy(
  const select_table_interfaces__srv__TableSelect_Response__Sequence * input,
  select_table_interfaces__srv__TableSelect_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(select_table_interfaces__srv__TableSelect_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    select_table_interfaces__srv__TableSelect_Response * data =
      (select_table_interfaces__srv__TableSelect_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!select_table_interfaces__srv__TableSelect_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          select_table_interfaces__srv__TableSelect_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!select_table_interfaces__srv__TableSelect_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

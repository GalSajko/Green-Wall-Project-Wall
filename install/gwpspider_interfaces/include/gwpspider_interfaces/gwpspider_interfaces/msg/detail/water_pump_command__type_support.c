// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gwpspider_interfaces:msg/WaterPumpCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gwpspider_interfaces/msg/detail/water_pump_command__rosidl_typesupport_introspection_c.h"
#include "gwpspider_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gwpspider_interfaces/msg/detail/water_pump_command__functions.h"
#include "gwpspider_interfaces/msg/detail/water_pump_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gwpspider_interfaces__msg__WaterPumpCommand__init(message_memory);
}

void gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_fini_function(void * message_memory)
{
  gwpspider_interfaces__msg__WaterPumpCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_member_array[2] = {
  {
    "pump",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__WaterPumpCommand, pump),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gwpspider_interfaces__msg__WaterPumpCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_members = {
  "gwpspider_interfaces__msg",  // message namespace
  "WaterPumpCommand",  // message name
  2,  // number of fields
  sizeof(gwpspider_interfaces__msg__WaterPumpCommand),
  gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_member_array,  // message members
  gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_type_support_handle = {
  0,
  &gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gwpspider_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, msg, WaterPumpCommand)() {
  if (!gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_type_support_handle.typesupport_identifier) {
    gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gwpspider_interfaces__msg__WaterPumpCommand__rosidl_typesupport_introspection_c__WaterPumpCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__struct.h"
#include "gwpspider_interfaces/msg/detail/grippers_states__functions.h"

bool gwpspider_interfaces__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gwpspider_interfaces__msg__gripper_state__convert_to_py(void * raw_ros_message);
bool gwpspider_interfaces__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gwpspider_interfaces__msg__gripper_state__convert_to_py(void * raw_ros_message);
bool gwpspider_interfaces__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gwpspider_interfaces__msg__gripper_state__convert_to_py(void * raw_ros_message);
bool gwpspider_interfaces__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gwpspider_interfaces__msg__gripper_state__convert_to_py(void * raw_ros_message);
bool gwpspider_interfaces__msg__gripper_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gwpspider_interfaces__msg__gripper_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gwpspider_interfaces__msg__grippers_states__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("gwpspider_interfaces.msg._grippers_states.GrippersStates", full_classname_dest, 56) == 0);
  }
  gwpspider_interfaces__msg__GrippersStates * ros_message = _ros_message;
  {  // first_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "first_gripper");
    if (!field) {
      return false;
    }
    if (!gwpspider_interfaces__msg__gripper_state__convert_from_py(field, &ros_message->first_gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // second_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "second_gripper");
    if (!field) {
      return false;
    }
    if (!gwpspider_interfaces__msg__gripper_state__convert_from_py(field, &ros_message->second_gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // third_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "third_gripper");
    if (!field) {
      return false;
    }
    if (!gwpspider_interfaces__msg__gripper_state__convert_from_py(field, &ros_message->third_gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fourth_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "fourth_gripper");
    if (!field) {
      return false;
    }
    if (!gwpspider_interfaces__msg__gripper_state__convert_from_py(field, &ros_message->fourth_gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fifth_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "fifth_gripper");
    if (!field) {
      return false;
    }
    if (!gwpspider_interfaces__msg__gripper_state__convert_from_py(field, &ros_message->fifth_gripper)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gwpspider_interfaces__msg__grippers_states__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GrippersStates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gwpspider_interfaces.msg._grippers_states");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GrippersStates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gwpspider_interfaces__msg__GrippersStates * ros_message = (gwpspider_interfaces__msg__GrippersStates *)raw_ros_message;
  {  // first_gripper
    PyObject * field = NULL;
    field = gwpspider_interfaces__msg__gripper_state__convert_to_py(&ros_message->first_gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "first_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second_gripper
    PyObject * field = NULL;
    field = gwpspider_interfaces__msg__gripper_state__convert_to_py(&ros_message->second_gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "second_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // third_gripper
    PyObject * field = NULL;
    field = gwpspider_interfaces__msg__gripper_state__convert_to_py(&ros_message->third_gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "third_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fourth_gripper
    PyObject * field = NULL;
    field = gwpspider_interfaces__msg__gripper_state__convert_to_py(&ros_message->fourth_gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fourth_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fifth_gripper
    PyObject * field = NULL;
    field = gwpspider_interfaces__msg__gripper_state__convert_to_py(&ros_message->fifth_gripper);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fifth_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#ifndef OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__TRAITS_HPP_
#define OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "opencat_msgs/srv/detail/base_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace opencat_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BaseTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: arguments
  {
    if (msg.arguments.size() == 0) {
      out << "arguments: []";
    } else {
      out << "arguments: [";
      size_t pending_items = msg.arguments.size();
      for (auto item : msg.arguments) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BaseTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }

  // member: arguments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arguments.size() == 0) {
      out << "arguments: []\n";
    } else {
      out << "arguments:\n";
      for (auto item : msg.arguments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BaseTask_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace opencat_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opencat_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencat_msgs::srv::BaseTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencat_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencat_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencat_msgs::srv::BaseTask_Request & msg)
{
  return opencat_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencat_msgs::srv::BaseTask_Request>()
{
  return "opencat_msgs::srv::BaseTask_Request";
}

template<>
inline const char * name<opencat_msgs::srv::BaseTask_Request>()
{
  return "opencat_msgs/srv/BaseTask_Request";
}

template<>
struct has_fixed_size<opencat_msgs::srv::BaseTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<opencat_msgs::srv::BaseTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<opencat_msgs::srv::BaseTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace opencat_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BaseTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BaseTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BaseTask_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace opencat_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opencat_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencat_msgs::srv::BaseTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencat_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencat_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencat_msgs::srv::BaseTask_Response & msg)
{
  return opencat_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencat_msgs::srv::BaseTask_Response>()
{
  return "opencat_msgs::srv::BaseTask_Response";
}

template<>
inline const char * name<opencat_msgs::srv::BaseTask_Response>()
{
  return "opencat_msgs/srv/BaseTask_Response";
}

template<>
struct has_fixed_size<opencat_msgs::srv::BaseTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<opencat_msgs::srv::BaseTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<opencat_msgs::srv::BaseTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<opencat_msgs::srv::BaseTask>()
{
  return "opencat_msgs::srv::BaseTask";
}

template<>
inline const char * name<opencat_msgs::srv::BaseTask>()
{
  return "opencat_msgs/srv/BaseTask";
}

template<>
struct has_fixed_size<opencat_msgs::srv::BaseTask>
  : std::integral_constant<
    bool,
    has_fixed_size<opencat_msgs::srv::BaseTask_Request>::value &&
    has_fixed_size<opencat_msgs::srv::BaseTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<opencat_msgs::srv::BaseTask>
  : std::integral_constant<
    bool,
    has_bounded_size<opencat_msgs::srv::BaseTask_Request>::value &&
    has_bounded_size<opencat_msgs::srv::BaseTask_Response>::value
  >
{
};

template<>
struct is_service<opencat_msgs::srv::BaseTask>
  : std::true_type
{
};

template<>
struct is_service_request<opencat_msgs::srv::BaseTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<opencat_msgs::srv::BaseTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#ifndef ARIA_VTTI_INTERFACES__SRV__DETAIL__START__BUILDER_HPP_
#define ARIA_VTTI_INTERFACES__SRV__DETAIL__START__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aria_vtti_interfaces/srv/detail/start__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aria_vtti_interfaces
{

namespace srv
{

namespace builder
{

class Init_Start_Request_optval
{
public:
  Init_Start_Request_optval()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aria_vtti_interfaces::srv::Start_Request optval(::aria_vtti_interfaces::srv::Start_Request::_optval_type arg)
  {
    msg_.optval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aria_vtti_interfaces::srv::Start_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aria_vtti_interfaces::srv::Start_Request>()
{
  return aria_vtti_interfaces::srv::builder::Init_Start_Request_optval();
}

}  // namespace aria_vtti_interfaces


namespace aria_vtti_interfaces
{

namespace srv
{

namespace builder
{

class Init_Start_Response_success
{
public:
  Init_Start_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aria_vtti_interfaces::srv::Start_Response success(::aria_vtti_interfaces::srv::Start_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aria_vtti_interfaces::srv::Start_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aria_vtti_interfaces::srv::Start_Response>()
{
  return aria_vtti_interfaces::srv::builder::Init_Start_Response_success();
}

}  // namespace aria_vtti_interfaces

#endif  // ARIA_VTTI_INTERFACES__SRV__DETAIL__START__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#ifndef ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_HPP_
#define ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aria_vtti_interfaces__srv__Start_Request __attribute__((deprecated))
#else
# define DEPRECATED__aria_vtti_interfaces__srv__Start_Request __declspec(deprecated)
#endif

namespace aria_vtti_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Start_Request_
{
  using Type = Start_Request_<ContainerAllocator>;

  explicit Start_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->optval = 0l;
    }
  }

  explicit Start_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->optval = 0l;
    }
  }

  // field types and members
  using _optval_type =
    int32_t;
  _optval_type optval;

  // setters for named parameter idiom
  Type & set__optval(
    const int32_t & _arg)
  {
    this->optval = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aria_vtti_interfaces__srv__Start_Request
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aria_vtti_interfaces__srv__Start_Request
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Start_Request_ & other) const
  {
    if (this->optval != other.optval) {
      return false;
    }
    return true;
  }
  bool operator!=(const Start_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Start_Request_

// alias to use template instance with default allocator
using Start_Request =
  aria_vtti_interfaces::srv::Start_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aria_vtti_interfaces


#ifndef _WIN32
# define DEPRECATED__aria_vtti_interfaces__srv__Start_Response __attribute__((deprecated))
#else
# define DEPRECATED__aria_vtti_interfaces__srv__Start_Response __declspec(deprecated)
#endif

namespace aria_vtti_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Start_Response_
{
  using Type = Start_Response_<ContainerAllocator>;

  explicit Start_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Start_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aria_vtti_interfaces__srv__Start_Response
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aria_vtti_interfaces__srv__Start_Response
    std::shared_ptr<aria_vtti_interfaces::srv::Start_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Start_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Start_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Start_Response_

// alias to use template instance with default allocator
using Start_Response =
  aria_vtti_interfaces::srv::Start_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aria_vtti_interfaces

namespace aria_vtti_interfaces
{

namespace srv
{

struct Start
{
  using Request = aria_vtti_interfaces::srv::Start_Request;
  using Response = aria_vtti_interfaces::srv::Start_Response;
};

}  // namespace srv

}  // namespace aria_vtti_interfaces

#endif  // ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_HPP_

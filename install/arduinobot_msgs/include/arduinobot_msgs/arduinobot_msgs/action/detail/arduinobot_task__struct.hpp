// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arduinobot_msgs:action/ArduinobotTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_HPP_
#define ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Goal __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_Goal_
{
  using Type = ArduinobotTask_Goal_<ContainerAllocator>;

  explicit ArduinobotTask_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  explicit ArduinobotTask_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  // field types and members
  using _task_number_type =
    int32_t;
  _task_number_type task_number;

  // setters for named parameter idiom
  Type & set__task_number(
    const int32_t & _arg)
  {
    this->task_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Goal
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Goal
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_Goal_ & other) const
  {
    if (this->task_number != other.task_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_Goal_

// alias to use template instance with default allocator
using ArduinobotTask_Goal =
  arduinobot_msgs::action::ArduinobotTask_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs


#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Result __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Result __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_Result_
{
  using Type = ArduinobotTask_Result_<ContainerAllocator>;

  explicit ArduinobotTask_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ArduinobotTask_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Result
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Result
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_Result_

// alias to use template instance with default allocator
using ArduinobotTask_Result =
  arduinobot_msgs::action::ArduinobotTask_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs


#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Feedback __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_Feedback_
{
  using Type = ArduinobotTask_Feedback_<ContainerAllocator>;

  explicit ArduinobotTask_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  explicit ArduinobotTask_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  // field types and members
  using _percentage_type =
    int32_t;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__percentage(
    const int32_t & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Feedback
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_Feedback
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_Feedback_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_Feedback_

// alias to use template instance with default allocator
using ArduinobotTask_Feedback =
  arduinobot_msgs::action::ArduinobotTask_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arduinobot_msgs/action/detail/arduinobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Request __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_SendGoal_Request_
{
  using Type = ArduinobotTask_SendGoal_Request_<ContainerAllocator>;

  explicit ArduinobotTask_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ArduinobotTask_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arduinobot_msgs::action::ArduinobotTask_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Request
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Request
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_SendGoal_Request_

// alias to use template instance with default allocator
using ArduinobotTask_SendGoal_Request =
  arduinobot_msgs::action::ArduinobotTask_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Response __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_SendGoal_Response_
{
  using Type = ArduinobotTask_SendGoal_Response_<ContainerAllocator>;

  explicit ArduinobotTask_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ArduinobotTask_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Response
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_SendGoal_Response
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_SendGoal_Response_

// alias to use template instance with default allocator
using ArduinobotTask_SendGoal_Response =
  arduinobot_msgs::action::ArduinobotTask_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs

namespace arduinobot_msgs
{

namespace action
{

struct ArduinobotTask_SendGoal
{
  using Request = arduinobot_msgs::action::ArduinobotTask_SendGoal_Request;
  using Response = arduinobot_msgs::action::ArduinobotTask_SendGoal_Response;
};

}  // namespace action

}  // namespace arduinobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Request __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_GetResult_Request_
{
  using Type = ArduinobotTask_GetResult_Request_<ContainerAllocator>;

  explicit ArduinobotTask_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ArduinobotTask_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Request
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Request
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_GetResult_Request_

// alias to use template instance with default allocator
using ArduinobotTask_GetResult_Request =
  arduinobot_msgs::action::ArduinobotTask_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "arduinobot_msgs/action/detail/arduinobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Response __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_GetResult_Response_
{
  using Type = ArduinobotTask_GetResult_Response_<ContainerAllocator>;

  explicit ArduinobotTask_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ArduinobotTask_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arduinobot_msgs::action::ArduinobotTask_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Response
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_GetResult_Response
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_GetResult_Response_

// alias to use template instance with default allocator
using ArduinobotTask_GetResult_Response =
  arduinobot_msgs::action::ArduinobotTask_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs

namespace arduinobot_msgs
{

namespace action
{

struct ArduinobotTask_GetResult
{
  using Request = arduinobot_msgs::action::ArduinobotTask_GetResult_Request;
  using Response = arduinobot_msgs::action::ArduinobotTask_GetResult_Response;
};

}  // namespace action

}  // namespace arduinobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arduinobot_msgs/action/detail/arduinobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_msgs__action__ArduinobotTask_FeedbackMessage __declspec(deprecated)
#endif

namespace arduinobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduinobotTask_FeedbackMessage_
{
  using Type = ArduinobotTask_FeedbackMessage_<ContainerAllocator>;

  explicit ArduinobotTask_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ArduinobotTask_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arduinobot_msgs::action::ArduinobotTask_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_FeedbackMessage
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_msgs__action__ArduinobotTask_FeedbackMessage
    std::shared_ptr<arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduinobotTask_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduinobotTask_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduinobotTask_FeedbackMessage_

// alias to use template instance with default allocator
using ArduinobotTask_FeedbackMessage =
  arduinobot_msgs::action::ArduinobotTask_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduinobot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace arduinobot_msgs
{

namespace action
{

struct ArduinobotTask
{
  /// The goal message defined in the action definition.
  using Goal = arduinobot_msgs::action::ArduinobotTask_Goal;
  /// The result message defined in the action definition.
  using Result = arduinobot_msgs::action::ArduinobotTask_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arduinobot_msgs::action::ArduinobotTask_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arduinobot_msgs::action::ArduinobotTask_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arduinobot_msgs::action::ArduinobotTask_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arduinobot_msgs::action::ArduinobotTask_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ArduinobotTask ArduinobotTask;

}  // namespace action

}  // namespace arduinobot_msgs

#endif  // ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_HPP_

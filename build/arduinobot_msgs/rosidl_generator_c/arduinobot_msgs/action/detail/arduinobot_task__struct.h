// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduinobot_msgs:action/ArduinobotTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_H_
#define ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_Goal
{
  int32_t task_number;
} arduinobot_msgs__action__ArduinobotTask_Goal;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_Goal.
typedef struct arduinobot_msgs__action__ArduinobotTask_Goal__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_Result
{
  bool success;
} arduinobot_msgs__action__ArduinobotTask_Result;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_Result.
typedef struct arduinobot_msgs__action__ArduinobotTask_Result__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_Feedback
{
  int32_t percentage;
} arduinobot_msgs__action__ArduinobotTask_Feedback;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_Feedback.
typedef struct arduinobot_msgs__action__ArduinobotTask_Feedback__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arduinobot_msgs/action/detail/arduinobot_task__struct.h"

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduinobot_msgs__action__ArduinobotTask_Goal goal;
} arduinobot_msgs__action__ArduinobotTask_SendGoal_Request;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_SendGoal_Request.
typedef struct arduinobot_msgs__action__ArduinobotTask_SendGoal_Request__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arduinobot_msgs__action__ArduinobotTask_SendGoal_Response;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_SendGoal_Response.
typedef struct arduinobot_msgs__action__ArduinobotTask_SendGoal_Response__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arduinobot_msgs__action__ArduinobotTask_GetResult_Request;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_GetResult_Request.
typedef struct arduinobot_msgs__action__ArduinobotTask_GetResult_Request__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arduinobot_msgs/action/detail/arduinobot_task__struct.h"

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_GetResult_Response
{
  int8_t status;
  arduinobot_msgs__action__ArduinobotTask_Result result;
} arduinobot_msgs__action__ArduinobotTask_GetResult_Response;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_GetResult_Response.
typedef struct arduinobot_msgs__action__ArduinobotTask_GetResult_Response__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arduinobot_msgs/action/detail/arduinobot_task__struct.h"

/// Struct defined in action/ArduinobotTask in the package arduinobot_msgs.
typedef struct arduinobot_msgs__action__ArduinobotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduinobot_msgs__action__ArduinobotTask_Feedback feedback;
} arduinobot_msgs__action__ArduinobotTask_FeedbackMessage;

// Struct for a sequence of arduinobot_msgs__action__ArduinobotTask_FeedbackMessage.
typedef struct arduinobot_msgs__action__ArduinobotTask_FeedbackMessage__Sequence
{
  arduinobot_msgs__action__ArduinobotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__action__ArduinobotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSGS__ACTION__DETAIL__ARDUINOBOT_TASK__STRUCT_H_

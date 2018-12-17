//
//  MVMessageCommandAck.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMMAND_ACK Mavlink message.

 @discussion Report status of a command. Includes feedback whether the command was executed.
 */
@interface MVMessageCommandAck : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId command:(MAV_CMD)command result:(MAV_RESULT)result;

//! Command ID (of acknowledged command).
- (MAV_CMD)command;

//! Result of command.
- (MAV_RESULT)result;

@end

//
//  MVMessageHeartbeat.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HEARTBEAT Mavlink message.

 @discussion The heartbeat message shows that a system or component is present and responding. The type and autopilot fields (along with the message component id), allow the receiving system to treat further messages from this system appropriately (e.g. by laying out the user interface based on the autopilot).
 */
@interface MVMessageHeartbeat : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId type:(MAV_TYPE)type autopilot:(MAV_AUTOPILOT)autopilot baseMode:(MAV_MODE_FLAG)baseMode customMode:(uint32_t)customMode systemStatus:(MAV_STATE)systemStatus;

//! Type of the system (quadrotor, helicopter, etc.). Components use the same type as their associated system.
- (MAV_TYPE)type;

//! Autopilot type / class.
- (MAV_AUTOPILOT)autopilot;

//! System mode bitmap.
- (MAV_MODE_FLAG)baseMode;

//! A bitfield for use for autopilot-specific flags
- (uint32_t)customMode;

//! System status flag.
- (MAV_STATE)systemStatus;

//! MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version
- (uint8_t)mavlinkVersion;

@end

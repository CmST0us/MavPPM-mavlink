//
//  MVMessageViconPositionEstimate.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VICON_POSITION_ESTIMATE Mavlink message.

 @discussion Global position estimate from a Vicon motion system source.
 */
@interface MVMessageViconPositionEstimate : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z roll:(float)roll pitch:(float)pitch yaw:(float)yaw;

//! Timestamp (UNIX time or time since system boot)
- (uint64_t)usec;

//! Global X position
- (float)x;

//! Global Y position
- (float)y;

//! Global Z position
- (float)z;

//! Roll angle
- (float)roll;

//! Pitch angle
- (float)pitch;

//! Yaw angle
- (float)yaw;

@end

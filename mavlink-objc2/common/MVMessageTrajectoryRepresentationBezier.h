//
//  MVMessageTrajectoryRepresentationBezier.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a TRAJECTORY_REPRESENTATION_BEZIER Mavlink message.

 @discussion Describe a trajectory using an array of up-to 5 bezier points in the local frame.
 */
@interface MVMessageTrajectoryRepresentationBezier : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec validPoints:(uint8_t)validPoints posX:(float *)posX posY:(float *)posY posZ:(float *)posZ delta:(float *)delta posYaw:(float *)posYaw;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Number of valid points (up-to 5 waypoints are possible)
- (uint8_t)validPoints;

//! X-coordinate of starting bezier point, set to NaN if not being used
- (uint16_t)posX:(float *)pos_x;

//! Y-coordinate of starting bezier point, set to NaN if not being used
- (uint16_t)posY:(float *)pos_y;

//! Z-coordinate of starting bezier point, set to NaN if not being used
- (uint16_t)posZ:(float *)pos_z;

//! Bezier time horizon, set to NaN if velocity/acceleration should not be incorporated
- (uint16_t)delta:(float *)delta;

//! Yaw, set to NaN for unchanged
- (uint16_t)posYaw:(float *)pos_yaw;

@end

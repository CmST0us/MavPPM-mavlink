//
//  MVMessageAttPosMocap.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ATT_POS_MOCAP Mavlink message.

 @discussion Motion capture attitude and position
 */
@interface MVMessageAttPosMocap : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec q:(float *)q x:(float)x y:(float)y z:(float)z covariance:(float *)covariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
- (uint16_t)q:(float *)q;

//! X position (NED)
- (float)x;

//! Y position (NED)
- (float)y;

//! Z position (NED)
- (float)z;

//! Pose covariance matrix upper right triangular (first six entries are the first ROW, next five entries are the second ROW, etc.)
- (uint16_t)covariance:(float *)covariance;

@end

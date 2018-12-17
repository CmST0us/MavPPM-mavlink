//
//  MVMessageGpsGlobalOrigin.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS_GLOBAL_ORIGIN Mavlink message.

 @discussion Once the MAV sets a new GPS-Local correspondence, this message announces the origin (0,0,0) position
 */
@interface MVMessageGpsGlobalOrigin : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId latitude:(int32_t)latitude longitude:(int32_t)longitude altitude:(int32_t)altitude timeUsec:(uint64_t)timeUsec;

//! Latitude (WGS84)
- (int32_t)latitude;

//! Longitude (WGS84)
- (int32_t)longitude;

//! Altitude (MSL). Positive for up.
- (int32_t)altitude;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

@end

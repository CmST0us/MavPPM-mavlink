//
//  MVMessageVfrHud.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VFR_HUD Mavlink message.

 @discussion Metrics typically displayed on a HUD for fixed wing aircraft
 */
@interface MVMessageVfrHud : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId airspeed:(float)airspeed groundspeed:(float)groundspeed heading:(int16_t)heading throttle:(uint16_t)throttle alt:(float)alt climb:(float)climb;

//! Current airspeed
- (float)airspeed;

//! Current ground speed
- (float)groundspeed;

//! Current heading in degrees, in compass units (0..360, 0=north)
- (int16_t)heading;

//! Current throttle setting in integer percent, 0 to 100
- (uint16_t)throttle;

//! Current altitude (MSL)
- (float)alt;

//! Current climb rate
- (float)climb;

@end

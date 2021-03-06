//
//  MVMessageGpsRawInt.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS_RAW_INT Mavlink message.

 @discussion The global position, as returned by the Global Positioning System (GPS). This is
                NOT the global position estimate of the system, but rather a RAW sensor value. See message GLOBAL_POSITION for the global position estimate.
 */
@interface MVMessageGpsRawInt : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec fixType:(GPS_FIX_TYPE)fixType lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt eph:(uint16_t)eph epv:(uint16_t)epv vel:(uint16_t)vel cog:(uint16_t)cog satellitesVisible:(uint8_t)satellitesVisible;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! GPS fix type.
- (GPS_FIX_TYPE)fixType;

//! Latitude (WGS84, EGM96 ellipsoid)
- (int32_t)lat;

//! Longitude (WGS84, EGM96 ellipsoid)
- (int32_t)lon;

//! Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.
- (int32_t)alt;

//! GPS HDOP horizontal dilution of position (unitless). If unknown, set to: UINT16_MAX
- (uint16_t)eph;

//! GPS VDOP vertical dilution of position (unitless). If unknown, set to: UINT16_MAX
- (uint16_t)epv;

//! GPS ground speed. If unknown, set to: UINT16_MAX
- (uint16_t)vel;

//! Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
- (uint16_t)cog;

//! Number of satellites visible. If unknown, set to 255
- (uint8_t)satellitesVisible;

@end

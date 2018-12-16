//
//  MVMessageSetVideoStreamSettings.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SET_VIDEO_STREAM_SETTINGS Mavlink message.

 @discussion Message that sets video stream settings
 */
@interface MVMessageSetVideoStreamSettings : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent cameraId:(uint8_t)cameraId framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation uri:(char *)uri;

//! system ID of the target
- (uint8_t)targetSystem;

//! component ID of the target
- (uint8_t)targetComponent;

//! Stream ID (1 for first, 2 for second, etc.)
- (uint8_t)cameraId;

//! Frame rate (set to -1 for highest framerate possible)
- (float)framerate;

//! Horizontal resolution (set to -1 for highest resolution possible)
- (uint16_t)resolutionH;

//! Vertical resolution (set to -1 for highest resolution possible)
- (uint16_t)resolutionV;

//! Bit rate (set to -1 for auto)
- (uint32_t)bitrate;

//! Video image rotation clockwise (0-359 degrees)
- (uint16_t)rotation;

//! Video stream URI (mostly for UDP/RTP)
- (NSString *)uri;

@end

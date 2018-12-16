//
//  MVMessageVideoStreamInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VIDEO_STREAM_INFORMATION Mavlink message.

 @discussion Information about video stream
 */
@interface MVMessageVideoStreamInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId streamId:(uint8_t)streamId count:(uint8_t)count flags:(VIDEO_STREAM_STATUS_FLAGS)flags framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation hfov:(uint16_t)hfov uri:(char *)uri;

//! Stream ID (1 for first, 2 for second, etc.)
- (uint8_t)streamId;

//! Number of streams available
- (uint8_t)count;

//! Bitmap of stream status flags
- (VIDEO_STREAM_STATUS_FLAGS)flags;

//! Frame rate
- (float)framerate;

//! Horizontal resolution
- (uint16_t)resolutionH;

//! Vertical resolution
- (uint16_t)resolutionV;

//! Bit rate in bits per second
- (uint32_t)bitrate;

//! Video image rotation clockwise
- (uint16_t)rotation;

//! Horizontal Field of view
- (uint16_t)hfov;

//! Video stream URI
- (NSString *)uri;

@end

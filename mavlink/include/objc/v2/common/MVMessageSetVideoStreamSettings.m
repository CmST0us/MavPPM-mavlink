//
//  MVMessageSetVideoStreamSettings.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageSetVideoStreamSettings.h"

@implementation MVMessageSetVideoStreamSettings

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent cameraId:(uint8_t)cameraId framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation uri:(char *)uri {
  if ((self = [super init])) {
    mavlink_msg_set_video_stream_settings_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, cameraId, framerate, resolutionH, resolutionV, bitrate, rotation, uri);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_set_video_stream_settings_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_set_video_stream_settings_get_target_component(&(self->_message));
}

- (uint8_t)cameraId {
  return mavlink_msg_set_video_stream_settings_get_camera_id(&(self->_message));
}

- (float)framerate {
  return mavlink_msg_set_video_stream_settings_get_framerate(&(self->_message));
}

- (uint16_t)resolutionH {
  return mavlink_msg_set_video_stream_settings_get_resolution_h(&(self->_message));
}

- (uint16_t)resolutionV {
  return mavlink_msg_set_video_stream_settings_get_resolution_v(&(self->_message));
}

- (uint32_t)bitrate {
  return mavlink_msg_set_video_stream_settings_get_bitrate(&(self->_message));
}

- (uint16_t)rotation {
  return mavlink_msg_set_video_stream_settings_get_rotation(&(self->_message));
}

- (NSString *)uri {
  char string[160];
  mavlink_msg_set_video_stream_settings_get_uri(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:160 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, cameraId=%d, framerate=%f, resolutionH=%d, resolutionV=%d, bitrate=%d, rotation=%d, uri=%@", [super description], [self targetSystem], [self targetComponent], [self cameraId], [self framerate], [self resolutionH], [self resolutionV], [self bitrate], [self rotation], [self uri]];
}

@end

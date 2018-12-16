//
//  MVMessageStorageInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a STORAGE_INFORMATION Mavlink message.

 @discussion Information about a storage medium.
 */
@interface MVMessageStorageInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs storageId:(uint8_t)storageId storageCount:(uint8_t)storageCount status:(uint8_t)status totalCapacity:(float)totalCapacity usedCapacity:(float)usedCapacity availableCapacity:(float)availableCapacity readSpeed:(float)readSpeed writeSpeed:(float)writeSpeed;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Storage ID (1 for first, 2 for second, etc.)
- (uint8_t)storageId;

//! Number of storage devices
- (uint8_t)storageCount;

//! Status of storage (0 not available, 1 unformatted, 2 formatted)
- (uint8_t)status;

//! Total capacity.
- (float)totalCapacity;

//! Used capacity.
- (float)usedCapacity;

//! Available storage capacity.
- (float)availableCapacity;

//! Read speed.
- (float)readSpeed;

//! Write speed.
- (float)writeSpeed;

@end

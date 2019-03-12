//
//  MavPPM.h
//  MPMavlink
//
//  Created by CmST0us on 2018/12/18.
//  Copyright © 2018 eric3u. All rights reserved.
//

#ifndef MavPPM_h
#define MavPPM_h

#pragma mark - SYSTEM ID
#define MAVPPM_SYSTEM_ID_IOS (230)
#define MAVPPM_SYSTEM_ID_EMB (231)

#pragma mark - COMPONENT ID

#pragma mark IOS
#define MAVPPM_COMPONENT_ID_IOS_APP (10)

#pragma mark EMB
#define MAVPPM_COMPONENT_ID_EMB_APP (11)

#pragma mark - Custom DO_SET_PARAMETER command
#define MAVPPM_DO_SET_THROTTLE_CHANNEL (1)
#define MAVPPM_DO_SET_ROLL_CHANNEL (2)
#define MAVPPM_DO_SET_PITCH_CHANNEL (3)
#define MAVPPM_DO_SET_YAW_CHANNEL (4)
#define MAVPPM_DO_SET_BUTTON1_CHANNEL (5)
#define MAVPPM_DO_SET_BUTTON2_CHANNEL (6)
#define MAVPPM_DO_SET_BUTTON3_CHANNEL (7)
#define MAVPPM_DO_SAVE_CHANNEL (8)
#define MAVPPM_DO_RESET_LAST_CHANNEL (9)


#endif /* MavPPM_h */

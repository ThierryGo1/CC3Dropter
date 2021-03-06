/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PathStatus PathStatus 
 * @brief Status of the current path mode  Can come from any @ref PathFollower module
 *
 * Autogenerated files and functions for PathStatus Object
 *
 * @{ 
 *
 * @file       pathstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the PathStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pathstatus.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PATHSTATUS_H
#define PATHSTATUS_H

/* Object constants */
#define PATHSTATUS_OBJID 0x65C06EB0
#define PATHSTATUS_ISSINGLEINST 1
#define PATHSTATUS_ISSETTINGS 0
#define PATHSTATUS_ISPRIORITY 0
#define PATHSTATUS_NUMBYTES sizeof(PathStatusData)

/* Generic interface functions */
int32_t PathStatusInitialize();
UAVObjHandle PathStatusHandle();
void PathStatusSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float fractional_progress;
    float error;
    float path_direction_north;
    float path_direction_east;
    float path_direction_down;
    float correction_direction_north;
    float correction_direction_east;
    float correction_direction_down;
    float path_time;
    int16_t UID;
    uint8_t Status;
} __attribute__((packed)) PathStatusDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef PathStatusDataPacked __attribute__((aligned(4))) PathStatusData;
    
/* Typesafe Object access functions */
static inline int32_t PathStatusGet(PathStatusData *dataOut) { return UAVObjGetData(PathStatusHandle(), dataOut); }
static inline int32_t PathStatusSet(const PathStatusData *dataIn) { return UAVObjSetData(PathStatusHandle(), dataIn); }
static inline int32_t PathStatusInstGet(uint16_t instId, PathStatusData *dataOut) { return UAVObjGetInstanceData(PathStatusHandle(), instId, dataOut); }
static inline int32_t PathStatusInstSet(uint16_t instId, const PathStatusData *dataIn) { return UAVObjSetInstanceData(PathStatusHandle(), instId, dataIn); }
static inline int32_t PathStatusConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(PathStatusHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t PathStatusConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(PathStatusHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t PathStatusCreateInstance() { return UAVObjCreateInstance(PathStatusHandle(), &PathStatusSetDefaults); }
static inline void PathStatusRequestUpdate() { UAVObjRequestUpdate(PathStatusHandle()); }
static inline void PathStatusRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(PathStatusHandle(), instId); }
static inline void PathStatusUpdated() { UAVObjUpdated(PathStatusHandle()); }
static inline void PathStatusInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(PathStatusHandle(), instId); }
static inline void PathStatusLogging() { UAVObjLogging(PathStatusHandle()); }
static inline void PathStatusInstLogging(uint16_t instId) { UAVObjInstanceLogging(PathStatusHandle(), instId); }
static inline int32_t PathStatusGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(PathStatusHandle(), dataOut); }
static inline int32_t PathStatusSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(PathStatusHandle(), dataIn); }
static inline int8_t PathStatusReadOnly() { return UAVObjReadOnly(PathStatusHandle()); }

/* Field fractional_progress information */

/* Field error information */

/* Field path_direction_north information */

/* Field path_direction_east information */

/* Field path_direction_down information */

/* Field correction_direction_north information */

/* Field correction_direction_east information */

/* Field correction_direction_down information */

/* Field path_time information */

/* Field UID information */

/* Field Status information */

// Enumeration options for field Status
typedef enum {
    PATHSTATUS_STATUS_INPROGRESS=0,
    PATHSTATUS_STATUS_COMPLETED=1,
    PATHSTATUS_STATUS_WARNING=2,
    PATHSTATUS_STATUS_CRITICAL=3
} PathStatusStatusOptions;



/* Set/Get functions */
extern void PathStatusfractional_progressSet(float *Newfractional_progress);
extern void PathStatusfractional_progressGet(float *Newfractional_progress);
extern void PathStatuserrorSet(float *Newerror);
extern void PathStatuserrorGet(float *Newerror);
extern void PathStatuspath_direction_northSet(float *Newpath_direction_north);
extern void PathStatuspath_direction_northGet(float *Newpath_direction_north);
extern void PathStatuspath_direction_eastSet(float *Newpath_direction_east);
extern void PathStatuspath_direction_eastGet(float *Newpath_direction_east);
extern void PathStatuspath_direction_downSet(float *Newpath_direction_down);
extern void PathStatuspath_direction_downGet(float *Newpath_direction_down);
extern void PathStatuscorrection_direction_northSet(float *Newcorrection_direction_north);
extern void PathStatuscorrection_direction_northGet(float *Newcorrection_direction_north);
extern void PathStatuscorrection_direction_eastSet(float *Newcorrection_direction_east);
extern void PathStatuscorrection_direction_eastGet(float *Newcorrection_direction_east);
extern void PathStatuscorrection_direction_downSet(float *Newcorrection_direction_down);
extern void PathStatuscorrection_direction_downGet(float *Newcorrection_direction_down);
extern void PathStatuspath_timeSet(float *Newpath_time);
extern void PathStatuspath_timeGet(float *Newpath_time);
extern void PathStatusUIDSet(int16_t *NewUID);
extern void PathStatusUIDGet(int16_t *NewUID);
extern void PathStatusStatusSet(uint8_t *NewStatus);
extern void PathStatusStatusGet(uint8_t *NewStatus);


#endif // PATHSTATUS_H

/**
 * @}
 * @}
 */

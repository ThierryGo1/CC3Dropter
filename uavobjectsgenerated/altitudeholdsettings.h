/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AltitudeHoldSettings AltitudeHoldSettings 
 * @brief Settings for the @ref AltitudeHold module
 *
 * Autogenerated files and functions for AltitudeHoldSettings Object
 *
 * @{ 
 *
 * @file       altitudeholdsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the AltitudeHoldSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholdsettings.xml. 
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

#ifndef ALTITUDEHOLDSETTINGS_H
#define ALTITUDEHOLDSETTINGS_H

/* Object constants */
#define ALTITUDEHOLDSETTINGS_OBJID 0xF19EFC2C
#define ALTITUDEHOLDSETTINGS_ISSINGLEINST 1
#define ALTITUDEHOLDSETTINGS_ISSETTINGS 1
#define ALTITUDEHOLDSETTINGS_ISPRIORITY 0
#define ALTITUDEHOLDSETTINGS_NUMBYTES sizeof(AltitudeHoldSettingsData)

/* Generic interface functions */
int32_t AltitudeHoldSettingsInitialize();
UAVObjHandle AltitudeHoldSettingsHandle();
void AltitudeHoldSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float Ilimit;
}  AltitudeHoldSettingsAltitudePIData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  AltitudeHoldSettingsAltitudePIDataArray ;
#define AltitudeHoldSettingsAltitudePIToArray( var ) UAVObjectFieldToArray( AltitudeHoldSettingsAltitudePIData, var )

typedef struct __attribute__ ((__packed__)) {
    float Kp;
    float Ki;
    float Ilimit;
}  AltitudeHoldSettingsVelocityPIData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  AltitudeHoldSettingsVelocityPIDataArray ;
#define AltitudeHoldSettingsVelocityPIToArray( var ) UAVObjectFieldToArray( AltitudeHoldSettingsVelocityPIData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    AltitudeHoldSettingsAltitudePIData AltitudePI;
    AltitudeHoldSettingsVelocityPIData VelocityPI;
    float ThrustRate;
    uint8_t CutThrustWhenZero;
    uint8_t ThrustExp;
} __attribute__((packed)) AltitudeHoldSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef AltitudeHoldSettingsDataPacked __attribute__((aligned(4))) AltitudeHoldSettingsData;
    
/* Typesafe Object access functions */
static inline int32_t AltitudeHoldSettingsGet(AltitudeHoldSettingsData *dataOut) { return UAVObjGetData(AltitudeHoldSettingsHandle(), dataOut); }
static inline int32_t AltitudeHoldSettingsSet(const AltitudeHoldSettingsData *dataIn) { return UAVObjSetData(AltitudeHoldSettingsHandle(), dataIn); }
static inline int32_t AltitudeHoldSettingsInstGet(uint16_t instId, AltitudeHoldSettingsData *dataOut) { return UAVObjGetInstanceData(AltitudeHoldSettingsHandle(), instId, dataOut); }
static inline int32_t AltitudeHoldSettingsInstSet(uint16_t instId, const AltitudeHoldSettingsData *dataIn) { return UAVObjSetInstanceData(AltitudeHoldSettingsHandle(), instId, dataIn); }
static inline int32_t AltitudeHoldSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AltitudeHoldSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t AltitudeHoldSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AltitudeHoldSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t AltitudeHoldSettingsCreateInstance() { return UAVObjCreateInstance(AltitudeHoldSettingsHandle(), &AltitudeHoldSettingsSetDefaults); }
static inline void AltitudeHoldSettingsRequestUpdate() { UAVObjRequestUpdate(AltitudeHoldSettingsHandle()); }
static inline void AltitudeHoldSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AltitudeHoldSettingsHandle(), instId); }
static inline void AltitudeHoldSettingsUpdated() { UAVObjUpdated(AltitudeHoldSettingsHandle()); }
static inline void AltitudeHoldSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AltitudeHoldSettingsHandle(), instId); }
static inline void AltitudeHoldSettingsLogging() { UAVObjLogging(AltitudeHoldSettingsHandle()); }
static inline void AltitudeHoldSettingsInstLogging(uint16_t instId) { UAVObjInstanceLogging(AltitudeHoldSettingsHandle(), instId); }
static inline int32_t AltitudeHoldSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AltitudeHoldSettingsHandle(), dataOut); }
static inline int32_t AltitudeHoldSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AltitudeHoldSettingsHandle(), dataIn); }
static inline int8_t AltitudeHoldSettingsReadOnly() { return UAVObjReadOnly(AltitudeHoldSettingsHandle()); }

/* Field AltitudePI information */

// Array element names for field AltitudePI
typedef enum {
    ALTITUDEHOLDSETTINGS_ALTITUDEPI_KP=0,
    ALTITUDEHOLDSETTINGS_ALTITUDEPI_KI=1,
    ALTITUDEHOLDSETTINGS_ALTITUDEPI_ILIMIT=2
} AltitudeHoldSettingsAltitudePIElem;

// Number of elements for field AltitudePI
#define ALTITUDEHOLDSETTINGS_ALTITUDEPI_NUMELEM 3

/* Field VelocityPI information */

// Array element names for field VelocityPI
typedef enum {
    ALTITUDEHOLDSETTINGS_VELOCITYPI_KP=0,
    ALTITUDEHOLDSETTINGS_VELOCITYPI_KI=1,
    ALTITUDEHOLDSETTINGS_VELOCITYPI_ILIMIT=2
} AltitudeHoldSettingsVelocityPIElem;

// Number of elements for field VelocityPI
#define ALTITUDEHOLDSETTINGS_VELOCITYPI_NUMELEM 3

/* Field ThrustRate information */

/* Field CutThrustWhenZero information */

// Enumeration options for field CutThrustWhenZero
typedef enum {
    ALTITUDEHOLDSETTINGS_CUTTHRUSTWHENZERO_FALSE=0,
    ALTITUDEHOLDSETTINGS_CUTTHRUSTWHENZERO_TRUE=1
} AltitudeHoldSettingsCutThrustWhenZeroOptions;

/* Field ThrustExp information */



/* Set/Get functions */
extern void AltitudeHoldSettingsAltitudePISet(AltitudeHoldSettingsAltitudePIData *NewAltitudePI);
extern void AltitudeHoldSettingsAltitudePIGet(AltitudeHoldSettingsAltitudePIData *NewAltitudePI);
extern void AltitudeHoldSettingsAltitudePIArraySet(float *NewAltitudePI);
extern void AltitudeHoldSettingsAltitudePIArrayGet(float *NewAltitudePI);
extern void AltitudeHoldSettingsVelocityPISet(AltitudeHoldSettingsVelocityPIData *NewVelocityPI);
extern void AltitudeHoldSettingsVelocityPIGet(AltitudeHoldSettingsVelocityPIData *NewVelocityPI);
extern void AltitudeHoldSettingsVelocityPIArraySet(float *NewVelocityPI);
extern void AltitudeHoldSettingsVelocityPIArrayGet(float *NewVelocityPI);
extern void AltitudeHoldSettingsThrustRateSet(float *NewThrustRate);
extern void AltitudeHoldSettingsThrustRateGet(float *NewThrustRate);
extern void AltitudeHoldSettingsCutThrustWhenZeroSet(uint8_t *NewCutThrustWhenZero);
extern void AltitudeHoldSettingsCutThrustWhenZeroGet(uint8_t *NewCutThrustWhenZero);
extern void AltitudeHoldSettingsThrustExpSet(uint8_t *NewThrustExp);
extern void AltitudeHoldSettingsThrustExpGet(uint8_t *NewThrustExp);


#endif // ALTITUDEHOLDSETTINGS_H

/**
 * @}
 * @}
 */

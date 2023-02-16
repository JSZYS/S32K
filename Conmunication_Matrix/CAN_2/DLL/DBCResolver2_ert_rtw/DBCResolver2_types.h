/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver2_types.h
 *
 * Code generated for Simulink model 'DBCResolver2'.
 *
 * Model version                  : 2.265
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Dec  6 03:42:49 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DBCResolver2_types_h_
#define RTW_HEADER_DBCResolver2_types_h_
#include <CAN2.h>

#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_HeadPillowPD_
#define DEFINED_TYPEDEF_FOR_HeadPillowPD_

typedef struct {
  uint8_T HeadPillowStartbit;
  uint8_T HeadPillowStopbit;
  uint8_T HeadPillowReserved;
  uint8_T HeadPillowSize;
  uint8_T HeadPillowPressure1;
  uint8_T HeadPillowPressure2;
  uint8_T HeadPillowPressure3;

  /* 通风 */
  uint8_T HeadPillowPressure4;
  uint8_T HeadPillowPressure5;
  uint8_T HeadPillowPressure6;
  uint8_T HeadPillowPressure7;
  uint8_T HeadPillowPressure8;
  uint8_T HeadPillowPressure9;
} HeadPillowPD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BackPD_
#define DEFINED_TYPEDEF_FOR_BackPD_

typedef struct {
  uint8_T BackStartbit;
  uint8_T BackStopbit;
  uint8_T BackReserved;
  uint8_T BackSize;
  uint8_T BackPressure1;
  uint8_T BackPressure2;
  uint8_T BackPressure3;

  /* 通风 */
  uint8_T BackPressure4;
  uint8_T BackPressure5;
  uint8_T BackPressure6;
  uint8_T BackPressure7;
  uint8_T BackPressure8;
  uint8_T BackPressure9;
} BackPD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BootsAverage_
#define DEFINED_TYPEDEF_FOR_BootsAverage_

typedef struct {
  uint8_T DorsalFlankLAverage;
  uint8_T DorsalFlankRAverage;
  uint8_T CushionLAverage;
  uint8_T CushionRAverage;
} BootsAverage;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Shoulder1PD_
#define DEFINED_TYPEDEF_FOR_Shoulder1PD_

typedef struct {
  uint8_T Shoulder1Startbit;
  uint8_T Shoulder1Stopbit;
  uint8_T Shoulder1Reserved;
  uint8_T Shoulder1Size;
  uint8_T Shoulder1Pressure1;
  uint8_T Shoulder1Pressure2;
  uint8_T Shoulder1Pressure3;

  /* 通风 */
  uint8_T Shoulder1Pressure4;
  uint8_T Shoulder1Pressure5;
  uint8_T Shoulder1Pressure6;
  uint8_T Shoulder1Pressure7;
  uint8_T Shoulder1Pressure8;
  uint8_T Shoulder1Pressure9;
} Shoulder1PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CushionFlank1PD_
#define DEFINED_TYPEDEF_FOR_CushionFlank1PD_

typedef struct {
  uint8_T CushionFlank1Startbit;
  uint8_T CushionFlank1Stopbit;
  uint8_T CushionFlank1Reserved;
  uint8_T CushionFlank1Size;
  uint8_T CushionFlank1Pressure1;
  uint8_T CushionFlank1Pressure2;
  uint8_T CushionFlank1Pressure3;
  uint8_T CushionFlank1Pressure4;
  uint8_T CushionFlank1Pressure5;
  uint8_T CushionFlank1Pressure6;
  uint8_T CushionFlank1Pressure7;
  uint8_T CushionFlank1Pressure8;
  uint8_T CushionFlank1Pressure9;
} CushionFlank1PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CushionFlank2PD_
#define DEFINED_TYPEDEF_FOR_CushionFlank2PD_

typedef struct {
  uint8_T CushionFlank2Startbit;
  uint8_T CushionFlank2Stopbit;
  uint8_T CushionFlank2Reserved;
  uint8_T CushionFlank2Size;
  uint8_T CushionFlank2Pressure1;
  uint8_T CushionFlank2Pressure2;
  uint8_T CushionFlank2Pressure3;
  uint8_T CushionFlank2Pressure4;
  uint8_T CushionFlank2Pressure5;
  uint8_T CushionFlank2Pressure6;
  uint8_T CushionFlank2Pressure7;
  uint8_T CushionFlank2Pressure8;
  uint8_T CushionFlank2Pressure9;
} CushionFlank2PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_

/* CAN unpackage 模块解析时使用 */
typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} CAN_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DorsalFlank2PD_
#define DEFINED_TYPEDEF_FOR_DorsalFlank2PD_

typedef struct {
  uint8_T DorsalFlank2Startbit;
  uint8_T DorsalFlank2Stopbit;
  uint8_T DorsalFlank2Reserved;
  uint8_T DorsalFlank2Size;
  uint8_T DorsalFlank2Pressure1;
  uint8_T DorsalFlank2Pressure2;
  uint8_T DorsalFlank2Pressure3;
  uint8_T DorsalFlank2Pressure4;
  uint8_T DorsalFlank2Pressure5;
  uint8_T DorsalFlank2Pressure6;
  uint8_T DorsalFlank2Pressure7;
  uint8_T DorsalFlank2Pressure8;
  uint8_T DorsalFlank2Pressure9;
} DorsalFlank2PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HipPD_
#define DEFINED_TYPEDEF_FOR_HipPD_

typedef struct {
  uint8_T HipStartbit;
  uint8_T HipStopbit;
  uint8_T HipReserved;
  uint8_T HipSize;
  uint8_T HipPressure1;
  uint8_T HipPressure2;
  uint8_T HipPressure3;

  /* 通风 */
  uint8_T HipPressure4;
  uint8_T HipPressure5;
  uint8_T HipPressure6;
  uint8_T HipPressure7;
  uint8_T HipPressure8;
  uint8_T HipPressure9;
} HipPD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PressurePadBootLoader_
#define DEFINED_TYPEDEF_FOR_PressurePadBootLoader_

typedef struct {
  /* 体重数据 */
  uint16_T ThighSizeorPressure;
} PressurePadBootLoader;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Shoulder2PD_
#define DEFINED_TYPEDEF_FOR_Shoulder2PD_

typedef struct {
  uint8_T Shoulder2Startbit;
  uint8_T Shoulder2Stopbit;
  uint8_T Shoulder2Reserved;
  uint8_T Shoulder2Size;
  uint8_T Shoulder2Pressure1;
  uint8_T Shoulder2Pressure2;
  uint8_T Shoulder2Pressure3;

  /* 通风 */
  uint8_T Shoulder2Pressure4;
  uint8_T Shoulder2Pressure5;
  uint8_T Shoulder2Pressure6;
  uint8_T Shoulder2Pressure7;
  uint8_T Shoulder2Pressure8;
  uint8_T Shoulder2Pressure9;
} Shoulder2PD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ThighPD_
#define DEFINED_TYPEDEF_FOR_ThighPD_

typedef struct {
  uint8_T ThighStartbit;
  uint8_T ThighStopbit;
  uint8_T ThighReserved;
  uint8_T ThighSize;
  uint8_T ThighPressure1;
  uint8_T ThighPressure2;
  uint8_T ThighPressure3;

  /* 通风 */
  uint8_T ThighPressure4;
  uint8_T ThighPressure5;
  uint8_T ThighPressure6;
  uint8_T ThighPressure7;
  uint8_T ThighPressure8;
  uint8_T ThighPressure9;
} ThighPD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_WeightDataFramePD_
#define DEFINED_TYPEDEF_FOR_WeightDataFramePD_

typedef struct {
  /* 体重数据 */
  uint16_T WeightData;
} WeightDataFramePD;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_DBCResolver2_T RT_MODEL_DBCResolver2_T;

#endif                                 /* RTW_HEADER_DBCResolver2_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

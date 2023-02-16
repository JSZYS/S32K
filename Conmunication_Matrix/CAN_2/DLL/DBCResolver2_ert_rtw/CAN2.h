/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CAN1.h
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

#ifndef RTW_HEADER_CAN2_h_
#define RTW_HEADER_CAN2_h_
#include "rtwtypes.h"

typedef struct {
  uint8_T CabinAtmosphereSts;
} CabinAtmosphereSts;

/* 0x0=无效位;
   0x1=未播放;
   0x2=正在播放;
   0x3=播放结束; */
typedef struct {
  uint8_T SceneSwitchReq;
  uint8_T TailLightMCmd;
  uint8_T SpotLightMCmd;
  uint8_T HeadLightMCmd;
  uint8_T SteerWheelCmd;
  uint8_T CabinTOLEDHCmd;
  uint8_T CabinTOLEDCmd;
  uint8_T CabinAtmosphereMCmd;
  uint8_T CabinAtmosphereCCmd;
  uint8_T CabinAtmosphereBCmd;
  uint8_T VideoDisplay;
} PC1_Ctr;

#endif                                 /* RTW_HEADER_CAN1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

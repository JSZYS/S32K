/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CAN1.h
 *
 * Code generated for Simulink model 'DBCResolver1'.
 *
 * Model version                  : 2.234
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Dec  6 14:15:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN1_h_
#define RTW_HEADER_CAN1_h_
#include "rtwtypes.h"

typedef struct {
  uint8_T CabinAtmosphereSts;
} CabinAtmosphereSts;

typedef struct {
  uint8_T CabinToledSts1;
  uint8_T CabinToledHPSts1;
  uint8_T CabinToledHPLCSts1;
} CabinSta1;

typedef struct {
  /* 投射灯状态 */
  uint8_T SpotLightSts;
} SpotLightSts;

typedef struct {
  uint8_T CabinToledSts2;
  uint8_T CabinToledAPSts2;
  uint8_T CabinToledAPLCSts2;
} CabinSta2;

typedef struct {
  uint8_T FoldswSts;
  uint8_T FoldswHPLCSts;
  uint8_T FoldswAPLCSts;
} Fold_wSts;

typedef struct {
  /* 前车灯状态 */
  uint8_T HeadLightSts;
} HeadLightSta;

typedef struct {
  uint8_T KeMode;
} KeMode;

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

typedef struct {
  /* <edit后排乘客状态> */
  uint8_T RearPassengerStatus;
} RearPassengerStatus;

typedef struct {
  /* 后排右侧压力垫 */
  uint8_T RearPressurePadR;

  /* 后排中间压力垫 */
  uint8_T RearPressurePadM;

  /* 后排左侧压力垫 */
  uint8_T RearPressurePadL;

  /* 后排压力垫区位置 */
  uint8_T RearPressureArea;
} RearPressurePad;

typedef struct {
  uint8_T CAN1BoootLoadersig;
} RearPressurebootload;

typedef struct {
  /* 后车灯状态 */
  uint8_T TailLightSts;
} TailLightSta;

#endif                                 /* RTW_HEADER_CAN1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver1_types.h
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

#ifndef RTW_HEADER_DBCResolver1_types_h_
#define RTW_HEADER_DBCResolver1_types_h_
#include "rtwtypes.h"
#include "CAN1.h"
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

/* Forward declaration for rtModel */
typedef struct tag_RTM_DBCResolver1_T RT_MODEL_DBCResolver1_T;

#endif                                 /* RTW_HEADER_DBCResolver1_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

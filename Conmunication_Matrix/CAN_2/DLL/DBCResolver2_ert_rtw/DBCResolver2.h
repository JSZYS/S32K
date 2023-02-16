/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver2.h
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

#ifndef RTW_HEADER_DBCResolver2_h_
#define RTW_HEADER_DBCResolver2_h_

#ifndef DBCResolver2_COMMON_INCLUDES_
#define DBCResolver2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* DBCResolver2_COMMON_INCLUDES_ */

#include "DBCResolver2_types.h"
#include <CAN2.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS BusCreator;          /* '<S5>/Bus Creator' */
  uint16_T CAN2Unpack;                 /* '<S15>/CAN2 Unpack' */
  uint16_T CAN2Unpack_e;               /* '<S9>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9;               /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10;              /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11;              /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12;              /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13;              /* '<S7>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_j;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_f;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_c;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_d;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_l;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_l;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_a;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_h;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_f;             /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_d;            /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_c;            /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_i;            /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_b;            /* '<S12>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_a;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_c;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_l;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_k;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_m;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_f;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_l;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_a;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_a;             /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_n;            /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_f;            /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_f;            /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_a;            /* '<S13>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_o;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_m;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_m;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_g;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_k;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_e;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_n;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_m;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_d;             /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_d2;           /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_h;            /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_g;            /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_h;            /* '<S1>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_k;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_a;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_h;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_e;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_a;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_ft;            /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_h;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_b;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_j;             /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_o;            /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_a;            /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_d;            /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_d;            /* '<S8>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_e;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_au;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_p;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_b;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_h;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_fr;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_m;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_aa;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_k;             /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_f;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_b;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_fo;           /* '<S14>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_j;            /* '<S14>/CAN2 Unpack' */
  uint8_T CAN1Unpack;                  /* '<S5>/CAN1 Unpack' */
  uint8_T CAN2Unpack_o1_on;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_d;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_g;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_f;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_a1;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_h;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_o;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_b1;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_g;             /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_l;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_n;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_n;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_e;            /* '<S6>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_ja;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_fg;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_n;             /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_fk;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_i;             /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_a;             /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_mz;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_f;             /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_p;             /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_i;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_e;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_b;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_o;            /* '<S3>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_n;             /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_dj;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_lx;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_dc;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_lt;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_o;             /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_f;             /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_i;             /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_al;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_im;           /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_l;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_ge;           /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_m;            /* '<S4>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o1_h;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_b;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_d;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_bn;            /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o5_n;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o6_j;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o7_i;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o8_g;             /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o9_gu;            /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o10_a;            /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o11_es;           /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o12_bf;           /* '<S10>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o13_o4;           /* '<S10>/CAN2 Unpack' */
  uint8_T CAN1Unpack_o1;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o4;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o5;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o6;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o7;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o8;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o9;               /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o10;              /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o11;              /* '<S11>/CAN1 Unpack' */
  uint8_T CAN2Unpack_o1_b;             /* '<S2>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o2_ff;            /* '<S2>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o3_hh;            /* '<S2>/CAN2 Unpack' */
  uint8_T CAN2Unpack_o4_a;             /* '<S2>/CAN2 Unpack' */
} B_DBCResolver2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T CAN2Unpack_ModeSignalID;       /* '<S7>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID;       /* '<S7>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_k;     /* '<S12>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_b;     /* '<S12>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_e;     /* '<S13>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_e;     /* '<S13>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_er;    /* '<S1>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_et;    /* '<S1>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_ee;    /* '<S8>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_d;     /* '<S8>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_g;     /* '<S14>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_m;     /* '<S14>/CAN2 Unpack' */
  int_T CAN1Unpack_ModeSignalID;       /* '<S5>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID;       /* '<S5>/CAN1 Unpack' */
  int_T CAN2Unpack_ModeSignalID_l;     /* '<S6>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_bx;    /* '<S6>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_i;     /* '<S3>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_a;     /* '<S3>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_a;     /* '<S4>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_i;     /* '<S4>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_p;     /* '<S10>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_dt;    /* '<S10>/CAN2 Unpack' */
  int_T CAN1Unpack_ModeSignalID_b;     /* '<S11>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_e;     /* '<S11>/CAN1 Unpack' */
  int_T CAN2Unpack_ModeSignalID_ir;    /* '<S15>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_p;     /* '<S15>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_gx;    /* '<S9>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_g;     /* '<S9>/CAN2 Unpack' */
  int_T CAN2Unpack_ModeSignalID_h;     /* '<S2>/CAN2 Unpack' */
  int_T CAN2Unpack_StatusPortID_mg;    /* '<S2>/CAN2 Unpack' */
} DW_DBCResolver2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  CAN_MESSAGE_BUS HeadPillowPD_Msg;    /* '<Root>/HeadPillowPD_Msg' */
  CAN_MESSAGE_BUS Shoulder1PD_Msg;     /* '<Root>/Shoulder1PD_Msg' */
  CAN_MESSAGE_BUS Shoulder2PD_Msg;     /* '<Root>/Shoulder2PD_Msg' */
  CAN_MESSAGE_BUS BackPD_Msg;          /* '<Root>/BackPD_Msg' */
  CAN_MESSAGE_BUS HipPD_Msg;           /* '<Root>/HipPD_Msg' */
  CAN_MESSAGE_BUS ThighPD_Msg;         /* '<Root>/ThighPD_Msg' */
  CAN_MESSAGE_BUS DorsalFlank2PD_Msg;  /* '<Root>/DorsalFlank2PD_Msg' */
  CAN_MESSAGE_BUS CushionFlank1PD_Msg; /* '<Root>/CushionFlank1PD_Msg' */
  CAN_MESSAGE_BUS CushionFlank2PD_Msg; /* '<Root>/CushionFlank2PD_Msg' */
  CAN_MESSAGE_BUS Shank1PD_Msg;        /* '<Root>/Shank1PD_Msg' */
  CAN_MESSAGE_BUS Shank2PD_Msg;        /* '<Root>/Shank2PD_Msg' */
  CAN_MESSAGE_BUS WeightDataFramePD_Msg;/* '<Root>/WeightDataFramePD_Msg' */
  CAN_MESSAGE_BUS PressurePadBootLoader_Msg1;/* '<Root>/PressurePadBootLoader_Msg1' */
  CAN_MESSAGE_BUS BoostAverage_Msg2;   /* '<Root>/BoostAverage_Msg2' */
} ExtU_DBCResolver2_T;

/* Real-time Model Data Structure */
struct tag_RTM_DBCResolver2_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_DBCResolver2_T DBCResolver2_B;

/* Block states (default storage) */
extern DW_DBCResolver2_T DBCResolver2_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_DBCResolver2_T DBCResolver2_U;

/* Model entry point functions */
//extern void PC2DLL_Interface1_initialize(void);
void PC2DLL_Interface2_initialize(void);

/* Customized model step function */
extern void PC2DLL_Interface1_step(HeadPillowPD *arg_DSArmrestscreen1_ONE,
  CAN_MESSAGE_BUS *arg_Msg1, Shoulder1PD *arg_DSArmrestscreen1_TOW,
  CAN_MESSAGE_BUS *arg_Msg2, BackPD *arg_DSArmrestscreen1_THREE, CAN_MESSAGE_BUS
  *arg_Msg3, HipPD *arg_DSArmrestscreen2_One, CAN_MESSAGE_BUS *arg_Msg4, ThighPD
  *arg_DSArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg5, CabinAtmosphereSts
  *arg_DSArmrestscreen2_THREE, CAN_MESSAGE_BUS *arg_Msg6, DorsalFlank2PD
  *arg_PMArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg7, CushionFlank1PD
  *arg_PMArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg8, CushionFlank1PD
  *arg_PMArmrestscreen2_ONE, CAN_MESSAGE_BUS *arg_Msg9, PC1_Ctr
  *arg_PMArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg11, CushionFlank2PD
  *arg_PMArmrestscreen1_TOW1, CAN_MESSAGE_BUS *arg_PMArmrestscreen1_TOW_Msg1,
  WeightDataFramePD *arg_PMArmrestscreen2_TOW1, CAN_MESSAGE_BUS
  *arg_PMArmrestscreen2_TOW_Msg1, PressurePadBootLoader *arg_WeightDataFramePD1,
  CAN_MESSAGE_BUS *arg_WeightDataFramePD_Msg1, CAN_MESSAGE_BUS
  *arg_WeightDataFramePD_Msg2, BootsAverage *arg_WeightDataFramePD2, Shoulder2PD
  *arg_Shoulder1PD1, CAN_MESSAGE_BUS *arg_Shoulder1PD_Msg1);

/* Real-time Model object */
extern RT_MODEL_DBCResolver2_T *const DBCResolver2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DBCResolver2'
 * '<S1>'   : 'DBCResolver2/BackPD_ID_0X303'
 * '<S2>'   : 'DBCResolver2/BoostAverage_ID_0X30E'
 * '<S3>'   : 'DBCResolver2/CushionFlank1PD_ID_0X308'
 * '<S4>'   : 'DBCResolver2/CushionFlank2PD_ID_0X309'
 * '<S5>'   : 'DBCResolver2/DorsalFlank1PD_ID_0X306'
 * '<S6>'   : 'DBCResolver2/DorsalFlank2PD_ID_0X307'
 * '<S7>'   : 'DBCResolver2/HeadPillowPD _ID_0X300'
 * '<S8>'   : 'DBCResolver2/HipPD_ID_0X304'
 * '<S9>'   : 'DBCResolver2/PressurePadBootLoader_ID_0X30D'
 * '<S10>'  : 'DBCResolver2/Shank1PD_ID_0X30A'
 * '<S11>'  : 'DBCResolver2/Shank2PD_ID_0X30B'
 * '<S12>'  : 'DBCResolver2/Shoulder1PD_ID_0X301'
 * '<S13>'  : 'DBCResolver2/Shoulder2PD_ID_0X302'
 * '<S14>'  : 'DBCResolver2/ThighPD_ID_0X305'
 * '<S15>'  : 'DBCResolver2/WeightDataFramePD_ID_0X30C'
 */
#endif                                 /* RTW_HEADER_DBCResolver2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

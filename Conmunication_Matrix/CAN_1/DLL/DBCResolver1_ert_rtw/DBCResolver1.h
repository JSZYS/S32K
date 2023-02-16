/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver1.h
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

#ifndef RTW_HEADER_DBCResolver1_h_
#define RTW_HEADER_DBCResolver1_h_
#ifndef DBCResolver1_COMMON_INCLUDES_
#define DBCResolver1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* DBCResolver1_COMMON_INCLUDES_ */

#include "CAN1.h"
#include "DBCResolver1_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif


#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS BusCreator;          /* '<S1>/Bus Creator' */
  real_T CAN1Unpack;                   /* '<S10>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o1;               /* '<S9>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2;               /* '<S9>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3;               /* '<S9>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o4;               /* '<S9>/CAN1 Unpack' */
  uint8_T CAN1Unpack_n;                /* '<S6>/CAN1 Unpack' */
  uint8_T CAN1Unpack_a;                /* '<S8>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o1_b;             /* '<S4>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2_d;             /* '<S4>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3_b;             /* '<S4>/CAN1 Unpack' */
  uint8_T CAN1Unpack_j;                /* '<S11>/CAN1 Unpack' */
  uint8_T CAN1Unpack_m;                /* '<S1>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o1_d;             /* '<S3>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2_b;             /* '<S3>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3_f;             /* '<S3>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o1_p;             /* '<S2>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2_j;             /* '<S2>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3_p;             /* '<S2>/CAN1 Unpack' */
  uint8_T CAN1Unpack_i;                /* '<S12>/CAN1 Unpack' */
  uint8_T CAN1Unpack_i3;               /* '<S5>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o1_h;             /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o2_k;             /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o3_l;             /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o4_h;             /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o5;               /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o6;               /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o7;               /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o8;               /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o9;               /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o10;              /* '<S7>/CAN1 Unpack' */
  uint8_T CAN1Unpack_o11;              /* '<S7>/CAN1 Unpack' */
} B_DBCResolver1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T CAN1Unpack_ModeSignalID;       /* '<S9>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID;       /* '<S9>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_d;     /* '<S6>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_o;     /* '<S6>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_m;     /* '<S8>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_e;     /* '<S8>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_mg;    /* '<S4>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_k;     /* '<S4>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_h;     /* '<S11>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_a;     /* '<S11>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_b;     /* '<S1>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_d;     /* '<S1>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_b0;    /* '<S3>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_km;    /* '<S3>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_g;     /* '<S2>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_dl;    /* '<S2>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_gq;    /* '<S12>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_l;     /* '<S12>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_bl;    /* '<S5>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_kd;    /* '<S5>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_b5;    /* '<S7>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_ew;    /* '<S7>/CAN1 Unpack' */
  int_T CAN1Unpack_ModeSignalID_bf;    /* '<S10>/CAN1 Unpack' */
  int_T CAN1Unpack_StatusPortID_kt;    /* '<S10>/CAN1 Unpack' */
} DW_DBCResolver1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  CAN_MESSAGE_BUS RearPressurePad_Msg; /* '<Root>/RearPressurePad_Msg' */
  CAN_MESSAGE_BUS KeMode_Msg2;         /* '<Root>/KeMode_Msg2' */
  CAN_MESSAGE_BUS RearPassengerStatus_Msg;/* '<Root>/RearPassengerStatus_Msg' */
  CAN_MESSAGE_BUS Fold_wSts_Msg;       /* '<Root>/Fold_wSts_Msg' */
  CAN_MESSAGE_BUS SpotLightSts_Msg;    /* '<Root>/SpotLightSts_Msg' */
  CAN_MESSAGE_BUS CabinSta2_Msg;       /* '<Root>/CabinSta2_Msg' */
  CAN_MESSAGE_BUS CabinSta1_Msg;       /* '<Root>/CabinSta1_Msg' */
  CAN_MESSAGE_BUS TailLightSta_Msg;    /* '<Root>/TailLightSta_Msg' */
  CAN_MESSAGE_BUS HeadLightSta_Msg;    /* '<Root>/HeadLightSta_Msg' */
  CAN_MESSAGE_BUS PC1_Ctr_Msg;         /* '<Root>/PC1_Ctr_Msg' */
  CAN_MESSAGE_BUS RearPressurebootload1_Msg;/* '<Root>/RearPressurebootload1_Msg' */
} ExtU_DBCResolver1_T;

/* Real-time Model Data Structure */
struct tag_RTM_DBCResolver1_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_DBCResolver1_T DBCResolver1_B;

/* Block states (default storage) */
extern DW_DBCResolver1_T DBCResolver1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_DBCResolver1_T DBCResolver1_U;

/* Model entry point functions */
extern void PC2DLL_Interface1_initialize(void);

/* Customized model step function */
extern void PC2DLL_Interface1_step(RearPressurePad *arg_DSArmrestscreen1_ONE,
  CAN_MESSAGE_BUS *arg_Msg1, KeMode *arg_DSArmrestscreen1_TOW, CAN_MESSAGE_BUS
  *arg_Msg2, RearPassengerStatus *arg_DSArmrestscreen1_THREE, CAN_MESSAGE_BUS
  *arg_Msg3, Fold_wSts *arg_DSArmrestscreen2_One, CAN_MESSAGE_BUS *arg_Msg4,
  SpotLightSts *arg_DSArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg5,
  CabinAtmosphereSts *arg_DSArmrestscreen2_THREE, CAN_MESSAGE_BUS *arg_Msg6,
  CabinSta2 *arg_PMArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg7, CabinSta1
  *arg_PMArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg8, HeadLightSta
  *arg_PMArmrestscreen2_ONE, CAN_MESSAGE_BUS *arg_Msg9, PC1_Ctr
  *arg_PMArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg11, TailLightSta
  *arg_PMArmrestscreen1_TOW1, CAN_MESSAGE_BUS *arg_PMArmrestscreen1_TOW_Msg1,
  RearPressurebootload *arg_PMArmrestscreen2_TOW1, CAN_MESSAGE_BUS
  *arg_PMArmrestscreen2_TOW_Msg1);

/* Real-time Model object */
extern RT_MODEL_DBCResolver1_T *const DBCResolver1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<Root>' : 'DBCResolver1'
 * '<S1>'   : 'DBCResolver1/CabinAtmosphereSts_ID_0X220'
 * '<S2>'   : 'DBCResolver1/CabinSta1_ID_0X214'
 * '<S3>'   : 'DBCResolver1/CabinSta2_ID_0X215'
 * '<S4>'   : 'DBCResolver1/Fold_wSts_ID_0X225'
 * '<S5>'   : 'DBCResolver1/HeadLightSta_ID_0X210'
 * '<S6>'   : 'DBCResolver1/KeMode_ID_0X228'
 * '<S7>'   : 'DBCResolver1/PC1_Ctr_ID_0X200'
 * '<S8>'   : 'DBCResolver1/RearPassengerStatus_ID_0X227'
 * '<S9>'   : 'DBCResolver1/RearPressurePad_ID_0X229'
 * '<S10>'  : 'DBCResolver1/RearPressurebootload1_ID_0X22A'
 * '<S11>'  : 'DBCResolver1/SpotLightSts_ID_0X223'
 * '<S12>'  : 'DBCResolver1/TailLightSta_ID_0X213'
 */
#endif                                 /* RTW_HEADER_DBCResolver1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

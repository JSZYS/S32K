/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver1.c
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

//#include <my_math.h>
#include "DBCResolver1.h"
#include "DBCResolver1_types.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "my_math.h"


double floor(double num);
// double fmod(double num,double num2);

/* Block signals (default storage) */
B_DBCResolver1_T DBCResolver1_B;

/* Block states (default storage) */
DW_DBCResolver1_T DBCResolver1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_DBCResolver1_T DBCResolver1_U;

/* Real-time model */
static RT_MODEL_DBCResolver1_T DBCResolver1_M_;
RT_MODEL_DBCResolver1_T *const DBCResolver1_M = &DBCResolver1_M_;

/* Model step function */
void PC2DLL_Interface1_step(RearPressurePad *arg_DSArmrestscreen1_ONE,
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
  *arg_PMArmrestscreen2_TOW_Msg1)
{
  real_T tmp;

  /* Copy value for root inport '<Root>/RearPressurePad_Msg' since it is accessed globally */
  DBCResolver1_U.RearPressurePad_Msg = *arg_Msg1;

  /* Copy value for root inport '<Root>/KeMode_Msg2' since it is accessed globally */
  DBCResolver1_U.KeMode_Msg2 = *arg_Msg2;

  /* Copy value for root inport '<Root>/RearPassengerStatus_Msg' since it is accessed globally */
  DBCResolver1_U.RearPassengerStatus_Msg = *arg_Msg3;

  /* Copy value for root inport '<Root>/Fold_wSts_Msg' since it is accessed globally */
  DBCResolver1_U.Fold_wSts_Msg = *arg_Msg4;

  /* Copy value for root inport '<Root>/SpotLightSts_Msg' since it is accessed globally */
  DBCResolver1_U.SpotLightSts_Msg = *arg_Msg5;

  /* Copy value for root inport '<Root>/CabinSta2_Msg' since it is accessed globally */
  DBCResolver1_U.CabinSta2_Msg = *arg_Msg7;

  /* Copy value for root inport '<Root>/CabinSta1_Msg' since it is accessed globally */
  DBCResolver1_U.CabinSta1_Msg = *arg_Msg8;

  /* Copy value for root inport '<Root>/HeadLightSta_Msg' since it is accessed globally */
  DBCResolver1_U.HeadLightSta_Msg = *arg_Msg9;

  /* Copy value for root inport '<Root>/PC1_Ctr_Msg' since it is accessed globally */
  DBCResolver1_U.PC1_Ctr_Msg = *arg_Msg11;

  /* Copy value for root inport '<Root>/TailLightSta_Msg' since it is accessed globally */
  DBCResolver1_U.TailLightSta_Msg = *arg_PMArmrestscreen1_TOW_Msg1;

  /* Copy value for root inport '<Root>/RearPressurebootload1_Msg' since it is accessed globally */
  DBCResolver1_U.RearPressurebootload1_Msg = *arg_PMArmrestscreen2_TOW_Msg1;

  /* S-Function (scanunpack): '<S9>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPressurePad_Msg'
   */
  {
    /* S-Function (scanunpack): '<S9>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.RearPressurePad_Msg.Length) &&
        (DBCResolver1_U.RearPressurePad_Msg.ID != INVALID_CAN_ID) ) {
      if ((553 == DBCResolver1_U.RearPressurePad_Msg.ID) && (0U ==
           DBCResolver1_U.RearPressurePad_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver1_U.RearPressurePad_Msg.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.RearPressurePad_Msg.Data[0]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 8
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.RearPressurePad_Msg.Data[1]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 16
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.RearPressurePad_Msg.Data[2]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o4 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/RearPressurePad' incorporates:
   *  BusCreator generated from: '<Root>/RearPressurePad'
   */
  arg_DSArmrestscreen1_ONE->RearPressurePadR = DBCResolver1_B.CAN1Unpack_o4;
  arg_DSArmrestscreen1_ONE->RearPressurePadM = DBCResolver1_B.CAN1Unpack_o3;
  arg_DSArmrestscreen1_ONE->RearPressurePadL = DBCResolver1_B.CAN1Unpack_o2;
  arg_DSArmrestscreen1_ONE->RearPressureArea = DBCResolver1_B.CAN1Unpack_o1;

  /* S-Function (scanunpack): '<S6>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/KeMode_Msg2'
   */
  {
    /* S-Function (scanunpack): '<S6>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.KeMode_Msg2.Length) &&
        (DBCResolver1_U.KeMode_Msg2.ID != INVALID_CAN_ID) ) {
      if ((552 == DBCResolver1_U.KeMode_Msg2.ID) && (0U ==
           DBCResolver1_U.KeMode_Msg2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.KeMode_Msg2.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_n = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/KeMode' incorporates:
   *  BusCreator generated from: '<Root>/KeMode'
   */
  arg_DSArmrestscreen1_TOW->KeMode = DBCResolver1_B.CAN1Unpack_n;

  /* S-Function (scanunpack): '<S8>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPassengerStatus_Msg'
   */
  {
    /* S-Function (scanunpack): '<S8>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.RearPassengerStatus_Msg.Length) &&
        (DBCResolver1_U.RearPassengerStatus_Msg.ID != INVALID_CAN_ID) ) {
      if ((551 == DBCResolver1_U.RearPassengerStatus_Msg.ID) && (0U ==
           DBCResolver1_U.RearPassengerStatus_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.RearPassengerStatus_Msg.Data[0]) & (uint8_T)
                    (0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_a = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/RearPassengerStatus' incorporates:
   *  BusCreator generated from: '<Root>/RearPassengerStatus'
   */
  arg_DSArmrestscreen1_THREE->RearPassengerStatus = DBCResolver1_B.CAN1Unpack_a;

  /* S-Function (scanunpack): '<S4>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/Fold_wSts_Msg'
   */
  {
    /* S-Function (scanunpack): '<S4>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.Fold_wSts_Msg.Length) &&
        (DBCResolver1_U.Fold_wSts_Msg.ID != INVALID_CAN_ID) ) {
      if ((549 == DBCResolver1_U.Fold_wSts_Msg.ID) && (0U ==
           DBCResolver1_U.Fold_wSts_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.Fold_wSts_Msg.Data[2]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o1_b = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.Fold_wSts_Msg.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o2_d = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.Fold_wSts_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o3_b = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/Fold_wSts' incorporates:
   *  BusCreator generated from: '<Root>/Fold_wSts'
   */
  arg_DSArmrestscreen2_One->FoldswSts = DBCResolver1_B.CAN1Unpack_o3_b;
  arg_DSArmrestscreen2_One->FoldswHPLCSts = DBCResolver1_B.CAN1Unpack_o2_d;
  arg_DSArmrestscreen2_One->FoldswAPLCSts = DBCResolver1_B.CAN1Unpack_o1_b;

  /* S-Function (scanunpack): '<S11>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/SpotLightSts_Msg'
   */
  {
    /* S-Function (scanunpack): '<S11>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.SpotLightSts_Msg.Length) &&
        (DBCResolver1_U.SpotLightSts_Msg.ID != INVALID_CAN_ID) ) {
      if ((547 == DBCResolver1_U.SpotLightSts_Msg.ID) && (0U ==
           DBCResolver1_U.SpotLightSts_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.SpotLightSts_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_j = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/SpotLightSts' incorporates:
   *  BusCreator generated from: '<Root>/SpotLightSts'
   */
  arg_DSArmrestscreen2_TOW->SpotLightSts = DBCResolver1_B.CAN1Unpack_j;

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  Inport: '<Root>/CabinAtmosphereSts_Msg'
   */
  DBCResolver1_B.BusCreator = *arg_Msg6;

  /* S-Function (scanunpack): '<S1>/CAN1 Unpack' */
  {
    /* S-Function (scanunpack): '<S1>/CAN1 Unpack' */
    if ((8 == DBCResolver1_B.BusCreator.Length) && (DBCResolver1_B.BusCreator.ID
         != INVALID_CAN_ID) ) {
      if ((544 == DBCResolver1_B.BusCreator.ID) && (0U ==
           DBCResolver1_B.BusCreator.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver1_B.BusCreator.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_m = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/CabinAtmosphereSts' incorporates:
   *  BusCreator generated from: '<Root>/CabinAtmosphereSts'
   */
  arg_DSArmrestscreen2_THREE->CabinAtmosphereSts = DBCResolver1_B.CAN1Unpack_m;

  /* S-Function (scanunpack): '<S3>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/CabinSta2_Msg'
   */
  {
    /* S-Function (scanunpack): '<S3>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.CabinSta2_Msg.Length) &&
        (DBCResolver1_U.CabinSta2_Msg.ID != INVALID_CAN_ID) ) {
      if ((533 == DBCResolver1_U.CabinSta2_Msg.ID) && (0U ==
           DBCResolver1_U.CabinSta2_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.CabinSta2_Msg.Data[4]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o1_d = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver1_U.CabinSta2_Msg.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o2_b = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.CabinSta2_Msg.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o3_f = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/CabinSta2' incorporates:
   *  BusCreator generated from: '<Root>/CabinSta2'
   */
  arg_PMArmrestscreen1_ONE->CabinToledSts2 = DBCResolver1_B.CAN1Unpack_o3_f;
  arg_PMArmrestscreen1_ONE->CabinToledAPSts2 = DBCResolver1_B.CAN1Unpack_o2_b;
  arg_PMArmrestscreen1_ONE->CabinToledAPLCSts2 = DBCResolver1_B.CAN1Unpack_o1_d;

  /* S-Function (scanunpack): '<S2>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/CabinSta1_Msg'
   */
  {
    /* S-Function (scanunpack): '<S2>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.CabinSta1_Msg.Length) &&
        (DBCResolver1_U.CabinSta1_Msg.ID != INVALID_CAN_ID) ) {
      if ((532 == DBCResolver1_U.CabinSta1_Msg.ID) && (0U ==
           DBCResolver1_U.CabinSta1_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 25
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.CabinSta1_Msg.Data[3]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o1_p = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver1_U.CabinSta1_Msg.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o2_j = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.CabinSta1_Msg.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o3_p = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/CabinSta1' incorporates:
   *  BusCreator generated from: '<Root>/CabinSta1'
   */
  arg_PMArmrestscreen1_TOW->CabinToledSts1 = DBCResolver1_B.CAN1Unpack_o3_p;
  arg_PMArmrestscreen1_TOW->CabinToledHPSts1 = DBCResolver1_B.CAN1Unpack_o2_j;
  arg_PMArmrestscreen1_TOW->CabinToledHPLCSts1 = DBCResolver1_B.CAN1Unpack_o1_p;

  /* S-Function (scanunpack): '<S12>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/TailLightSta_Msg'
   */
  {
    /* S-Function (scanunpack): '<S12>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.TailLightSta_Msg.Length) &&
        (DBCResolver1_U.TailLightSta_Msg.ID != INVALID_CAN_ID) ) {
      if ((531 == DBCResolver1_U.TailLightSta_Msg.ID) && (0U ==
           DBCResolver1_U.TailLightSta_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 6
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.TailLightSta_Msg.Data[0]) & (uint8_T)(0xC0U))
                    >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_i = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/TailLightSta' incorporates:
   *  BusCreator generated from: '<Root>/TailLightSta'
   */
  arg_PMArmrestscreen1_TOW1->TailLightSts = DBCResolver1_B.CAN1Unpack_i;

  /* S-Function (scanunpack): '<S5>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/HeadLightSta_Msg'
   */
  {
    /* S-Function (scanunpack): '<S5>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.HeadLightSta_Msg.Length) &&
        (DBCResolver1_U.HeadLightSta_Msg.ID != INVALID_CAN_ID) ) {
      if ((528 == DBCResolver1_U.HeadLightSta_Msg.ID) && (0U ==
           DBCResolver1_U.HeadLightSta_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.HeadLightSta_Msg.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_i3 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/HeadLightSta' incorporates:
   *  BusCreator generated from: '<Root>/HeadLightSta'
   */
  arg_PMArmrestscreen2_ONE->HeadLightSts = DBCResolver1_B.CAN1Unpack_i3;

  /* S-Function (scanunpack): '<S7>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/PC1_Ctr_Msg'
   */
  {
    /* S-Function (scanunpack): '<S7>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.PC1_Ctr_Msg.Length) &&
        (DBCResolver1_U.PC1_Ctr_Msg.ID != INVALID_CAN_ID) ) {
      if ((512 == DBCResolver1_U.PC1_Ctr_Msg.ID) && (0U ==
           DBCResolver1_U.PC1_Ctr_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 18
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[2]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o1_h = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o2_k = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 2.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              result = result * 2U;
              DBCResolver1_B.CAN1Unpack_o3_l = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 20
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[2]) & (uint8_T)(0x70U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o4_h = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 24
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o5 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 40
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[5]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o7 = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 4
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[0]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o8 = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 27
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[3]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o9 = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[0]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o10 = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 48
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (DBCResolver1_U.PC1_Ctr_Msg.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver1_B.CAN1Unpack_o11 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/PC1_Ctr' incorporates:
   *  BusCreator generated from: '<Root>/PC1_Ctr'
   */
  arg_PMArmrestscreen2_TOW->SceneSwitchReq = DBCResolver1_B.CAN1Unpack_o7;
  arg_PMArmrestscreen2_TOW->TailLightMCmd = DBCResolver1_B.CAN1Unpack_o10;
  arg_PMArmrestscreen2_TOW->SpotLightMCmd = DBCResolver1_B.CAN1Unpack_o8;
  arg_PMArmrestscreen2_TOW->HeadLightMCmd = DBCResolver1_B.CAN1Unpack_o6;
  arg_PMArmrestscreen2_TOW->SteerWheelCmd = DBCResolver1_B.CAN1Unpack_o9;
  arg_PMArmrestscreen2_TOW->CabinTOLEDHCmd = DBCResolver1_B.CAN1Unpack_o5;
  arg_PMArmrestscreen2_TOW->CabinTOLEDCmd = DBCResolver1_B.CAN1Unpack_o4_h;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereMCmd = DBCResolver1_B.CAN1Unpack_o3_l;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereCCmd = DBCResolver1_B.CAN1Unpack_o2_k;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereBCmd = DBCResolver1_B.CAN1Unpack_o1_h;
  arg_PMArmrestscreen2_TOW->VideoDisplay = DBCResolver1_B.CAN1Unpack_o11;

  /* S-Function (scanunpack): '<S10>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPressurebootload1_Msg'
   */
  {
    /* S-Function (scanunpack): '<S10>/CAN1 Unpack' */
    if ((8 == DBCResolver1_U.RearPressurebootload1_Msg.Length) &&
        (DBCResolver1_U.RearPressurebootload1_Msg.ID != INVALID_CAN_ID) ) {
      if ((554 == DBCResolver1_U.RearPressurebootload1_Msg.ID) && (0U ==
           DBCResolver1_U.RearPressurebootload1_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
           *  length                  = 32
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int32_T unpackedValue = 0;

              {
                uint32_T tempValue = (uint32_T) (0);
                int32_T* tempValuePtr = (int32_T*)&tempValue;

                {
                  tempValue = tempValue | (uint32_T)
                    (DBCResolver1_U.RearPressurebootload1_Msg.Data[3]);
                  tempValue = tempValue | (uint32_T)((uint32_T)
                    (DBCResolver1_U.RearPressurebootload1_Msg.Data[2]) << 8);
                  tempValue = tempValue | (uint32_T)((uint32_T)
                    (DBCResolver1_U.RearPressurebootload1_Msg.Data[1]) << 16);
                  tempValue = tempValue | (uint32_T)((uint32_T)
                    (DBCResolver1_U.RearPressurebootload1_Msg.Data[0]) << 24);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver1_B.CAN1Unpack = result;
            }
          }
        }
      }
    }
  }

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  tmp = floor(DBCResolver1_B.CAN1Unpack);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/RearPressurebootload1' incorporates:
   *  DataTypeConversion: '<S10>/Data Type Conversion'
   */
  arg_PMArmrestscreen2_TOW1->CAN1BoootLoadersig = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);
}

double floor(double num)
{
	return ((num >= 0) || (num - (long)num == 0)) ? (long)num : (long)num - 1;
}

// double fmod(double num,double num2)
// {
//       return num - ((long)(num / num2) * num2);
// }

#if 1
/* Model initialize function */
void PC2DLL_Interface1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Start for S-Function (scanunpack): '<S9>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPressurePad_Msg'
   */

  /*-----------S-Function Block: <S9>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S6>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/KeMode_Msg2'
   */

  /*-----------S-Function Block: <S6>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S8>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPassengerStatus_Msg'
   */

  /*-----------S-Function Block: <S8>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/Fold_wSts_Msg'
   */

  /*-----------S-Function Block: <S4>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/SpotLightSts_Msg'
   */

  /*-----------S-Function Block: <S11>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN1 Unpack' */

  /*-----------S-Function Block: <S1>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/CabinSta2_Msg'
   */

  /*-----------S-Function Block: <S3>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S2>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/CabinSta1_Msg'
   */

  /*-----------S-Function Block: <S2>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S12>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/TailLightSta_Msg'
   */

  /*-----------S-Function Block: <S12>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S5>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/HeadLightSta_Msg'
   */

  /*-----------S-Function Block: <S5>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S7>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/PC1_Ctr_Msg'
   */

  /*-----------S-Function Block: <S7>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S10>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/RearPressurebootload1_Msg'
   */

  /*-----------S-Function Block: <S10>/CAN1 Unpack -----------------*/
}

#endif

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

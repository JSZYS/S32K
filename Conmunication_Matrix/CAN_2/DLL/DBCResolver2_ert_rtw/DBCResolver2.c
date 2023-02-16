/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver2.c
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

#include <CAN2.h>
#include "DBCResolver2.h"
#include "DBCResolver2_types.h"

/* Block signals (default storage) */
B_DBCResolver2_T DBCResolver2_B;

/* Block states (default storage) */
DW_DBCResolver2_T DBCResolver2_DW;

/* External inputs (root inport signals with default storage) */
ExtU_DBCResolver2_T DBCResolver2_U;

/* Real-time model */
static RT_MODEL_DBCResolver2_T DBCResolver2_M_;
RT_MODEL_DBCResolver2_T *const DBCResolver2_M = &DBCResolver2_M_;

/* Model step function */
void PC2DLL_Interface2_step(HeadPillowPD *arg_DSArmrestscreen1_ONE,
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
  *arg_Shoulder1PD1, CAN_MESSAGE_BUS *arg_Shoulder1PD_Msg1)
{
  /* Copy value for root inport '<Root>/HeadPillowPD_Msg' since it is accessed globally */
  DBCResolver2_U.HeadPillowPD_Msg = *arg_Msg1;

  /* Copy value for root inport '<Root>/Shoulder1PD_Msg' since it is accessed globally */
  DBCResolver2_U.Shoulder1PD_Msg = *arg_Msg2;

  /* Copy value for root inport '<Root>/BackPD_Msg' since it is accessed globally */
  DBCResolver2_U.BackPD_Msg = *arg_Msg3;

  /* Copy value for root inport '<Root>/HipPD_Msg' since it is accessed globally */
  DBCResolver2_U.HipPD_Msg = *arg_Msg4;

  /* Copy value for root inport '<Root>/ThighPD_Msg' since it is accessed globally */
  DBCResolver2_U.ThighPD_Msg = *arg_Msg5;

  /* Copy value for root inport '<Root>/DorsalFlank2PD_Msg' since it is accessed globally */
  DBCResolver2_U.DorsalFlank2PD_Msg = *arg_Msg7;

  /* Copy value for root inport '<Root>/CushionFlank1PD_Msg' since it is accessed globally */
  DBCResolver2_U.CushionFlank1PD_Msg = *arg_Msg8;

  /* Copy value for root inport '<Root>/Shank1PD_Msg' since it is accessed globally */
  DBCResolver2_U.Shank1PD_Msg = *arg_Msg9;

  /* Copy value for root inport '<Root>/Shank2PD_Msg' since it is accessed globally */
  DBCResolver2_U.Shank2PD_Msg = *arg_Msg11;

  /* Copy value for root inport '<Root>/CushionFlank2PD_Msg' since it is accessed globally */
  DBCResolver2_U.CushionFlank2PD_Msg = *arg_PMArmrestscreen1_TOW_Msg1;

  /* Copy value for root inport '<Root>/WeightDataFramePD_Msg' since it is accessed globally */
  DBCResolver2_U.WeightDataFramePD_Msg = *arg_PMArmrestscreen2_TOW_Msg1;

  /* Copy value for root inport '<Root>/PressurePadBootLoader_Msg1' since it is accessed globally */
  DBCResolver2_U.PressurePadBootLoader_Msg1 = *arg_WeightDataFramePD_Msg1;

  /* Copy value for root inport '<Root>/BoostAverage_Msg2' since it is accessed globally */
  DBCResolver2_U.BoostAverage_Msg2 = *arg_WeightDataFramePD_Msg2;

  /* Copy value for root inport '<Root>/Shoulder2PD_Msg' since it is accessed globally */
  DBCResolver2_U.Shoulder2PD_Msg = *arg_Shoulder1PD_Msg1;

  /* S-Function (scanunpack): '<S7>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/HeadPillowPD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S7>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.HeadPillowPD_Msg.Length) &&
        (DBCResolver2_U.HeadPillowPD_Msg.ID != INVALID_CAN_ID) ) {
      if ((768 == DBCResolver2_U.HeadPillowPD_Msg.ID) && (0U ==
           DBCResolver2_U.HeadPillowPD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[1]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[2]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[3]) & (uint8_T)(0xFU))
                    << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[3]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[4]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[4]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[5]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[6]) & (uint8_T)(0xFU))
                    << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7 = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[6]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[7]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8 = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[7]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9 = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[0]) & (uint8_T)(0xCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10 = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[0]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[1]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11 = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12 = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HeadPillowPD_Msg.Data[0]) & (uint8_T)(0x2U))
                    >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/HeadPillowPD ' incorporates:
   *  BusCreator generated from: '<Root>/HeadPillowPD '
   */
  arg_DSArmrestscreen1_ONE->HeadPillowStartbit = DBCResolver2_B.CAN2Unpack_o12;
  arg_DSArmrestscreen1_ONE->HeadPillowStopbit = DBCResolver2_B.CAN2Unpack_o13;
  arg_DSArmrestscreen1_ONE->HeadPillowReserved = DBCResolver2_B.CAN2Unpack_o10;
  arg_DSArmrestscreen1_ONE->HeadPillowSize = DBCResolver2_B.CAN2Unpack_o11;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure1 = DBCResolver2_B.CAN2Unpack_o1;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure2 = DBCResolver2_B.CAN2Unpack_o2;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure3 = DBCResolver2_B.CAN2Unpack_o3;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure4 = DBCResolver2_B.CAN2Unpack_o4;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure5 = DBCResolver2_B.CAN2Unpack_o5;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure6 = DBCResolver2_B.CAN2Unpack_o6;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure7 = DBCResolver2_B.CAN2Unpack_o7;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure8 = DBCResolver2_B.CAN2Unpack_o8;
  arg_DSArmrestscreen1_ONE->HeadPillowPressure9 = DBCResolver2_B.CAN2Unpack_o9;

  /* S-Function (scanunpack): '<S12>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shoulder1PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S12>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.Shoulder1PD_Msg.Length) &&
        (DBCResolver2_U.Shoulder1PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((769 == DBCResolver2_U.Shoulder1PD_Msg.ID) && (0U ==
           DBCResolver2_U.Shoulder1PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[1]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_j = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_f = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[2]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[3]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_c = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[3]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[4]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_d = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[4]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_l = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_l = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[5]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[6]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_a = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[6]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[7]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_h = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[7]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_f = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_d = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[0]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[1]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_c = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_i = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder1PD_Msg.Data[0]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_b = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/Shoulder1PD' incorporates:
   *  BusCreator generated from: '<Root>/Shoulder1PD'
   */
  arg_DSArmrestscreen1_TOW->Shoulder1Startbit = DBCResolver2_B.CAN2Unpack_o12_i;
  arg_DSArmrestscreen1_TOW->Shoulder1Stopbit = DBCResolver2_B.CAN2Unpack_o13_b;
  arg_DSArmrestscreen1_TOW->Shoulder1Reserved = DBCResolver2_B.CAN2Unpack_o10_d;
  arg_DSArmrestscreen1_TOW->Shoulder1Size = DBCResolver2_B.CAN2Unpack_o11_c;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure1 = DBCResolver2_B.CAN2Unpack_o1_j;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure2 = DBCResolver2_B.CAN2Unpack_o2_f;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure3 = DBCResolver2_B.CAN2Unpack_o3_c;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure4 = DBCResolver2_B.CAN2Unpack_o4_d;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure5 = DBCResolver2_B.CAN2Unpack_o5_l;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure6 = DBCResolver2_B.CAN2Unpack_o6_l;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure7 = DBCResolver2_B.CAN2Unpack_o7_a;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure8 = DBCResolver2_B.CAN2Unpack_o8_h;
  arg_DSArmrestscreen1_TOW->Shoulder1Pressure9 = DBCResolver2_B.CAN2Unpack_o9_f;

  /* S-Function (scanunpack): '<S13>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shoulder2PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S13>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.Shoulder2PD_Msg.Length) &&
        (DBCResolver2_U.Shoulder2PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((770 == DBCResolver2_U.Shoulder2PD_Msg.ID) && (0U ==
           DBCResolver2_U.Shoulder2PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[1]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_a = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_c = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[2]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[3]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_l = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[3]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[4]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_k = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[4]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_m = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_f = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[5]) & (uint8_T)(0xC0U))
                    >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[6]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_l = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[6]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[7]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_a = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[7]) & (uint8_T)(0xFCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_a = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_n = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[0]) & (uint8_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[1]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_f = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_f = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shoulder2PD_Msg.Data[0]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_a = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/Shoulder2PD' incorporates:
   *  BusCreator generated from: '<Root>/Shoulder2PD'
   */
  arg_Shoulder1PD1->Shoulder2Startbit = DBCResolver2_B.CAN2Unpack_o12_f;
  arg_Shoulder1PD1->Shoulder2Stopbit = DBCResolver2_B.CAN2Unpack_o13_a;
  arg_Shoulder1PD1->Shoulder2Reserved = DBCResolver2_B.CAN2Unpack_o10_n;
  arg_Shoulder1PD1->Shoulder2Size = DBCResolver2_B.CAN2Unpack_o11_f;
  arg_Shoulder1PD1->Shoulder2Pressure1 = DBCResolver2_B.CAN2Unpack_o1_a;
  arg_Shoulder1PD1->Shoulder2Pressure2 = DBCResolver2_B.CAN2Unpack_o2_c;
  arg_Shoulder1PD1->Shoulder2Pressure3 = DBCResolver2_B.CAN2Unpack_o3_l;
  arg_Shoulder1PD1->Shoulder2Pressure4 = DBCResolver2_B.CAN2Unpack_o4_k;
  arg_Shoulder1PD1->Shoulder2Pressure5 = DBCResolver2_B.CAN2Unpack_o5_m;
  arg_Shoulder1PD1->Shoulder2Pressure6 = DBCResolver2_B.CAN2Unpack_o6_f;
  arg_Shoulder1PD1->Shoulder2Pressure7 = DBCResolver2_B.CAN2Unpack_o7_l;
  arg_Shoulder1PD1->Shoulder2Pressure8 = DBCResolver2_B.CAN2Unpack_o8_a;
  arg_Shoulder1PD1->Shoulder2Pressure9 = DBCResolver2_B.CAN2Unpack_o9_a;

  /* S-Function (scanunpack): '<S1>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/BackPD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S1>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.BackPD_Msg.Length) && (DBCResolver2_U.BackPD_Msg.ID
         != INVALID_CAN_ID) ) {
      if ((771 == DBCResolver2_U.BackPD_Msg.ID) && (0U ==
           DBCResolver2_U.BackPD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[1]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_o = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_m = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[2]) & (uint8_T)(0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.BackPD_Msg.Data[3]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_m = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[3]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.BackPD_Msg.Data[4]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_g = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[4]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_k = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_e = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.BackPD_Msg.Data[6]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_n = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[6]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.BackPD_Msg.Data[7]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_m = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[7]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_d = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[0]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_d2 = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[0]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.BackPD_Msg.Data[1]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_h = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_g = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BackPD_Msg.Data[0]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_h = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/BackPD' incorporates:
   *  BusCreator generated from: '<Root>/BackPD'
   */
  arg_DSArmrestscreen1_THREE->BackStartbit = DBCResolver2_B.CAN2Unpack_o12_g;
  arg_DSArmrestscreen1_THREE->BackStopbit = DBCResolver2_B.CAN2Unpack_o13_h;
  arg_DSArmrestscreen1_THREE->BackReserved = DBCResolver2_B.CAN2Unpack_o10_d2;
  arg_DSArmrestscreen1_THREE->BackSize = DBCResolver2_B.CAN2Unpack_o11_h;
  arg_DSArmrestscreen1_THREE->BackPressure1 = DBCResolver2_B.CAN2Unpack_o1_o;
  arg_DSArmrestscreen1_THREE->BackPressure2 = DBCResolver2_B.CAN2Unpack_o2_m;
  arg_DSArmrestscreen1_THREE->BackPressure3 = DBCResolver2_B.CAN2Unpack_o3_m;
  arg_DSArmrestscreen1_THREE->BackPressure4 = DBCResolver2_B.CAN2Unpack_o4_g;
  arg_DSArmrestscreen1_THREE->BackPressure5 = DBCResolver2_B.CAN2Unpack_o5_k;
  arg_DSArmrestscreen1_THREE->BackPressure6 = DBCResolver2_B.CAN2Unpack_o6_e;
  arg_DSArmrestscreen1_THREE->BackPressure7 = DBCResolver2_B.CAN2Unpack_o7_n;
  arg_DSArmrestscreen1_THREE->BackPressure8 = DBCResolver2_B.CAN2Unpack_o8_m;
  arg_DSArmrestscreen1_THREE->BackPressure9 = DBCResolver2_B.CAN2Unpack_o9_d;

  /* S-Function (scanunpack): '<S8>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/HipPD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S8>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.HipPD_Msg.Length) && (DBCResolver2_U.HipPD_Msg.ID
         != INVALID_CAN_ID) ) {
      if ((772 == DBCResolver2_U.HipPD_Msg.ID) && (0U ==
           DBCResolver2_U.HipPD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[1]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_k = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_a = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[2]) & (uint8_T)(0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HipPD_Msg.Data[3]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_h = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[3]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HipPD_Msg.Data[4]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_e = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[4]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_a = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_ft = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HipPD_Msg.Data[6]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_h = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[6]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HipPD_Msg.Data[7]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_b = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[7]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_j = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[0]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_o = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[0]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.HipPD_Msg.Data[1]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_a = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_d = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.HipPD_Msg.Data[0]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_d = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/HipPD' incorporates:
   *  BusCreator generated from: '<Root>/HipPD'
   */
  arg_DSArmrestscreen2_One->HipStartbit = DBCResolver2_B.CAN2Unpack_o12_d;
  arg_DSArmrestscreen2_One->HipStopbit = DBCResolver2_B.CAN2Unpack_o13_d;
  arg_DSArmrestscreen2_One->HipReserved = DBCResolver2_B.CAN2Unpack_o10_o;
  arg_DSArmrestscreen2_One->HipSize = DBCResolver2_B.CAN2Unpack_o11_a;
  arg_DSArmrestscreen2_One->HipPressure1 = DBCResolver2_B.CAN2Unpack_o1_k;
  arg_DSArmrestscreen2_One->HipPressure2 = DBCResolver2_B.CAN2Unpack_o2_a;
  arg_DSArmrestscreen2_One->HipPressure3 = DBCResolver2_B.CAN2Unpack_o3_h;
  arg_DSArmrestscreen2_One->HipPressure4 = DBCResolver2_B.CAN2Unpack_o4_e;
  arg_DSArmrestscreen2_One->HipPressure5 = DBCResolver2_B.CAN2Unpack_o5_a;
  arg_DSArmrestscreen2_One->HipPressure6 = DBCResolver2_B.CAN2Unpack_o6_ft;
  arg_DSArmrestscreen2_One->HipPressure7 = DBCResolver2_B.CAN2Unpack_o7_h;
  arg_DSArmrestscreen2_One->HipPressure8 = DBCResolver2_B.CAN2Unpack_o8_b;
  arg_DSArmrestscreen2_One->HipPressure9 = DBCResolver2_B.CAN2Unpack_o9_j;

  /* S-Function (scanunpack): '<S14>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/ThighPD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S14>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.ThighPD_Msg.Length) &&
        (DBCResolver2_U.ThighPD_Msg.ID != INVALID_CAN_ID) ) {
      if ((773 == DBCResolver2_U.ThighPD_Msg.ID) && (0U ==
           DBCResolver2_U.ThighPD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[1]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_e = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_au = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[2]) & (uint8_T)(0xC0U)) >>
                    6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.ThighPD_Msg.Data[3]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_p = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[3]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.ThighPD_Msg.Data[4]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_b = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[4]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_h = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_fr = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[5]) & (uint8_T)(0xC0U)) >>
                    6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.ThighPD_Msg.Data[6]) & (uint8_T)(0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_m = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[6]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.ThighPD_Msg.Data[7]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_aa = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[7]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_k = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[0]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_f = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[0]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.ThighPD_Msg.Data[1]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_b = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_fo = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.ThighPD_Msg.Data[0]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_j = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/ThighPD' incorporates:
   *  BusCreator generated from: '<Root>/ThighPD'
   */
  arg_DSArmrestscreen2_TOW->ThighStartbit = DBCResolver2_B.CAN2Unpack_o12_fo;
  arg_DSArmrestscreen2_TOW->ThighStopbit = DBCResolver2_B.CAN2Unpack_o13_j;
  arg_DSArmrestscreen2_TOW->ThighReserved = DBCResolver2_B.CAN2Unpack_o10_f;
  arg_DSArmrestscreen2_TOW->ThighSize = DBCResolver2_B.CAN2Unpack_o11_b;
  arg_DSArmrestscreen2_TOW->ThighPressure1 = DBCResolver2_B.CAN2Unpack_o1_e;
  arg_DSArmrestscreen2_TOW->ThighPressure2 = DBCResolver2_B.CAN2Unpack_o2_au;
  arg_DSArmrestscreen2_TOW->ThighPressure3 = DBCResolver2_B.CAN2Unpack_o3_p;
  arg_DSArmrestscreen2_TOW->ThighPressure4 = DBCResolver2_B.CAN2Unpack_o4_b;
  arg_DSArmrestscreen2_TOW->ThighPressure5 = DBCResolver2_B.CAN2Unpack_o5_h;
  arg_DSArmrestscreen2_TOW->ThighPressure6 = DBCResolver2_B.CAN2Unpack_o6_fr;
  arg_DSArmrestscreen2_TOW->ThighPressure7 = DBCResolver2_B.CAN2Unpack_o7_m;
  arg_DSArmrestscreen2_TOW->ThighPressure8 = DBCResolver2_B.CAN2Unpack_o8_aa;
  arg_DSArmrestscreen2_TOW->ThighPressure9 = DBCResolver2_B.CAN2Unpack_o9_k;

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  Inport: '<Root>/DorsalFlank1PD_Msg'
   */
  DBCResolver2_B.BusCreator = *arg_Msg6;

  /* S-Function (scanunpack): '<S5>/CAN1 Unpack' */
  {
    /* S-Function (scanunpack): '<S5>/CAN1 Unpack' */
    if ((8 == DBCResolver2_B.BusCreator.Length) && (DBCResolver2_B.BusCreator.ID
         != INVALID_CAN_ID) ) {
      if ((544 == DBCResolver2_B.BusCreator.ID) && (0U ==
           DBCResolver2_B.BusCreator.Extended) ) {
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
                    (DBCResolver2_B.BusCreator.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DorsalFlank1PD' incorporates:
   *  BusCreator generated from: '<Root>/DorsalFlank1PD'
   */
  arg_DSArmrestscreen2_THREE->CabinAtmosphereSts = DBCResolver2_B.CAN1Unpack;

  /* S-Function (scanunpack): '<S6>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/DorsalFlank2PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S6>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.DorsalFlank2PD_Msg.Length) &&
        (DBCResolver2_U.DorsalFlank2PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((775 == DBCResolver2_U.DorsalFlank2PD_Msg.ID) && (0U ==
           DBCResolver2_U.DorsalFlank2PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[1]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_on = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[2]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_d = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[2]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[3]) & (uint8_T)(0xFU))
                    << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_g = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[3]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[4]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_f = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[4]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_a1 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[5]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_h = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[5]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[6]) & (uint8_T)(0xFU))
                    << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_o = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[6]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[7]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_b1 = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[7]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_g = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[0]) & (uint8_T)(0xCU))
                    >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_l = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[0]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[1]) & (uint8_T)(0x3U))
                    << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_n = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_n = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.DorsalFlank2PD_Msg.Data[0]) & (uint8_T)(0x2U))
                    >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_e = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DorsalFlank2PD' incorporates:
   *  BusCreator generated from: '<Root>/DorsalFlank2PD'
   */
  arg_PMArmrestscreen1_ONE->DorsalFlank2Startbit =
    DBCResolver2_B.CAN2Unpack_o12_n;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Stopbit =
    DBCResolver2_B.CAN2Unpack_o13_e;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Reserved =
    DBCResolver2_B.CAN2Unpack_o10_l;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Size = DBCResolver2_B.CAN2Unpack_o11_n;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure1 =
    DBCResolver2_B.CAN2Unpack_o1_on;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure2 =
    DBCResolver2_B.CAN2Unpack_o2_d;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure3 =
    DBCResolver2_B.CAN2Unpack_o3_g;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure4 =
    DBCResolver2_B.CAN2Unpack_o4_f;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure5 =
    DBCResolver2_B.CAN2Unpack_o5_a1;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure6 =
    DBCResolver2_B.CAN2Unpack_o6_h;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure7 =
    DBCResolver2_B.CAN2Unpack_o7_o;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure8 =
    DBCResolver2_B.CAN2Unpack_o8_b1;
  arg_PMArmrestscreen1_ONE->DorsalFlank2Pressure9 =
    DBCResolver2_B.CAN2Unpack_o9_g;

  /* S-Function (scanunpack): '<S3>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/CushionFlank1PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S3>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.CushionFlank1PD_Msg.Length) &&
        (DBCResolver2_U.CushionFlank1PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((776 == DBCResolver2_U.CushionFlank1PD_Msg.ID) && (0U ==
           DBCResolver2_U.CushionFlank1PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[1]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_ja = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[2]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_fg = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[2]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[3]) & (uint8_T)
                    (0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_n = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[3]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[4]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_fk = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[4]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_i = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[5]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_a = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[5]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[6]) & (uint8_T)
                    (0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_mz = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[6]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[7]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_f = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[7]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_p = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[0]) & (uint8_T)
                    (0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_i = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[0]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[1]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_e = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[0]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_b = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank1PD_Msg.Data[0]) & (uint8_T)
                    (0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_o = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/CushionFlank1PD' incorporates:
   *  BusCreator generated from: '<Root>/CushionFlank1PD'
   */
  arg_PMArmrestscreen1_TOW->CushionFlank1Startbit =
    DBCResolver2_B.CAN2Unpack_o12_b;
  arg_PMArmrestscreen1_TOW->CushionFlank1Stopbit =
    DBCResolver2_B.CAN2Unpack_o13_o;
  arg_PMArmrestscreen1_TOW->CushionFlank1Reserved =
    DBCResolver2_B.CAN2Unpack_o10_i;
  arg_PMArmrestscreen1_TOW->CushionFlank1Size = DBCResolver2_B.CAN2Unpack_o11_e;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure1 =
    DBCResolver2_B.CAN2Unpack_o1_ja;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure2 =
    DBCResolver2_B.CAN2Unpack_o2_fg;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure3 =
    DBCResolver2_B.CAN2Unpack_o3_n;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure4 =
    DBCResolver2_B.CAN2Unpack_o4_fk;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure5 =
    DBCResolver2_B.CAN2Unpack_o5_i;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure6 =
    DBCResolver2_B.CAN2Unpack_o6_a;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure7 =
    DBCResolver2_B.CAN2Unpack_o7_mz;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure8 =
    DBCResolver2_B.CAN2Unpack_o8_f;
  arg_PMArmrestscreen1_TOW->CushionFlank1Pressure9 =
    DBCResolver2_B.CAN2Unpack_o9_p;

  /* S-Function (scanunpack): '<S4>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/CushionFlank2PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S4>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.CushionFlank2PD_Msg.Length) &&
        (DBCResolver2_U.CushionFlank2PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((777 == DBCResolver2_U.CushionFlank2PD_Msg.ID) && (0U ==
           DBCResolver2_U.CushionFlank2PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[1]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_n = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[2]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_dj = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[2]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[3]) & (uint8_T)
                    (0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_lx = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[3]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[4]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_dc = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[4]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_lt = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[5]) & (uint8_T)
                    (0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_o = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[5]) & (uint8_T)
                    (0xC0U)) >> 6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[6]) & (uint8_T)
                    (0xFU)) << 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_f = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[6]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[7]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_i = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[7]) & (uint8_T)
                    (0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_al = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[0]) & (uint8_T)
                    (0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_im = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[0]) & (uint8_T)
                    (0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[1]) & (uint8_T)
                    (0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_l = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[0]) & (uint8_T)
                    (0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_ge = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.CushionFlank2PD_Msg.Data[0]) & (uint8_T)
                    (0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_m = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/CushionFlank2PD' incorporates:
   *  BusCreator generated from: '<Root>/CushionFlank2PD'
   */
  arg_PMArmrestscreen1_TOW1->CushionFlank2Startbit =
    DBCResolver2_B.CAN2Unpack_o12_ge;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Stopbit =
    DBCResolver2_B.CAN2Unpack_o13_m;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Reserved =
    DBCResolver2_B.CAN2Unpack_o10_im;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Size = DBCResolver2_B.CAN2Unpack_o11_l;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure1 =
    DBCResolver2_B.CAN2Unpack_o1_n;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure2 =
    DBCResolver2_B.CAN2Unpack_o2_dj;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure3 =
    DBCResolver2_B.CAN2Unpack_o3_lx;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure4 =
    DBCResolver2_B.CAN2Unpack_o4_dc;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure5 =
    DBCResolver2_B.CAN2Unpack_o5_lt;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure6 =
    DBCResolver2_B.CAN2Unpack_o6_o;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure7 =
    DBCResolver2_B.CAN2Unpack_o7_f;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure8 =
    DBCResolver2_B.CAN2Unpack_o8_i;
  arg_PMArmrestscreen1_TOW1->CushionFlank2Pressure9 =
    DBCResolver2_B.CAN2Unpack_o9_al;

  /* S-Function (scanunpack): '<S10>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shank1PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S10>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.Shank1PD_Msg.Length) &&
        (DBCResolver2_U.Shank1PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((776 == DBCResolver2_U.Shank1PD_Msg.ID) && (0U ==
           DBCResolver2_U.Shank1PD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[1]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_h = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[2]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_b = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 22
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[2]) & (uint8_T)(0xC0U)) >>
                    6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shank1PD_Msg.Data[3]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_d = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[3]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shank1PD_Msg.Data[4]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_bn = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 34
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[4]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o5_n = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[5]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o6_j = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[5]) & (uint8_T)(0xC0U)) >>
                    6);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shank1PD_Msg.Data[6]) & (uint8_T)(0xFU)) <<
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o7_i = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[6]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shank1PD_Msg.Data[7]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o8_g = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 58
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[7]) & (uint8_T)(0xFCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o9_gu = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o10_a = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 4
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[0]) & (uint8_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver2_U.Shank1PD_Msg.Data[1]) & (uint8_T)(0x3U)) <<
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o11_es = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o12_bf = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.Shank1PD_Msg.Data[0]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o13_o4 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/Shank1PD' incorporates:
   *  BusCreator generated from: '<Root>/Shank1PD'
   */
  arg_PMArmrestscreen2_ONE->CushionFlank1Startbit =
    DBCResolver2_B.CAN2Unpack_o12_bf;
  arg_PMArmrestscreen2_ONE->CushionFlank1Stopbit =
    DBCResolver2_B.CAN2Unpack_o13_o4;
  arg_PMArmrestscreen2_ONE->CushionFlank1Reserved =
    DBCResolver2_B.CAN2Unpack_o10_a;
  arg_PMArmrestscreen2_ONE->CushionFlank1Size = DBCResolver2_B.CAN2Unpack_o11_es;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure1 =
    DBCResolver2_B.CAN2Unpack_o1_h;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure2 =
    DBCResolver2_B.CAN2Unpack_o2_b;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure3 =
    DBCResolver2_B.CAN2Unpack_o3_d;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure4 =
    DBCResolver2_B.CAN2Unpack_o4_bn;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure5 =
    DBCResolver2_B.CAN2Unpack_o5_n;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure6 =
    DBCResolver2_B.CAN2Unpack_o6_j;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure7 =
    DBCResolver2_B.CAN2Unpack_o7_i;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure8 =
    DBCResolver2_B.CAN2Unpack_o8_g;
  arg_PMArmrestscreen2_ONE->CushionFlank1Pressure9 =
    DBCResolver2_B.CAN2Unpack_o9_gu;

  /* S-Function (scanunpack): '<S11>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/Shank2PD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S11>/CAN1 Unpack' */
    if ((8 == DBCResolver2_U.Shank2PD_Msg.Length) &&
        (DBCResolver2_U.Shank2PD_Msg.ID != INVALID_CAN_ID) ) {
      if ((512 == DBCResolver2_U.Shank2PD_Msg.ID) && (0U ==
           DBCResolver2_U.Shank2PD_Msg.Extended) ) {
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[2]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o1 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o2 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              result = result * 2U;
              DBCResolver2_B.CAN1Unpack_o3 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[2]) & (uint8_T)(0x70U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o4 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o5 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o6 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[5]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o7 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[0]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o8 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[3]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o9 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o10 = result;
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
                    (DBCResolver2_U.Shank2PD_Msg.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN1Unpack_o11 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/Shank2PD' incorporates:
   *  BusCreator generated from: '<Root>/Shank2PD'
   */
  arg_PMArmrestscreen2_TOW->SceneSwitchReq = DBCResolver2_B.CAN1Unpack_o7;
  arg_PMArmrestscreen2_TOW->TailLightMCmd = DBCResolver2_B.CAN1Unpack_o10;
  arg_PMArmrestscreen2_TOW->SpotLightMCmd = DBCResolver2_B.CAN1Unpack_o8;
  arg_PMArmrestscreen2_TOW->HeadLightMCmd = DBCResolver2_B.CAN1Unpack_o6;
  arg_PMArmrestscreen2_TOW->SteerWheelCmd = DBCResolver2_B.CAN1Unpack_o9;
  arg_PMArmrestscreen2_TOW->CabinTOLEDHCmd = DBCResolver2_B.CAN1Unpack_o5;
  arg_PMArmrestscreen2_TOW->CabinTOLEDCmd = DBCResolver2_B.CAN1Unpack_o4;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereMCmd = DBCResolver2_B.CAN1Unpack_o3;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereCCmd = DBCResolver2_B.CAN1Unpack_o2;
  arg_PMArmrestscreen2_TOW->CabinAtmosphereBCmd = DBCResolver2_B.CAN1Unpack_o1;
  arg_PMArmrestscreen2_TOW->VideoDisplay = DBCResolver2_B.CAN1Unpack_o11;

  /* S-Function (scanunpack): '<S15>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/WeightDataFramePD_Msg'
   */
  {
    /* S-Function (scanunpack): '<S15>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.WeightDataFramePD_Msg.Length) &&
        (DBCResolver2_U.WeightDataFramePD_Msg.ID != INVALID_CAN_ID) ) {
      if ((780 == DBCResolver2_U.WeightDataFramePD_Msg.ID) && (0U ==
           DBCResolver2_U.WeightDataFramePD_Msg.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint16_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)
                    (DBCResolver2_U.WeightDataFramePD_Msg.Data[0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (DBCResolver2_U.WeightDataFramePD_Msg.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint16_T) (unpackedValue);
            }

            {
              uint16_T result = (uint16_T) outValue;
              DBCResolver2_B.CAN2Unpack = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/WeightDataFramePD' incorporates:
   *  BusCreator generated from: '<Root>/WeightDataFramePD'
   */
  arg_PMArmrestscreen2_TOW1->WeightData = DBCResolver2_B.CAN2Unpack;

  /* S-Function (scanunpack): '<S9>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/PressurePadBootLoader_Msg1'
   */
  {
    /* S-Function (scanunpack): '<S9>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.PressurePadBootLoader_Msg1.Length) &&
        (DBCResolver2_U.PressurePadBootLoader_Msg1.ID != INVALID_CAN_ID) ) {
      if ((781 == DBCResolver2_U.PressurePadBootLoader_Msg1.ID) && (0U ==
           DBCResolver2_U.PressurePadBootLoader_Msg1.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint16_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)
                    (DBCResolver2_U.PressurePadBootLoader_Msg1.Data[0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (DBCResolver2_U.PressurePadBootLoader_Msg1.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint16_T) (unpackedValue);
            }

            {
              uint16_T result = (uint16_T) outValue;
              DBCResolver2_B.CAN2Unpack_e = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/PressurePadBootLoader' incorporates:
   *  BusCreator generated from: '<Root>/PressurePadBootLoader'
   */
  arg_WeightDataFramePD1->ThighSizeorPressure = DBCResolver2_B.CAN2Unpack_e;

  /* S-Function (scanunpack): '<S2>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/BoostAverage_Msg2'
   */
  {
    /* S-Function (scanunpack): '<S2>/CAN2 Unpack' */
    if ((8 == DBCResolver2_U.BoostAverage_Msg2.Length) &&
        (DBCResolver2_U.BoostAverage_Msg2.ID != INVALID_CAN_ID) ) {
      if ((782 == DBCResolver2_U.BoostAverage_Msg2.ID) && (0U ==
           DBCResolver2_U.BoostAverage_Msg2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BoostAverage_Msg2.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o1_b = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 24
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BoostAverage_Msg2.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o2_ff = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BoostAverage_Msg2.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o3_hh = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                    (DBCResolver2_U.BoostAverage_Msg2.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver2_B.CAN2Unpack_o4_a = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/BoostAverage' incorporates:
   *  BusCreator generated from: '<Root>/BoostAverage'
   */
  arg_WeightDataFramePD2->DorsalFlankLAverage = DBCResolver2_B.CAN2Unpack_o3_hh;
  arg_WeightDataFramePD2->DorsalFlankRAverage = DBCResolver2_B.CAN2Unpack_o4_a;
  arg_WeightDataFramePD2->CushionLAverage = DBCResolver2_B.CAN2Unpack_o1_b;
  arg_WeightDataFramePD2->CushionRAverage = DBCResolver2_B.CAN2Unpack_o2_ff;
}

#if 0
/* Model initialize function */
void PC2DLL_Interface2_initialize(void)
{
  /* Start for S-Function (scanunpack): '<S7>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/HeadPillowPD_Msg'
   */

  /*-----------S-Function Block: <S7>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S12>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shoulder1PD_Msg'
   */

  /*-----------S-Function Block: <S12>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S13>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shoulder2PD_Msg'
   */

  /*-----------S-Function Block: <S13>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/BackPD_Msg'
   */

  /*-----------S-Function Block: <S1>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S8>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/HipPD_Msg'
   */

  /*-----------S-Function Block: <S8>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S14>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/ThighPD_Msg'
   */

  /*-----------S-Function Block: <S14>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S5>/CAN1 Unpack' */

  /*-----------S-Function Block: <S5>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S6>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/DorsalFlank2PD_Msg'
   */

  /*-----------S-Function Block: <S6>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/CushionFlank1PD_Msg'
   */

  /*-----------S-Function Block: <S3>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/CushionFlank2PD_Msg'
   */

  /*-----------S-Function Block: <S4>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S10>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/Shank1PD_Msg'
   */

  /*-----------S-Function Block: <S10>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/CAN1 Unpack' incorporates:
   *  Inport: '<Root>/Shank2PD_Msg'
   */

  /*-----------S-Function Block: <S11>/CAN1 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S15>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/WeightDataFramePD_Msg'
   */

  /*-----------S-Function Block: <S15>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S9>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/PressurePadBootLoader_Msg1'
   */

  /*-----------S-Function Block: <S9>/CAN2 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S2>/CAN2 Unpack' incorporates:
   *  Inport: '<Root>/BoostAverage_Msg2'
   */

  /*-----------S-Function Block: <S2>/CAN2 Unpack -----------------*/
}
# endif

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

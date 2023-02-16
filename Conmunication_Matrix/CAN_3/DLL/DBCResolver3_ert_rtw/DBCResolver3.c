/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver3.c
 *
 * Code generated for Simulink model 'DBCResolver3'.
 *
 * Model version                  : 2.208
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Dec  6 14:17:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <my_math.h>
#include "DBCResolver3.h"
#include "DBCResolver3_types.h"
#include "CAN3.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_DBCResolver3_T DBCResolver3_B;

/* Block states (default storage) */
DW_DBCResolver3_T DBCResolver3_DW;

/* Real-time model */
static RT_MODEL_DBCResolver3_T DBCResolver3_M_;
RT_MODEL_DBCResolver3_T *const DBCResolver3_M = &DBCResolver3_M_;

/* Model step function */
void PC2DLL_Interface3_step(CAN_MESSAGE_BUS *arg_Msg, DSArmrestscreen1_ONE
  *arg_DSArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg1, DSArmrestscreen1_TWO
  *arg_DSArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg2, DSArmrestscreen1_THREE
  *arg_DSArmrestscreen1_THREE, CAN_MESSAGE_BUS *arg_Msg3, DSArmrestscreen2_ONE
  *arg_DSArmrestscreen2_One, CAN_MESSAGE_BUS *arg_Msg4, DSArmrestscreen2_TWO
  *arg_DSArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg5, DSArmrestscreen2_THREE
  *arg_DSArmrestscreen2_THREE, CAN_MESSAGE_BUS *arg_Msg6, PMArmrestscreen1_ONE
  *arg_PMArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg7, PMArmrestscreen1_TWO
  *arg_PMArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg8, PMArmrestscreen2_ONE
  *arg_PMArmrestscreen2_ONE, CAN_MESSAGE_BUS *arg_Msg9, DSCU1_ONE *arg_DSCU1_ONE,
  CAN_MESSAGE_BUS *arg_Msg10, PMArmrestscreen2_TWO *arg_PMArmrestscreen2_TOW,
  CAN_MESSAGE_BUS *arg_Msg11, DSCU1_TWO *arg_DSCU1_TOW, CAN_MESSAGE_BUS
  *arg_Msg12, DSCU1_THREE *arg_DSCU1_THREE, CAN_MESSAGE_BUS *arg_Msg13,
  DSCU1_FOUR *arg_Output, CAN_MESSAGE_BUS *arg_DSCU1_THREE_Msg1, DSCU2_ONE
  *arg_DSCU1_THREE1, CAN_MESSAGE_BUS *arg_Inport, CAN_MESSAGE_BUS *arg_Inport1,
  CAN_MESSAGE_BUS *arg_Inport2, CAN_MESSAGE_BUS *arg_Inport3, CAN_MESSAGE_BUS
  *arg_Inport4, DSCU1_FIVE *arg_DSCU1_FOUR1, DSCU2_TWO *arg_DSCU1_FOUR2,
  PSCU1_ONE *arg_DSCU1_FOUR3, PSCU1_TWO *arg_DSCU1_FOUR4, PSCU2_ONE
  *arg_DSCU1_FOUR5, PSCU2_TWO *arg_DSCU1_FOUR6, CAN_MESSAGE_BUS *arg_Inport5,
  PMArmrestscreen1_THREE *arg_PMArmrestscreen1_TOW1, CAN_MESSAGE_BUS
  *arg_PMArmrestscreen1_TOW_Msg1, PMArmrestscreen2_THREE
  *arg_PMArmrestscreen2_TOW1, CAN_MESSAGE_BUS *arg_PMArmrestscreen2_TOW_Msg1)
{
  real_T tmp;

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen1One_Msg'
   */
  DBCResolver3_B.BusCreator = *arg_Msg1;

  /* S-Function (scanunpack): '<S1>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S1>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator.Length) && (DBCResolver3_B.BusCreator.ID
         != INVALID_CAN_ID) ) {
      if ((256 == DBCResolver3_B.BusCreator.ID) && (0U ==
           DBCResolver3_B.BusCreator.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_b = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 46
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
                    (DBCResolver3_B.BusCreator.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_j = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 5
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
                    (DBCResolver3_B.BusCreator.Data[0]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_a = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_n = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_c = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 58
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
                    (DBCResolver3_B.BusCreator.Data[7]) & (uint8_T)(0x1CU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_e = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_p = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8 = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator.Data[2]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9 = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator.Data[6]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10 = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 61
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
                    (DBCResolver3_B.BusCreator.Data[7]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11 = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
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
                    (DBCResolver3_B.BusCreator.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12 = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator.Data[3]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13 = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator.Data[6]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14 = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator.Data[7]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15 = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 54
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
                    (DBCResolver3_B.BusCreator.Data[6]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16 = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S2>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen1Tow_Msg2'
   */
  DBCResolver3_B.BusCreator_o = *arg_Msg2;

  /* S-Function (scanunpack): '<S2>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S2>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_o.Length) &&
        (DBCResolver3_B.BusCreator_o.ID != INVALID_CAN_ID) ) {
      if ((257 == DBCResolver3_B.BusCreator_o.ID) && (0U ==
           DBCResolver3_B.BusCreator_o.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_j = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_o.Data[3]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_o = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_o.Data[7]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_g = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 54
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
                    (DBCResolver3_B.BusCreator_o.Data[6]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_f = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_o.Data[5]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_f = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 43
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
                    (DBCResolver3_B.BusCreator_o.Data[5]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_a = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_d = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_l = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[0]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_p = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_h = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
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
                    (DBCResolver3_B.BusCreator_o.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_j = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 37
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
                    (DBCResolver3_B.BusCreator_o.Data[4]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_n = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_o.Data[6]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_j = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_o.Data[6]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_h = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 49
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
                    (DBCResolver3_B.BusCreator_o.Data[6]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_d = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 58
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver3_B.BusCreator_o.Data[7]) & (uint8_T)(0x3CU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_o = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_o.Data[4]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17 = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 32
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
                    (DBCResolver3_B.BusCreator_o.Data[4]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18 = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_o.Data[6]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19 = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 62
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
                    (DBCResolver3_B.BusCreator_o.Data[7]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20 = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 30
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
                    (DBCResolver3_B.BusCreator_o.Data[3]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21 = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 46
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
                    (DBCResolver3_B.BusCreator_o.Data[5]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22 = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S3>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen1_THREE_Msg'
   */
  DBCResolver3_B.BusCreator_c = *arg_Msg3;

  /* S-Function (scanunpack): '<S3>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S3>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_c.Length) &&
        (DBCResolver3_B.BusCreator_c.ID != INVALID_CAN_ID) ) {
      if ((258 == DBCResolver3_B.BusCreator_c.ID) && (0U ==
           DBCResolver3_B.BusCreator_c.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_c.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_f = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_c.Data[2]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_a = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_c.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_j = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_c.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_l = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S4>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen2One_Msg'
   */
  DBCResolver3_B.BusCreator_j = *arg_Msg4;

  /* S-Function (scanunpack): '<S4>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S4>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_j.Length) &&
        (DBCResolver3_B.BusCreator_j.ID != INVALID_CAN_ID) ) {
      if ((261 == DBCResolver3_B.BusCreator_j.ID) && (0U ==
           DBCResolver3_B.BusCreator_j.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_j.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_p = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 46
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
                    (DBCResolver3_B.BusCreator_j.Data[5]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_g = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 5
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
                    (DBCResolver3_B.BusCreator_j.Data[0]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_h = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_j.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_k = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_j.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_n = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 58
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
                    (DBCResolver3_B.BusCreator_j.Data[7]) & (uint8_T)(0x1CU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_ax = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator_j.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_l = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
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
                    (DBCResolver3_B.BusCreator_j.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_b = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_j.Data[6]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_g = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 61
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
                    (DBCResolver3_B.BusCreator_j.Data[7]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_c = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_j.Data[2]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_i = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_j.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_c = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_j.Data[3]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_l = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_j.Data[6]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_m = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_j.Data[7]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_h = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 54
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
                    (DBCResolver3_B.BusCreator_j.Data[6]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_p = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen2_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_b = *arg_Msg5;

  /* S-Function (scanunpack): '<S5>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S5>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_b.Length) &&
        (DBCResolver3_B.BusCreator_b.ID != INVALID_CAN_ID) ) {
      if ((262 == DBCResolver3_B.BusCreator_b.ID) && (0U ==
           DBCResolver3_B.BusCreator_b.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[3]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_l = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_b.Data[3]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_m = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_b.Data[7]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_a5 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 54
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
                    (DBCResolver3_B.BusCreator_b.Data[6]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_fb = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_j = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_b.Data[5]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_m = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 43
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
                    (DBCResolver3_B.BusCreator_b.Data[5]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_c = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_h = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_f = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[0]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_f = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
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
                    (DBCResolver3_B.BusCreator_b.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_k = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 37
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
                    (DBCResolver3_B.BusCreator_b.Data[4]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_cg = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_b.Data[6]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_g = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_b.Data[6]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_g = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 49
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
                    (DBCResolver3_B.BusCreator_b.Data[6]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_e = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 58
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (DBCResolver3_B.BusCreator_b.Data[7]) & (uint8_T)(0x3CU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_k = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_b.Data[4]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_m = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 32
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
                    (DBCResolver3_B.BusCreator_b.Data[4]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_f = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_b.Data[6]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_d = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 62
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
                    (DBCResolver3_B.BusCreator_b.Data[7]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_n = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 30
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
                    (DBCResolver3_B.BusCreator_b.Data[3]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_f = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 46
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
                    (DBCResolver3_B.BusCreator_b.Data[5]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22_l = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S6>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSArmrestscreen2_THREE_Msg'
   */
  DBCResolver3_B.BusCreator_b2 = *arg_Msg6;

  /* S-Function (scanunpack): '<S6>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S6>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_b2.Length) &&
        (DBCResolver3_B.BusCreator_b2.ID != INVALID_CAN_ID) ) {
      if ((263 == DBCResolver3_B.BusCreator_b2.ID) && (0U ==
           DBCResolver3_B.BusCreator_b2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_b2.Data[2]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_o = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_b2.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_d = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
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
                    (DBCResolver3_B.BusCreator_b2.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_j2 = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S14>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen1_One_Msg'
   */
  DBCResolver3_B.BusCreator_d = *arg_Msg7;

  /* S-Function (scanunpack): '<S14>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S14>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_d.Length) &&
        (DBCResolver3_B.BusCreator_d.ID != INVALID_CAN_ID) ) {
      if ((266 == DBCResolver3_B.BusCreator_d.ID) && (0U ==
           DBCResolver3_B.BusCreator_d.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_d.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_lx = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 43
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
                    (DBCResolver3_B.BusCreator_d.Data[5]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_oy = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_d.Data[5]) & (uint8_T)(0x60U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_p = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_d.Data[0]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_p = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_d.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_g = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 61
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
                    (DBCResolver3_B.BusCreator_d.Data[7]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_o = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_d.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_g = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_d.Data[2]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_f = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_d.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_c = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_d.Data[5]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_b = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 59
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
                    (DBCResolver3_B.BusCreator_d.Data[7]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_kz = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
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
                    (DBCResolver3_B.BusCreator_d.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_f = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_d.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_gz = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
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
                    (DBCResolver3_B.BusCreator_d.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_d = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_d.Data[6]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_dw = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_d.Data[6]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_d = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S16>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen1_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_p = *arg_Msg8;

  /* S-Function (scanunpack): '<S16>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S16>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_p.Length) &&
        (DBCResolver3_B.BusCreator_p.ID != INVALID_CAN_ID) ) {
      if ((267 == DBCResolver3_B.BusCreator_p.ID) && (0U ==
           DBCResolver3_B.BusCreator_p.Extended) ) {
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
                    (DBCResolver3_B.BusCreator_p.Data[2]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_e = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_p.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_ov = result;
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
                    (DBCResolver3_B.BusCreator_p.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_k = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 8
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
                    (DBCResolver3_B.BusCreator_p.Data[1]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_i = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 10
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
                    (DBCResolver3_B.BusCreator_p.Data[1]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_gc = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 4
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
                    (DBCResolver3_B.BusCreator_p.Data[0]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_l = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_p.Data[4]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_m = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 32
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
                    (DBCResolver3_B.BusCreator_p.Data[4]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_a = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_p.Data[3]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_j = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_p.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_a = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 59
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
                    (DBCResolver3_B.BusCreator_p.Data[7]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_h = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_p.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_a = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_p.Data[0]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_ji = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S15>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen1_THREE_Msg'
   */
  DBCResolver3_B.BusCreator_ps = *arg_PMArmrestscreen1_TOW_Msg1;

  /* S-Function (scanunpack): '<S15>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S15>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_ps.Length) &&
        (DBCResolver3_B.BusCreator_ps.ID != INVALID_CAN_ID) ) {
      if ((268 == DBCResolver3_B.BusCreator_ps.ID) && (0U ==
           DBCResolver3_B.BusCreator_ps.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_ps.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_g = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
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
                    (DBCResolver3_B.BusCreator_ps.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_e = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_ps.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_f = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_ps.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_nm = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S17>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen2_ONE_Msg'
   */
  DBCResolver3_B.BusCreator_g = *arg_Msg9;

  /* S-Function (scanunpack): '<S17>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S17>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_g.Length) &&
        (DBCResolver3_B.BusCreator_g.ID != INVALID_CAN_ID) ) {
      if ((269 == DBCResolver3_B.BusCreator_g.ID) && (0U ==
           DBCResolver3_B.BusCreator_g.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_g.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_c = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 43
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
                    (DBCResolver3_B.BusCreator_g.Data[5]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_eq = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_g.Data[5]) & (uint8_T)(0x60U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_b = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_g.Data[0]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_a = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_g.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_h = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 61
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
                    (DBCResolver3_B.BusCreator_g.Data[7]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_j = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_g.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_b = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_g.Data[2]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_g = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_g.Data[2]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_a = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_g.Data[5]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_n = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 59
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
                    (DBCResolver3_B.BusCreator_g.Data[7]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_a = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
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
                    (DBCResolver3_B.BusCreator_g.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_h = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_g.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_p = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
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
                    (DBCResolver3_B.BusCreator_g.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_mq = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_g.Data[6]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_k = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_g.Data[6]) & (uint8_T)(0x30U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_b = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S18>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen2_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_e = *arg_Msg11;

  /* S-Function (scanunpack): '<S18>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S18>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_e.Length) &&
        (DBCResolver3_B.BusCreator_e.ID != INVALID_CAN_ID) ) {
      if ((270 == DBCResolver3_B.BusCreator_e.ID) && (0U ==
           DBCResolver3_B.BusCreator_e.Extended) ) {
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
                    (DBCResolver3_B.BusCreator_e.Data[2]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_i = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_e.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_d5 = result;
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
                    (DBCResolver3_B.BusCreator_e.Data[0]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_m = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 8
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
                    (DBCResolver3_B.BusCreator_e.Data[1]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_b = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 10
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
                    (DBCResolver3_B.BusCreator_e.Data[1]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_b = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 4
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
                    (DBCResolver3_B.BusCreator_e.Data[0]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_b = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_e.Data[4]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_a = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 32
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
                    (DBCResolver3_B.BusCreator_e.Data[4]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_m = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_e.Data[3]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_h = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_e.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_e = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 59
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
                    (DBCResolver3_B.BusCreator_e.Data[7]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_b = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_e.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_i = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_e.Data[0]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_pt = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S19>/Bus Creator' incorporates:
   *  Inport: '<Root>/PMArmrestscreen2_THREE_Msg'
   */
  DBCResolver3_B.BusCreator_oj = *arg_PMArmrestscreen2_TOW_Msg1;

  /* S-Function (scanunpack): '<S19>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S19>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_oj.Length) &&
        (DBCResolver3_B.BusCreator_oj.ID != INVALID_CAN_ID) ) {
      if ((271 == DBCResolver3_B.BusCreator_oj.ID) && (0U ==
           DBCResolver3_B.BusCreator_oj.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_oj.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_p0 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
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
                    (DBCResolver3_B.BusCreator_oj.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_l = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_oj.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_e = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_oj.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_e = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S7>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU1_ONE_Msg'
   */
  DBCResolver3_B.BusCreator_oy = *arg_Msg10;

  /* S-Function (scanunpack): '<S7>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S7>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_oy.Length) &&
        (DBCResolver3_B.BusCreator_oy.ID != INVALID_CAN_ID) ) {
      if ((276 == DBCResolver3_B.BusCreator_oy.ID) && (0U ==
           DBCResolver3_B.BusCreator_oy.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_oy.Data[5]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_cq = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 39
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_er = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 42
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
                    (DBCResolver3_B.BusCreator_oy.Data[5]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_g0 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 41
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
                    (DBCResolver3_B.BusCreator_oy.Data[5]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_kt = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_oy.Data[6]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_e = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 51
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
                    (DBCResolver3_B.BusCreator_oy.Data[6]) & (uint8_T)(0x38U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_c = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_k = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 30
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0xC0U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_p = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
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
                    (DBCResolver3_B.BusCreator_oy.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_k = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
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
                    (DBCResolver3_B.BusCreator_oy.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_l = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
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
                    (DBCResolver3_B.BusCreator_oy.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_f = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
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
                    (DBCResolver3_B.BusCreator_oy.Data[0]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_l = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 38
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_jw = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 37
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_hm = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 29
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_i = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 28
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_f = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 43
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
                    (DBCResolver3_B.BusCreator_oy.Data[5]) & (uint8_T)(0x18U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_n = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_oy.Data[5]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_a = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_n = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 26
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_b = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_oy.Data[3]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_e = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_oy.Data[7]) & (uint8_T)(0x7U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22_d = result;
            }
          }

          /* --------------- START Unpacking signal 22 ------------------
           *  startBit                = 33
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x6U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o23 = result;
            }
          }

          /* --------------- START Unpacking signal 23 ------------------
           *  startBit                = 36
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o24 = result;
            }
          }

          /* --------------- START Unpacking signal 24 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_oy.Data[4]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o25 = result;
            }
          }
        }
      }
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/DSCU1Tow_ID_0X1' */
  /* BusCreator: '<S9>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU1_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_cs = *arg_Msg12;

  /* S-Function (scanunpack): '<S9>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S9>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_cs.Length) &&
        (DBCResolver3_B.BusCreator_cs.ID != INVALID_CAN_ID) ) {
      if ((277 == DBCResolver3_B.BusCreator_cs.ID) && (0U ==
           DBCResolver3_B.BusCreator_cs.Extended) ) {
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
                    (DBCResolver3_B.BusCreator_cs.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_au = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 60
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_ej = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 61
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_ee = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 62
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_bc = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 63
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_m = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_cs.Data[3]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_mt = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_cs.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_ar = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 54
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_c = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 55
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_df = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_cs.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_lw = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
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
                    (DBCResolver3_B.BusCreator_cs.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_g = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 58
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_o = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 59
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_h = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 52
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_mk = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 53
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_l = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 26
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
                    (DBCResolver3_B.BusCreator_cs.Data[3]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_fr = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_o = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 49
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_b = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 50
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_l = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 51
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
                    (DBCResolver3_B.BusCreator_cs.Data[6]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_j = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_p = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 57
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
                    (DBCResolver3_B.BusCreator_cs.Data[7]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22_d0 = result;
            }
          }

          /* --------------- START Unpacking signal 22 ------------------
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
                    (DBCResolver3_B.BusCreator_cs.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o23_g = result;
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/DSCU1Tow_ID_0X1' */

  /* Outport: '<Root>/DSCU1_TOW' incorporates:
   *  BusCreator generated from: '<Root>/DSCU1_TOW'
   */
  arg_DSCU1_TOW->CushionPressureSts1 = DBCResolver3_B.CAN3Unpack_o1_au;
  arg_DSCU1_TOW->LegPadPressureSts1 = DBCResolver3_B.CAN3Unpack_o23_g;
  arg_DSCU1_TOW->DSCushionFlankActionSts1 = DBCResolver3_B.CAN3Unpack_o10_lw;
  arg_DSCU1_TOW->DSBackrestFlankActionSts1 = DBCResolver3_B.CAN3Unpack_o6_mt;
  arg_DSCU1_TOW->DSScreenOnOffSts = DBCResolver3_B.CAN3Unpack_o16_fr;
  arg_DSCU1_TOW->DSCushionFlankAirbagPreSts1 = DBCResolver3_B.CAN3Unpack_o11_g;
  arg_DSCU1_TOW->DSBackrestFlankAirbagPreSts1 = DBCResolver3_B.CAN3Unpack_o7_ar;
  arg_DSCU1_TOW->DSSlideRailMotor1Fault = DBCResolver3_B.CAN3Unpack_o17_o;
  arg_DSCU1_TOW->DSSlideRailMotor1HallFault = DBCResolver3_B.CAN3Unpack_o18_b;
  arg_DSCU1_TOW->DSSlideRailMotor2Fault = DBCResolver3_B.CAN3Unpack_o19_l;
  arg_DSCU1_TOW->DSSlideRailMotor2HallFault = DBCResolver3_B.CAN3Unpack_o20_j;
  arg_DSCU1_TOW->DSHighProfileMotorFault = DBCResolver3_B.CAN3Unpack_o14_mk;
  arg_DSCU1_TOW->DSHighProfileMotorHallFault = DBCResolver3_B.CAN3Unpack_o15_l;
  arg_DSCU1_TOW->DSBackrestMotorFault = DBCResolver3_B.CAN3Unpack_o8_c;
  arg_DSCU1_TOW->DSBackrestMotorHallFault = DBCResolver3_B.CAN3Unpack_o9_df;
  arg_DSCU1_TOW->DSZeroGravityMotorFault = DBCResolver3_B.CAN3Unpack_o21_p;
  arg_DSCU1_TOW->DSZeroGravityMotorHallFault = DBCResolver3_B.CAN3Unpack_o22_d0;
  arg_DSCU1_TOW->DSHeadrestMotorFault = DBCResolver3_B.CAN3Unpack_o12_o;
  arg_DSCU1_TOW->DSHeadrestMotorHallFault = DBCResolver3_B.CAN3Unpack_o13_h;
  arg_DSCU1_TOW->DSArmrestTurnoverLMotorFault = DBCResolver3_B.CAN3Unpack_o2_ej;
  arg_DSCU1_TOW->DSArmrestTurnoverLMotorHallFault =
    DBCResolver3_B.CAN3Unpack_o3_ee;
  arg_DSCU1_TOW->DSArmrestTurnoverRMotorFault = DBCResolver3_B.CAN3Unpack_o4_bc;
  arg_DSCU1_TOW->DSArmrestTurnoverRMotorHallFault =
    DBCResolver3_B.CAN3Unpack_o5_m;

  /* BusCreator: '<S8>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU1_THREE_Msg'
   */
  DBCResolver3_B.BusCreator_k = *arg_Msg13;

  /* S-Function (scanunpack): '<S8>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S8>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_k.Length) &&
        (DBCResolver3_B.BusCreator_k.ID != INVALID_CAN_ID) ) {
      if ((278 == DBCResolver3_B.BusCreator_k.ID) && (0U ==
           DBCResolver3_B.BusCreator_k.Extended) ) {
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
                    (DBCResolver3_B.BusCreator_k.Data[2]) & (uint8_T)(0xCU)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_ba = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_k.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_mv = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_k.Data[5]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_ar = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_k.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_b0 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_k.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_nq = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
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
                    (DBCResolver3_B.BusCreator_k.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_g = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DSCU1_THREE' incorporates:
   *  BusCreator generated from: '<Root>/DSCU1_THREE'
   */
  arg_DSCU1_THREE->DSCU1PAmbianceLightM = DBCResolver3_B.CAN3Unpack_o6_g;
  arg_DSCU1_THREE->DSCU1PAmbianceLightB = DBCResolver3_B.CAN3Unpack_o5_nq;
  arg_DSCU1_THREE->DSCU1PAmbianceLight = DBCResolver3_B.CAN3Unpack_o4_b0;
  arg_DSCU1_THREE->DSCU1DAmbianceLightM = DBCResolver3_B.CAN3Unpack_o3_ar;
  arg_DSCU1_THREE->DSCU1DAmbianceLightB = DBCResolver3_B.CAN3Unpack_o2_mv;
  arg_DSCU1_THREE->DSCU1DAmbianceLight = DBCResolver3_B.CAN3Unpack_o1_ba;
  arg_DSCU1_THREE->DSCU1ExeSts = 0U;

  /* BusCreator: '<S11>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU1_FOUR_CANMsg'
   */
  DBCResolver3_B.BusCreator_gh = *arg_Msg;

  /* S-Function (scanunpack): '<S11>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S11>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_gh.Length) &&
        (DBCResolver3_B.BusCreator_gh.ID != INVALID_CAN_ID) ) {
      if ((80 == DBCResolver3_B.BusCreator_gh.ID) && (0U ==
           DBCResolver3_B.BusCreator_gh.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 8
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
                    (DBCResolver3_B.BusCreator_gh.Data[1]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_lb = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
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
                    (DBCResolver3_B.BusCreator_gh.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_gh.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_k0 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_gh.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_d = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_gh.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_cv = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_gh.Data[3]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_f = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DSCU1_FOUR' incorporates:
   *  BusCreator generated from: '<Root>/DSCU1_FOUR'
   */
  arg_Output->DSMassageMode1 = DBCResolver3_B.CAN3Unpack_o5_cv;
  arg_Output->DSLumbarLoin1 = DBCResolver3_B.CAN3Unpack_o1_lb;
  arg_Output->DSLumbarVertebra1 = DBCResolver3_B.CAN3Unpack_o3_k0;
  arg_Output->DSMassageSpeed1 = DBCResolver3_B.CAN3Unpack_o6_f;
  arg_Output->DSLumbarLoinPressure1 = DBCResolver3_B.CAN3Unpack_o2_o4;
  arg_Output->DSLumbarVertebraPressure1 = DBCResolver3_B.CAN3Unpack_o4_d;

  /* BusCreator: '<S10>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU1_FIVE_Msg'
   */
  DBCResolver3_B.BusCreator_a = *arg_Inport;

  /* S-Function (scanunpack): '<S10>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S10>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_a.Length) &&
        (DBCResolver3_B.BusCreator_a.ID != INVALID_CAN_ID) ) {
      if ((279 == DBCResolver3_B.BusCreator_a.ID) && (0U ==
           DBCResolver3_B.BusCreator_a.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_a.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_lu = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
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
                    (DBCResolver3_B.BusCreator_a.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_n = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
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
                    (DBCResolver3_B.BusCreator_a.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_l = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 56
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
                    (DBCResolver3_B.BusCreator_a.Data[7]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_j = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_a.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_jl = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_a.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_ll = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator_a.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_f = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
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
                    (DBCResolver3_B.BusCreator_a.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_i = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DSCU1_FIVE' incorporates:
   *  BusCreator generated from: '<Root>/DSCU1_FIVE'
   */
  arg_DSCU1_FOUR1->HeightMotorPercent = DBCResolver3_B.CAN3Unpack_o8_i;
  arg_DSCU1_FOUR1->DSBackrestMotorPercent = DBCResolver3_B.CAN3Unpack_o3_l;
  arg_DSCU1_FOUR1->DSZeroGravityMotorPercent = DBCResolver3_B.CAN3Unpack_o7_f;
  arg_DSCU1_FOUR1->DSArmrestTurnoverLMotorPercent =
    DBCResolver3_B.CAN3Unpack_o1_lu;
  arg_DSCU1_FOUR1->DSArmrestTurnoverRMotorPercent =
    DBCResolver3_B.CAN3Unpack_o2_n;
  arg_DSCU1_FOUR1->DSSlideRailMotor1LPercent = DBCResolver3_B.CAN3Unpack_o5_jl;
  arg_DSCU1_FOUR1->DSSlideRailMotor1RPercent = DBCResolver3_B.CAN3Unpack_o6_ll;
  arg_DSCU1_FOUR1->DSHeadMotorPosiPercent = DBCResolver3_B.CAN3Unpack_o4_j;

  /* BusCreator: '<S12>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU2ONE_Msg'
   */
  DBCResolver3_B.BusCreator_ji = *arg_DSCU1_THREE_Msg1;

  /* S-Function (scanunpack): '<S12>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S12>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_ji.Length) &&
        (DBCResolver3_B.BusCreator_ji.ID != INVALID_CAN_ID) ) {
      if ((282 == DBCResolver3_B.BusCreator_ji.ID) && (0U ==
           DBCResolver3_B.BusCreator_ji.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 34
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_n = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 36
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_p = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 33
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_er = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_ks = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 18
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_eg = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_l2 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 21
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_pj = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 20
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_bn = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_ji.Data[5]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_m = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_by = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 28
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_a5 = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 13
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_d = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 12
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_e = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 26
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_e = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_ef = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_kj = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 11
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_h = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 9
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_an = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_i = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 23
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_p = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 10
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_b = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 29
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22_i = result;
            }
          }

          /* --------------- START Unpacking signal 22 ------------------
           *  startBit                = 30
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o23_o = result;
            }
          }

          /* --------------- START Unpacking signal 23 ------------------
           *  startBit                = 15
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o24_i = result;
            }
          }

          /* --------------- START Unpacking signal 24 ------------------
           *  startBit                = 14
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
                    (DBCResolver3_B.BusCreator_ji.Data[1]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o25_a = result;
            }
          }

          /* --------------- START Unpacking signal 25 ------------------
           *  startBit                = 22
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o26 = result;
            }
          }

          /* --------------- START Unpacking signal 26 ------------------
           *  startBit                = 31
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
                    (DBCResolver3_B.BusCreator_ji.Data[3]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o27 = result;
            }
          }

          /* --------------- START Unpacking signal 27 ------------------
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o28 = result;
            }
          }

          /* --------------- START Unpacking signal 28 ------------------
           *  startBit                = 17
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o29 = result;
            }
          }

          /* --------------- START Unpacking signal 29 ------------------
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
                    (DBCResolver3_B.BusCreator_ji.Data[2]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o30 = result;
            }
          }

          /* --------------- START Unpacking signal 30 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            int8_T outValue = 0;

            {
              int8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);
                int8_T* tempValuePtr = (int8_T*)&tempValue;

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ji.Data[0]);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (int8_T) (unpackedValue);
            }

            {
              int8_T result = (int8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o31_b = result;
            }
          }

          /* --------------- START Unpacking signal 31 ------------------
           *  startBit                = 37
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
                    (DBCResolver3_B.BusCreator_ji.Data[4]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o32 = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/DSCU2_ONE' incorporates:
   *  BusCreator generated from: '<Root>/DSCU2_ONE'
   */
  arg_DSCU1_THREE1->DSTemperatureSts2 = DBCResolver3_B.CAN3Unpack_o31_b;
  arg_DSCU1_THREE1->DSCalfSupportAngleMotorPSts2 =
    DBCResolver3_B.CAN3Unpack_o19_i;
  arg_DSCU1_THREE1->DSCalfSupportAngleMotorLCSts2 =
    DBCResolver3_B.CAN3Unpack_o18_an;
  arg_DSCU1_THREE1->DSCalfSupportTelescopicPSts2 =
    DBCResolver3_B.CAN3Unpack_o21_b;
  arg_DSCU1_THREE1->DSCalfSupTelescopicMotLCSts2 =
    DBCResolver3_B.CAN3Unpack_o17_h;
  arg_DSCU1_THREE1->DSCalfPedalMotorPositionSts2 =
    DBCResolver3_B.CAN3Unpack_o13_e;
  arg_DSCU1_THREE1->DSCalfPedalMotorLCSts2 = DBCResolver3_B.CAN3Unpack_o12_d;
  arg_DSCU1_THREE1->DSRotaryTableMotorPositionSts2 =
    DBCResolver3_B.CAN3Unpack_o25_a;
  arg_DSCU1_THREE1->DSRotaryTableMotorLCSts2 = DBCResolver3_B.CAN3Unpack_o24_i;
  arg_DSCU1_THREE1->DSShoulderMotorPositionSts2 = DBCResolver3_B.CAN3Unpack_o30;
  arg_DSCU1_THREE1->DSShoulderMotorLCSts2 = DBCResolver3_B.CAN3Unpack_o29;
  arg_DSCU1_THREE1->DSArmrestRotationLMotorPSts2 =
    DBCResolver3_B.CAN3Unpack_o5_eg;
  arg_DSCU1_THREE1->DSArmrestRotationLMotorLCSts2 =
    DBCResolver3_B.CAN3Unpack_o4_ks;
  arg_DSCU1_THREE1->DSArmrestRotationRMotorPSts2 =
    DBCResolver3_B.CAN3Unpack_o8_bn;
  arg_DSCU1_THREE1->DSArmrestRotationRMotorLCSts2 =
    DBCResolver3_B.CAN3Unpack_o7_pj;
  arg_DSCU1_THREE1->DSScreenOnOffSts = DBCResolver3_B.CAN3Unpack_o26;
  arg_DSCU1_THREE1->DSCalfSupportRotatingMotorFault2 =
    DBCResolver3_B.CAN3Unpack_o20_p;
  arg_DSCU1_THREE1->DSCalfSupRotatingMotHallFault2 =
    DBCResolver3_B.CAN3Unpack_o16_kj;
  arg_DSCU1_THREE1->DSCalfSupExtensionMotFault2 =
    DBCResolver3_B.CAN3Unpack_o15_ef;
  arg_DSCU1_THREE1->DSCalfSupExtMotHallFault2 = DBCResolver3_B.CAN3Unpack_o14_e;
  arg_DSCU1_THREE1->DSCalfPedalMotorFault2 = DBCResolver3_B.CAN3Unpack_o10_by;
  arg_DSCU1_THREE1->DSCalfPedalMotorHallFault2 =
    DBCResolver3_B.CAN3Unpack_o11_a5;
  arg_DSCU1_THREE1->DSRotaryTableMotorFault2 = DBCResolver3_B.CAN3Unpack_o22_i;
  arg_DSCU1_THREE1->DSRotaryTableMotorHallFault2 =
    DBCResolver3_B.CAN3Unpack_o23_o;
  arg_DSCU1_THREE1->DSShoulderMotorFault2 = DBCResolver3_B.CAN3Unpack_o27;
  arg_DSCU1_THREE1->DSShoulderMotorHallFault2 = DBCResolver3_B.CAN3Unpack_o28;
  arg_DSCU1_THREE1->DSArmrestRotationLMotorFault2 =
    DBCResolver3_B.CAN3Unpack_o3_er;
  arg_DSCU1_THREE1->DSArmrestRotaLMotHallFault2 = DBCResolver3_B.CAN3Unpack_o1_n;
  arg_DSCU1_THREE1->DSArmrestRotationRMotorFault2 =
    DBCResolver3_B.CAN3Unpack_o6_l2;
  arg_DSCU1_THREE1->DSArmrestRotaRMotHallFault2 = DBCResolver3_B.CAN3Unpack_o2_p;
  arg_DSCU1_THREE1->NTCSensorFault = DBCResolver3_B.CAN3Unpack_o32;
  arg_DSCU1_THREE1->DSCU2ExeSts = DBCResolver3_B.CAN3Unpack_o9_m;

  /* BusCreator: '<S13>/Bus Creator' incorporates:
   *  Inport: '<Root>/DSCU2_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_ed = *arg_Inport1;

  /* S-Function (scanunpack): '<S13>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S13>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_ed.Length) &&
        (DBCResolver3_B.BusCreator_ed.ID != INVALID_CAN_ID) ) {
      if ((283 == DBCResolver3_B.BusCreator_ed.ID) && (0U ==
           DBCResolver3_B.BusCreator_ed.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 40
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 24
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 32
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 48
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (DBCResolver3_B.BusCreator_ed.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7 = result;
            }
          }
        }
      }
    }
  }

  /* DataTypeConversion: '<S13>/Data Type Conversion5' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o6);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion5'
   */
  arg_DSCU1_FOUR2->DSRotaryTableMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion4' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o5);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion4'
   */
  arg_DSCU1_FOUR2->DSCalfSupTeMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion2' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o3);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion2'
   */
  arg_DSCU1_FOUR2->DSCalfPedalMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion1' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o2);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion1'
   */
  arg_DSCU1_FOUR2->DSArmrestRotRMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion3' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o4);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion3'
   */
  arg_DSCU1_FOUR2->DSCalfSupRotMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o1);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion'
   */
  arg_DSCU1_FOUR2->DSArmrestRotLMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S13>/Data Type Conversion6' */
  tmp = floor(DBCResolver3_B.CAN3Unpack_o7);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* Outport: '<Root>/DSCU2_TOW' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion6'
   */
  arg_DSCU1_FOUR2->DSShoulderMotorPercent = (uint8_T)(tmp < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* BusCreator: '<S20>/Bus Creator' incorporates:
   *  Inport: '<Root>/PSCU1_ONE_Msg'
   */
  DBCResolver3_B.BusCreator_f = *arg_Inport2;

  /* S-Function (scanunpack): '<S20>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S20>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_f.Length) &&
        (DBCResolver3_B.BusCreator_f.ID != INVALID_CAN_ID) ) {
      if ((284 == DBCResolver3_B.BusCreator_f.ID) && (0U ==
           DBCResolver3_B.BusCreator_f.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 7
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_c5 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 6
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_i = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 9
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_kr = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_kc = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 28
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_fk = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 29
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_er = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 5
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_e = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 4
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_k = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 30
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_kd = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 31
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_aw = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_jb = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 2
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_ca = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 26
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_d = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 27
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_dp = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 16
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
                    (DBCResolver3_B.BusCreator_f.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_dk = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
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
                    (DBCResolver3_B.BusCreator_f.Data[4]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_fu = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 33
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
                    (DBCResolver3_B.BusCreator_f.Data[4]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_me = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 11
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_h = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 10
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_m = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 34
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
                    (DBCResolver3_B.BusCreator_f.Data[4]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_k = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 35
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
                    (DBCResolver3_B.BusCreator_f.Data[4]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_j = result;
            }
          }

          /* --------------- START Unpacking signal 21 ------------------
           *  startBit                = 13
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o22_j = result;
            }
          }

          /* --------------- START Unpacking signal 22 ------------------
           *  startBit                = 12
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
                    (DBCResolver3_B.BusCreator_f.Data[1]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o23_a = result;
            }
          }

          /* --------------- START Unpacking signal 23 ------------------
           *  startBit                = 18
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
                    (DBCResolver3_B.BusCreator_f.Data[2]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o24_d = result;
            }
          }

          /* --------------- START Unpacking signal 24 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_f.Data[2]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o25_k = result;
            }
          }

          /* --------------- START Unpacking signal 25 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_f.Data[6]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o26_n = result;
            }
          }

          /* --------------- START Unpacking signal 26 ------------------
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o27_a = result;
            }
          }

          /* --------------- START Unpacking signal 27 ------------------
           *  startBit                = 1
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o28_c = result;
            }
          }

          /* --------------- START Unpacking signal 28 ------------------
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
                    (DBCResolver3_B.BusCreator_f.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o29_f = result;
            }
          }

          /* --------------- START Unpacking signal 29 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_f.Data[3]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o30_m = result;
            }
          }

          /* --------------- START Unpacking signal 30 ------------------
           *  startBit                = 45
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* Outport: '<Root>/PSCU1_ONE' incorporates:
   *  BusCreator generated from: '<Root>/PSCU1_ONE'
   */
  arg_DSCU1_FOUR3->PMSlideRailMotorPSts1 = DBCResolver3_B.CAN3Unpack_o28_c;
  arg_DSCU1_FOUR3->PMSlideRailMotor1LCSts1 = DBCResolver3_B.CAN3Unpack_o27_a;
  arg_DSCU1_FOUR3->PMHeightMotorPSts1 = DBCResolver3_B.CAN3Unpack_o12_ca;
  arg_DSCU1_FOUR3->PMHeightMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o11_jb;
  arg_DSCU1_FOUR3->PMBackrestMotorPSts1 = DBCResolver3_B.CAN3Unpack_o8_k;
  arg_DSCU1_FOUR3->PMBackrestMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o7_e;
  arg_DSCU1_FOUR3->PMArmrestUDLMotorPSts1 = DBCResolver3_B.CAN3Unpack_o2_i;
  arg_DSCU1_FOUR3->PMArmrestUDLMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o1_c5;
  arg_DSCU1_FOUR3->PMArmrestUDRMotorPSts1 = DBCResolver3_B.CAN3Unpack_o4_kc;
  arg_DSCU1_FOUR3->PMArmrestUDRMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o3_kr;
  arg_DSCU1_FOUR3->PMMotor4PSts1 = DBCResolver3_B.CAN3Unpack_o19_m;
  arg_DSCU1_FOUR3->PMMotor4LCSts1 = DBCResolver3_B.CAN3Unpack_o18_h;
  arg_DSCU1_FOUR3->PMMotor6PSts1 = DBCResolver3_B.CAN3Unpack_o23_a;
  arg_DSCU1_FOUR3->PMMotor6LCSts1 = DBCResolver3_B.CAN3Unpack_o22_j;
  arg_DSCU1_FOUR3->PMMemoryPositionSts1 = DBCResolver3_B.CAN3Unpack_o15_dk;
  arg_DSCU1_FOUR3->PMOneKeyBedFormingPSts1 = DBCResolver3_B.CAN3Unpack_o24_d;
  arg_DSCU1_FOUR3->PMRecommendedScenariosSts1 = DBCResolver3_B.CAN3Unpack_o25_k;
  arg_DSCU1_FOUR3->PMSlideRailMotorPSts1Fault = DBCResolver3_B.CAN3Unpack_o29_f;
  arg_DSCU1_FOUR3->PMSlideRailMotor1HallFault = DBCResolver3_B.CAN3Unpack_o26_n;
  arg_DSCU1_FOUR3->PMHighProfileMotorFault = DBCResolver3_B.CAN3Unpack_o13_d;
  arg_DSCU1_FOUR3->PMHighProfileMotorHallFault =
    DBCResolver3_B.CAN3Unpack_o14_dp;
  arg_DSCU1_FOUR3->PMBackrestMotorFault = DBCResolver3_B.CAN3Unpack_o5_fk;
  arg_DSCU1_FOUR3->PMBackrestMotorHallFault = DBCResolver3_B.CAN3Unpack_o6_er;
  arg_DSCU1_FOUR3->PMElectricArmrestLMFault = DBCResolver3_B.CAN3Unpack_o9_kd;
  arg_DSCU1_FOUR3->PMElectricArmrestRMFault = DBCResolver3_B.CAN3Unpack_o10_aw;
  arg_DSCU1_FOUR3->PMMotor4Fault = DBCResolver3_B.CAN3Unpack_o16_fu;
  arg_DSCU1_FOUR3->PMMotor4HallFault = DBCResolver3_B.CAN3Unpack_o17_me;
  arg_DSCU1_FOUR3->PMMotor6Fault = DBCResolver3_B.CAN3Unpack_o20_k;
  arg_DSCU1_FOUR3->PMMotor6HallFault = DBCResolver3_B.CAN3Unpack_o21_j;
  arg_DSCU1_FOUR3->PSCU1ExeSts = DBCResolver3_B.CAN3Unpack_o30_m;

  /* BusCreator: '<S21>/Bus Creator' incorporates:
   *  Inport: '<Root>/PSCU1_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_o1 = *arg_Inport3;

  /* S-Function (scanunpack): '<S21>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S21>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_o1.Length) &&
        (DBCResolver3_B.BusCreator_o1.ID != INVALID_CAN_ID) ) {
      if ((285 == DBCResolver3_B.BusCreator_o1.ID) && (0U ==
           DBCResolver3_B.BusCreator_o1.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_o1.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_o0 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 40
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
                    (DBCResolver3_B.BusCreator_o1.Data[5]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_n2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 48
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
                    (DBCResolver3_B.BusCreator_o1.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_ka = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
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
                    (DBCResolver3_B.BusCreator_o1.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_fn = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_o1.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_p = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
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
                    (DBCResolver3_B.BusCreator_o1.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_av = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
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
                    (DBCResolver3_B.BusCreator_o1.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_h = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/PSCU1_TOW' incorporates:
   *  BusCreator generated from: '<Root>/PSCU1_TOW'
   */
  arg_DSCU1_FOUR4->PMSlideRailMotorPercent = DBCResolver3_B.CAN3Unpack_o7_h;
  arg_DSCU1_FOUR4->PMHighProfileMotorPercent = DBCResolver3_B.CAN3Unpack_o4_fn;
  arg_DSCU1_FOUR4->PMMotor6Percent = DBCResolver3_B.CAN3Unpack_o6_av;
  arg_DSCU1_FOUR4->PMBackrestMotorPercent = DBCResolver3_B.CAN3Unpack_o1_o0;
  arg_DSCU1_FOUR4->PMMotor4Percent = DBCResolver3_B.CAN3Unpack_o5_p;
  arg_DSCU1_FOUR4->PMEleArmrestLMPercent = DBCResolver3_B.CAN3Unpack_o2_n2;
  arg_DSCU1_FOUR4->PMEleArmrestRMPercent = DBCResolver3_B.CAN3Unpack_o3_ka;

  /* BusCreator: '<S22>/Bus Creator' incorporates:
   *  Inport: '<Root>/PSCU2_ONE_Msg'
   */
  DBCResolver3_B.BusCreator_l = *arg_Inport4;

  /* S-Function (scanunpack): '<S22>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S22>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_l.Length) &&
        (DBCResolver3_B.BusCreator_l.ID != INVALID_CAN_ID) ) {
      if ((286 == DBCResolver3_B.BusCreator_l.ID) && (0U ==
           DBCResolver3_B.BusCreator_l.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 6
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_a = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 15
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_b = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
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
                    (DBCResolver3_B.BusCreator_l.Data[2]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_bx = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 5
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_ps = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_hh = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 17
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
                    (DBCResolver3_B.BusCreator_l.Data[2]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o6_bs = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 18
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
                    (DBCResolver3_B.BusCreator_l.Data[2]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o7_ct = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 7
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o8_d = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 2
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o9_d = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 1
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o10_j = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 13
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o11_e = result;
            }
          }

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 14
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o12_k = result;
            }
          }

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 11
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o13_o = result;
            }
          }

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 12
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o14_gj = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 3
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o15_k1 = result;
            }
          }

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 4
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
                    (DBCResolver3_B.BusCreator_l.Data[0]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o16_n = result;
            }
          }

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 45
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
                    (DBCResolver3_B.BusCreator_l.Data[5]) & (uint8_T)(0xE0U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o17_p = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 19
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
                    (DBCResolver3_B.BusCreator_l.Data[2]) & (uint8_T)(0x8U)) >>
                    3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o18_e = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 20
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
                    (DBCResolver3_B.BusCreator_l.Data[2]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o19_c = result;
            }
          }

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 10
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x4U)) >>
                    2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o20_pn = result;
            }
          }

          /* --------------- START Unpacking signal 20 ------------------
           *  startBit                = 9
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
                    (DBCResolver3_B.BusCreator_l.Data[1]) & (uint8_T)(0x2U)) >>
                    1);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o21_g = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/PSCU2_ONE' incorporates:
   *  BusCreator generated from: '<Root>/PSCU2_ONE'
   */
  arg_DSCU1_FOUR5->PMCalfSupportAngleMPSts2 = DBCResolver3_B.CAN3Unpack_o10_j;
  arg_DSCU1_FOUR5->PMCalfSupportAngleMLCSts2 = DBCResolver3_B.CAN3Unpack_o9_d;
  arg_DSCU1_FOUR5->PMCalfSupportTelescoPSts2 = DBCResolver3_B.CAN3Unpack_o15_k1;
  arg_DSCU1_FOUR5->PMCalfSupportTelescopicMLCSts2 =
    DBCResolver3_B.CAN3Unpack_o16_n;
  arg_DSCU1_FOUR5->PMBackSupportLPSts2 = DBCResolver3_B.CAN3Unpack_o4_ps;
  arg_DSCU1_FOUR5->PMBackSupportLLCSts2 = DBCResolver3_B.CAN3Unpack_o1_a;
  arg_DSCU1_FOUR5->PMBackSupportRPSts2 = DBCResolver3_B.CAN3Unpack_o8_d;
  arg_DSCU1_FOUR5->PMBackSupportRLCSts2 = DBCResolver3_B.CAN3Unpack_o5_hh;
  arg_DSCU1_FOUR5->TailUDMotorPSts2 = DBCResolver3_B.CAN3Unpack_o21_g;
  arg_DSCU1_FOUR5->TailUDMotorLCSts2 = DBCResolver3_B.CAN3Unpack_o20_pn;
  arg_DSCU1_FOUR5->PMCalfSupportRotatingMFault2 =
    DBCResolver3_B.CAN3Unpack_o13_o;
  arg_DSCU1_FOUR5->PMCalfSupportRotatingMHFault2 =
    DBCResolver3_B.CAN3Unpack_o14_gj;
  arg_DSCU1_FOUR5->PMCalfSupportExtensionMFault2 =
    DBCResolver3_B.CAN3Unpack_o11_e;
  arg_DSCU1_FOUR5->PMCalfSupportExtensionMHFault2 =
    DBCResolver3_B.CAN3Unpack_o12_k;
  arg_DSCU1_FOUR5->PMBackSupportLMFault2 = DBCResolver3_B.CAN3Unpack_o2_b;
  arg_DSCU1_FOUR5->PMBackSupportLMHFault2 = DBCResolver3_B.CAN3Unpack_o3_bx;
  arg_DSCU1_FOUR5->PMBackSupportRMFault2 = DBCResolver3_B.CAN3Unpack_o6_bs;
  arg_DSCU1_FOUR5->PMBackSupportRMHFault2 = DBCResolver3_B.CAN3Unpack_o7_ct;
  arg_DSCU1_FOUR5->TailUDMotorFault = DBCResolver3_B.CAN3Unpack_o18_e;
  arg_DSCU1_FOUR5->TailUDMotorHFault = DBCResolver3_B.CAN3Unpack_o19_c;
  arg_DSCU1_FOUR5->PSCU2ExeSts = DBCResolver3_B.CAN3Unpack_o17_p;

  /* BusCreator: '<S23>/Bus Creator' incorporates:
   *  Inport: '<Root>/PSCU2_TOW_Msg'
   */
  DBCResolver3_B.BusCreator_au = *arg_Inport5;

  /* S-Function (scanunpack): '<S23>/CAN3 Unpack' */
  {
    /* S-Function (scanunpack): '<S23>/CAN3 Unpack' */
    if ((8 == DBCResolver3_B.BusCreator_au.Length) &&
        (DBCResolver3_B.BusCreator_au.ID != INVALID_CAN_ID) ) {
      if ((287 == DBCResolver3_B.BusCreator_au.ID) && (0U ==
           DBCResolver3_B.BusCreator_au.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
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
                    (DBCResolver3_B.BusCreator_au.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o1_ll = result;
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
                    (DBCResolver3_B.BusCreator_au.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o2_k = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
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
                    (DBCResolver3_B.BusCreator_au.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o3_lr = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
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
                    (DBCResolver3_B.BusCreator_au.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o4_ln = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
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
                    (DBCResolver3_B.BusCreator_au.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DBCResolver3_B.CAN3Unpack_o5_a = result;
            }
          }
        }
      }
    }
  }

  /* Outport: '<Root>/PSCU2_TOW' incorporates:
   *  BusCreator generated from: '<Root>/PSCU2_TOW'
   */
  arg_DSCU1_FOUR6->PMCalfSupportExtensionMHPercent =
    DBCResolver3_B.CAN3Unpack_o3_lr;
  arg_DSCU1_FOUR6->PMBackSupportLMHPercent = DBCResolver3_B.CAN3Unpack_o1_ll;
  arg_DSCU1_FOUR6->PMBackSupportRMPercent = DBCResolver3_B.CAN3Unpack_o2_k;
  arg_DSCU1_FOUR6->PMCalfUDPercent = DBCResolver3_B.CAN3Unpack_o4_ln;
  arg_DSCU1_FOUR6->TailUDMotorPPercent = DBCResolver3_B.CAN3Unpack_o5_a;

  /* Outport: '<Root>/DSCU1_ONE' incorporates:
   *  BusCreator generated from: '<Root>/DSCU1_ONE'
   */
  arg_DSCU1_ONE->DSCushionCervicaSpineSts1 = DBCResolver3_B.CAN3Unpack_o10_l;
  arg_DSCU1_ONE->DSCushionHardnessSts1 = DBCResolver3_B.CAN3Unpack_o12_l;
  arg_DSCU1_ONE->DSCushionCervicaSpinePV1 = DBCResolver3_B.CAN3Unpack_o9_k;
  arg_DSCU1_ONE->DSCushionHardnessPV1 = DBCResolver3_B.CAN3Unpack_o11_f;
  arg_DSCU1_ONE->DSSlideAdjustmentSts1 = DBCResolver3_B.CAN3Unpack_o19_n;
  arg_DSCU1_ONE->DSSlideRailMotor1LCSts1 = DBCResolver3_B.CAN3Unpack_o20_b;
  arg_DSCU1_ONE->DSSlideRailMotor2LCSts1 = DBCResolver3_B.CAN3Unpack_o21_e;
  arg_DSCU1_ONE->DSHeightMotorPSts1 = DBCResolver3_B.CAN3Unpack_o16_f;
  arg_DSCU1_ONE->DSHeightMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o15_i;
  arg_DSCU1_ONE->DSBackrestMotorPSts1 = DBCResolver3_B.CAN3Unpack_o8_p;
  arg_DSCU1_ONE->DSBackrestMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o7_k;
  arg_DSCU1_ONE->DSZeroGravityDipAngleAdjustSts1 = DBCResolver3_B.CAN3Unpack_o23;
  arg_DSCU1_ONE->DSZeroGravityPositionSts1 = DBCResolver3_B.CAN3Unpack_o25;
  arg_DSCU1_ONE->DSZeroGravityMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o24;
  arg_DSCU1_ONE->DSHeadrestMotorPositionSts1 = DBCResolver3_B.CAN3Unpack_o14_hm;
  arg_DSCU1_ONE->DSHeadrestMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o13_jw;
  arg_DSCU1_ONE->DSArmrestTurnoverLMotorPSts1 = DBCResolver3_B.CAN3Unpack_o2_er;
  arg_DSCU1_ONE->DSArmrestTurnoverLMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o1_cq;
  arg_DSCU1_ONE->DSArmrestTurnoverRMotorPSts1 = DBCResolver3_B.CAN3Unpack_o4_kt;
  arg_DSCU1_ONE->DSArmrestTurnoverRMotorLCSts1 = DBCResolver3_B.CAN3Unpack_o3_g0;
  arg_DSCU1_ONE->DSMemoryLocationSts1 = DBCResolver3_B.CAN3Unpack_o17_n;
  arg_DSCU1_ONE->DSRecommendedScenariosSts1 = DBCResolver3_B.CAN3Unpack_o18_a;
  arg_DSCU1_ONE->DSAutomaticHeatingSts1 = DBCResolver3_B.CAN3Unpack_o5_e;
  arg_DSCU1_ONE->DSAutomaticVentilationSts1 = DBCResolver3_B.CAN3Unpack_o6_c;
  arg_DSCU1_ONE->DSSweetAtmosphereAdaptiveSts1 = DBCResolver3_B.CAN3Unpack_o22_d;

  /* Outport: '<Root>/PMArmrestscreen2_THREE' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen2_THREE'
   */
  arg_PMArmrestscreen2_TOW1->PMRhythmicMovementCmd2 =
    DBCResolver3_B.CAN3Unpack_o4_e;
  arg_PMArmrestscreen2_TOW1->PMARGBR2 = DBCResolver3_B.CAN3Unpack_o3_e;
  arg_PMArmrestscreen2_TOW1->PMARGBG2 = DBCResolver3_B.CAN3Unpack_o2_l;
  arg_PMArmrestscreen2_TOW1->PMARGBB2 = DBCResolver3_B.CAN3Unpack_o1_p0;

  /* Outport: '<Root>/PMArmrestscreen2_TOW' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen2_TOW'
   */
  arg_PMArmrestscreen2_TOW->PMElectricHandrailRCmd2 =
    DBCResolver3_B.CAN3Unpack_o3_m;
  arg_PMArmrestscreen2_TOW->PMZeroGravityCmd2 = DBCResolver3_B.CAN3Unpack_o13_pt;
  arg_PMArmrestscreen2_TOW->PMResetCmd2 = DBCResolver3_B.CAN3Unpack_o6_b;
  arg_PMArmrestscreen2_TOW->PMMemoryLocation1Cmd2 =
    DBCResolver3_B.CAN3Unpack_o4_b;
  arg_PMArmrestscreen2_TOW->PMMemoryLocation2Cmd2 =
    DBCResolver3_B.CAN3Unpack_o5_b;
  arg_PMArmrestscreen2_TOW->PMCabinToledSCmd2 = DBCResolver3_B.CAN3Unpack_o2_d5;
  arg_PMArmrestscreen2_TOW->PMCabinToledRCmd2 = DBCResolver3_B.CAN3Unpack_o1_i;
  arg_PMArmrestscreen2_TOW->PMSSceneSwitchReq2 = DBCResolver3_B.CAN3Unpack_o9_h;
  arg_PMArmrestscreen2_TOW->PMSCU1_UpAndDownCmd2 =
    DBCResolver3_B.CAN3Unpack_o8_m;
  arg_PMArmrestscreen2_TOW->PMSCU1_FrontAndBackCmd2 =
    DBCResolver3_B.CAN3Unpack_o7_a;
  arg_PMArmrestscreen2_TOW->PMSpeakerVolumeCmd2 =
    DBCResolver3_B.CAN3Unpack_o10_e;
  arg_PMArmrestscreen2_TOW->PMZCabinAtmosphereMCmd2 =
    DBCResolver3_B.CAN3Unpack_o12_i;
  arg_PMArmrestscreen2_TOW->PMZCabinAtmosphereBCmd2 =
    DBCResolver3_B.CAN3Unpack_o11_b;

  /* Outport: '<Root>/PMArmrestscreen2_ONE' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen2_ONE'
   */
  arg_PMArmrestscreen2_ONE->PMCabinAtmosphereMCmd2 =
    DBCResolver3_B.CAN3Unpack_o5_h;
  arg_PMArmrestscreen2_ONE->PMCabinAtmosphereBCmd2 =
    DBCResolver3_B.CAN3Unpack_o4_a;
  arg_PMArmrestscreen2_ONE->PMAtmosphereLampCmd2 =
    DBCResolver3_B.CAN3Unpack_o1_c;
  arg_PMArmrestscreen2_ONE->PMFCabinAtmosphereMCmd2 =
    DBCResolver3_B.CAN3Unpack_o9_a;
  arg_PMArmrestscreen2_ONE->PMFCabinAtmosphereBCmd2 =
    DBCResolver3_B.CAN3Unpack_o8_g;
  arg_PMArmrestscreen2_ONE->PMFAtmosphereLampCmd2 =
    DBCResolver3_B.CAN3Unpack_o7_b;
  arg_PMArmrestscreen2_ONE->PMZAtmosphereLampCmd2 =
    DBCResolver3_B.CAN3Unpack_o12_h;
  arg_PMArmrestscreen2_ONE->PMLumbarSupportCmd2 =
    DBCResolver3_B.CAN3Unpack_o10_n;
  arg_PMArmrestscreen2_ONE->PMBackrestBolsterLCmd2 =
    DBCResolver3_B.CAN3Unpack_o2_eq;
  arg_PMArmrestscreen2_ONE->PMBackrestBolsterRCmd2 =
    DBCResolver3_B.CAN3Unpack_o3_b;
  arg_PMArmrestscreen2_ONE->PMZeroGravityCushionCmd2 =
    DBCResolver3_B.CAN3Unpack_o14_mq;
  arg_PMArmrestscreen2_ONE->PMZeroGravityHighProCmd2 =
    DBCResolver3_B.CAN3Unpack_o15_k;
  arg_PMArmrestscreen2_ONE->PMZeroGravitySlideRailCmd2 =
    DBCResolver3_B.CAN3Unpack_o16_b;
  arg_PMArmrestscreen2_ONE->PMZeroGravityCalfDragCmd2 =
    DBCResolver3_B.CAN3Unpack_o13_p;
  arg_PMArmrestscreen2_ONE->PMTailUDCmd2 = DBCResolver3_B.CAN3Unpack_o11_a;
  arg_PMArmrestscreen2_ONE->PMElectricHandrailLCmd2 =
    DBCResolver3_B.CAN3Unpack_o6_j;

  /* Outport: '<Root>/PMArmrestscreen1_THREE' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen1_THREE'
   */
  arg_PMArmrestscreen1_TOW1->PMRhythmicMovementCmd1 =
    DBCResolver3_B.CAN3Unpack_o4_nm;
  arg_PMArmrestscreen1_TOW1->PMARGBR1 = DBCResolver3_B.CAN3Unpack_o3_f;
  arg_PMArmrestscreen1_TOW1->PMARGBG1 = DBCResolver3_B.CAN3Unpack_o2_e;
  arg_PMArmrestscreen1_TOW1->PMARGBB1 = DBCResolver3_B.CAN3Unpack_o1_g;

  /* Outport: '<Root>/PMArmrestscreen1_TOW' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen1_TOW'
   */
  arg_PMArmrestscreen1_TOW->PMElectricHandrailRCmd1 =
    DBCResolver3_B.CAN3Unpack_o3_k;
  arg_PMArmrestscreen1_TOW->PMZeroGravityCmd1 = DBCResolver3_B.CAN3Unpack_o13_ji;
  arg_PMArmrestscreen1_TOW->PMResetCmd1 = DBCResolver3_B.CAN3Unpack_o6_l;
  arg_PMArmrestscreen1_TOW->PMMemoryLocation1Cmd1 =
    DBCResolver3_B.CAN3Unpack_o4_i;
  arg_PMArmrestscreen1_TOW->PMMemoryLocation2Cmd1 =
    DBCResolver3_B.CAN3Unpack_o5_gc;
  arg_PMArmrestscreen1_TOW->PMCabinToledSCmd1 = DBCResolver3_B.CAN3Unpack_o2_ov;
  arg_PMArmrestscreen1_TOW->PMCabinToledRCmd1 = DBCResolver3_B.CAN3Unpack_o1_e;
  arg_PMArmrestscreen1_TOW->PMSSceneSwitchReq1 = DBCResolver3_B.CAN3Unpack_o9_j;
  arg_PMArmrestscreen1_TOW->PMSCU1_UpAndDownCmd = DBCResolver3_B.CAN3Unpack_o8_a;
  arg_PMArmrestscreen1_TOW->PMSCU1_FrontAndBackCmd =
    DBCResolver3_B.CAN3Unpack_o7_m;
  arg_PMArmrestscreen1_TOW->PMSpeakerVolumeCmd1 =
    DBCResolver3_B.CAN3Unpack_o10_a;
  arg_PMArmrestscreen1_TOW->PMZCabinAtmosphereMCmd1 =
    DBCResolver3_B.CAN3Unpack_o12_a;
  arg_PMArmrestscreen1_TOW->PMZCabinAtmosphereBCmd1 =
    DBCResolver3_B.CAN3Unpack_o11_h;

  /* Outport: '<Root>/PMArmrestscreen1_ONE' incorporates:
   *  BusCreator generated from: '<Root>/PMArmrestscreen1_ONE'
   */
  arg_PMArmrestscreen1_ONE->PMCabinAtmosphereMCmd1 =
    DBCResolver3_B.CAN3Unpack_o5_g;
  arg_PMArmrestscreen1_ONE->PMCabinAtmosphereBCmd1 =
    DBCResolver3_B.CAN3Unpack_o4_p;
  arg_PMArmrestscreen1_ONE->PMAtmosphereLampCmd1 =
    DBCResolver3_B.CAN3Unpack_o1_lx;
  arg_PMArmrestscreen1_ONE->PMFCabinAtmosphereMCmd1 =
    DBCResolver3_B.CAN3Unpack_o9_c;
  arg_PMArmrestscreen1_ONE->PMFCabinAtmosphereBCmd1 =
    DBCResolver3_B.CAN3Unpack_o8_f;
  arg_PMArmrestscreen1_ONE->PMFAtmosphereLampCmd1 =
    DBCResolver3_B.CAN3Unpack_o7_g;
  arg_PMArmrestscreen1_ONE->PMZAtmosphereLampCmd1 =
    DBCResolver3_B.CAN3Unpack_o12_f;
  arg_PMArmrestscreen1_ONE->PMLumbarSupportCmd1 =
    DBCResolver3_B.CAN3Unpack_o10_b;
  arg_PMArmrestscreen1_ONE->PMBackrestBolsterLCmd1 =
    DBCResolver3_B.CAN3Unpack_o2_oy;
  arg_PMArmrestscreen1_ONE->PMBackrestBolsterRCmd1 =
    DBCResolver3_B.CAN3Unpack_o3_p;
  arg_PMArmrestscreen1_ONE->PMZeroGravityCushionCmd1 =
    DBCResolver3_B.CAN3Unpack_o14_d;
  arg_PMArmrestscreen1_ONE->PMZeroGravityHighProCmd1 =
    DBCResolver3_B.CAN3Unpack_o15_dw;
  arg_PMArmrestscreen1_ONE->PMZeroGravitySlideRailCmd1 =
    DBCResolver3_B.CAN3Unpack_o16_d;
  arg_PMArmrestscreen1_ONE->PMZeroGravityCalfDragCmd1 =
    DBCResolver3_B.CAN3Unpack_o13_gz;
  arg_PMArmrestscreen1_ONE->PMTailUDCmd1 = DBCResolver3_B.CAN3Unpack_o11_kz;
  arg_PMArmrestscreen1_ONE->PMElectricHandrailLCmd1 =
    DBCResolver3_B.CAN3Unpack_o6_o;

  /* Outport: '<Root>/DSArmrestscreen2_THREE' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen2_THREE'
   */
  arg_DSArmrestscreen2_THREE->DSSpeakerVolumeCmd2 =
    DBCResolver3_B.CAN3Unpack_o3_j2;
  arg_DSArmrestscreen2_THREE->DSFCabinAtmosphereMCmd2 =
    DBCResolver3_B.CAN3Unpack_o2_d;
  arg_DSArmrestscreen2_THREE->DSFCabinAtmosphereBCmd2 =
    DBCResolver3_B.CAN3Unpack_o1_o;

  /* Outport: '<Root>/DSArmrestscreen2_TOW' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen2_TOW'
   */
  arg_DSArmrestscreen2_TOW->DSDAmbianceLight2 = DBCResolver3_B.CAN3Unpack_o5_j;
  arg_DSArmrestscreen2_TOW->DSLumbarLoinCmd2 = DBCResolver3_B.CAN3Unpack_o8_h;
  arg_DSArmrestscreen2_TOW->DSLumbarVertebraCmd2 =
    DBCResolver3_B.CAN3Unpack_o10_f;
  arg_DSArmrestscreen2_TOW->DSMassageSpeedCmd2 =
    DBCResolver3_B.CAN3Unpack_o12_cg;
  arg_DSArmrestscreen2_TOW->DSLumbarLoinPressureCmd2 =
    DBCResolver3_B.CAN3Unpack_o9_f;
  arg_DSArmrestscreen2_TOW->DSLumbarVertebraPressureCmd2 =
    DBCResolver3_B.CAN3Unpack_o11_k;
  arg_DSArmrestscreen2_TOW->DSArmrestTurnoverLMotorCmd2 =
    DBCResolver3_B.CAN3Unpack_o1_l;
  arg_DSArmrestscreen2_TOW->DSArmrestTurnoverRMotorCmd2 =
    DBCResolver3_B.CAN3Unpack_o2_m;
  arg_DSArmrestscreen2_TOW->DSZeroGravitySlideRailCmd2 =
    DBCResolver3_B.CAN3Unpack_o21_f;
  arg_DSArmrestscreen2_TOW->DSZeroGravityCalfDragCmd2 =
    DBCResolver3_B.CAN3Unpack_o18_f;
  arg_DSArmrestscreen2_TOW->DSShoulderRestCmd2 = DBCResolver3_B.CAN3Unpack_o17_m;
  arg_DSArmrestscreen2_TOW->DSZeroGravityPedalCmd2 =
    DBCResolver3_B.CAN3Unpack_o20_n;
  arg_DSArmrestscreen2_TOW->DSElectricHandrailLCmd2 =
    DBCResolver3_B.CAN3Unpack_o6_m;
  arg_DSArmrestscreen2_TOW->DSElectricHandrailRCmd2 =
    DBCResolver3_B.CAN3Unpack_o7_c;
  arg_DSArmrestscreen2_TOW->DSZeroGravityTurntableCmd2 =
    DBCResolver3_B.CAN3Unpack_o22_l;
  arg_DSArmrestscreen2_TOW->DSZeroGravityCmd2 = DBCResolver3_B.CAN3Unpack_o19_d;
  arg_DSArmrestscreen2_TOW->DSResetCmd2 = DBCResolver3_B.CAN3Unpack_o15_e;
  arg_DSArmrestscreen2_TOW->DSMemoryLocation1Cmd2 =
    DBCResolver3_B.CAN3Unpack_o13_g;
  arg_DSArmrestscreen2_TOW->DSMemoryLocation2Cmd2 =
    DBCResolver3_B.CAN3Unpack_o14_g;
  arg_DSArmrestscreen2_TOW->DSCabinToledSCmd2 = DBCResolver3_B.CAN3Unpack_o4_fb;
  arg_DSArmrestscreen2_TOW->DSCabinToledRCmd2 = DBCResolver3_B.CAN3Unpack_o3_a5;
  arg_DSArmrestscreen2_TOW->DSSSceneSwitchReq2 = DBCResolver3_B.CAN3Unpack_o16_k;

  /* Outport: '<Root>/DSArmrestscreen2_One' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen2_One'
   */
  arg_DSArmrestscreen2_One->DSCabinAtmosphereMCmd2 =
    DBCResolver3_B.CAN3Unpack_o4_k;
  arg_DSArmrestscreen2_One->DSCabinAtmosphereBCmd2 =
    DBCResolver3_B.CAN3Unpack_o3_h;
  arg_DSArmrestscreen2_One->DSAtmosphereLampCmd2 =
    DBCResolver3_B.CAN3Unpack_o1_p;
  arg_DSArmrestscreen2_One->DSPAmbianceLightB2 = DBCResolver3_B.CAN3Unpack_o12_c;
  arg_DSArmrestscreen2_One->DSPAmbianceLight2 = DBCResolver3_B.CAN3Unpack_o11_i;
  arg_DSArmrestscreen2_One->DSDAmbianceLightM2 = DBCResolver3_B.CAN3Unpack_o8_b;
  arg_DSArmrestscreen2_One->DSDAmbianceLightB2 = DBCResolver3_B.CAN3Unpack_o7_l;
  arg_DSArmrestscreen2_One->DSVentilateCmd2 = DBCResolver3_B.CAN3Unpack_o13_l;
  arg_DSArmrestscreen2_One->DSHeatingCmd2 = DBCResolver3_B.CAN3Unpack_o10_c;
  arg_DSArmrestscreen2_One->DSBackrestBolsterCmd2 =
    DBCResolver3_B.CAN3Unpack_o2_g;
  arg_DSArmrestscreen2_One->DSCushionBolsterCmd2 =
    DBCResolver3_B.CAN3Unpack_o5_n;
  arg_DSArmrestscreen2_One->DSHeadPillowCmd2 = DBCResolver3_B.CAN3Unpack_o9_g;
  arg_DSArmrestscreen2_One->DSZeroGravityCushionCmd2 =
    DBCResolver3_B.CAN3Unpack_o14_m;
  arg_DSArmrestscreen2_One->DSZeroGravityUpliftCmd2 =
    DBCResolver3_B.CAN3Unpack_o16_p;
  arg_DSArmrestscreen2_One->DSZeroGravityHighProCmd2 =
    DBCResolver3_B.CAN3Unpack_o15_h;
  arg_DSArmrestscreen2_One->DSCushionSoftHardC2 =
    DBCResolver3_B.CAN3Unpack_o6_ax;

  /* Outport: '<Root>/DSArmrestscreen1_THREE' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen1_THREE'
   */
  arg_DSArmrestscreen1_THREE->DSSpeakerVolumeCmd1 =
    DBCResolver3_B.CAN3Unpack_o4_l;
  arg_DSArmrestscreen1_THREE->DSPAmbianceLightM1 =
    DBCResolver3_B.CAN3Unpack_o3_j;
  arg_DSArmrestscreen1_THREE->DSPAmbianceLightB1 =
    DBCResolver3_B.CAN3Unpack_o2_a;
  arg_DSArmrestscreen1_THREE->DSPAmbianceLight1 = DBCResolver3_B.CAN3Unpack_o1_f;

  /* Outport: '<Root>/DSArmrestscreen1_TOW' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen1_TOW'
   */
  arg_DSArmrestscreen1_TOW->DSMassageModeCmd1 = DBCResolver3_B.CAN3Unpack_o11_j;
  arg_DSArmrestscreen1_TOW->DSLumbarLoinCmd1 = DBCResolver3_B.CAN3Unpack_o7_d;
  arg_DSArmrestscreen1_TOW->DSLumbarVertebraCmd1 =
    DBCResolver3_B.CAN3Unpack_o9_p;
  arg_DSArmrestscreen1_TOW->DSMassageSpeedCmd1 = DBCResolver3_B.CAN3Unpack_o12_n;
  arg_DSArmrestscreen1_TOW->DSLumbarLoinPressureCmd1 =
    DBCResolver3_B.CAN3Unpack_o8_l;
  arg_DSArmrestscreen1_TOW->DSLumbarVertebraPressureCmd1 =
    DBCResolver3_B.CAN3Unpack_o10_h;
  arg_DSArmrestscreen1_TOW->DSArmrestTurnoverLMotorCmd1 =
    DBCResolver3_B.CAN3Unpack_o1_j;
  arg_DSArmrestscreen1_TOW->DSArmrestTurnoverRMotorCmd1 =
    DBCResolver3_B.CAN3Unpack_o2_o;
  arg_DSArmrestscreen1_TOW->DSZeroGravitySlideRailCmd1 =
    DBCResolver3_B.CAN3Unpack_o21;
  arg_DSArmrestscreen1_TOW->DSZeroGravityCalfDragCmd1 =
    DBCResolver3_B.CAN3Unpack_o18;
  arg_DSArmrestscreen1_TOW->DSShoulderRestCmd1 = DBCResolver3_B.CAN3Unpack_o17;
  arg_DSArmrestscreen1_TOW->DSZeroGravityPedalCmd1 =
    DBCResolver3_B.CAN3Unpack_o20;
  arg_DSArmrestscreen1_TOW->DSElectricHandrailLCmd1 =
    DBCResolver3_B.CAN3Unpack_o5_f;
  arg_DSArmrestscreen1_TOW->DSElectricHandrailRCmd1 =
    DBCResolver3_B.CAN3Unpack_o6_a;
  arg_DSArmrestscreen1_TOW->DSZeroGravityTurntableCmd1 =
    DBCResolver3_B.CAN3Unpack_o22;
  arg_DSArmrestscreen1_TOW->DSZeroGravityCmd1 = DBCResolver3_B.CAN3Unpack_o19;
  arg_DSArmrestscreen1_TOW->DSResetCmd1 = DBCResolver3_B.CAN3Unpack_o15_d;
  arg_DSArmrestscreen1_TOW->DSMemoryLocation1Cmd1 =
    DBCResolver3_B.CAN3Unpack_o13_j;
  arg_DSArmrestscreen1_TOW->DSMemoryLocation2Cmd1 =
    DBCResolver3_B.CAN3Unpack_o14_h;
  arg_DSArmrestscreen1_TOW->DSCabinToledSCmd1 = DBCResolver3_B.CAN3Unpack_o4_f;
  arg_DSArmrestscreen1_TOW->DSCabinToledRCmd1 = DBCResolver3_B.CAN3Unpack_o3_g;
  arg_DSArmrestscreen1_TOW->DSSSceneSwitchReq1 = DBCResolver3_B.CAN3Unpack_o16_o;

  /* Outport: '<Root>/DSArmrestscreen1_ONE' incorporates:
   *  BusCreator generated from: '<Root>/DSArmrestscreen1_ONE'
   */
  arg_DSArmrestscreen1_ONE->DSCabinAtmosphereMCmd1 =
    DBCResolver3_B.CAN3Unpack_o4_n;
  arg_DSArmrestscreen1_ONE->DSCabinAtmosphereBCmd1 =
    DBCResolver3_B.CAN3Unpack_o3_a;
  arg_DSArmrestscreen1_ONE->DSAtmosphereLampCmd1 =
    DBCResolver3_B.CAN3Unpack_o1_b;
  arg_DSArmrestscreen1_ONE->DSDAmbianceLightB1 = DBCResolver3_B.CAN3Unpack_o8;
  arg_DSArmrestscreen1_ONE->DSDAmbianceLightM1 = DBCResolver3_B.CAN3Unpack_o9;
  arg_DSArmrestscreen1_ONE->DSDAmbianceLight1 = DBCResolver3_B.CAN3Unpack_o7_p;
  arg_DSArmrestscreen1_ONE->DSSweetAtmosphereCmd1 =
    DBCResolver3_B.CAN3Unpack_o12;
  arg_DSArmrestscreen1_ONE->DSVentilateCmd1 = DBCResolver3_B.CAN3Unpack_o13;
  arg_DSArmrestscreen1_ONE->DSHeatingCmd1 = DBCResolver3_B.CAN3Unpack_o11;
  arg_DSArmrestscreen1_ONE->DSBackrestBolsterCmd1 =
    DBCResolver3_B.CAN3Unpack_o2_j;
  arg_DSArmrestscreen1_ONE->DSCushionBolsterCmd1 =
    DBCResolver3_B.CAN3Unpack_o5_c;
  arg_DSArmrestscreen1_ONE->DSHeadPillowCmd1 = DBCResolver3_B.CAN3Unpack_o10;
  arg_DSArmrestscreen1_ONE->DSZeroGravityCushionCmd1 =
    DBCResolver3_B.CAN3Unpack_o14;
  arg_DSArmrestscreen1_ONE->DSZeroGravityUpliftCmd1 =
    DBCResolver3_B.CAN3Unpack_o16;
  arg_DSArmrestscreen1_ONE->DSZeroGravityHighProCmd1 =
    DBCResolver3_B.CAN3Unpack_o15;
  arg_DSArmrestscreen1_ONE->DSCushionSoftHardC1 = DBCResolver3_B.CAN3Unpack_o6_e;
}

/* Model initialize function */
void PC2DLL_Interface3_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Start for S-Function (scanunpack): '<S1>/CAN3 Unpack' */

  /*-----------S-Function Block: <S1>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S2>/CAN3 Unpack' */

  /*-----------S-Function Block: <S2>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN3 Unpack' */

  /*-----------S-Function Block: <S3>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN3 Unpack' */

  /*-----------S-Function Block: <S4>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S5>/CAN3 Unpack' */

  /*-----------S-Function Block: <S5>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S6>/CAN3 Unpack' */

  /*-----------S-Function Block: <S6>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S14>/CAN3 Unpack' */

  /*-----------S-Function Block: <S14>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S16>/CAN3 Unpack' */

  /*-----------S-Function Block: <S16>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S15>/CAN3 Unpack' */

  /*-----------S-Function Block: <S15>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S17>/CAN3 Unpack' */

  /*-----------S-Function Block: <S17>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S18>/CAN3 Unpack' */

  /*-----------S-Function Block: <S18>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S19>/CAN3 Unpack' */

  /*-----------S-Function Block: <S19>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S7>/CAN3 Unpack' */

  /*-----------S-Function Block: <S7>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S8>/CAN3 Unpack' */

  /*-----------S-Function Block: <S8>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/CAN3 Unpack' */

  /*-----------S-Function Block: <S11>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S10>/CAN3 Unpack' */

  /*-----------S-Function Block: <S10>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S12>/CAN3 Unpack' */

  /*-----------S-Function Block: <S12>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S13>/CAN3 Unpack' */

  /*-----------S-Function Block: <S13>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S20>/CAN3 Unpack' */

  /*-----------S-Function Block: <S20>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S21>/CAN3 Unpack' */

  /*-----------S-Function Block: <S21>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S22>/CAN3 Unpack' */

  /*-----------S-Function Block: <S22>/CAN3 Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S23>/CAN3 Unpack' */

  /*-----------S-Function Block: <S23>/CAN3 Unpack -----------------*/

  /* SystemInitialize for Atomic SubSystem: '<Root>/DSCU1Tow_ID_0X1' */

  /* Start for S-Function (scanunpack): '<S9>/CAN3 Unpack' */

  /*-----------S-Function Block: <S9>/CAN3 Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/DSCU1Tow_ID_0X1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

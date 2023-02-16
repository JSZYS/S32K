/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "DBCResolver3.h"              /* Model header file */

/* Global variables used by function prototype control */

/* '<Root>/DSCU1_FOUR_CANMsg' */
static CAN_MESSAGE_BUS arg_Msg = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen1One_Msg' */
static CAN_MESSAGE_BUS arg_Msg1 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen1Tow_Msg2' */
static CAN_MESSAGE_BUS arg_Msg2 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen1_THREE_Msg' */
static CAN_MESSAGE_BUS arg_Msg3 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen2One_Msg' */
static CAN_MESSAGE_BUS arg_Msg4 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen2_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Msg5 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen2_THREE_Msg' */
static CAN_MESSAGE_BUS arg_Msg6 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen1_One_Msg' */
static CAN_MESSAGE_BUS arg_Msg7 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen1_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Msg8 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen2_ONE_Msg' */
static CAN_MESSAGE_BUS arg_Msg9 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU1_ONE_Msg' */
static CAN_MESSAGE_BUS arg_Msg10 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen2_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Msg11 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU1_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Msg12 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU1_THREE_Msg' */
static CAN_MESSAGE_BUS arg_Msg13 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU2ONE_Msg' */
static CAN_MESSAGE_BUS arg_DSCU1_THREE_Msg1 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU1_FIVE_Msg' */
static CAN_MESSAGE_BUS arg_Inport = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSCU2_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Inport1 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PSCU1_ONE_Msg' */
static CAN_MESSAGE_BUS arg_Inport2 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PSCU1_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Inport3 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PSCU2_ONE_Msg' */
static CAN_MESSAGE_BUS arg_Inport4 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PSCU2_TOW_Msg' */
static CAN_MESSAGE_BUS arg_Inport5 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen1_THREE_Msg' */
static CAN_MESSAGE_BUS arg_PMArmrestscreen1_TOW_Msg1 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/PMArmrestscreen2_THREE_Msg' */
static CAN_MESSAGE_BUS arg_PMArmrestscreen2_TOW_Msg1 = {
  0U,                                  /* Extended */
  0U,                                  /* Length */
  0U,                                  /* Remote */
  0U,                                  /* Error */
  0U,                                  /* ID */
  0.0,                                 /* Timestamp */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  /* Data */
};

/* '<Root>/DSArmrestscreen1_ONE' */
static DSArmrestscreen1_ONE arg_DSArmrestscreen1_ONE;

/* '<Root>/DSArmrestscreen1_TOW' */
static DSArmrestscreen1_TWO arg_DSArmrestscreen1_TOW;

/* '<Root>/DSArmrestscreen1_THREE' */
static DSArmrestscreen1_THREE arg_DSArmrestscreen1_THREE;

/* '<Root>/DSArmrestscreen2_One' */
static DSArmrestscreen2_ONE arg_DSArmrestscreen2_One;

/* '<Root>/DSArmrestscreen2_TOW' */
static DSArmrestscreen2_TWO arg_DSArmrestscreen2_TOW;

/* '<Root>/DSArmrestscreen2_THREE' */
static DSArmrestscreen2_THREE arg_DSArmrestscreen2_THREE;

/* '<Root>/PMArmrestscreen1_ONE' */
static PMArmrestscreen1_ONE arg_PMArmrestscreen1_ONE;

/* '<Root>/PMArmrestscreen1_TOW' */
static PMArmrestscreen1_TWO arg_PMArmrestscreen1_TOW;

/* '<Root>/PMArmrestscreen2_ONE' */
static PMArmrestscreen2_ONE arg_PMArmrestscreen2_ONE;

/* '<Root>/DSCU1_ONE' */
static DSCU1_ONE arg_DSCU1_ONE;

/* '<Root>/PMArmrestscreen2_TOW' */
static PMArmrestscreen2_TWO arg_PMArmrestscreen2_TOW;

/* '<Root>/DSCU1_TOW' */
static DSCU1_TWO arg_DSCU1_TOW;

/* '<Root>/DSCU1_THREE' */
static DSCU1_THREE arg_DSCU1_THREE;

/* '<Root>/DSCU1_FOUR' */
static DSCU1_FOUR arg_Output;

/* '<Root>/DSCU2_ONE' */
static DSCU2_ONE arg_DSCU1_THREE1;

/* '<Root>/DSCU1_FIVE' */
static DSCU1_FIVE arg_DSCU1_FOUR1;

/* '<Root>/DSCU2_TOW' */
static DSCU2_TWO arg_DSCU1_FOUR2;

/* '<Root>/PSCU1_ONE' */
static PSCU1_ONE arg_DSCU1_FOUR3;

/* '<Root>/PSCU1_TOW' */
static PSCU1_TWO arg_DSCU1_FOUR4;

/* '<Root>/PSCU2_ONE' */
static PSCU2_ONE arg_DSCU1_FOUR5;

/* '<Root>/PSCU2_TOW' */
static PSCU2_TWO arg_DSCU1_FOUR6;

/* '<Root>/PMArmrestscreen1_THREE' */
static PMArmrestscreen1_THREE arg_PMArmrestscreen1_TOW1;

/* '<Root>/PMArmrestscreen2_THREE' */
static PMArmrestscreen2_THREE arg_PMArmrestscreen2_TOW1;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */

# ifdef CAN3_ONESTEP
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(DBCResolver3_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  PC2DLL_Interface3_step(&arg_Msg, &arg_DSArmrestscreen1_ONE, &arg_Msg1,
    &arg_DSArmrestscreen1_TOW, &arg_Msg2, &arg_DSArmrestscreen1_THREE, &arg_Msg3,
    &arg_DSArmrestscreen2_One, &arg_Msg4, &arg_DSArmrestscreen2_TOW, &arg_Msg5,
    &arg_DSArmrestscreen2_THREE, &arg_Msg6, &arg_PMArmrestscreen1_ONE, &arg_Msg7,
    &arg_PMArmrestscreen1_TOW, &arg_Msg8, &arg_PMArmrestscreen2_ONE, &arg_Msg9,
    &arg_DSCU1_ONE, &arg_Msg10, &arg_PMArmrestscreen2_TOW, &arg_Msg11,
    &arg_DSCU1_TOW, &arg_Msg12, &arg_DSCU1_THREE, &arg_Msg13, &arg_Output,
    &arg_DSCU1_THREE_Msg1, &arg_DSCU1_THREE1, &arg_Inport, &arg_Inport1,
    &arg_Inport2, &arg_Inport3, &arg_Inport4, &arg_DSCU1_FOUR1, &arg_DSCU1_FOUR2,
    &arg_DSCU1_FOUR3, &arg_DSCU1_FOUR4, &arg_DSCU1_FOUR5, &arg_DSCU1_FOUR6,
    &arg_Inport5, &arg_PMArmrestscreen1_TOW1, &arg_PMArmrestscreen1_TOW_Msg1,
    &arg_PMArmrestscreen2_TOW1, &arg_PMArmrestscreen2_TOW_Msg1);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

#endif

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific. This example
 * illustrates how you do this relative to initializing the model.
 */

#if 0
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  PC2DLL_Interface3_initialize();

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.05 seconds (base rate of the model) here.
   * The call syntax for rt_OneStep is
   *
   *  rt_OneStep();
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(DBCResolver3_M) == (NULL)) {
    /*  Perform application tasks here */
  }

  return 0;
}
#endif

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

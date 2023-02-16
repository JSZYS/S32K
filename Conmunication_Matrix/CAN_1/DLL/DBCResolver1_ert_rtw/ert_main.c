/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "DBCResolver1.h"              /* Model header file */

/* Global variables used by function prototype control */

/* '<Root>/RearPressurePad_Msg' */
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

/* '<Root>/KeMode_Msg2' */
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

/* '<Root>/RearPassengerStatus_Msg' */
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

/* '<Root>/Fold_wSts_Msg' */
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

/* '<Root>/SpotLightSts_Msg' */
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

/* '<Root>/CabinAtmosphereSts_Msg' */
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

/* '<Root>/CabinSta2_Msg' */
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

/* '<Root>/CabinSta1_Msg' */
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

/* '<Root>/HeadLightSta_Msg' */
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

/* '<Root>/PC1_Ctr_Msg' */
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

/* '<Root>/TailLightSta_Msg' */
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

/* '<Root>/RearPressurebootload1_Msg' */
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

/* '<Root>/RearPressurePad' */
static RearPressurePad arg_DSArmrestscreen1_ONE;

/* '<Root>/KeMode' */
static KeMode arg_DSArmrestscreen1_TOW;

/* '<Root>/RearPassengerStatus' */
static RearPassengerStatus arg_DSArmrestscreen1_THREE;

/* '<Root>/Fold_wSts' */
static Fold_wSts arg_DSArmrestscreen2_One;

/* '<Root>/SpotLightSts' */
static SpotLightSts arg_DSArmrestscreen2_TOW;

/* '<Root>/CabinAtmosphereSts' */
static CabinAtmosphereSts arg_DSArmrestscreen2_THREE;

/* '<Root>/CabinSta2' */
static CabinSta2 arg_PMArmrestscreen1_ONE;

/* '<Root>/CabinSta1' */
static CabinSta1 arg_PMArmrestscreen1_TOW;

/* '<Root>/HeadLightSta' */
static HeadLightSta arg_PMArmrestscreen2_ONE;

/* '<Root>/PC1_Ctr' */
static PC1_Ctr arg_PMArmrestscreen2_TOW;

/* '<Root>/TailLightSta' */
static TailLightSta arg_PMArmrestscreen1_TOW1;

/* '<Root>/RearPressurebootload1' */
static RearPressurebootload arg_PMArmrestscreen2_TOW1;

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

#ifdef CAN1_ONESTEP
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(DBCResolver1_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  PC2DLL_Interface1_step(&arg_DSArmrestscreen1_ONE, &arg_Msg1,
    &arg_DSArmrestscreen1_TOW, &arg_Msg2, &arg_DSArmrestscreen1_THREE, &arg_Msg3,
    &arg_DSArmrestscreen2_One, &arg_Msg4, &arg_DSArmrestscreen2_TOW, &arg_Msg5,
    &arg_DSArmrestscreen2_THREE, &arg_Msg6, &arg_PMArmrestscreen1_ONE, &arg_Msg7,
    &arg_PMArmrestscreen1_TOW, &arg_Msg8, &arg_PMArmrestscreen2_ONE, &arg_Msg9,
    &arg_PMArmrestscreen2_TOW, &arg_Msg11, &arg_PMArmrestscreen1_TOW1,
    &arg_PMArmrestscreen1_TOW_Msg1, &arg_PMArmrestscreen2_TOW1,
    &arg_PMArmrestscreen2_TOW_Msg1);

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
  PC2DLL_Interface1_initialize();

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
  while (rtmGetErrorStatus(DBCResolver1_M) == (NULL)) {
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

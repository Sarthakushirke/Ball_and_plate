/*
 * Sensors_and_actuators_ball_and_plate_2022b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate_2022b".
 *
 * Model version              : 7.12
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Wed May 31 17:59:15 2023
 *
 * Target selection: rti1202.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Sensors_and_actuators_ball_and_plate_2022b_trc_ptr.h"
#include "Sensors_and_actuators_ball_and_plate_2022b.h"
#include "rtwtypes.h"
#include "Sensors_and_actuators_ball_and_plate_2022b_private.h"
#include <math.h>
#include <string.h>
#include "zero_crossing_types.h"

/* Block signals (default storage) */
B_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_B;

/* Continuous states */
X_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_X;

/* Block states (default storage) */
DW_Sensors_and_actuators_ball_T Sensors_and_actuators_ball_a_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Sensors_and_actuators_T Sensors_and_actuators_b_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_Sensors_and_actuators_ba_T Sensors_and_actuators_ball_an_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Sensors_and_actuators_ba_T Sensors_and_actuators_ball_an_Y;

/* Real-time model */
static RT_MODEL_Sensors_and_actuator_T Sensors_and_actuators_ball_a_M_;
RT_MODEL_Sensors_and_actuator_T *const Sensors_and_actuators_ball_a_M =
  &Sensors_and_actuators_ball_a_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 9;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Sensors_and_actuators_ball_and_plate_2022b_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for enable system:
 *    '<S163>/Enabled Subsystem'
 *    '<S168>/Enabled Subsystem'
 *    '<S173>/Enabled Subsystem'
 */
void Sensors_a_EnabledSubsystem_Init(B_EnabledSubsystem_Sensors_an_T *localB,
  P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S164>/Out1' incorporates:
   *  Outport: '<S164>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S163>/Enabled Subsystem'
 *    '<S168>/Enabled Subsystem'
 *    '<S173>/Enabled Subsystem'
 */
void Sensor_EnabledSubsystem_Disable(B_EnabledSubsystem_Sensors_an_T *localB,
  DW_EnabledSubsystem_Sensors_a_T *localDW, P_EnabledSubsystem_Sensors_an_T
  *localP)
{
  /* Disable for SignalConversion generated from: '<S164>/Out1' incorporates:
   *  Outport: '<S164>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S163>/Enabled Subsystem'
 *    '<S168>/Enabled Subsystem'
 *    '<S173>/Enabled Subsystem'
 */
void Sensors__EnabledSubsystem_Start(DW_EnabledSubsystem_Sensors_a_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S163>/Enabled Subsystem'
 *    '<S168>/Enabled Subsystem'
 *    '<S173>/Enabled Subsystem'
 */
void Sensors_and_ac_EnabledSubsystem(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, real_T rtu_Enable,
  B_EnabledSubsystem_Sensors_an_T *localB, DW_EnabledSubsystem_Sensors_a_T
  *localDW, P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S164>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable > 0.0) {
      localDW->EnabledSubsystem_MODE = true;
    } else if (localDW->EnabledSubsystem_MODE) {
      Sensor_EnabledSubsystem_Disable(localB, localDW, localP);
    }
  }

  if (localDW->EnabledSubsystem_MODE) {
    /* SignalConversion generated from: '<S164>/Out1' incorporates:
     *  Constant: '<S164>/Constant'
     */
    localB->OutportBufferForOut1 = localP->Constant_Value;
  }

  /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem' */
}

/*
 * System initialize for enable system:
 *    '<S163>/Enabled Subsystem1'
 *    '<S168>/Enabled Subsystem1'
 *    '<S173>/Enabled Subsystem1'
 */
void Sensors__EnabledSubsystem1_Init(B_EnabledSubsystem1_Sensors_a_T *localB,
  P_EnabledSubsystem1_Sensors_a_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S165>/In1' incorporates:
   *  Outport: '<S165>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S163>/Enabled Subsystem1'
 *    '<S168>/Enabled Subsystem1'
 *    '<S173>/Enabled Subsystem1'
 */
void Senso_EnabledSubsystem1_Disable(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Start for enable system:
 *    '<S163>/Enabled Subsystem1'
 *    '<S168>/Enabled Subsystem1'
 *    '<S173>/Enabled Subsystem1'
 */
void Sensors_EnabledSubsystem1_Start(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S163>/Enabled Subsystem1'
 *    '<S168>/Enabled Subsystem1'
 *    '<S173>/Enabled Subsystem1'
 */
void Sensors_and_a_EnabledSubsystem1(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, boolean_T rtu_Enable, real_T rtu_In1,
  B_EnabledSubsystem1_Sensors_a_T *localB, DW_EnabledSubsystem1_Sensors__T
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S165>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable) {
      localDW->EnabledSubsystem1_MODE = true;
    } else if (localDW->EnabledSubsystem1_MODE) {
      Senso_EnabledSubsystem1_Disable(localDW);
    }
  }

  if (localDW->EnabledSubsystem1_MODE && rtmIsMajorTimeStep
      (Sensors_and_actuators_ball_a_M)) {
    /* SignalConversion generated from: '<S165>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem1' */
}

/* Model output function */
void Sensors_and_actuators_ball_and_plate_2022b_output(void)
{
  real_T u0;
  real_T u1;
  real_T u2;
  boolean_T zcEvent;
  ZCEventType zcEvent_0;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* set solver stop time */
    if (!(Sensors_and_actuators_ball_a_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Sensors_and_actuators_ball_a_M->solverInfo,
                            ((Sensors_and_actuators_ball_a_M->Timing.clockTickH0
        + 1) * Sensors_and_actuators_ball_a_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Sensors_and_actuators_ball_a_M->solverInfo,
                            ((Sensors_and_actuators_ball_a_M->Timing.clockTick0
        + 1) * Sensors_and_actuators_ball_a_M->Timing.stepSize0 +
        Sensors_and_actuators_ball_a_M->Timing.clockTickH0 *
        Sensors_and_actuators_ball_a_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Sensors_and_actuators_ball_a_M)) {
    Sensors_and_actuators_ball_a_M->Timing.t[0] = rtsiGetT
      (&Sensors_and_actuators_ball_a_M->solverInfo);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S162>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_1' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o,
                           (Sensors_and_actuators_ball_an_P.Init_1_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S162>/S-Function1' incorporates:
         *  Constant: '<S10>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1 --- */
          /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
          {
            /* -- Position measurement enabled -- */

            /* Set counter position for the selected incremental Encoder (in lines) */
            DioCl2EncoderIn_setEncPosition
              (pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1,
               (Float64)(Sensors_and_actuators_ball_an_P.Constant_Value * 1)
               );

            /* Set positions state for the selected incremental Encoder to VALID */
            DioCl2EncoderIn_setEncPosValidity
              (pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1,
               DIO_ENC_POSITION_VALID
               );

            /* Writes settings for the incremental Encoder */
            DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
          }
        }
      }
    }

    /* End of Outputs for SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S161>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S10>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_g =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_o;

    /* Sum: '<S10>/AbsPosition' incorporates:
     *  Constant: '<S10>/Pos_offset'
     *  Constant: '<S10>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_hs =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_g -
       Sensors_and_actuators_ball_an_P.ZP_Value) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value;

    /* Abs: '<S163>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_c = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_n);

    /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_1' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_1_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem' */

    /* RelationalOperator: '<S163>/Relational Operator1' incorporates:
     *  Constant: '<S163>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_b =
      (Sensors_and_actuators_ball_an_B.Abs_c <=
       Sensors_and_actuators_ball_an_P.Const_Value);
  }

  /* TransferFcn: '<S163>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_f =
    Sensors_and_actuators_ball_an_P.TransferFcn_C *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;

  /* RelationalOperator: '<S163>/Relational Operator' incorporates:
   *  Constant: '<S163>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_c =
    (Sensors_and_actuators_ball_an_P.Const1_Value >=
     Sensors_and_actuators_ball_an_B.TransferFcn_f);

  /* Logic: '<S163>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_1'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_c =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_b &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_c &&
     (Sensors_and_actuators_ball_an_P.Init_1_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_c,
    Sensors_and_actuators_ball_an_B.Inc2Pos_g,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_A' incorporates:
     *  Gain: '<S10>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_A =
      Sensors_and_actuators_ball_an_P.mm2m_Gain *
      Sensors_and_actuators_ball_an_B.AbsPosition_hs;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement1' */

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S167>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_2' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n,
                           (Sensors_and_actuators_ball_an_P.Init_2_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S167>/S-Function1' incorporates:
         *  Constant: '<S11>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1 --- */
          /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
          {
            /* -- Position measurement enabled -- */

            /* Set counter position for the selected incremental Encoder (in lines) */
            DioCl2EncoderIn_setEncPosition
              (pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3,
               (Float64)(Sensors_and_actuators_ball_an_P.Constant_Value_d * 1)
               );

            /* Set positions state for the selected incremental Encoder to VALID */
            DioCl2EncoderIn_setEncPosValidity
              (pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3,
               DIO_ENC_POSITION_VALID
               );

            /* Writes settings for the incremental Encoder */
            DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
          }
        }
      }
    }

    /* End of Outputs for SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S166>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S11>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_i =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_j *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_g;

    /* Sum: '<S11>/AbsPosition' incorporates:
     *  Constant: '<S11>/Pos_offset'
     *  Constant: '<S11>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_h =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_i -
       Sensors_and_actuators_ball_an_P.ZP_Value_a) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_f;

    /* Abs: '<S168>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_l = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_p);

    /* Outputs for Enabled SubSystem: '<S168>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_2' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_2_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

    /* End of Outputs for SubSystem: '<S168>/Enabled Subsystem' */

    /* RelationalOperator: '<S168>/Relational Operator1' incorporates:
     *  Constant: '<S168>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_p =
      (Sensors_and_actuators_ball_an_B.Abs_l <=
       Sensors_and_actuators_ball_an_P.Const_Value_d);
  }

  /* TransferFcn: '<S168>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_d =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_j *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;

  /* RelationalOperator: '<S168>/Relational Operator' incorporates:
   *  Constant: '<S168>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_n =
    (Sensors_and_actuators_ball_an_P.Const1_Value_k >=
     Sensors_and_actuators_ball_an_B.TransferFcn_d);

  /* Logic: '<S168>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_2'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_k =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_p &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_n &&
     (Sensors_and_actuators_ball_an_P.Init_2_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S168>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_k,
    Sensors_and_actuators_ball_an_B.Inc2Pos_i,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Outputs for SubSystem: '<S168>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_B' incorporates:
     *  Gain: '<S11>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_B =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_f *
      Sensors_and_actuators_ball_an_B.AbsPosition_h;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement2' */

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S172>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/init_3' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC,
                           (Sensors_and_actuators_ball_an_P.init_3_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S172>/S-Function1' incorporates:
         *  Constant: '<S12>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1 --- */
          /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
          {
            /* -- Position measurement enabled -- */

            /* Set counter position for the selected incremental Encoder (in lines) */
            DioCl2EncoderIn_setEncPosition
              (pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5,
               (Float64)(Sensors_and_actuators_ball_an_P.Constant_Value_c * 1)
               );

            /* Set positions state for the selected incremental Encoder to VALID */
            DioCl2EncoderIn_setEncPosValidity
              (pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5,
               DIO_ENC_POSITION_VALID
               );

            /* Writes settings for the incremental Encoder */
            DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
          }
        }
      }
    }

    /* End of Outputs for SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S171>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S12>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_i *
      Sensors_and_actuators_ball_an_B.SFunction1_o1;

    /* Sum: '<S12>/AbsPosition' incorporates:
     *  Constant: '<S12>/Pos_offset'
     *  Constant: '<S12>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition =
      (Sensors_and_actuators_ball_an_B.Inc2Pos -
       Sensors_and_actuators_ball_an_P.ZP_Value_d) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_b;

    /* Abs: '<S173>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2);

    /* Outputs for Enabled SubSystem: '<S173>/Enabled Subsystem' */
    /* Constant: '<Root>/init_3' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.init_3_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

    /* End of Outputs for SubSystem: '<S173>/Enabled Subsystem' */

    /* RelationalOperator: '<S173>/Relational Operator1' incorporates:
     *  Constant: '<S173>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1 =
      (Sensors_and_actuators_ball_an_B.Abs <=
       Sensors_and_actuators_ball_an_P.Const_Value_i);
  }

  /* TransferFcn: '<S173>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_m *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;

  /* RelationalOperator: '<S173>/Relational Operator' incorporates:
   *  Constant: '<S173>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator =
    (Sensors_and_actuators_ball_an_P.Const1_Value_n >=
     Sensors_and_actuators_ball_an_B.TransferFcn);

  /* Logic: '<S173>/Logical Operator2' incorporates:
   *  Constant: '<Root>/init_3'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2 =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1 &&
     Sensors_and_actuators_ball_an_B.RelationalOperator &&
     (Sensors_and_actuators_ball_an_P.init_3_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S173>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2,
    Sensors_and_actuators_ball_an_B.Inc2Pos,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Outputs for SubSystem: '<S173>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_C' incorporates:
     *  Gain: '<S12>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_C =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_a *
      Sensors_and_actuators_ball_an_B.AbsPosition;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement3' */

  /* Sin: '<Root>/Sine Wave' */
  Sensors_and_actuators_ball_an_B.SineWave = sin
    (Sensors_and_actuators_ball_an_P.SineWave_Freq *
     Sensors_and_actuators_ball_a_M->Timing.t[0] +
     Sensors_and_actuators_ball_an_P.SineWave_Phase) *
    Sensors_and_actuators_ball_an_P.SineWave_Amp +
    Sensors_and_actuators_ball_an_P.SineWave_Bias;

  /* Saturate: '<Root>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.SineWave;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_n;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_d;
  if (u0 > u2) {
    /* Saturate: '<Root>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<Root>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u1;
  } else {
    /* Saturate: '<Root>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Switch: '<Root>/switch_ref_constant_sin_1' incorporates:
   *  Inport: '<Root>/switch_ref_inport_1'
   */
  if (Sensors_and_actuators_ball_an_U.switch_ref_inport_1 >=
      Sensors_and_actuators_ball_an_P.switch_ref_constant_sin_1_Thres) {
    /* Switch: '<Root>/switch_ref_constant_sin_1' incorporates:
     *  Constant: '<Root>/constant_ref_1'
     */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_1 =
      Sensors_and_actuators_ball_an_P.constant_ref_1_Value;
  } else {
    /* Switch: '<Root>/switch_ref_constant_sin_1' */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_1 =
      Sensors_and_actuators_ball_an_B.Saturation;
  }

  /* End of Switch: '<Root>/switch_ref_constant_sin_1' */

  /* Sum: '<Root>/Sum1' incorporates:
   *  Outport: '<Root>/P_A'
   */
  Sensors_and_actuators_ball_an_B.Sum1 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_1 -
    Sensors_and_actuators_ball_an_Y.P_A;

  /* Product: '<S53>/PProd Out' incorporates:
   *  Constant: '<Root>/Controller_P'
   */
  Sensors_and_actuators_ball_an_B.PProdOut =
    Sensors_and_actuators_ball_an_B.Sum1 *
    Sensors_and_actuators_ball_an_P.Controller_P_Value;

  /* Integrator: '<S48>/Integrator' incorporates:
   *  Constant: '<Root>/reset_integrator_1'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_1_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
        Sensors_and_actuators_ball_an_P.PIDController_InitialConditio_c;
    }
  }

  /* Integrator: '<S48>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE;

  /* Product: '<S42>/DProd Out' incorporates:
   *  Constant: '<Root>/Controller_D'
   */
  Sensors_and_actuators_ball_an_B.DProdOut =
    Sensors_and_actuators_ball_an_B.Sum1 *
    Sensors_and_actuators_ball_an_P.Controller_D_Value;

  /* Integrator: '<S43>/Filter' incorporates:
   *  Constant: '<Root>/reset_integrator_1'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_1_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE =
        Sensors_and_actuators_ball_an_P.PIDController_InitialConditionF;
    }
  }

  /* Integrator: '<S43>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE;

  /* Sum: '<S43>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD =
    Sensors_and_actuators_ball_an_B.DProdOut -
    Sensors_and_actuators_ball_an_B.Filter;

  /* Product: '<S51>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut =
    Sensors_and_actuators_ball_an_B.SumD *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;

  /* Sum: '<S57>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum =
    (Sensors_and_actuators_ball_an_B.PProdOut +
     Sensors_and_actuators_ball_an_B.Integrator) +
    Sensors_and_actuators_ball_an_B.NProdOut;

  /* Saturate: '<S55>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.Sum;
  u1 = Sensors_and_actuators_ball_an_P.PIDController_LowerSaturationLi;
  u2 = Sensors_and_actuators_ball_an_P.PIDController_UpperSaturationLi;
  if (u0 > u2) {
    /* Saturate: '<S55>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S55>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u1;
  } else {
    /* Saturate: '<S55>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u0;
  }

  /* End of Saturate: '<S55>/Saturation' */

  /* Switch: '<Root>/controller_disable_1' incorporates:
   *  Inport: '<Root>/controller_disable1'
   */
  if (Sensors_and_actuators_ball_an_U.controller_disable1 >=
      Sensors_and_actuators_ball_an_P.controller_disable_1_Threshold) {
    /* Switch: '<Root>/controller_disable_1' incorporates:
     *  Constant: '<Root>/Constant'
     */
    Sensors_and_actuators_ball_an_B.controller_disable_1 =
      Sensors_and_actuators_ball_an_P.Constant_Value_i;
  } else {
    /* Switch: '<Root>/controller_disable_1' */
    Sensors_and_actuators_ball_an_B.controller_disable_1 =
      Sensors_and_actuators_ball_an_B.Saturation_m;
  }

  /* End of Switch: '<Root>/controller_disable_1' */

  /* Outport: '<Root>/Actuator_Controller_Output_1' */
  Sensors_and_actuators_ball_an_Y.Actuator_Controller_Output_1 =
    Sensors_and_actuators_ball_an_B.controller_disable_1;

  /* Switch: '<Root>/switch_ref_constant_sin_2' incorporates:
   *  Inport: '<Root>/switch_ref_inport_2'
   */
  if (Sensors_and_actuators_ball_an_U.switch_ref_inport_2 >=
      Sensors_and_actuators_ball_an_P.switch_ref_constant_sin_2_Thres) {
    /* Switch: '<Root>/switch_ref_constant_sin_2' incorporates:
     *  Constant: '<Root>/constant_ref_2'
     */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_2 =
      Sensors_and_actuators_ball_an_P.constant_ref_2_Value;
  } else {
    /* Switch: '<Root>/switch_ref_constant_sin_2' */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_2 =
      Sensors_and_actuators_ball_an_B.Saturation;
  }

  /* End of Switch: '<Root>/switch_ref_constant_sin_2' */

  /* Sum: '<Root>/Sum2' incorporates:
   *  Outport: '<Root>/P_B'
   */
  Sensors_and_actuators_ball_an_B.Sum2 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_2 -
    Sensors_and_actuators_ball_an_Y.P_B;

  /* Product: '<S101>/PProd Out' incorporates:
   *  Constant: '<Root>/Controller_P'
   */
  Sensors_and_actuators_ball_an_B.PProdOut_o =
    Sensors_and_actuators_ball_an_B.Sum2 *
    Sensors_and_actuators_ball_an_P.Controller_P_Value;

  /* Integrator: '<S96>/Integrator' incorporates:
   *  Constant: '<Root>/reset_integrator_2'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_c,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_2_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b =
        Sensors_and_actuators_ball_an_P.PIDController1_InitialConditi_j;
    }
  }

  /* Integrator: '<S96>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_a =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b;

  /* Product: '<S90>/DProd Out' incorporates:
   *  Constant: '<Root>/Controller_D'
   */
  Sensors_and_actuators_ball_an_B.DProdOut_p =
    Sensors_and_actuators_ball_an_B.Sum2 *
    Sensors_and_actuators_ball_an_P.Controller_D_Value;

  /* Integrator: '<S91>/Filter' incorporates:
   *  Constant: '<Root>/reset_integrator_2'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_l,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_2_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE_j =
        Sensors_and_actuators_ball_an_P.PIDController1_InitialCondition;
    }
  }

  /* Integrator: '<S91>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_a =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_j;

  /* Sum: '<S91>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_k =
    Sensors_and_actuators_ball_an_B.DProdOut_p -
    Sensors_and_actuators_ball_an_B.Filter_a;

  /* Product: '<S99>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_m =
    Sensors_and_actuators_ball_an_B.SumD_k *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;

  /* Sum: '<S105>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_o =
    (Sensors_and_actuators_ball_an_B.PProdOut_o +
     Sensors_and_actuators_ball_an_B.Integrator_a) +
    Sensors_and_actuators_ball_an_B.NProdOut_m;

  /* Saturate: '<S103>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.Sum_o;
  u1 = Sensors_and_actuators_ball_an_P.PIDController1_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.PIDController1_UpperSaturationL;
  if (u0 > u2) {
    /* Saturate: '<S103>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S103>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u1;
  } else {
    /* Saturate: '<S103>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u0;
  }

  /* End of Saturate: '<S103>/Saturation' */

  /* Switch: '<Root>/controller_disable_2' incorporates:
   *  Inport: '<Root>/controller_disable2'
   */
  if (Sensors_and_actuators_ball_an_U.controller_disable2 >=
      Sensors_and_actuators_ball_an_P.controller_disable_2_Threshold) {
    /* Switch: '<Root>/controller_disable_2' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    Sensors_and_actuators_ball_an_B.controller_disable_2 =
      Sensors_and_actuators_ball_an_P.Constant2_Value;
  } else {
    /* Switch: '<Root>/controller_disable_2' */
    Sensors_and_actuators_ball_an_B.controller_disable_2 =
      Sensors_and_actuators_ball_an_B.Saturation_l;
  }

  /* End of Switch: '<Root>/controller_disable_2' */

  /* Outport: '<Root>/Actuator_Controller_Output_2' */
  Sensors_and_actuators_ball_an_Y.Actuator_Controller_Output_2 =
    Sensors_and_actuators_ball_an_B.controller_disable_2;

  /* Switch: '<Root>/switch_ref_constant_sin_3' incorporates:
   *  Inport: '<Root>/switch_ref_inport_3'
   */
  if (Sensors_and_actuators_ball_an_U.switch_ref_inport_3 >=
      Sensors_and_actuators_ball_an_P.switch_ref_constant_sin_3_Thres) {
    /* Switch: '<Root>/switch_ref_constant_sin_3' incorporates:
     *  Constant: '<Root>/constant_ref_3'
     */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_3 =
      Sensors_and_actuators_ball_an_P.constant_ref_3_Value;
  } else {
    /* Switch: '<Root>/switch_ref_constant_sin_3' */
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_3 =
      Sensors_and_actuators_ball_an_B.Saturation;
  }

  /* End of Switch: '<Root>/switch_ref_constant_sin_3' */

  /* Sum: '<Root>/Sum3' incorporates:
   *  Outport: '<Root>/P_C'
   */
  Sensors_and_actuators_ball_an_B.Sum3 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_3 -
    Sensors_and_actuators_ball_an_Y.P_C;

  /* Product: '<S149>/PProd Out' incorporates:
   *  Constant: '<Root>/Controller_P'
   */
  Sensors_and_actuators_ball_an_B.PProdOut_k =
    Sensors_and_actuators_ball_an_B.Sum3 *
    Sensors_and_actuators_ball_an_P.Controller_P_Value;

  /* Integrator: '<S144>/Integrator' incorporates:
   *  Constant: '<Root>/reset_integrator_3'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_h,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_3_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k =
        Sensors_and_actuators_ball_an_P.PIDController2_InitialConditi_o;
    }
  }

  /* Integrator: '<S144>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_d =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k;

  /* Product: '<S138>/DProd Out' incorporates:
   *  Constant: '<Root>/Controller_D'
   */
  Sensors_and_actuators_ball_an_B.DProdOut_k =
    Sensors_and_actuators_ball_an_B.Sum3 *
    Sensors_and_actuators_ball_an_P.Controller_D_Value;

  /* Integrator: '<S139>/Filter' incorporates:
   *  Constant: '<Root>/reset_integrator_3'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_f,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_3_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE_a =
        Sensors_and_actuators_ball_an_P.PIDController2_InitialCondition;
    }
  }

  /* Integrator: '<S139>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_o =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_a;

  /* Sum: '<S139>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_e =
    Sensors_and_actuators_ball_an_B.DProdOut_k -
    Sensors_and_actuators_ball_an_B.Filter_o;

  /* Product: '<S147>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_g =
    Sensors_and_actuators_ball_an_B.SumD_e *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;

  /* Sum: '<S153>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_a =
    (Sensors_and_actuators_ball_an_B.PProdOut_k +
     Sensors_and_actuators_ball_an_B.Integrator_d) +
    Sensors_and_actuators_ball_an_B.NProdOut_g;

  /* Saturate: '<S151>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.Sum_a;
  u1 = Sensors_and_actuators_ball_an_P.PIDController2_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.PIDController2_UpperSaturationL;
  if (u0 > u2) {
    /* Saturate: '<S151>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S151>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u1;
  } else {
    /* Saturate: '<S151>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u0;
  }

  /* End of Saturate: '<S151>/Saturation' */

  /* Switch: '<Root>/controller_disable_3' incorporates:
   *  Inport: '<Root>/controller_disable3'
   */
  if (Sensors_and_actuators_ball_an_U.controller_disable3 >=
      Sensors_and_actuators_ball_an_P.controller_disable_3_Threshold) {
    /* Switch: '<Root>/controller_disable_3' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    Sensors_and_actuators_ball_an_B.controller_disable_3 =
      Sensors_and_actuators_ball_an_P.Constant3_Value;
  } else {
    /* Switch: '<Root>/controller_disable_3' */
    Sensors_and_actuators_ball_an_B.controller_disable_3 =
      Sensors_and_actuators_ball_an_B.Saturation_f;
  }

  /* End of Switch: '<Root>/controller_disable_3' */

  /* Outport: '<Root>/Actuator_Controller_Output_3' */
  Sensors_and_actuators_ball_an_Y.Actuator_Controller_Output_3 =
    Sensors_and_actuators_ball_an_B.controller_disable_3;

  /* Outport: '<Root>/ref_1' */
  Sensors_and_actuators_ball_an_Y.ref_1 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_1;

  /* Outport: '<Root>/ref_2' */
  Sensors_and_actuators_ball_an_Y.ref_2 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_2;

  /* Outport: '<Root>/ref_3' */
  Sensors_and_actuators_ball_an_Y.ref_3 =
    Sensors_and_actuators_ball_an_B.switch_ref_constant_sin_3;

  /* Switch: '<Root>/CloseLoop_disable_1' incorporates:
   *  Inport: '<Root>/CloseLoop_disable1'
   */
  if (Sensors_and_actuators_ball_an_U.CloseLoop_disable1 >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_1_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.TransferFcn_f;
  } else {
    /* Switch: '<Root>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.controller_disable_1;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_1' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Saturate: '<S4>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_1;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S4>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S4>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u1;
  } else {
    /* Saturate: '<S4>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Gain: '<S4>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V_p =
    Sensors_and_actuators_ball_an_P.Current2V_Gain *
    Sensors_and_actuators_ball_an_B.Saturation_e;

  /* Gain: '<S4>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale_o =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain *
    Sensors_and_actuators_ball_an_B.Current2V_p;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* S-Function (rti_commonblock): '<S14>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
    /* --- [RTI120X, DAC C1] - Channel: 1 --- */
    {
      /* define variables required for DAC realtime functions */
      Float64 inportDacData= 0.0;
      inportDacData = (real_T) Sensors_and_actuators_ball_an_B.DSPscale_o;

      /* write value of CL1 DAC for output channel 1 */
      DacCl1AnalogOut_setOutputValue(pRTIDacC1AnalogOut_Ch_1,
        DAC_CLASS1_CHANNEL_1, inportDacData);
      DacCl1AnalogOut_write(pRTIDacC1AnalogOut_Ch_1);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Switch: '<Root>/CloseLoop_disable_2' incorporates:
   *  Inport: '<Root>/CloseLoop_disable2'
   */
  if (Sensors_and_actuators_ball_an_U.CloseLoop_disable2 >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_2_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.TransferFcn_d;
  } else {
    /* Switch: '<Root>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.controller_disable_2;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_2' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Saturate: '<S5>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_2;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_a;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_g;
  if (u0 > u2) {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u1;
  } else {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V_a =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_l *
    Sensors_and_actuators_ball_an_B.Saturation_li;

  /* Gain: '<S5>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale_a =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_j *
    Sensors_and_actuators_ball_an_B.Current2V_a;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* S-Function (rti_commonblock): '<S15>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
    /* --- [RTI120X, DAC C1] - Channel: 2 --- */
    {
      /* define variables required for DAC realtime functions */
      Float64 inportDacData= 0.0;
      inportDacData = (real_T) Sensors_and_actuators_ball_an_B.DSPscale_a;

      /* write value of CL1 DAC for output channel 2 */
      DacCl1AnalogOut_setOutputValue(pRTIDacC1AnalogOut_Ch_2,
        DAC_CLASS1_CHANNEL_2, inportDacData);
      DacCl1AnalogOut_write(pRTIDacC1AnalogOut_Ch_2);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Switch: '<Root>/CloseLoop_disable_3' incorporates:
   *  Inport: '<Root>/CloseLoop_disable3'
   */
  if (Sensors_and_actuators_ball_an_U.CloseLoop_disable3 >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_3_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_3' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_3 =
      Sensors_and_actuators_ball_an_B.TransferFcn;
  } else {
    /* Switch: '<Root>/CloseLoop_disable_3' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_3 =
      Sensors_and_actuators_ball_an_B.controller_disable_3;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_3' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier3' */

  /* Saturate: '<S6>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_3;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_m;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_j;
  if (u0 > u2) {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u1;
  } else {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_j *
    Sensors_and_actuators_ball_an_B.Saturation_mt;

  /* Gain: '<S6>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_h *
    Sensors_and_actuators_ball_an_B.Current2V;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* S-Function (rti_commonblock): '<S16>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1 --- */
    /* --- [RTI120X, DAC C1] - Channel: 3 --- */
    {
      /* define variables required for DAC realtime functions */
      Float64 inportDacData= 0.0;
      inportDacData = (real_T) Sensors_and_actuators_ball_an_B.DSPscale;

      /* write value of CL1 DAC for output channel 3 */
      DacCl1AnalogOut_setOutputValue(pRTIDacC1AnalogOut_Ch_3,
        DAC_CLASS1_CHANNEL_3, inportDacData);
      DacCl1AnalogOut_write(pRTIDacC1AnalogOut_Ch_3);
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier3' */

  /* Product: '<S45>/IProd Out' incorporates:
   *  Constant: '<Root>/Controller_I'
   */
  Sensors_and_actuators_ball_an_B.IProdOut =
    Sensors_and_actuators_ball_an_B.Sum1 *
    Sensors_and_actuators_ball_an_P.Controller_I_Value;

  /* Product: '<S93>/IProd Out' incorporates:
   *  Constant: '<Root>/Controller_I'
   */
  Sensors_and_actuators_ball_an_B.IProdOut_g =
    Sensors_and_actuators_ball_an_B.Sum2 *
    Sensors_and_actuators_ball_an_P.Controller_I_Value;

  /* Product: '<S141>/IProd Out' incorporates:
   *  Constant: '<Root>/Controller_I'
   */
  Sensors_and_actuators_ball_an_B.IProdOut_d =
    Sensors_and_actuators_ball_an_B.Sum3 *
    Sensors_and_actuators_ball_an_P.Controller_I_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    Sensors_and_actuators_ball_an_B.DataTypeConversion =
      (Sensors_and_actuators_ball_an_P.Constant1_Value != 0.0);

    /* S-Function (rti_commonblock): '<S2>/S-Function1' incorporates:
     *  Outport: '<Root>/Frames '
     *  Outport: '<Root>/Status '
     */
    /* This comment workarounds a code generation problem */
    {
      /* --- Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_UDP_RX_BL1: ==> Socket ID = (0) --- */
      /* dSPACE I/O Board DSETHERNET #1 Unit:RXUDP Group:RXUDP */

      /* variable frame size mode is adjusted */

      /* variable declarations */
      DsSSockAddrIn remoteAddr;
      UInt32 addrLen = sizeof(remoteAddr);
      Int32 realLen, tmpStatus;

      /* set remote IP and port initially to 0 within the socket structure */
      remoteAddr.sin_addr.s_addr = (UInt32) 0;
      remoteAddr.sin_port = (UInt16) 0;
      remoteAddr.sin_family = DSIOETH_AF_INET;

      /* whether block is enabled */
      if (Sensors_and_actuators_ball_an_B.DataTypeConversion == 0) {
        /* block is disabled */
        /**/

        /* set output Received Bytes to 0 */
        Sensors_and_actuators_ball_an_B.SFunction1_o4 = (uint32_T) 0;

        /* set output Status to state 1 indicating a disabled RX block */
        tmpStatus = 1;
      } else {
        /* block is enabled */
        /**/

        /* receive data from a socket and obtain the address of the sender */
        realLen =
          DsIoEth_recvfrom( DSIOETH_CONNECTION_ID_0,
                           (uint8_T *)
                           &Sensors_and_actuators_ball_an_B.SFunction1_o1_n[0],
                           32U,
                           DSIOETH_FLAG_NONE,
                           (DsSSockAddr *) &remoteAddr,
                           &addrLen
                           );
        if (realLen > 0) {
          /* set output Status to state 0 indicating successfully received data */
          tmpStatus = 0;

          /* increment output Received Frames  */
          Sensors_and_actuators_ball_an_Y.Frames = (real_T)
            (Sensors_and_actuators_ball_an_Y.Frames + 1);

          /* set output Received Bytes  to real data length realLen */
          Sensors_and_actuators_ball_an_B.SFunction1_o4 = (uint32_T) realLen;
        } else {
          /* realLen -1: No data received due to empty rx buffer *
           * realLen  0: Connection socket not ready (closed)    */
          tmpStatus = (realLen == -1) ? 2 : 3;

          /* no data received due to empty rx buffer or socket not ready yet */
          Sensors_and_actuators_ball_an_B.SFunction1_o4 = (uint32_T) 0;
        }
      }                                // if (Inport_Enable == 0)

      /* assign receive status to the related outport */
      Sensors_and_actuators_ball_an_Y.Status = (uint32_T) tmpStatus;

      /* assign remote IP (s_addr: uint32) to the related outport as (uint8.uint8.uint8.uint8) */
      *((UInt32*) &Sensors_and_actuators_ball_an_B.SFunction1_o5[0]) =
        remoteAddr.sin_addr.s_addr;

      /* assign remote port to the related outport */
      Sensors_and_actuators_ball_an_B.SFunction1_o6 = DsIoEth_ntohs
        (remoteAddr.sin_port);
    }

    /* Gain: '<Root>/Gain2' */
    Sensors_and_actuators_ball_an_B.Gain2 = (uint16_T)((uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_P.Gain2_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[1]) << 1);

    /* Outport: '<Root>/Xpos ' incorporates:
     *  Sum: '<Root>/Add'
     */
    Sensors_and_actuators_ball_an_Y.Xpos = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[0] +
      Sensors_and_actuators_ball_an_B.Gain2);

    /* Gain: '<Root>/Gain1' */
    Sensors_and_actuators_ball_an_B.Gain1 = (uint16_T)((uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_P.Gain1_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[5]) << 1);

    /* Outport: '<Root>/Ypos ' incorporates:
     *  Sum: '<Root>/Add1'
     */
    Sensors_and_actuators_ball_an_Y.Ypos = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[4] +
      Sensors_and_actuators_ball_an_B.Gain1);

    /* S-Function (rti_commonblock): '<S1>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_SETUP_BL1 --- */
    /* dSPACE I/O Board DSETHERNET #1 Unit:SETUP Group:SETUP */
    {
      /* returns the link state of the ethernet connection. Number of available connectors: uint32_T) */
      Sensors_and_actuators_ball_an_B.SFunction1_o1_h[0] = (uint32_T)
        DsIoEth_getLinkState((UInt32) 0);
      Sensors_and_actuators_ball_an_B.SFunction1_o1_h[1] = (uint32_T)
        DsIoEth_getLinkState((UInt32) 1);
      Sensors_and_actuators_ball_an_B.SFunction1_o1_h[2] = (uint32_T)
        DsIoEth_getLinkState((UInt32) 2);

      /* returns the current IP address of the ethernet interface */
      *((UInt32*) (&Sensors_and_actuators_ball_an_B.SFunction1_o2_m[0])) =
        DsIoEth_getIpAddress();
    }

    /* S-Function (rti_commonblock): '<S3>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
    {
      /* dSPACE I/O Board DSETHERNET #1 Unit:SETUPUDP Group:SETUPUDP */

      /* gets the port state (open or closed) of the specified UDP socket */
      if ((DsIoEth_getPortState(DSIOETH_CONNECTION_ID_0) == DSIOETH_PORT_CLOSED))
      {
        /* Opens a non-blocking UDP connection. A Socket must be created before, using    *
         * DsIoEth_create(). It also flushs the related rx socket receive queue to ensure *
         * not to accept any data from a previously adjusted communication                */
        DsIoEth_open(DSIOETH_CONNECTION_ID_0);
      }

      /* reads out the pending management event (internal event queue must *
       * be always read, to prevent event queue overrun)                   */
      DsIoEth_getMgmtEvent(DSIOETH_CONNECTION_ID_0);
    }
  }
}

/* Model update function */
void Sensors_and_actuators_ball_and_plate_2022b_update(void)
{
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    rt_ertODEUpdateContinuousStates(&Sensors_and_actuators_ball_a_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Sensors_and_actuators_ball_a_M->Timing.clockTick0)) {
    ++Sensors_and_actuators_ball_a_M->Timing.clockTickH0;
  }

  Sensors_and_actuators_ball_a_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Sensors_and_actuators_ball_a_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Sensors_and_actuators_ball_a_M->Timing.clockTick1++;
    if (!Sensors_and_actuators_ball_a_M->Timing.clockTick1) {
      Sensors_and_actuators_ball_a_M->Timing.clockTickH1++;
    }
  }
}

/* Derivatives for root system: '<Root>' */
void Sensors_and_actuators_ball_and_plate_2022b_derivatives(void)
{
  XDot_Sensors_and_actuators_ba_T *_rtXdot;
  _rtXdot = ((XDot_Sensors_and_actuators_ba_T *)
             Sensors_and_actuators_ball_a_M->derivs);

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Derivatives for TransferFcn: '<S163>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_b = Sensors_and_actuators_ball_an_P.TransferFcn_A *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;
  _rtXdot->TransferFcn_CSTATE_b +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement1' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Derivatives for TransferFcn: '<S168>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_k =
    Sensors_and_actuators_ball_an_P.TransferFcn_A_b *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;
  _rtXdot->TransferFcn_CSTATE_k +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_h.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement2' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Derivatives for TransferFcn: '<S173>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = Sensors_and_actuators_ball_an_P.TransferFcn_A_p *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_c.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement3' */

  /* Derivatives for Integrator: '<S48>/Integrator' */
  _rtXdot->Integrator_CSTATE = Sensors_and_actuators_ball_an_B.IProdOut;

  /* Derivatives for Integrator: '<S43>/Filter' */
  _rtXdot->Filter_CSTATE = Sensors_and_actuators_ball_an_B.NProdOut;

  /* Derivatives for Integrator: '<S96>/Integrator' */
  _rtXdot->Integrator_CSTATE_b = Sensors_and_actuators_ball_an_B.IProdOut_g;

  /* Derivatives for Integrator: '<S91>/Filter' */
  _rtXdot->Filter_CSTATE_j = Sensors_and_actuators_ball_an_B.NProdOut_m;

  /* Derivatives for Integrator: '<S144>/Integrator' */
  _rtXdot->Integrator_CSTATE_k = Sensors_and_actuators_ball_an_B.IProdOut_d;

  /* Derivatives for Integrator: '<S139>/Filter' */
  _rtXdot->Filter_CSTATE_a = Sensors_and_actuators_ball_an_B.NProdOut_g;
}

/* Model initialize function */
void Sensors_and_actuators_ball_and_plate_2022b_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Sensors_and_actuators_ball_a_M, 0,
                sizeof(RT_MODEL_Sensors_and_actuator_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
                          &Sensors_and_actuators_ball_a_M->Timing.simTimeStep);
    rtsiSetTPtr(&Sensors_and_actuators_ball_a_M->solverInfo, &rtmGetTPtr
                (Sensors_and_actuators_ball_a_M));
    rtsiSetStepSizePtr(&Sensors_and_actuators_ball_a_M->solverInfo,
                       &Sensors_and_actuators_ball_a_M->Timing.stepSize0);
    rtsiSetdXPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
                 &Sensors_and_actuators_ball_a_M->derivs);
    rtsiSetContStatesPtr(&Sensors_and_actuators_ball_a_M->solverInfo, (real_T **)
                         &Sensors_and_actuators_ball_a_M->contStates);
    rtsiSetNumContStatesPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
      &Sensors_and_actuators_ball_a_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
      &Sensors_and_actuators_ball_a_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr
      (&Sensors_and_actuators_ball_a_M->solverInfo,
       &Sensors_and_actuators_ball_a_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr
      (&Sensors_and_actuators_ball_a_M->solverInfo,
       &Sensors_and_actuators_ball_a_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
                          (&rtmGetErrorStatus(Sensors_and_actuators_ball_a_M)));
    rtsiSetRTModelPtr(&Sensors_and_actuators_ball_a_M->solverInfo,
                      Sensors_and_actuators_ball_a_M);
  }

  rtsiSetSimTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo,
                     MAJOR_TIME_STEP);
  Sensors_and_actuators_ball_a_M->intgData.f[0] =
    Sensors_and_actuators_ball_a_M->odeF[0];
  Sensors_and_actuators_ball_a_M->contStates = ((X_Sensors_and_actuators_ball__T
    *) &Sensors_and_actuators_ball_an_X);
  rtsiSetSolverData(&Sensors_and_actuators_ball_a_M->solverInfo, (void *)
                    &Sensors_and_actuators_ball_a_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange
    (&Sensors_and_actuators_ball_a_M->solverInfo, false);
  rtsiSetSolverName(&Sensors_and_actuators_ball_a_M->solverInfo,"ode1");
  rtmSetTPtr(Sensors_and_actuators_ball_a_M,
             &Sensors_and_actuators_ball_a_M->Timing.tArray[0]);
  Sensors_and_actuators_ball_a_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) memset(((void *) &Sensors_and_actuators_ball_an_B), 0,
                sizeof(B_Sensors_and_actuators_ball__T));

  /* states (continuous) */
  {
    (void) memset((void *)&Sensors_and_actuators_ball_an_X, 0,
                  sizeof(X_Sensors_and_actuators_ball__T));
  }

  /* states (dwork) */
  (void) memset((void *)&Sensors_and_actuators_ball_a_DW, 0,
                sizeof(DW_Sensors_and_actuators_ball_T));

  /* external inputs */
  (void)memset(&Sensors_and_actuators_ball_an_U, 0, sizeof
               (ExtU_Sensors_and_actuators_ba_T));

  /* external outputs */
  (void)memset(&Sensors_and_actuators_ball_an_Y, 0, sizeof
               (ExtY_Sensors_and_actuators_ba_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    Sensors_and_actuators_ball_and_plate_2022b_rti_init_trc_pointers();
  }

  /* Start for Enabled SubSystem: '<S163>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S163>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S163>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Start for SubSystem: '<S163>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement1' */

  /* Start for Enabled SubSystem: '<S168>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h);

  /* End of Start for SubSystem: '<S168>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S168>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Start for SubSystem: '<S168>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement2' */

  /* Start for Enabled SubSystem: '<S173>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c);

  /* End of Start for SubSystem: '<S173>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S173>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Start for SubSystem: '<S173>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement3' */
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_c = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_l = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_h = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_f = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S48>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
    Sensors_and_actuators_ball_an_P.PIDController_InitialConditio_c;

  /* InitializeConditions for Integrator: '<S43>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE =
    Sensors_and_actuators_ball_an_P.PIDController_InitialConditionF;

  /* InitializeConditions for Integrator: '<S96>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b =
    Sensors_and_actuators_ball_an_P.PIDController1_InitialConditi_j;

  /* InitializeConditions for Integrator: '<S91>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_j =
    Sensors_and_actuators_ball_an_P.PIDController1_InitialCondition;

  /* InitializeConditions for Integrator: '<S144>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k =
    Sensors_and_actuators_ball_an_P.PIDController2_InitialConditi_o;

  /* InitializeConditions for Integrator: '<S139>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_a =
    Sensors_and_actuators_ball_an_P.PIDController2_InitialCondition;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* InitializeConditions for TransferFcn: '<S163>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S163>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S163>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S163>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S163>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* InitializeConditions for TransferFcn: '<S168>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S168>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S168>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S168>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S168>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement2' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* InitializeConditions for TransferFcn: '<S173>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S173>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

  /* End of SystemInitialize for SubSystem: '<S173>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S173>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S173>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement3' */
}

/* Model terminate function */
void Sensors_and_actuators_ball_and_plate_2022b_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Terminate for Triggered SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S162>/S-Function1' incorporates:
   *  Constant: '<S10>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S161>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement1' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Terminate for Triggered SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S167>/S-Function1' incorporates:
   *  Constant: '<S11>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S166>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement2' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Terminate for Triggered SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S172>/S-Function1' incorporates:
   *  Constant: '<S12>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S171>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement3' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */
  /* Terminate for S-Function (rti_commonblock): '<S14>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 1 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_1, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_1);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */
  /* Terminate for S-Function (rti_commonblock): '<S15>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 2 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_2, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_2);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier3' */
  /* Terminate for S-Function (rti_commonblock): '<S16>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 3 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_3, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_3);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier3' */
  /* Terminate for S-Function (rti_commonblock): '<S3>/S-Function1' */
  {
    /* --- Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
    /* dSPACE I/O Board DSETHERNET #1 Unit:SETUPUDP Group:SETUPUDP */

    /* close a socket connection
     * After closing, the corresponding socket resource is still occupied.   *
     * If a connection has been closed and should be re-used for a different *
     * connection, or if a connection should be re-established it must be    *
     * re-opened using DsIoEth_open() again.                                 */
    DsIoEth_close(DSIOETH_CONNECTION_ID_0);
  }
}

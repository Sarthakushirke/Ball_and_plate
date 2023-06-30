/*
 * Sensors_and_actuators_ball_and_plate.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate".
 *
 * Model version              : 7.12
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Wed May 31 15:27:14 2023
 *
 * Target selection: rti1202.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Sensors_and_actuators_ball_and_plate_trc_ptr.h"
#include "Sensors_and_actuators_ball_and_plate.h"
#include "rtwtypes.h"
#include "Sensors_and_actuators_ball_and_plate_private.h"
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
  int_T nXc = 8;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Sensors_and_actuators_ball_and_plate_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for enable system:
 *    '<S65>/Enabled Subsystem'
 *    '<S70>/Enabled Subsystem'
 *    '<S75>/Enabled Subsystem'
 */
void Sensors_a_EnabledSubsystem_Init(B_EnabledSubsystem_Sensors_an_T *localB,
  P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S66>/Out1' incorporates:
   *  Outport: '<S66>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S65>/Enabled Subsystem'
 *    '<S70>/Enabled Subsystem'
 *    '<S75>/Enabled Subsystem'
 */
void Sensor_EnabledSubsystem_Disable(B_EnabledSubsystem_Sensors_an_T *localB,
  DW_EnabledSubsystem_Sensors_a_T *localDW, P_EnabledSubsystem_Sensors_an_T
  *localP)
{
  /* Disable for SignalConversion generated from: '<S66>/Out1' incorporates:
   *  Outport: '<S66>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S65>/Enabled Subsystem'
 *    '<S70>/Enabled Subsystem'
 *    '<S75>/Enabled Subsystem'
 */
void Sensors__EnabledSubsystem_Start(DW_EnabledSubsystem_Sensors_a_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S65>/Enabled Subsystem'
 *    '<S70>/Enabled Subsystem'
 *    '<S75>/Enabled Subsystem'
 */
void Sensors_and_ac_EnabledSubsystem(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, real_T rtu_Enable,
  B_EnabledSubsystem_Sensors_an_T *localB, DW_EnabledSubsystem_Sensors_a_T
  *localDW, P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S65>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S66>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable > 0.0) {
      localDW->EnabledSubsystem_MODE = true;
    } else if (localDW->EnabledSubsystem_MODE) {
      Sensor_EnabledSubsystem_Disable(localB, localDW, localP);
    }
  }

  if (localDW->EnabledSubsystem_MODE) {
    /* SignalConversion generated from: '<S66>/Out1' incorporates:
     *  Constant: '<S66>/Constant'
     */
    localB->OutportBufferForOut1 = localP->Constant_Value;
  }

  /* End of Outputs for SubSystem: '<S65>/Enabled Subsystem' */
}

/*
 * System initialize for enable system:
 *    '<S65>/Enabled Subsystem1'
 *    '<S70>/Enabled Subsystem1'
 *    '<S75>/Enabled Subsystem1'
 */
void Sensors__EnabledSubsystem1_Init(B_EnabledSubsystem1_Sensors_a_T *localB,
  P_EnabledSubsystem1_Sensors_a_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S67>/In1' incorporates:
   *  Outport: '<S67>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S65>/Enabled Subsystem1'
 *    '<S70>/Enabled Subsystem1'
 *    '<S75>/Enabled Subsystem1'
 */
void Senso_EnabledSubsystem1_Disable(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Start for enable system:
 *    '<S65>/Enabled Subsystem1'
 *    '<S70>/Enabled Subsystem1'
 *    '<S75>/Enabled Subsystem1'
 */
void Sensors_EnabledSubsystem1_Start(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S65>/Enabled Subsystem1'
 *    '<S70>/Enabled Subsystem1'
 *    '<S75>/Enabled Subsystem1'
 */
void Sensors_and_a_EnabledSubsystem1(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, boolean_T rtu_Enable, real_T rtu_In1,
  B_EnabledSubsystem1_Sensors_a_T *localB, DW_EnabledSubsystem1_Sensors__T
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S65>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S67>/Enable'
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
    /* SignalConversion generated from: '<S67>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S65>/Enabled Subsystem1' */
}

/* Model output function */
void Sensors_and_actuators_ball_and_plate_output(void)
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

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S8>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S64>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_0' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o,
                           (Sensors_and_actuators_ball_an_P.Init_0_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S64>/S-Function1' incorporates:
         *  Constant: '<S8>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate/Position Measurement/EMC_ENCODER_POS_SET_BL1 --- */
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

    /* End of Outputs for SubSystem: '<S8>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S63>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S8>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_g =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_o;

    /* Sum: '<S8>/AbsPosition' incorporates:
     *  Constant: '<S8>/Pos_offset'
     *  Constant: '<S8>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_hs =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_g -
       Sensors_and_actuators_ball_an_P.ZP_Value) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value;

    /* Abs: '<S65>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_c = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_n);

    /* Outputs for Enabled SubSystem: '<S65>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_0' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_0_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S65>/Enabled Subsystem' */

    /* RelationalOperator: '<S65>/Relational Operator1' incorporates:
     *  Constant: '<S65>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_b =
      (Sensors_and_actuators_ball_an_B.Abs_c <=
       Sensors_and_actuators_ball_an_P.Const_Value);
  }

  /* TransferFcn: '<S65>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_f =
    Sensors_and_actuators_ball_an_P.TransferFcn_C *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;

  /* RelationalOperator: '<S65>/Relational Operator' incorporates:
   *  Constant: '<S65>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_c =
    (Sensors_and_actuators_ball_an_P.Const1_Value >=
     Sensors_and_actuators_ball_an_B.TransferFcn_f);

  /* Logic: '<S65>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_0'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_c =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_b &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_c &&
     (Sensors_and_actuators_ball_an_P.Init_0_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S65>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_c,
    Sensors_and_actuators_ball_an_B.Inc2Pos_g,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S65>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_A' incorporates:
     *  Gain: '<S8>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_A =
      Sensors_and_actuators_ball_an_P.mm2m_Gain *
      Sensors_and_actuators_ball_an_B.AbsPosition_hs;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Sum: '<Root>/Sum1' incorporates:
     *  Constant: '<Root>/ref_0'
     *  Outport: '<Root>/P_A'
     */
    Sensors_and_actuators_ball_an_B.Sum1 =
      Sensors_and_actuators_ball_an_P.ref_0_Value -
      Sensors_and_actuators_ball_an_Y.P_A;

    /* Gain: '<S51>/Proportional Gain' */
    Sensors_and_actuators_ball_an_B.ProportionalGain =
      Sensors_and_actuators_ball_an_P.PIDController_P *
      Sensors_and_actuators_ball_an_B.Sum1;

    /* Gain: '<S40>/Derivative Gain' */
    Sensors_and_actuators_ball_an_B.DerivativeGain =
      Sensors_and_actuators_ball_an_P.PIDController_D *
      Sensors_and_actuators_ball_an_B.Sum1;
  }

  /* Integrator: '<S46>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE;

  /* Integrator: '<S41>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE;

  /* Sum: '<S41>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD =
    Sensors_and_actuators_ball_an_B.DerivativeGain -
    Sensors_and_actuators_ball_an_B.Filter;

  /* Gain: '<S49>/Filter Coefficient' */
  Sensors_and_actuators_ball_an_B.FilterCoefficient =
    Sensors_and_actuators_ball_an_P.PIDController_N *
    Sensors_and_actuators_ball_an_B.SumD;

  /* Integrator: '<Root>/Integrator2' incorporates:
   *  Constant: '<Root>/reset_integrator_0'
   */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator2_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_0_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator2_CSTATE =
        Sensors_and_actuators_ball_an_P.Integrator2_IC;
    }
  }

  if (Sensors_and_actuators_ball_an_X.Integrator2_CSTATE >=
      Sensors_and_actuators_ball_an_P.Integrator2_UpperSat) {
    Sensors_and_actuators_ball_an_X.Integrator2_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator2_UpperSat;
  } else if (Sensors_and_actuators_ball_an_X.Integrator2_CSTATE <=
             Sensors_and_actuators_ball_an_P.Integrator2_LowerSat) {
    Sensors_and_actuators_ball_an_X.Integrator2_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator2_LowerSat;
  }

  /* Integrator: '<Root>/Integrator2' */
  Sensors_and_actuators_ball_an_B.Integrator2 =
    Sensors_and_actuators_ball_an_X.Integrator2_CSTATE;

  /* Switch: '<Root>/CloseLoop_disable_0' incorporates:
   *  Inport: '<Root>/Inport'
   *  Inport: '<Root>/Inport1'
   *  Switch: '<Root>/controller_disable_0'
   */
  if (Sensors_and_actuators_ball_an_U.Inport1 >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_0_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_0' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_0 =
      Sensors_and_actuators_ball_an_B.TransferFcn_f;
  } else {
    if (Sensors_and_actuators_ball_an_U.Inport >=
        Sensors_and_actuators_ball_an_P.controller_disable_0_Threshold) {
      /* Switch: '<Root>/controller_disable_0' incorporates:
       *  Constant: '<Root>/Constant'
       */
      Sensors_and_actuators_ball_an_B.controller_disable_0 =
        Sensors_and_actuators_ball_an_P.Constant_Value_i;
    } else {
      /* Sum: '<S55>/Sum' incorporates:
       *  Switch: '<Root>/controller_disable_0'
       */
      Sensors_and_actuators_ball_an_B.Sum =
        (Sensors_and_actuators_ball_an_B.ProportionalGain +
         Sensors_and_actuators_ball_an_B.Integrator) +
        Sensors_and_actuators_ball_an_B.FilterCoefficient;

      /* Sum: '<Root>/Sum' incorporates:
       *  Switch: '<Root>/controller_disable_0'
       */
      Sensors_and_actuators_ball_an_B.Sum_c =
        Sensors_and_actuators_ball_an_B.Sum +
        Sensors_and_actuators_ball_an_B.Integrator2;

      /* Switch: '<Root>/controller_disable_0' */
      Sensors_and_actuators_ball_an_B.controller_disable_0 =
        Sensors_and_actuators_ball_an_B.Sum_c;
    }

    /* Switch: '<Root>/CloseLoop_disable_0' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_0 =
      Sensors_and_actuators_ball_an_B.controller_disable_0;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_0' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier' */

  /* Saturate: '<S4>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_0;
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
    /* S-Function (rti_commonblock): '<S12>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier/DAC_CLASS1_BL1 --- */
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

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Gain: '<Root>/Gain' */
    Sensors_and_actuators_ball_an_B.Gain =
      Sensors_and_actuators_ball_an_P.Gain_Gain *
      Sensors_and_actuators_ball_an_B.Sum1;

    /* Gain: '<S43>/Integral Gain' */
    Sensors_and_actuators_ball_an_B.IntegralGain =
      Sensors_and_actuators_ball_an_P.PIDController_I *
      Sensors_and_actuators_ball_an_B.Sum1;

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
      /* --- Sensors_and_actuators_ball_and_plate/ETHERNET_UDP_RX_BL1: ==> Socket ID = (0) --- */
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
  }

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S9>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S69>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_1' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n,
                           (Sensors_and_actuators_ball_an_P.Init_1_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S69>/S-Function1' incorporates:
         *  Constant: '<S9>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate/Position Measurement1/EMC_ENCODER_POS_SET_BL1 --- */
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

    /* End of Outputs for SubSystem: '<S9>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S68>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S9>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_i =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_j *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_g;

    /* Sum: '<S9>/AbsPosition' incorporates:
     *  Constant: '<S9>/Pos_offset'
     *  Constant: '<S9>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_h =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_i -
       Sensors_and_actuators_ball_an_P.ZP_Value_a) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_f;

    /* Abs: '<S70>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_l = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_p);

    /* Outputs for Enabled SubSystem: '<S70>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_1' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_1_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

    /* End of Outputs for SubSystem: '<S70>/Enabled Subsystem' */

    /* RelationalOperator: '<S70>/Relational Operator1' incorporates:
     *  Constant: '<S70>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_p =
      (Sensors_and_actuators_ball_an_B.Abs_l <=
       Sensors_and_actuators_ball_an_P.Const_Value_d);
  }

  /* TransferFcn: '<S70>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_d =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_j *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;

  /* RelationalOperator: '<S70>/Relational Operator' incorporates:
   *  Constant: '<S70>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_n =
    (Sensors_and_actuators_ball_an_P.Const1_Value_k >=
     Sensors_and_actuators_ball_an_B.TransferFcn_d);

  /* Logic: '<S70>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_1'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_k =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_p &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_n &&
     (Sensors_and_actuators_ball_an_P.Init_1_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S70>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_k,
    Sensors_and_actuators_ball_an_B.Inc2Pos_i,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Outputs for SubSystem: '<S70>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_B' incorporates:
     *  Gain: '<S9>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_B =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_f *
      Sensors_and_actuators_ball_an_B.AbsPosition_h;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement1' */

  /* Integrator: '<Root>/Integrator1' incorporates:
   *  Constant: '<Root>/reset_integrator_1'
   */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator1_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_1_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator1_CSTATE =
        Sensors_and_actuators_ball_an_P.Integrator1_IC;
    }
  }

  if (Sensors_and_actuators_ball_an_X.Integrator1_CSTATE >=
      Sensors_and_actuators_ball_an_P.Integrator1_UpperSat) {
    Sensors_and_actuators_ball_an_X.Integrator1_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator1_UpperSat;
  } else if (Sensors_and_actuators_ball_an_X.Integrator1_CSTATE <=
             Sensors_and_actuators_ball_an_P.Integrator1_LowerSat) {
    Sensors_and_actuators_ball_an_X.Integrator1_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator1_LowerSat;
  }

  /* Integrator: '<Root>/Integrator1' */
  Sensors_and_actuators_ball_an_B.Integrator1 =
    Sensors_and_actuators_ball_an_X.Integrator1_CSTATE;

  /* Switch: '<Root>/CloseLoop_disable_1' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   *  Switch: '<Root>/controller_disable_1'
   */
  if (Sensors_and_actuators_ball_an_P.Constant6_Value >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_1_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.TransferFcn_d;
  } else {
    if (Sensors_and_actuators_ball_an_P.Constant7_Value >=
        Sensors_and_actuators_ball_an_P.controller_disable_1_Threshold) {
      /* Switch: '<Root>/controller_disable_1' incorporates:
       *  Constant: '<Root>/Constant2'
       */
      Sensors_and_actuators_ball_an_B.controller_disable_1 =
        Sensors_and_actuators_ball_an_P.Constant2_Value;
    } else {
      /* Switch: '<Root>/controller_disable_1' */
      Sensors_and_actuators_ball_an_B.controller_disable_1 =
        Sensors_and_actuators_ball_an_B.Integrator1;
    }

    /* Switch: '<Root>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.controller_disable_1;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_1' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Saturate: '<S5>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_1;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_a;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_g;
  if (u0 > u2) {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u1;
  } else {
    /* Saturate: '<S5>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V_a =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_l *
    Sensors_and_actuators_ball_an_B.Saturation_l;

  /* Gain: '<S5>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale_a =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_j *
    Sensors_and_actuators_ball_an_B.Current2V_a;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* S-Function (rti_commonblock): '<S13>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
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

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    u0 = Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] *
      Sensors_and_actuators_ball_an_P.numc_mi[1];
    u0 += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] *
      Sensors_and_actuators_ball_an_P.numc_mi[2];
    u0 += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[2] *
      Sensors_and_actuators_ball_an_P.numc_mi[3];

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1 = u0;

    /* Sum: '<Root>/Sum2' incorporates:
     *  Constant: '<Root>/ref_1'
     *  Outport: '<Root>/P_B'
     */
    Sensors_and_actuators_ball_an_B.Sum2 =
      Sensors_and_actuators_ball_an_P.ref_1_Value -
      Sensors_and_actuators_ball_an_Y.P_B;
  }

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outputs for Triggered SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S74>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/init_2' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC,
                           (Sensors_and_actuators_ball_an_P.init_2_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S74>/S-Function1' incorporates:
         *  Constant: '<S10>/Constant'
         */
        /* This comment workarounds a code generation problem */
        {
          /* --- Sensors_and_actuators_ball_and_plate/Position Measurement2/EMC_ENCODER_POS_SET_BL1 --- */
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

    /* End of Outputs for SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S73>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S10>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_i *
      Sensors_and_actuators_ball_an_B.SFunction1_o1;

    /* Sum: '<S10>/AbsPosition' incorporates:
     *  Constant: '<S10>/Pos_offset'
     *  Constant: '<S10>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition =
      (Sensors_and_actuators_ball_an_B.Inc2Pos -
       Sensors_and_actuators_ball_an_P.ZP_Value_d) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_b;

    /* Abs: '<S75>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2);

    /* Outputs for Enabled SubSystem: '<S75>/Enabled Subsystem' */
    /* Constant: '<Root>/init_2' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.init_2_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

    /* End of Outputs for SubSystem: '<S75>/Enabled Subsystem' */

    /* RelationalOperator: '<S75>/Relational Operator1' incorporates:
     *  Constant: '<S75>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1 =
      (Sensors_and_actuators_ball_an_B.Abs <=
       Sensors_and_actuators_ball_an_P.Const_Value_i);
  }

  /* TransferFcn: '<S75>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_m *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;

  /* RelationalOperator: '<S75>/Relational Operator' incorporates:
   *  Constant: '<S75>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator =
    (Sensors_and_actuators_ball_an_P.Const1_Value_n >=
     Sensors_and_actuators_ball_an_B.TransferFcn);

  /* Logic: '<S75>/Logical Operator2' incorporates:
   *  Constant: '<Root>/init_2'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2 =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1 &&
     Sensors_and_actuators_ball_an_B.RelationalOperator &&
     (Sensors_and_actuators_ball_an_P.init_2_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S75>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2,
    Sensors_and_actuators_ball_an_B.Inc2Pos,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Outputs for SubSystem: '<S75>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Outport: '<Root>/P_C' incorporates:
     *  Gain: '<S10>/mm2m'
     */
    Sensors_and_actuators_ball_an_Y.P_C =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_a *
      Sensors_and_actuators_ball_an_B.AbsPosition;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement2' */

  /* Integrator: '<Root>/Integrator3' incorporates:
   *  Constant: '<Root>/reset_integrator_2'
   */
  /* Limited  Integrator  */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator3_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_P.reset_integrator_2_Value));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent) {
      Sensors_and_actuators_ball_an_X.Integrator3_CSTATE =
        Sensors_and_actuators_ball_an_P.Integrator3_IC;
    }
  }

  if (Sensors_and_actuators_ball_an_X.Integrator3_CSTATE >=
      Sensors_and_actuators_ball_an_P.Integrator3_UpperSat) {
    Sensors_and_actuators_ball_an_X.Integrator3_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator3_UpperSat;
  } else if (Sensors_and_actuators_ball_an_X.Integrator3_CSTATE <=
             Sensors_and_actuators_ball_an_P.Integrator3_LowerSat) {
    Sensors_and_actuators_ball_an_X.Integrator3_CSTATE =
      Sensors_and_actuators_ball_an_P.Integrator3_LowerSat;
  }

  /* Integrator: '<Root>/Integrator3' */
  Sensors_and_actuators_ball_an_B.Integrator3 =
    Sensors_and_actuators_ball_an_X.Integrator3_CSTATE;

  /* Switch: '<Root>/CloseLoop_disable_2' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   *  Switch: '<Root>/controller_disable_2'
   */
  if (Sensors_and_actuators_ball_an_P.Constant9_Value >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_2_Threshold) {
    /* Switch: '<Root>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.TransferFcn;
  } else {
    if (Sensors_and_actuators_ball_an_P.Constant8_Value >=
        Sensors_and_actuators_ball_an_P.controller_disable_2_Threshold) {
      /* Switch: '<Root>/controller_disable_2' incorporates:
       *  Constant: '<Root>/Constant3'
       */
      Sensors_and_actuators_ball_an_B.controller_disable_2 =
        Sensors_and_actuators_ball_an_P.Constant3_Value;
    } else {
      /* Switch: '<Root>/controller_disable_2' */
      Sensors_and_actuators_ball_an_B.controller_disable_2 =
        Sensors_and_actuators_ball_an_B.Integrator3;
    }

    /* Switch: '<Root>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.controller_disable_2;
  }

  /* End of Switch: '<Root>/CloseLoop_disable_2' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Saturate: '<S6>/Saturation' */
  u0 = Sensors_and_actuators_ball_an_B.CloseLoop_disable_2;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_m;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_j;
  if (u0 > u2) {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u1;
  } else {
    /* Saturate: '<S6>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_j *
    Sensors_and_actuators_ball_an_B.Saturation;

  /* Gain: '<S6>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_h *
    Sensors_and_actuators_ball_an_B.Current2V;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* S-Function (rti_commonblock): '<S14>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
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

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    u0 = Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] *
      Sensors_and_actuators_ball_an_P.numc_mi[1];
    u0 += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] *
      Sensors_and_actuators_ball_an_P.numc_mi[2];
    u0 += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[2] *
      Sensors_and_actuators_ball_an_P.numc_mi[3];

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2 = u0;

    /* Sum: '<Root>/Sum3' incorporates:
     *  Constant: '<Root>/ref_2'
     *  Outport: '<Root>/P_C'
     */
    Sensors_and_actuators_ball_an_B.Sum3 =
      Sensors_and_actuators_ball_an_P.ref_2_Value -
      Sensors_and_actuators_ball_an_Y.P_C;

    /* S-Function (rti_commonblock): '<S1>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate/ETHERNET_SETUP_BL1 --- */
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

    /* --- Sensors_and_actuators_ball_and_plate/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
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
void Sensors_and_actuators_ball_and_plate_update(void)
{
  real_T denAccum;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    denAccum = Sensors_and_actuators_ball_an_B.Sum2;
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] *
      Sensors_and_actuators_ball_an_P.denc_mi[1];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] *
      Sensors_and_actuators_ball_an_P.denc_mi[2];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[2] *
      Sensors_and_actuators_ball_an_P.denc_mi[3];
    denAccum /= Sensors_and_actuators_ball_an_P.denc_mi[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[2] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] = denAccum;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M)) {
    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    denAccum = Sensors_and_actuators_ball_an_B.Sum3;
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] *
      Sensors_and_actuators_ball_an_P.denc_mi[1];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] *
      Sensors_and_actuators_ball_an_P.denc_mi[2];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[2] *
      Sensors_and_actuators_ball_an_P.denc_mi[3];
    denAccum /= Sensors_and_actuators_ball_an_P.denc_mi[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[2] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] = denAccum;
  }

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
void Sensors_and_actuators_ball_and_plate_derivatives(void)
{
  XDot_Sensors_and_actuators_ba_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_Sensors_and_actuators_ba_T *)
             Sensors_and_actuators_ball_a_M->derivs);

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement' */
  /* Derivatives for TransferFcn: '<S65>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_b = Sensors_and_actuators_ball_an_P.TransferFcn_A *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;
  _rtXdot->TransferFcn_CSTATE_b +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement' */

  /* Derivatives for Integrator: '<S46>/Integrator' */
  _rtXdot->Integrator_CSTATE = Sensors_and_actuators_ball_an_B.IntegralGain;

  /* Derivatives for Integrator: '<S41>/Filter' */
  _rtXdot->Filter_CSTATE = Sensors_and_actuators_ball_an_B.FilterCoefficient;

  /* Derivatives for Integrator: '<Root>/Integrator2' */
  lsat = (Sensors_and_actuators_ball_an_X.Integrator2_CSTATE <=
          Sensors_and_actuators_ball_an_P.Integrator2_LowerSat);
  usat = (Sensors_and_actuators_ball_an_X.Integrator2_CSTATE >=
          Sensors_and_actuators_ball_an_P.Integrator2_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (Sensors_and_actuators_ball_an_B.Gain >
        0.0)) || (usat && (Sensors_and_actuators_ball_an_B.Gain < 0.0))) {
    _rtXdot->Integrator2_CSTATE = Sensors_and_actuators_ball_an_B.Gain;
  } else {
    /* in saturation */
    _rtXdot->Integrator2_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<Root>/Integrator2' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Derivatives for TransferFcn: '<S70>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_k =
    Sensors_and_actuators_ball_an_P.TransferFcn_A_b *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;
  _rtXdot->TransferFcn_CSTATE_k +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_h.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement1' */

  /* Derivatives for Integrator: '<Root>/Integrator1' */
  lsat = (Sensors_and_actuators_ball_an_X.Integrator1_CSTATE <=
          Sensors_and_actuators_ball_an_P.Integrator1_LowerSat);
  usat = (Sensors_and_actuators_ball_an_X.Integrator1_CSTATE >=
          Sensors_and_actuators_ball_an_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat &&
       (Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1 > 0.0)) || (usat &&
       (Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1 < 0.0))) {
    _rtXdot->Integrator1_CSTATE =
      Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<Root>/Integrator1' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Derivatives for TransferFcn: '<S75>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = Sensors_and_actuators_ball_an_P.TransferFcn_A_p *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_c.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement2' */

  /* Derivatives for Integrator: '<Root>/Integrator3' */
  lsat = (Sensors_and_actuators_ball_an_X.Integrator3_CSTATE <=
          Sensors_and_actuators_ball_an_P.Integrator3_LowerSat);
  usat = (Sensors_and_actuators_ball_an_X.Integrator3_CSTATE >=
          Sensors_and_actuators_ball_an_P.Integrator3_UpperSat);
  if (((!lsat) && (!usat)) || (lsat &&
       (Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2 > 0.0)) || (usat &&
       (Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2 < 0.0))) {
    _rtXdot->Integrator3_CSTATE =
      Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2;
  } else {
    /* in saturation */
    _rtXdot->Integrator3_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<Root>/Integrator3' */
}

/* Model initialize function */
void Sensors_and_actuators_ball_and_plate_initialize(void)
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
    Sensors_and_actuators_ball_and_plate_rti_init_trc_pointers();
  }

  /* Start for Enabled SubSystem: '<S65>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S65>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S65>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Start for SubSystem: '<S65>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement' */

  /* Start for Enabled SubSystem: '<S70>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h);

  /* End of Start for SubSystem: '<S70>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S70>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Start for SubSystem: '<S70>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement1' */

  /* Start for Enabled SubSystem: '<S75>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c);

  /* End of Start for SubSystem: '<S75>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S75>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Start for SubSystem: '<S75>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement2' */
  Sensors_and_actuators_b_PrevZCX.Integrator2_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator3_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Integrator: '<S46>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
    Sensors_and_actuators_ball_an_P.PIDController_InitialConditio_f;

  /* InitializeConditions for Integrator: '<S41>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE =
    Sensors_and_actuators_ball_an_P.PIDController_InitialConditionF;

  /* InitializeConditions for Integrator: '<Root>/Integrator2' */
  Sensors_and_actuators_ball_an_X.Integrator2_CSTATE =
    Sensors_and_actuators_ball_an_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator1' */
  Sensors_and_actuators_ball_an_X.Integrator1_CSTATE =
    Sensors_and_actuators_ball_an_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<Root>/Integrator3' */
  Sensors_and_actuators_ball_an_X.Integrator3_CSTATE =
    Sensors_and_actuators_ball_an_P.Integrator3_IC;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[2] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[2] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_InitialSta;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement' */
  /* InitializeConditions for TransferFcn: '<S65>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S65>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S65>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S65>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S65>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* InitializeConditions for TransferFcn: '<S70>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S70>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S70>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S70>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S70>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* InitializeConditions for TransferFcn: '<S75>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S75>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

  /* End of SystemInitialize for SubSystem: '<S75>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S75>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S75>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement2' */
}

/* Model terminate function */
void Sensors_and_actuators_ball_and_plate_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement' */
  /* Terminate for Triggered SubSystem: '<S8>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S64>/S-Function1' incorporates:
   *  Constant: '<S8>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<S8>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S63>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier' */
  /* Terminate for S-Function (rti_commonblock): '<S12>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 1 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_1, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_1);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier' */
  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Terminate for Triggered SubSystem: '<S9>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S69>/S-Function1' incorporates:
   *  Constant: '<S9>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement1/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<S9>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S68>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement1/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement1' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */
  /* Terminate for S-Function (rti_commonblock): '<S13>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 2 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_2, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_2);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Terminate for Triggered SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S74>/S-Function1' incorporates:
   *  Constant: '<S10>/Constant'
   */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement2/EMC_ENCODER_POS_SET_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Set positions state for the selected incremental Encoder to INVALID */
    DioCl2EncoderIn_setEncPosValidity(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5,
      DIO_ENC_POSITION_INVALID);

    /* Writes settings for the incremental Encoder */
    DioCl2EncoderIn_write(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<S10>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S73>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Position Measurement2/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement2' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */
  /* Terminate for S-Function (rti_commonblock): '<S14>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 3 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_3, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_3);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier2' */
  /* Terminate for S-Function (rti_commonblock): '<S3>/S-Function1' */
  {
    /* --- Sensors_and_actuators_ball_and_plate/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
    /* dSPACE I/O Board DSETHERNET #1 Unit:SETUPUDP Group:SETUPUDP */

    /* close a socket connection
     * After closing, the corresponding socket resource is still occupied.   *
     * If a connection has been closed and should be re-used for a different *
     * connection, or if a connection should be re-established it must be    *
     * re-opened using DsIoEth_open() again.                                 */
    DsIoEth_close(DSIOETH_CONNECTION_ID_0);
  }
}

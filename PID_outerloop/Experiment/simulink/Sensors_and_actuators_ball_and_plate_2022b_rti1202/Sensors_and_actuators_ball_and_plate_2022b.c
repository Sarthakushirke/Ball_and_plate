/*
 * Sensors_and_actuators_ball_and_plate_2022b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate_2022b".
 *
 * Model version              : 7.23
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Jun 19 18:49:32 2023
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

/* External outputs (root outports fed by signals with default storage) */
ExtY_Sensors_and_actuators_ba_T Sensors_and_actuators_ball_an_Y;

/* Real-time model */
static RT_MODEL_Sensors_and_actuator_T Sensors_and_actuators_ball_a_M_;
RT_MODEL_Sensors_and_actuator_T *const Sensors_and_actuators_ball_a_M =
  &Sensors_and_actuators_ball_a_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2])++;
  if ((Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [0.1s, 0.0s] */
    Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] = 0;
  }
}

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
 * Output and update for atomic system:
 *    '<S4>/BoundsFunction1'
 *    '<S4>/BoundsFunction2'
 *    '<S4>/BoundsFunction3'
 */
void Sensors_and_act_BoundsFunction1(real_T rtu_ref,
  B_BoundsFunction1_Sensors_and_T *localB)
{
  /* MATLAB Function 'Inverse Kinematics/BoundsFunction1': '<S19>:1' */
  if ((rtu_ref > 0.06) || (rtu_ref < 0.0)) {
    /* '<S19>:1:2' */
    /* '<S19>:1:3' */
    localB->outOfBounds = true;
  } else {
    /* '<S19>:1:5' */
    localB->outOfBounds = false;
  }
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function'
 *    '<S9>/MATLAB Function'
 *    '<S10>/MATLAB Function'
 */
void Sensors_and_actu_MATLABFunction(real_T rtu_current,
  B_MATLABFunction_Sensors_and__T *localB)
{
  /* MATLAB Function 'Outputs to Amplifier1/MATLAB Function': '<S174>:1' */
  if (fabs(rtu_current) >= 3.0) {
    /* '<S174>:1:2' */
    /* '<S174>:1:3' */
    localB->saturation = true;
  } else {
    /* '<S174>:1:5' */
    localB->saturation = false;
  }
}

/*
 * System initialize for enable system:
 *    '<S181>/Enabled Subsystem'
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 */
void Sensors_a_EnabledSubsystem_Init(B_EnabledSubsystem_Sensors_an_T *localB,
  P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S182>/Out1' incorporates:
   *  Outport: '<S182>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S181>/Enabled Subsystem'
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 */
void Sensor_EnabledSubsystem_Disable(B_EnabledSubsystem_Sensors_an_T *localB,
  DW_EnabledSubsystem_Sensors_a_T *localDW, P_EnabledSubsystem_Sensors_an_T
  *localP)
{
  /* Disable for SignalConversion generated from: '<S182>/Out1' incorporates:
   *  Outport: '<S182>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S181>/Enabled Subsystem'
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 */
void Sensors__EnabledSubsystem_Start(DW_EnabledSubsystem_Sensors_a_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S181>/Enabled Subsystem'
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 */
void Sensors_and_ac_EnabledSubsystem(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, real_T rtu_Enable,
  B_EnabledSubsystem_Sensors_an_T *localB, DW_EnabledSubsystem_Sensors_a_T
  *localDW, P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S181>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S182>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable > 0.0) {
      localDW->EnabledSubsystem_MODE = true;
    } else if (localDW->EnabledSubsystem_MODE) {
      Sensor_EnabledSubsystem_Disable(localB, localDW, localP);
    }
  }

  if (localDW->EnabledSubsystem_MODE) {
    /* SignalConversion generated from: '<S182>/Out1' incorporates:
     *  Constant: '<S182>/Constant'
     */
    localB->OutportBufferForOut1 = localP->Constant_Value;
  }

  /* End of Outputs for SubSystem: '<S181>/Enabled Subsystem' */
}

/*
 * System initialize for enable system:
 *    '<S181>/Enabled Subsystem1'
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 */
void Sensors__EnabledSubsystem1_Init(B_EnabledSubsystem1_Sensors_a_T *localB,
  P_EnabledSubsystem1_Sensors_a_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S183>/In1' incorporates:
   *  Outport: '<S183>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S181>/Enabled Subsystem1'
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 */
void Senso_EnabledSubsystem1_Disable(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Start for enable system:
 *    '<S181>/Enabled Subsystem1'
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 */
void Sensors_EnabledSubsystem1_Start(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S181>/Enabled Subsystem1'
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 */
void Sensors_and_a_EnabledSubsystem1(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, boolean_T rtu_Enable, real_T rtu_In1,
  B_EnabledSubsystem1_Sensors_a_T *localB, DW_EnabledSubsystem1_Sensors__T
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S181>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S183>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable) {
      localDW->EnabledSubsystem1_MODE = true;
    } else if (localDW->EnabledSubsystem1_MODE) {
      Senso_EnabledSubsystem1_Disable(localDW);
    }
  }

  if (localDW->EnabledSubsystem1_MODE && (rtmIsMajorTimeStep
       (Sensors_and_actuators_ball_a_M) &&
       Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0)) {
    /* SignalConversion generated from: '<S183>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S181>/Enabled Subsystem1' */
}

/* Model output function */
void Sensors_and_actuators_ball_and_plate_2022b_output(void)
{
  real_T denAccum;
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

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    Sensors_and_actuators_ball_an_B.DataTypeConversion_k =
      (Sensors_and_actuators_ball_an_P.Constant1_Value != 0.0);

    /* S-Function (rti_commonblock): '<S17>/S-Function1' incorporates:
     *  Outport: '<Root>/Frames '
     *  Outport: '<Root>/Status '
     */
    /* This comment workarounds a code generation problem */
    {
      /* --- Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_UDP_RX_BL1: ==> Socket ID = (0) --- */
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
      if (Sensors_and_actuators_ball_an_B.DataTypeConversion_k == 0) {
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

    /* Gain: '<S1>/Gain1' */
    Sensors_and_actuators_ball_an_B.Gain1 = (uint16_T)((uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_P.Gain1_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[5]) << 1);

    /* Sum: '<S1>/Add1' */
    Sensors_and_actuators_ball_an_B.Add1 = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[4] +
      Sensors_and_actuators_ball_an_B.Gain1);

    /* Sum: '<S1>/Sum1' incorporates:
     *  Constant: '<S1>/Constant4'
     */
    denAccum = Sensors_and_actuators_ball_an_P.center[1];

    /* Sum: '<S1>/Sum1' */
    Sensors_and_actuators_ball_an_B.Sum1 = (real_T)
      Sensors_and_actuators_ball_an_B.Add1 - denAccum;

    /* Gain: '<S1>/Gain4' */
    denAccum = -Sensors_and_actuators_ball_an_P.a_y;

    /* Gain: '<S1>/Gain4' */
    Sensors_and_actuators_ball_an_B.Gain4 = denAccum *
      Sensors_and_actuators_ball_an_B.Sum1;

    /* Outport: '<Root>/Xpos ' incorporates:
     *  Constant: '<S1>/Constant'
     *  Sum: '<S1>/Add2'
     */
    Sensors_and_actuators_ball_an_Y.Xpos = Sensors_and_actuators_ball_an_P.b_y +
      Sensors_and_actuators_ball_an_B.Gain4;

    /* Gain: '<S1>/Gain2' */
    Sensors_and_actuators_ball_an_B.Gain2 = (uint16_T)((uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_P.Gain2_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[1]) << 1);

    /* Sum: '<S1>/Add' */
    Sensors_and_actuators_ball_an_B.Add = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[0] +
      Sensors_and_actuators_ball_an_B.Gain2);

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant3'
     */
    denAccum = Sensors_and_actuators_ball_an_P.center[0];

    /* Sum: '<S1>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum = (real_T)
      Sensors_and_actuators_ball_an_B.Add - denAccum;

    /* Gain: '<S1>/Gain3' */
    denAccum = Sensors_and_actuators_ball_an_P.a_x;

    /* Gain: '<S1>/Gain3' */
    Sensors_and_actuators_ball_an_B.Gain3 = denAccum *
      Sensors_and_actuators_ball_an_B.Sum;

    /* Sum: '<S1>/Add3' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    Sensors_and_actuators_ball_an_B.Add3 = Sensors_and_actuators_ball_an_P.b_x +
      Sensors_and_actuators_ball_an_B.Gain3;

    /* Outport: '<Root>/Ypos ' incorporates:
     *  Gain: '<S1>/Gain'
     */
    Sensors_and_actuators_ball_an_Y.Ypos =
      Sensors_and_actuators_ball_an_P.Gain_Gain *
      Sensors_and_actuators_ball_an_B.Add3;
  }

  /* Sin: '<S2>/Sine Wave' */
  Sensors_and_actuators_ball_an_B.SineWave = sin
    (Sensors_and_actuators_ball_an_P.SineWave_Freq *
     Sensors_and_actuators_ball_a_M->Timing.t[0] +
     Sensors_and_actuators_ball_an_P.SineWave_Phase) *
    Sensors_and_actuators_ball_an_P.SineWave_Amp +
    Sensors_and_actuators_ball_an_P.SineWave_Bias;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch_Threshold_m) {
    /* Switch: '<S2>/Switch' */
    Sensors_and_actuators_ball_an_B.Switch =
      Sensors_and_actuators_ball_an_B.SineWave;
  } else {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/ref_x_constant'
     */
    Sensors_and_actuators_ball_an_B.Switch =
      Sensors_and_actuators_ball_an_P.ref_x_constant_Value;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Sum: '<Root>/Ref_error_sum_x' incorporates:
   *  Outport: '<Root>/Xpos '
   */
  Sensors_and_actuators_ball_an_B.Ref_error_sum_x =
    Sensors_and_actuators_ball_an_B.Switch -
    Sensors_and_actuators_ball_an_Y.Xpos;

  /* RateTransition: '<Root>/Rate Transition' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
        Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
      Sensors_and_actuators_ball_a_DW.RateTransition_Buffer =
        Sensors_and_actuators_ball_an_B.Ref_error_sum_x;
    }

    /* MATLAB Function: '<S15>/Integrator reset determination outer loop' incorporates:
     *  Constant: '<S15>/Outerloop_controller_status'
     *  Constant: '<S15>/reset_integrator_outerloop'
     */
    /* MATLAB Function 'xy_controller/Integrator reset determination outer loop': '<S197>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_outerloop_Valu == 1.0)
        || (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val ==
            0.0)) {
      /* '<S197>:1:3' */
      /* '<S197>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop = 1.0;
    } else {
      /* '<S197>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop = 0.0;
    }

    /* End of MATLAB Function: '<S15>/Integrator reset determination outer loop' */

    /* DiscreteIntegrator: '<S281>/Integrator' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState != 0)) {
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE =
        Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialCondit_j;
    }

    /* DiscreteIntegrator: '<S281>/Integrator' */
    Sensors_and_actuators_ball_an_B.Integrator =
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition' */
    Sensors_and_actuators_ball_an_B.RateTransition =
      Sensors_and_actuators_ball_a_DW.RateTransition_Buffer;

    /* DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn2' */
    denAccum = Sensors_and_actuators_ball_an_B.RateTransition;
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_DenCoef[1];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_DenCoef[2];
    denAccum /= Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_DenCoef[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_tmp = denAccum;
    denAccum = Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_NumCoef[0] *
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_tmp;
    denAccum += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_NumCoef[1];
    denAccum += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_NumCoef[2];

    /* DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn2' */
    Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2 = denAccum;

    /* Saturate: '<S15>/Saturation1' */
    denAccum = Sensors_and_actuators_ball_an_B.DiscreteTransferFcn2;
    u1 = Sensors_and_actuators_ball_an_P.Saturation1_LowerSat;
    u2 = Sensors_and_actuators_ball_an_P.Saturation1_UpperSat;
    if (denAccum > u2) {
      /* Saturate: '<S15>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = u2;
    } else if (denAccum < u1) {
      /* Saturate: '<S15>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = u1;
    } else {
      /* Saturate: '<S15>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = denAccum;
    }

    /* End of Saturate: '<S15>/Saturation1' */

    /* Product: '<S286>/PProd Out' incorporates:
     *  Constant: '<Root>/Outer_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_P_Value;

    /* Product: '<S275>/DProd Out' incorporates:
     *  Constant: '<Root>/Outer_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_D_Value;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscreteIntegrator: '<S276>/Filter' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Filter_PrevResetState != 0)) {
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE =
        Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialConditio;
    }

    /* DiscreteIntegrator: '<S276>/Filter' */
    Sensors_and_actuators_ball_an_B.Filter =
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE;

    /* Sum: '<S276>/SumD' */
    Sensors_and_actuators_ball_an_B.SumD =
      Sensors_and_actuators_ball_an_B.DProdOut -
      Sensors_and_actuators_ball_an_B.Filter;

    /* Product: '<S284>/NProd Out' incorporates:
     *  Constant: '<Root>/Outer_N'
     */
    Sensors_and_actuators_ball_an_B.NProdOut =
      Sensors_and_actuators_ball_an_B.SumD *
      Sensors_and_actuators_ball_an_P.Outer_N_Value;

    /* Sum: '<S290>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum_n =
      (Sensors_and_actuators_ball_an_B.PProdOut +
       Sensors_and_actuators_ball_an_B.Integrator) +
      Sensors_and_actuators_ball_an_B.NProdOut;

    /* Saturate: '<S288>/Saturation' */
    denAccum = Sensors_and_actuators_ball_an_B.Sum_n;
    u1 = Sensors_and_actuators_ball_an_P.PID_outer_theta_LowerSaturation;
    u2 = Sensors_and_actuators_ball_an_P.PID_outer_theta_UpperSaturation;
    if (denAccum > u2) {
      /* Saturate: '<S288>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = u2;
    } else if (denAccum < u1) {
      /* Saturate: '<S288>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = u1;
    } else {
      /* Saturate: '<S288>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = denAccum;
    }

    /* End of Saturate: '<S288>/Saturation' */

    /* Switch: '<S15>/Outerloop_theta_switch' incorporates:
     *  Constant: '<S15>/Outerloop_controller_status'
     */
    if (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val >
        Sensors_and_actuators_ball_an_P.Outerloop_theta_switch_Threshol) {
      /* Switch: '<S15>/Switch' incorporates:
       *  Constant: '<S15>/switch_outerloop_controller'
       */
      if (Sensors_and_actuators_ball_an_P.switch_outerloop_controller_Val >=
          Sensors_and_actuators_ball_an_P.Switch_Threshold) {
        /* Switch: '<S15>/Switch' */
        Sensors_and_actuators_ball_an_B.Switch_j =
          Sensors_and_actuators_ball_an_B.Saturation1;
      } else {
        /* Switch: '<S15>/Switch' */
        Sensors_and_actuators_ball_an_B.Switch_j =
          Sensors_and_actuators_ball_an_B.Saturation;
      }

      /* End of Switch: '<S15>/Switch' */

      /* Outport: '<Root>/Outerloop_theta_output' */
      Sensors_and_actuators_ball_an_Y.Outerloop_theta_output =
        Sensors_and_actuators_ball_an_B.Switch_j;
    } else {
      /* Outport: '<Root>/Outerloop_theta_output' incorporates:
       *  Constant: '<S15>/0_ref_outerloop_constant'
       */
      Sensors_and_actuators_ball_an_Y.Outerloop_theta_output =
        Sensors_and_actuators_ball_an_P.u_ref_outerloop_constant_Value;
    }

    /* End of Switch: '<S15>/Outerloop_theta_switch' */
  }

  /* Sin: '<S2>/Sine Wave1' */
  Sensors_and_actuators_ball_an_B.SineWave1 = sin
    (Sensors_and_actuators_ball_an_P.SineWave1_Freq *
     Sensors_and_actuators_ball_a_M->Timing.t[0] +
     Sensors_and_actuators_ball_an_P.SineWave1_Phase) *
    Sensors_and_actuators_ball_an_P.SineWave1_Amp +
    Sensors_and_actuators_ball_an_P.SineWave1_Bias;

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch1_Threshold_p) {
    /* Switch: '<S2>/Switch1' */
    Sensors_and_actuators_ball_an_B.Switch1 =
      Sensors_and_actuators_ball_an_B.SineWave1;
  } else {
    /* Switch: '<S2>/Switch1' incorporates:
     *  Constant: '<S2>/ref_y_constant'
     */
    Sensors_and_actuators_ball_an_B.Switch1 =
      Sensors_and_actuators_ball_an_P.ref_y_constant_Value;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* Sum: '<Root>/Ref_error_sum_y' incorporates:
   *  Outport: '<Root>/Ypos '
   */
  Sensors_and_actuators_ball_an_B.Ref_error_sum_y =
    Sensors_and_actuators_ball_an_B.Switch1 -
    Sensors_and_actuators_ball_an_Y.Ypos;

  /* RateTransition: '<Root>/Rate Transition1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
        Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
      Sensors_and_actuators_ball_a_DW.RateTransition1_Buffer =
        Sensors_and_actuators_ball_an_B.Ref_error_sum_y;
    }

    /* DiscreteIntegrator: '<S233>/Integrator' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i != 0)) {
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j =
        Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditio_d;
    }

    /* DiscreteIntegrator: '<S233>/Integrator' */
    Sensors_and_actuators_ball_an_B.Integrator_l =
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition1' */
    Sensors_and_actuators_ball_an_B.RateTransition1 =
      Sensors_and_actuators_ball_a_DW.RateTransition1_Buffer;

    /* DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn1' */
    denAccum = Sensors_and_actuators_ball_an_B.RateTransition1;
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_DenCoef[1];
    denAccum -= Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_DenCoef[2];
    denAccum /= Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_DenCoef[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_tmp = denAccum;
    denAccum = Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_NumCoef[0] *
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_tmp;
    denAccum += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_NumCoef[1];
    denAccum += Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] *
      Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_NumCoef[2];

    /* DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn1' */
    Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1 = denAccum;

    /* Saturate: '<S15>/Saturation' */
    denAccum = Sensors_and_actuators_ball_an_B.DiscreteTransferFcn1;
    u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_o;
    u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_k;
    if (denAccum > u2) {
      /* Saturate: '<S15>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = u2;
    } else if (denAccum < u1) {
      /* Saturate: '<S15>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = u1;
    } else {
      /* Saturate: '<S15>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = denAccum;
    }

    /* End of Saturate: '<S15>/Saturation' */

    /* Product: '<S238>/PProd Out' incorporates:
     *  Constant: '<Root>/Outer_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_m =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_P_Value;

    /* Product: '<S227>/DProd Out' incorporates:
     *  Constant: '<Root>/Outer_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_p =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_D_Value;
  }

  /* End of RateTransition: '<Root>/Rate Transition1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscreteIntegrator: '<S228>/Filter' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m != 0)) {
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e =
        Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditionF;
    }

    /* DiscreteIntegrator: '<S228>/Filter' */
    Sensors_and_actuators_ball_an_B.Filter_d =
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e;

    /* Sum: '<S228>/SumD' */
    Sensors_and_actuators_ball_an_B.SumD_b =
      Sensors_and_actuators_ball_an_B.DProdOut_p -
      Sensors_and_actuators_ball_an_B.Filter_d;

    /* Product: '<S236>/NProd Out' incorporates:
     *  Constant: '<Root>/Outer_N'
     */
    Sensors_and_actuators_ball_an_B.NProdOut_d =
      Sensors_and_actuators_ball_an_B.SumD_b *
      Sensors_and_actuators_ball_an_P.Outer_N_Value;

    /* Sum: '<S242>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum_nf =
      (Sensors_and_actuators_ball_an_B.PProdOut_m +
       Sensors_and_actuators_ball_an_B.Integrator_l) +
      Sensors_and_actuators_ball_an_B.NProdOut_d;

    /* Saturate: '<S240>/Saturation' */
    denAccum = Sensors_and_actuators_ball_an_B.Sum_nf;
    u1 = Sensors_and_actuators_ball_an_P.PID_outer_phi_LowerSaturationLi;
    u2 = Sensors_and_actuators_ball_an_P.PID_outer_phi_UpperSaturationLi;
    if (denAccum > u2) {
      /* Saturate: '<S240>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = u2;
    } else if (denAccum < u1) {
      /* Saturate: '<S240>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = u1;
    } else {
      /* Saturate: '<S240>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = denAccum;
    }

    /* End of Saturate: '<S240>/Saturation' */

    /* Switch: '<S15>/Outerloop_phi_switch' incorporates:
     *  Constant: '<S15>/Outerloop_controller_status'
     */
    if (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val >
        Sensors_and_actuators_ball_an_P.Outerloop_phi_switch_Threshold) {
      /* Switch: '<S15>/Switch1' incorporates:
       *  Constant: '<S15>/switch_outerloop_controller'
       */
      if (Sensors_and_actuators_ball_an_P.switch_outerloop_controller_Val >
          Sensors_and_actuators_ball_an_P.Switch1_Threshold) {
        /* Switch: '<S15>/Switch1' */
        Sensors_and_actuators_ball_an_B.Switch1_c =
          Sensors_and_actuators_ball_an_B.Saturation_k;
      } else {
        /* Switch: '<S15>/Switch1' */
        Sensors_and_actuators_ball_an_B.Switch1_c =
          Sensors_and_actuators_ball_an_B.Saturation_o;
      }

      /* End of Switch: '<S15>/Switch1' */

      /* Outport: '<Root>/Outerloop_phi_output' */
      Sensors_and_actuators_ball_an_Y.Outerloop_phi_output =
        Sensors_and_actuators_ball_an_B.Switch1_c;
    } else {
      /* Outport: '<Root>/Outerloop_phi_output' incorporates:
       *  Constant: '<S15>/0_ref_outerloop_constant'
       */
      Sensors_and_actuators_ball_an_Y.Outerloop_phi_output =
        Sensors_and_actuators_ball_an_P.u_ref_outerloop_constant_Value;
    }

    /* End of Switch: '<S15>/Outerloop_phi_switch' */

    /* S-Function (rti_commonblock): '<S16>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_SETUP_BL1 --- */
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

    /* S-Function (rti_commonblock): '<S18>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* --- Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
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

    /* MATLAB Function: '<S4>/Inverse Kinematics Calculation Function' incorporates:
     *  Outport: '<Root>/Outerloop_phi_output'
     *  Outport: '<Root>/Outerloop_theta_output'
     */
    /* MATLAB Function 'Inverse Kinematics/Inverse Kinematics Calculation Function': '<S22>:1' */
    /* '<S22>:1:2' */
    /* '<S22>:1:3' */
    Sensors_and_actuators_ball_an_B.z1 = -0.1732050807568877 * sin
      (Sensors_and_actuators_ball_an_Y.Outerloop_theta_output);

    /* '<S22>:1:4' */
    Sensors_and_actuators_ball_an_B.z2 = 0.086602540378443851 * sin
      (Sensors_and_actuators_ball_an_Y.Outerloop_theta_output) - 0.15 * cos
      (Sensors_and_actuators_ball_an_Y.Outerloop_theta_output) * sin
      (Sensors_and_actuators_ball_an_Y.Outerloop_phi_output);

    /* '<S22>:1:5' */
    Sensors_and_actuators_ball_an_B.z3 = 0.15 * cos
      (Sensors_and_actuators_ball_an_Y.Outerloop_theta_output) * sin
      (Sensors_and_actuators_ball_an_Y.Outerloop_phi_output) +
      0.086602540378443851 * sin
      (Sensors_and_actuators_ball_an_Y.Outerloop_theta_output);

    /* MATLAB Function: '<S4>/BoundsFunction1' */
    Sensors_and_act_BoundsFunction1(Sensors_and_actuators_ball_an_B.z1,
      &Sensors_and_actuators_ball_an_B.sf_BoundsFunction1);

    /* MATLAB Function: '<S4>/BoundsFunction2' */
    Sensors_and_act_BoundsFunction1(Sensors_and_actuators_ball_an_B.z2,
      &Sensors_and_actuators_ball_an_B.sf_BoundsFunction2);

    /* MATLAB Function: '<S4>/BoundsFunction3' */
    Sensors_and_act_BoundsFunction1(Sensors_and_actuators_ball_an_B.z3,
      &Sensors_and_actuators_ball_an_B.sf_BoundsFunction3);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Triggered SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S180>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_1' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o,
                           (Sensors_and_actuators_ball_an_P.Init_1_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S180>/S-Function1' incorporates:
         *  Constant: '<S11>/Constant'
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

    /* End of Outputs for SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S179>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S11>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_g =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_o;

    /* Sum: '<S11>/AbsPosition' incorporates:
     *  Constant: '<S11>/Pos_offset'
     *  Constant: '<S11>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_hs =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_g -
       Sensors_and_actuators_ball_an_P.ZP_Value) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value;

    /* Abs: '<S181>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_c = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_n);

    /* Outputs for Enabled SubSystem: '<S181>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_1' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_1_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S181>/Enabled Subsystem' */

    /* RelationalOperator: '<S181>/Relational Operator1' incorporates:
     *  Constant: '<S181>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_b =
      (Sensors_and_actuators_ball_an_B.Abs_c <=
       Sensors_and_actuators_ball_an_P.Const_Value);
  }

  /* TransferFcn: '<S181>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_f =
    Sensors_and_actuators_ball_an_P.TransferFcn_C *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;

  /* RelationalOperator: '<S181>/Relational Operator' incorporates:
   *  Constant: '<S181>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_c =
    (Sensors_and_actuators_ball_an_P.Const1_Value >=
     Sensors_and_actuators_ball_an_B.TransferFcn_f);

  /* Logic: '<S181>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_1'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_c =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_b &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_c &&
     (Sensors_and_actuators_ball_an_P.Init_1_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S181>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_c,
    Sensors_and_actuators_ball_an_B.Inc2Pos_g,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S181>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S11>/mm2m' */
    Sensors_and_actuators_ball_an_B.mm2m_h =
      Sensors_and_actuators_ball_an_P.mm2m_Gain *
      Sensors_and_actuators_ball_an_B.AbsPosition_hs;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S5>/OR' incorporates:
     *  Constant: '<Root>/enable_constant_ref_all'
     *  Constant: '<S5>/enable_constant_ref_1'
     */
    Sensors_and_actuators_ball_an_B.OR =
      ((Sensors_and_actuators_ball_an_P.enable_constant_ref_all_Value != 0.0) ||
       (Sensors_and_actuators_ball_an_P.enable_constant_ref_1_Value != 0.0));

    /* DataTypeConversion: '<S5>/Data Type Conversion' */
    Sensors_and_actuators_ball_an_B.DataTypeConversion =
      Sensors_and_actuators_ball_an_B.OR;

    /* Switch: '<S5>/ref_1' */
    if (Sensors_and_actuators_ball_an_B.DataTypeConversion >=
        Sensors_and_actuators_ball_an_P.ref_1_Threshold) {
      /* Switch: '<S5>/ref_1' incorporates:
       *  Constant: '<S5>/constant_ref_1'
       */
      Sensors_and_actuators_ball_an_B.ref_1 =
        Sensors_and_actuators_ball_an_P.constant_ref_1_Value;
    } else {
      /* Switch: '<S5>/ref_1' */
      Sensors_and_actuators_ball_an_B.ref_1 = Sensors_and_actuators_ball_an_B.z1;
    }

    /* End of Switch: '<S5>/ref_1' */

    /* Sum: '<S5>/Sum1' */
    Sensors_and_actuators_ball_an_B.Sum1_j =
      Sensors_and_actuators_ball_an_B.ref_1 -
      Sensors_and_actuators_ball_an_B.mm2m_h;

    /* Product: '<S50>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_b =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S5>/Integrator reset determination1' incorporates:
     *  Constant: '<S5>/Actuator_controller_status_1'
     *  Constant: '<S5>/reset_integrator_1'
     */
    /* MATLAB Function 'Motor1/Integrator reset determination1': '<S24>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_1_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_1_Va == 0.0))
    {
      /* '<S24>:1:3' */
      /* '<S24>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 = 1.0;
    } else {
      /* '<S24>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 = 0.0;
    }

    /* End of MATLAB Function: '<S5>/Integrator reset determination1' */
  }

  /* Integrator: '<S51>/Filter' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE =
        Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialCondition;
    }
  }

  /* Integrator: '<S51>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_b =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE;

  /* Sum: '<S51>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_c =
    Sensors_and_actuators_ball_an_B.DProdOut_b -
    Sensors_and_actuators_ball_an_B.Filter_b;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S53>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S56>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
        Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialConditi_c;
    }
  }

  /* Integrator: '<S56>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_m =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE;

  /* Product: '<S59>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_e =
    Sensors_and_actuators_ball_an_B.SumD_c *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S61>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_j =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S65>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_k =
    (Sensors_and_actuators_ball_an_B.PProdOut_j +
     Sensors_and_actuators_ball_an_B.Integrator_m) +
    Sensors_and_actuators_ball_an_B.NProdOut_e;

  /* Saturate: '<S63>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.Sum_k;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_1_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_1_UpperSaturationL;
  if (denAccum > u2) {
    /* Saturate: '<S63>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S63>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u1;
  } else {
    /* Saturate: '<S63>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = denAccum;
  }

  /* End of Saturate: '<S63>/Saturation' */

  /* Switch: '<S5>/CloseLoop_disable_1' incorporates:
   *  Constant: '<S5>/Actuator_controller_status_1'
   */
  if (Sensors_and_actuators_ball_an_P.Actuator_controller_status_1_Va >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_1_Threshold) {
    /* Switch: '<S5>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.Saturation_m;
  } else {
    /* Switch: '<S5>/CloseLoop_disable_1' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_1 =
      Sensors_and_actuators_ball_an_B.TransferFcn_f;
  }

  /* End of Switch: '<S5>/CloseLoop_disable_1' */

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Triggered SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S185>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_2' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n,
                           (Sensors_and_actuators_ball_an_P.Init_2_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S185>/S-Function1' incorporates:
         *  Constant: '<S12>/Constant'
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

    /* End of Outputs for SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S184>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S12>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos_i =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_j *
      Sensors_and_actuators_ball_an_B.SFunction1_o1_g;

    /* Sum: '<S12>/AbsPosition' incorporates:
     *  Constant: '<S12>/Pos_offset'
     *  Constant: '<S12>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition_h =
      (Sensors_and_actuators_ball_an_B.Inc2Pos_i -
       Sensors_and_actuators_ball_an_P.ZP_Value_a) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_f;

    /* Abs: '<S186>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_l = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_p);

    /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_2' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_2_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

    /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem' */

    /* RelationalOperator: '<S186>/Relational Operator1' incorporates:
     *  Constant: '<S186>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_p =
      (Sensors_and_actuators_ball_an_B.Abs_l <=
       Sensors_and_actuators_ball_an_P.Const_Value_d);
  }

  /* TransferFcn: '<S186>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_d =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_j *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;

  /* RelationalOperator: '<S186>/Relational Operator' incorporates:
   *  Constant: '<S186>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_n =
    (Sensors_and_actuators_ball_an_P.Const1_Value_k >=
     Sensors_and_actuators_ball_an_B.TransferFcn_d);

  /* Logic: '<S186>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_2'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_k =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_p &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_n &&
     (Sensors_and_actuators_ball_an_P.Init_2_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_k,
    Sensors_and_actuators_ball_an_B.Inc2Pos_i,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S12>/mm2m' */
    Sensors_and_actuators_ball_an_B.mm2m_p =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_f *
      Sensors_and_actuators_ball_an_B.AbsPosition_h;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S6>/OR' incorporates:
     *  Constant: '<Root>/enable_constant_ref_all'
     *  Constant: '<S6>/enable_constant_ref_2'
     */
    Sensors_and_actuators_ball_an_B.OR_i =
      ((Sensors_and_actuators_ball_an_P.enable_constant_ref_all_Value != 0.0) ||
       (Sensors_and_actuators_ball_an_P.enable_constant_ref_2_Value != 0.0));

    /* DataTypeConversion: '<S6>/Data Type Conversion' */
    Sensors_and_actuators_ball_an_B.DataTypeConversion_a =
      Sensors_and_actuators_ball_an_B.OR_i;

    /* Switch: '<S6>/ref_2' */
    if (Sensors_and_actuators_ball_an_B.DataTypeConversion_a >=
        Sensors_and_actuators_ball_an_P.ref_2_Threshold) {
      /* Switch: '<S6>/ref_2' incorporates:
       *  Constant: '<S6>/constant_ref_2'
       */
      Sensors_and_actuators_ball_an_B.ref_2 =
        Sensors_and_actuators_ball_an_P.constant_ref_2_Value;
    } else {
      /* Switch: '<S6>/ref_2' */
      Sensors_and_actuators_ball_an_B.ref_2 = Sensors_and_actuators_ball_an_B.z2;
    }

    /* End of Switch: '<S6>/ref_2' */

    /* Sum: '<S6>/Sum2' */
    Sensors_and_actuators_ball_an_B.Sum2 = Sensors_and_actuators_ball_an_B.ref_2
      - Sensors_and_actuators_ball_an_B.mm2m_p;

    /* Product: '<S100>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_pg =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S6>/Integrator reset determination' incorporates:
     *  Constant: '<S6>/Actuator_controller_status_2'
     *  Constant: '<S6>/reset_integrator_2'
     */
    /* MATLAB Function 'Motor2/Integrator reset determination': '<S74>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_2_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_2_Va == 0.0))
    {
      /* '<S74>:1:3' */
      /* '<S74>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 = 1.0;
    } else {
      /* '<S74>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 = 0.0;
    }

    /* End of MATLAB Function: '<S6>/Integrator reset determination' */
  }

  /* Integrator: '<S101>/Filter' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_l,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE_j =
        Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialCondition;
    }
  }

  /* Integrator: '<S101>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_a =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_j;

  /* Sum: '<S101>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_k =
    Sensors_and_actuators_ball_an_B.DProdOut_pg -
    Sensors_and_actuators_ball_an_B.Filter_a;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S103>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_g =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S106>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_c,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b =
        Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialConditi_j;
    }
  }

  /* Integrator: '<S106>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_a =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b;

  /* Product: '<S109>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_m =
    Sensors_and_actuators_ball_an_B.SumD_k *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S111>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_o =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S115>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_o =
    (Sensors_and_actuators_ball_an_B.PProdOut_o +
     Sensors_and_actuators_ball_an_B.Integrator_a) +
    Sensors_and_actuators_ball_an_B.NProdOut_m;

  /* Saturate: '<S113>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.Sum_o;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_2_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_2_UpperSaturationL;
  if (denAccum > u2) {
    /* Saturate: '<S113>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S113>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u1;
  } else {
    /* Saturate: '<S113>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = denAccum;
  }

  /* End of Saturate: '<S113>/Saturation' */

  /* Switch: '<S6>/CloseLoop_disable_2' incorporates:
   *  Constant: '<S6>/Actuator_controller_status_2'
   */
  if (Sensors_and_actuators_ball_an_P.Actuator_controller_status_2_Va >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_2_Threshold) {
    /* Switch: '<S6>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.Saturation_l;
  } else {
    /* Switch: '<S6>/CloseLoop_disable_2' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_2 =
      Sensors_and_actuators_ball_an_B.TransferFcn_d;
  }

  /* End of Switch: '<S6>/CloseLoop_disable_2' */

  /* Outputs for Atomic SubSystem: '<Root>/Position Measurement3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Triggered SubSystem: '<S13>/EMC_ENCODER_POS_SET_BL1' incorporates:
     *  TriggerPort: '<S190>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/init_3' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC,
                           (Sensors_and_actuators_ball_an_P.init_3_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S190>/S-Function1' incorporates:
         *  Constant: '<S13>/Constant'
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

    /* End of Outputs for SubSystem: '<S13>/EMC_ENCODER_POS_SET_BL1' */

    /* S-Function (rti_commonblock): '<S189>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Gain: '<S13>/Inc2Pos' */
    Sensors_and_actuators_ball_an_B.Inc2Pos =
      Sensors_and_actuators_ball_an_P.Inc2Pos_Gain_i *
      Sensors_and_actuators_ball_an_B.SFunction1_o1;

    /* Sum: '<S13>/AbsPosition' incorporates:
     *  Constant: '<S13>/Pos_offset'
     *  Constant: '<S13>/ZP'
     */
    Sensors_and_actuators_ball_an_B.AbsPosition =
      (Sensors_and_actuators_ball_an_B.Inc2Pos -
       Sensors_and_actuators_ball_an_P.ZP_Value_d) -
      Sensors_and_actuators_ball_an_P.Pos_offset_Value_b;

    /* Abs: '<S191>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2);

    /* Outputs for Enabled SubSystem: '<S191>/Enabled Subsystem' */
    /* Constant: '<Root>/init_3' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.init_3_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

    /* End of Outputs for SubSystem: '<S191>/Enabled Subsystem' */

    /* RelationalOperator: '<S191>/Relational Operator1' incorporates:
     *  Constant: '<S191>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1 =
      (Sensors_and_actuators_ball_an_B.Abs <=
       Sensors_and_actuators_ball_an_P.Const_Value_i);
  }

  /* TransferFcn: '<S191>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_m *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;

  /* RelationalOperator: '<S191>/Relational Operator' incorporates:
   *  Constant: '<S191>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator =
    (Sensors_and_actuators_ball_an_P.Const1_Value_n >=
     Sensors_and_actuators_ball_an_B.TransferFcn);

  /* Logic: '<S191>/Logical Operator2' incorporates:
   *  Constant: '<Root>/init_3'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2 =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1 &&
     Sensors_and_actuators_ball_an_B.RelationalOperator &&
     (Sensors_and_actuators_ball_an_P.init_3_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2,
    Sensors_and_actuators_ball_an_B.Inc2Pos,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Outputs for SubSystem: '<S191>/Enabled Subsystem1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S13>/mm2m' */
    Sensors_and_actuators_ball_an_B.mm2m =
      Sensors_and_actuators_ball_an_P.mm2m_Gain_a *
      Sensors_and_actuators_ball_an_B.AbsPosition;
  }

  /* End of Outputs for SubSystem: '<Root>/Position Measurement3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S7>/OR' incorporates:
     *  Constant: '<Root>/enable_constant_ref_all'
     *  Constant: '<S7>/enable_constant_ref_3'
     */
    Sensors_and_actuators_ball_an_B.OR_p =
      ((Sensors_and_actuators_ball_an_P.enable_constant_ref_all_Value != 0.0) ||
       (Sensors_and_actuators_ball_an_P.enable_constant_ref_3_Value != 0.0));

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    Sensors_and_actuators_ball_an_B.DataTypeConversion_i =
      Sensors_and_actuators_ball_an_B.OR_p;

    /* Switch: '<S7>/ref_3' */
    if (Sensors_and_actuators_ball_an_B.DataTypeConversion_i >=
        Sensors_and_actuators_ball_an_P.ref_3_Threshold) {
      /* Switch: '<S7>/ref_3' incorporates:
       *  Constant: '<S7>/constant_ref_3'
       */
      Sensors_and_actuators_ball_an_B.ref_3 =
        Sensors_and_actuators_ball_an_P.constant_ref_3_Value;
    } else {
      /* Switch: '<S7>/ref_3' */
      Sensors_and_actuators_ball_an_B.ref_3 = Sensors_and_actuators_ball_an_B.z3;
    }

    /* End of Switch: '<S7>/ref_3' */

    /* Sum: '<S7>/Sum3' */
    Sensors_and_actuators_ball_an_B.Sum3 = Sensors_and_actuators_ball_an_B.ref_3
      - Sensors_and_actuators_ball_an_B.mm2m;

    /* Product: '<S150>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_k =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S7>/Integrator reset determination1' incorporates:
     *  Constant: '<S7>/Actuator_controller_status_3'
     *  Constant: '<S7>/reset_integrator_3'
     */
    /* MATLAB Function 'Motor3/Integrator reset determination1': '<S124>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_3_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_3_Va == 0.0))
    {
      /* '<S124>:1:3' */
      /* '<S124>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 = 1.0;
    } else {
      /* '<S124>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 = 0.0;
    }

    /* End of MATLAB Function: '<S7>/Integrator reset determination1' */
  }

  /* Integrator: '<S151>/Filter' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_f,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Filter_CSTATE_a =
        Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialCondition;
    }
  }

  /* Integrator: '<S151>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_o =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_a;

  /* Sum: '<S151>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_e =
    Sensors_and_actuators_ball_an_B.DProdOut_k -
    Sensors_and_actuators_ball_an_B.Filter_o;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S153>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_d =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S156>/Integrator' */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_h,
                         (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings and the level of the reset signal */
    if (zcEvent || (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 !=
                    0.0)) {
      Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k =
        Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialConditi_o;
    }
  }

  /* Integrator: '<S156>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_d =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k;

  /* Product: '<S159>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_g =
    Sensors_and_actuators_ball_an_B.SumD_e *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S161>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_k =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S165>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_a =
    (Sensors_and_actuators_ball_an_B.PProdOut_k +
     Sensors_and_actuators_ball_an_B.Integrator_d) +
    Sensors_and_actuators_ball_an_B.NProdOut_g;

  /* Saturate: '<S163>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.Sum_a;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_3_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_3_UpperSaturationL;
  if (denAccum > u2) {
    /* Saturate: '<S163>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S163>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u1;
  } else {
    /* Saturate: '<S163>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = denAccum;
  }

  /* End of Saturate: '<S163>/Saturation' */

  /* Switch: '<S7>/CloseLoop_disable_3' incorporates:
   *  Constant: '<S7>/Actuator_controller_status_3'
   */
  if (Sensors_and_actuators_ball_an_P.Actuator_controller_status_3_Va >=
      Sensors_and_actuators_ball_an_P.CloseLoop_disable_3_Threshold) {
    /* Switch: '<S7>/CloseLoop_disable_3' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_3 =
      Sensors_and_actuators_ball_an_B.Saturation_f;
  } else {
    /* Switch: '<S7>/CloseLoop_disable_3' */
    Sensors_and_actuators_ball_an_B.CloseLoop_disable_3 =
      Sensors_and_actuators_ball_an_B.TransferFcn;
  }

  /* End of Switch: '<S7>/CloseLoop_disable_3' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Saturate: '<S8>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.CloseLoop_disable_1;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat;
  if (denAccum > u2) {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u1;
  } else {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = denAccum;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Gain: '<S8>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V_p =
    Sensors_and_actuators_ball_an_P.Current2V_Gain *
    Sensors_and_actuators_ball_an_B.Saturation_e;

  /* Gain: '<S8>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale_o =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain *
    Sensors_and_actuators_ball_an_B.Current2V_p;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S173>/S-Function1' */
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

  /* MATLAB Function: '<S8>/MATLAB Function' */
  Sensors_and_actu_MATLABFunction
    (Sensors_and_actuators_ball_an_B.CloseLoop_disable_1,
     &Sensors_and_actuators_ball_an_B.sf_MATLABFunction);

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Saturate: '<S9>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.CloseLoop_disable_2;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_a;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_g;
  if (denAccum > u2) {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u1;
  } else {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = denAccum;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V_a =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_l *
    Sensors_and_actuators_ball_an_B.Saturation_li;

  /* Gain: '<S9>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale_a =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_j *
    Sensors_and_actuators_ball_an_B.Current2V_a;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S175>/S-Function1' */
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

  /* MATLAB Function: '<S9>/MATLAB Function' */
  Sensors_and_actu_MATLABFunction
    (Sensors_and_actuators_ball_an_B.CloseLoop_disable_2,
     &Sensors_and_actuators_ball_an_B.sf_MATLABFunction_c);

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier3' */

  /* Saturate: '<S10>/Saturation' */
  denAccum = Sensors_and_actuators_ball_an_B.CloseLoop_disable_3;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_m;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_j;
  if (denAccum > u2) {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u2;
  } else if (denAccum < u1) {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u1;
  } else {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = denAccum;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/Current2V' */
  Sensors_and_actuators_ball_an_B.Current2V =
    Sensors_and_actuators_ball_an_P.Current2V_Gain_j *
    Sensors_and_actuators_ball_an_B.Saturation_mt;

  /* Gain: '<S10>/DSPscale' */
  Sensors_and_actuators_ball_an_B.DSPscale =
    Sensors_and_actuators_ball_an_P.DSPscale_Gain_h *
    Sensors_and_actuators_ball_an_B.Current2V;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S177>/S-Function1' */
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

  /* MATLAB Function: '<S10>/MATLAB Function' */
  Sensors_and_actu_MATLABFunction
    (Sensors_and_actuators_ball_an_B.CloseLoop_disable_3,
     &Sensors_and_actuators_ball_an_B.sf_MATLABFunction_f);

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* Product: '<S230>/IProd Out' incorporates:
     *  Constant: '<Root>/Outer_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_i =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_I_Value;

    /* Product: '<S278>/IProd Out' incorporates:
     *  Constant: '<Root>/Outer_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_o =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_I_Value;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLAB Function: '<S15>/phi_saturation_check' incorporates:
     *  Outport: '<Root>/Outerloop_phi_output'
     */
    /* MATLAB Function 'xy_controller/phi_saturation_check': '<S200>:1' */
    if (fabs(Sensors_and_actuators_ball_an_Y.Outerloop_phi_output) >=
        0.087266462599716474) {
      /* '<S200>:1:2' */
      /* '<S200>:1:3' */
      Sensors_and_actuators_ball_an_B.phi_saturation_reached_c = true;
    } else {
      /* '<S200>:1:5' */
      Sensors_and_actuators_ball_an_B.phi_saturation_reached_c = false;
    }

    /* End of MATLAB Function: '<S15>/phi_saturation_check' */

    /* MATLAB Function: '<S15>/theta_saturation_check' incorporates:
     *  Outport: '<Root>/Outerloop_theta_output'
     */
    /* MATLAB Function 'xy_controller/theta_saturation_check': '<S201>:1' */
    if (fabs(Sensors_and_actuators_ball_an_Y.Outerloop_theta_output) >=
        0.087266462599716474) {
      /* '<S201>:1:2' */
      /* '<S201>:1:3' */
      Sensors_and_actuators_ball_an_B.theta_saturation_reached_n = true;
    } else {
      /* '<S201>:1:5' */
      Sensors_and_actuators_ball_an_B.theta_saturation_reached_n = false;
    }

    /* End of MATLAB Function: '<S15>/theta_saturation_check' */

    /* DataTypeConversion: '<S3>/actuator_1_RefOutOfBounds' */
    Sensors_and_actuators_ball_an_B.actuator_1_RefOutOfBounds =
      Sensors_and_actuators_ball_an_B.sf_BoundsFunction1.outOfBounds;

    /* DataTypeConversion: '<S3>/actuator_2_RefOutOfBounds' */
    Sensors_and_actuators_ball_an_B.actuator_2_RefOutOfBounds =
      Sensors_and_actuators_ball_an_B.sf_BoundsFunction2.outOfBounds;
  }

  /* DataTypeConversion: '<S3>/actuator_1_SaturationReached' */
  Sensors_and_actuators_ball_an_B.actuator_1_SaturationReached =
    Sensors_and_actuators_ball_an_B.sf_MATLABFunction.saturation;

  /* DataTypeConversion: '<S3>/actuator_2_SaturationReached' */
  Sensors_and_actuators_ball_an_B.actuator_2_SaturationReached =
    Sensors_and_actuators_ball_an_B.sf_MATLABFunction_c.saturation;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DataTypeConversion: '<S3>/actuator_3_RefOutOfBounds' */
    Sensors_and_actuators_ball_an_B.actuator_3_RefOutOfBounds =
      Sensors_and_actuators_ball_an_B.sf_BoundsFunction3.outOfBounds;

    /* DataTypeConversion: '<S3>/phi_saturation_reached' */
    Sensors_and_actuators_ball_an_B.phi_saturation_reached =
      Sensors_and_actuators_ball_an_B.theta_saturation_reached_n;

    /* DataTypeConversion: '<S3>/theta_saturation_reached' */
    Sensors_and_actuators_ball_an_B.theta_saturation_reached =
      Sensors_and_actuators_ball_an_B.phi_saturation_reached_c;
  }

  /* DataTypeConversion: '<S3>/actuator_3_SaturationReached' */
  Sensors_and_actuators_ball_an_B.actuator_3_SaturationReached =
    Sensors_and_actuators_ball_an_B.sf_MATLABFunction_f.saturation;
}

/* Model update function */
void Sensors_and_actuators_ball_and_plate_2022b_update(void)
{
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn2' */
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_tmp;

    /* Update for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn1' */
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0];
    Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] =
      Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_tmp;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S281>/Integrator' */
    Sensors_and_actuators_ball_a_DW.Integrator_DSTATE +=
      Sensors_and_actuators_ball_an_P.Integrator_gainval *
      Sensors_and_actuators_ball_an_B.IProdOut_o;
    if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop > 0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = 1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop <
               0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = -1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop ==
               0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = 0;
    } else {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S281>/Integrator' */

    /* Update for DiscreteIntegrator: '<S276>/Filter' */
    Sensors_and_actuators_ball_a_DW.Filter_DSTATE +=
      Sensors_and_actuators_ball_an_P.Filter_gainval *
      Sensors_and_actuators_ball_an_B.NProdOut;
    if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop > 0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = 1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop <
               0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = -1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop ==
               0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = 0;
    } else {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S276>/Filter' */

    /* Update for DiscreteIntegrator: '<S233>/Integrator' */
    Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j +=
      Sensors_and_actuators_ball_an_P.Integrator_gainval_e *
      Sensors_and_actuators_ball_an_B.IProdOut_i;
    if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop > 0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = 1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop <
               0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = -1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop ==
               0.0) {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = 0;
    } else {
      Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S233>/Integrator' */

    /* Update for DiscreteIntegrator: '<S228>/Filter' */
    Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e +=
      Sensors_and_actuators_ball_an_P.Filter_gainval_o *
      Sensors_and_actuators_ball_an_B.NProdOut_d;
    if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop > 0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = 1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop <
               0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = -1;
    } else if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop ==
               0.0) {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = 0;
    } else {
      Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = 2;
    }

    /* End of Update for DiscreteIntegrator: '<S228>/Filter' */
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

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void Sensors_and_actuators_ball_and_plate_2022b_derivatives(void)
{
  XDot_Sensors_and_actuators_ba_T *_rtXdot;
  _rtXdot = ((XDot_Sensors_and_actuators_ba_T *)
             Sensors_and_actuators_ball_a_M->derivs);

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Derivatives for TransferFcn: '<S181>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_b = Sensors_and_actuators_ball_an_P.TransferFcn_A *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;
  _rtXdot->TransferFcn_CSTATE_b +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement1' */

  /* Derivatives for Integrator: '<S51>/Filter' incorporates:
   *  Integrator: '<S56>/Integrator'
   */
  if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 == 0.0) {
    _rtXdot->Filter_CSTATE = Sensors_and_actuators_ball_an_B.NProdOut_e;
    _rtXdot->Integrator_CSTATE = Sensors_and_actuators_ball_an_B.IProdOut;
  } else {
    /* level reset is active */
    _rtXdot->Filter_CSTATE = 0.0;

    /* level reset is active */
    _rtXdot->Integrator_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S51>/Filter' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Derivatives for TransferFcn: '<S186>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_k =
    Sensors_and_actuators_ball_an_P.TransferFcn_A_b *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;
  _rtXdot->TransferFcn_CSTATE_k +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_h.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement2' */

  /* Derivatives for Integrator: '<S101>/Filter' incorporates:
   *  Integrator: '<S106>/Integrator'
   */
  if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 == 0.0) {
    _rtXdot->Filter_CSTATE_j = Sensors_and_actuators_ball_an_B.NProdOut_m;
    _rtXdot->Integrator_CSTATE_b = Sensors_and_actuators_ball_an_B.IProdOut_g;
  } else {
    /* level reset is active */
    _rtXdot->Filter_CSTATE_j = 0.0;

    /* level reset is active */
    _rtXdot->Integrator_CSTATE_b = 0.0;
  }

  /* End of Derivatives for Integrator: '<S101>/Filter' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Derivatives for TransferFcn: '<S191>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = Sensors_and_actuators_ball_an_P.TransferFcn_A_p *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_c.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement3' */

  /* Derivatives for Integrator: '<S151>/Filter' incorporates:
   *  Integrator: '<S156>/Integrator'
   */
  if (Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 == 0.0) {
    _rtXdot->Filter_CSTATE_a = Sensors_and_actuators_ball_an_B.NProdOut_g;
    _rtXdot->Integrator_CSTATE_k = Sensors_and_actuators_ball_an_B.IProdOut_d;
  } else {
    /* level reset is active */
    _rtXdot->Filter_CSTATE_a = 0.0;

    /* level reset is active */
    _rtXdot->Integrator_CSTATE_k = 0.0;
  }

  /* End of Derivatives for Integrator: '<S151>/Filter' */
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

  /* external outputs */
  (void)memset(&Sensors_and_actuators_ball_an_Y, 0, sizeof
               (ExtY_Sensors_and_actuators_ba_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    Sensors_and_actuators_ball_and_plate_2022b_rti_init_trc_pointers();
  }

  /* Start for Enabled SubSystem: '<S181>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S181>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S181>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Start for SubSystem: '<S181>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement1' */

  /* Start for Enabled SubSystem: '<S186>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h);

  /* End of Start for SubSystem: '<S186>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Start for SubSystem: '<S186>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement2' */

  /* Start for Enabled SubSystem: '<S191>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c);

  /* End of Start for SubSystem: '<S191>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Start for SubSystem: '<S191>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement3' */
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_l = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_c = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Filter_Reset_ZCE_f = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.Integrator_Reset_ZCE_h = UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n =
    UNINITIALIZED_ZCSIG;
  Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for DiscreteIntegrator: '<S281>/Integrator' */
  Sensors_and_actuators_ball_a_DW.Integrator_DSTATE =
    Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialCondit_j;
  Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S276>/Filter' */
  Sensors_and_actuators_ball_a_DW.Filter_DSTATE =
    Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialConditio;
  Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = 0;

  /* InitializeConditions for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn2' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[0] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn1' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[0] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn2' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn2_states[1] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn2_InitialSta;

  /* InitializeConditions for DiscreteTransferFcn: '<S15>/Discrete Transfer Fcn1' */
  Sensors_and_actuators_ball_a_DW.DiscreteTransferFcn1_states[1] =
    Sensors_and_actuators_ball_an_P.DiscreteTransferFcn1_InitialSta;

  /* InitializeConditions for DiscreteIntegrator: '<S233>/Integrator' */
  Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j =
    Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditio_d;
  Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S228>/Filter' */
  Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e =
    Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditionF;
  Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = 0;

  /* InitializeConditions for Integrator: '<S51>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE =
    Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialCondition;

  /* InitializeConditions for Integrator: '<S56>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
    Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialConditi_c;

  /* InitializeConditions for Integrator: '<S101>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_j =
    Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialCondition;

  /* InitializeConditions for Integrator: '<S106>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b =
    Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialConditi_j;

  /* InitializeConditions for Integrator: '<S151>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_a =
    Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialCondition;

  /* InitializeConditions for Integrator: '<S156>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k =
    Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialConditi_o;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* InitializeConditions for TransferFcn: '<S181>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S181>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S181>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S181>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S181>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* InitializeConditions for TransferFcn: '<S186>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S186>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S186>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S186>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement2' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* InitializeConditions for TransferFcn: '<S191>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S191>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

  /* End of SystemInitialize for SubSystem: '<S191>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S191>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement3' */
}

/* Model terminate function */
void Sensors_and_actuators_ball_and_plate_2022b_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S18>/S-Function1' */
  {
    /* --- Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_UDP_SETUP_BL1: ==> Socket ID = (0) --- */
    /* dSPACE I/O Board DSETHERNET #1 Unit:SETUPUDP Group:SETUPUDP */

    /* close a socket connection
     * After closing, the corresponding socket resource is still occupied.   *
     * If a connection has been closed and should be re-used for a different *
     * connection, or if a connection should be re-established it must be    *
     * re-opened using DsIoEth_open() again.                                 */
    DsIoEth_close(DSIOETH_CONNECTION_ID_0);
  }

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* Terminate for Triggered SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S180>/S-Function1' incorporates:
   *  Constant: '<S11>/Constant'
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

  /* End of Terminate for SubSystem: '<S11>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S179>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement1' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Terminate for Triggered SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S185>/S-Function1' incorporates:
   *  Constant: '<S12>/Constant'
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

  /* End of Terminate for SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S184>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement2' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Terminate for Triggered SubSystem: '<S13>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S190>/S-Function1' incorporates:
   *  Constant: '<S13>/Constant'
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

  /* End of Terminate for SubSystem: '<S13>/EMC_ENCODER_POS_SET_BL1' */

  /* Terminate for S-Function (rti_commonblock): '<S189>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement3' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */
  /* Terminate for S-Function (rti_commonblock): '<S173>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 1 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_1, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_1);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */
  /* Terminate for S-Function (rti_commonblock): '<S175>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 2 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_2, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_2);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier3' */
  /* Terminate for S-Function (rti_commonblock): '<S177>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 3 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_3, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_3);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier3' */
}

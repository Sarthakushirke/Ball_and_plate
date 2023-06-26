/*
 * Sensors_and_actuators_ball_and_plate_2022b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate_2022b".
 *
 * Model version              : 7.49
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Fri Jun 23 18:27:29 2023
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
#include "Sensors_and_actuators_ball_and_plate_2022b_types.h"
#include "Sensors_and_actuators_ball_and_plate_2022b_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include <float.h>
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

/* Forward declaration for local functions */
static void Sensors_and_ac_SystemCore_setup(dsp_simulink_MovingAverage_Se_T *obj);
static void rate_scheduler(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

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
  if ((Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2]) > 34) {/* Sample time: [0.035s, 0.0s] */
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
  /* MATLAB Function 'Inverse Kinematics/BoundsFunction1': '<S24>:1' */
  if ((rtu_ref > 0.06) || (rtu_ref < 0.0)) {
    /* '<S24>:1:2' */
    /* '<S24>:1:3' */
    localB->outOfBounds = true;
  } else {
    /* '<S24>:1:5' */
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
  /* MATLAB Function 'Outputs to Amplifier1/MATLAB Function': '<S179>:1' */
  if (fabs(rtu_current) >= 3.0) {
    /* '<S179>:1:2' */
    /* '<S179>:1:3' */
    localB->saturation = true;
  } else {
    /* '<S179>:1:5' */
    localB->saturation = false;
  }
}

/*
 * System initialize for enable system:
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 *    '<S196>/Enabled Subsystem'
 */
void Sensors_a_EnabledSubsystem_Init(B_EnabledSubsystem_Sensors_an_T *localB,
  P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S187>/Out1' incorporates:
   *  Outport: '<S187>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 *    '<S196>/Enabled Subsystem'
 */
void Sensor_EnabledSubsystem_Disable(B_EnabledSubsystem_Sensors_an_T *localB,
  DW_EnabledSubsystem_Sensors_a_T *localDW, P_EnabledSubsystem_Sensors_an_T
  *localP)
{
  /* Disable for SignalConversion generated from: '<S187>/Out1' incorporates:
   *  Outport: '<S187>/Out1'
   */
  localB->OutportBufferForOut1 = localP->Out1_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 *    '<S196>/Enabled Subsystem'
 */
void Sensors__EnabledSubsystem_Start(DW_EnabledSubsystem_Sensors_a_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S186>/Enabled Subsystem'
 *    '<S191>/Enabled Subsystem'
 *    '<S196>/Enabled Subsystem'
 */
void Sensors_and_ac_EnabledSubsystem(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, real_T rtu_Enable,
  B_EnabledSubsystem_Sensors_an_T *localB, DW_EnabledSubsystem_Sensors_a_T
  *localDW, P_EnabledSubsystem_Sensors_an_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S187>/Enable'
   */
  if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
    if (rtu_Enable > 0.0) {
      localDW->EnabledSubsystem_MODE = true;
    } else if (localDW->EnabledSubsystem_MODE) {
      Sensor_EnabledSubsystem_Disable(localB, localDW, localP);
    }
  }

  if (localDW->EnabledSubsystem_MODE) {
    /* SignalConversion generated from: '<S187>/Out1' incorporates:
     *  Constant: '<S187>/Constant'
     */
    localB->OutportBufferForOut1 = localP->Constant_Value;
  }

  /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem' */
}

/*
 * System initialize for enable system:
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 *    '<S196>/Enabled Subsystem1'
 */
void Sensors__EnabledSubsystem1_Init(B_EnabledSubsystem1_Sensors_a_T *localB,
  P_EnabledSubsystem1_Sensors_a_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S188>/In1' incorporates:
   *  Outport: '<S188>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Disable for enable system:
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 *    '<S196>/Enabled Subsystem1'
 */
void Senso_EnabledSubsystem1_Disable(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Start for enable system:
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 *    '<S196>/Enabled Subsystem1'
 */
void Sensors_EnabledSubsystem1_Start(DW_EnabledSubsystem1_Sensors__T *localDW)
{
  localDW->EnabledSubsystem1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S186>/Enabled Subsystem1'
 *    '<S191>/Enabled Subsystem1'
 *    '<S196>/Enabled Subsystem1'
 */
void Sensors_and_a_EnabledSubsystem1(RT_MODEL_Sensors_and_actuator_T * const
  Sensors_and_actuators_ball_a_M, boolean_T rtu_Enable, real_T rtu_In1,
  B_EnabledSubsystem1_Sensors_a_T *localB, DW_EnabledSubsystem1_Sensors__T
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S188>/Enable'
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
    /* SignalConversion generated from: '<S188>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem1' */
}

static void Sensors_and_ac_SystemCore_setup(dsp_simulink_MovingAverage_Se_T *obj)
{
  dsp_simulink_MovingAverage_Se_T *obj_0;
  dsp_simulink_MovingAverage_Se_T *obj_1;
  dsp_simulink_MovingAverage_Se_T *obj_2;
  dsp_simulink_MovingAverage_Se_T *obj_3;
  g_dsp_internal_ExponentialMov_T *iobj_0;
  g_dsp_internal_ExponentialMov_T *obj_4;
  g_dsp_internal_ExponentialMov_T *obj_5;
  g_dsp_internal_ExponentialMov_T *obj_6;
  real_T varargin_2;
  boolean_T flag;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  obj_1 = obj_0;
  obj_2 = obj_1;
  obj_3 = obj_2;
  flag = (obj_3->isInitialized == 1);
  if (flag) {
    obj_2->TunablePropsChanged = true;
  }

  obj_1->ForgettingFactor = 0.0;
  obj_0->TunablePropsChanged = false;
  obj_0 = obj;
  obj_0->NumChannels = 1;
  obj_0->FrameLength = 1;
  obj_1 = obj_0;
  iobj_0 = &obj_0->_pobj0;
  varargin_2 = obj_1->ForgettingFactor;
  iobj_0->isInitialized = 0;
  iobj_0->isInitialized = 0;
  obj_4 = iobj_0;
  obj_5 = obj_4;
  obj_6 = obj_5;
  flag = (obj_6->isInitialized == 1);
  if (flag) {
    obj_5->TunablePropsChanged = true;
  }

  obj_4->ForgettingFactor = varargin_2;
  obj_0->pStatistic = iobj_0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void Sensors_a_MovingAveragephi_Init(DW_MovingAveragephi_Sensors_a_T *localDW)
{
  dsp_simulink_MovingAverage_Se_T *obj;
  g_dsp_internal_ExponentialMov_T *obj_0;

  /* InitializeConditions for MATLABSystem: '<S15>/Moving Average phi' */
  obj = &localDW->obj;
  obj_0 = obj->pStatistic;
  if (obj_0->isInitialized == 1) {
    obj_0->pwN = 1.0;
    obj_0->pmN = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S15>/Moving Average phi' */
}

/* Start for atomic system: */
void Sensors__MovingAveragephi_Start(DW_MovingAveragephi_Sensors_a_T *localDW)
{
  dsp_simulink_MovingAverage_Se_T *b_obj;

  /* Start for MATLABSystem: '<S15>/Moving Average phi' */
  localDW->obj.matlabCodegenIsDeleted = true;
  b_obj = &localDW->obj;
  b_obj->isInitialized = 0;
  b_obj->NumChannels = -1;
  b_obj->FrameLength = -1;
  b_obj->matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Sensors_and_ac_SystemCore_setup(&localDW->obj);
}

/* Output and update for atomic system: */
void Sensors_and_ac_MovingAveragephi(real_T rtu_0, real_T rtu_1,
  B_MovingAveragephi_Sensors_an_T *localB, DW_MovingAveragephi_Sensors_a_T
  *localDW)
{
  dsp_simulink_MovingAverage_Se_T *obj;
  dsp_simulink_MovingAverage_Se_T *obj_0;
  dsp_simulink_MovingAverage_Se_T *obj_1;
  dsp_simulink_MovingAverage_Se_T *obj_2;
  g_dsp_internal_ExponentialMov_T *obj_3;
  g_dsp_internal_ExponentialMov_T *obj_4;
  g_dsp_internal_ExponentialMov_T *obj_5;
  g_dsp_internal_ExponentialMov_T *obj_6;
  real_T lambda;
  real_T pmLocal;
  real_T varargin_1;
  boolean_T b;
  boolean_T p;

  /* MATLABSystem: '<S15>/Moving Average phi' */
  obj = &localDW->obj;
  obj_0 = obj;
  varargin_1 = obj_0->ForgettingFactor;
  p = false;
  if (varargin_1 == rtu_1) {
    b = true;
  } else {
    b = rtIsNaN(varargin_1);
    if (b) {
      b = rtIsNaN(rtu_1);
      if (b) {
        b = true;
      }
    }
  }

  if (b) {
    p = true;
  }

  if (!p) {
    obj_1 = obj_0;
    obj_2 = obj_1;
    p = (obj_2->isInitialized == 1);
    if (p) {
      obj_1->TunablePropsChanged = true;
    }

    obj_0->ForgettingFactor = rtu_1;
  }

  obj_0 = obj;
  if (obj_0->TunablePropsChanged) {
    obj_0->TunablePropsChanged = false;
    obj_3 = obj_0->pStatistic;
    obj_4 = obj_3;
    p = (obj_4->isInitialized == 1);
    if (p) {
      obj_3->TunablePropsChanged = true;
    }

    obj_0->pStatistic->ForgettingFactor = obj_0->ForgettingFactor;
  }

  obj_3 = obj->pStatistic;
  if (obj_3->isInitialized != 1) {
    obj_4 = obj_3;
    obj_5 = obj_4;
    obj_5->isSetupComplete = false;
    obj_5->isInitialized = 1;
    obj_6 = obj_5;
    obj_6->pwN = 1.0;
    obj_6->pmN = 0.0;
    obj_6->plambda = obj_6->ForgettingFactor;
    obj_5->isSetupComplete = true;
    obj_5->TunablePropsChanged = false;
    obj_4->pwN = 1.0;
    obj_4->pmN = 0.0;
  }

  obj_4 = obj_3;
  if (obj_4->TunablePropsChanged) {
    obj_4->TunablePropsChanged = false;
    obj_4->plambda = obj_4->ForgettingFactor;
  }

  varargin_1 = obj_3->pwN;
  pmLocal = obj_3->pmN;
  lambda = obj_3->plambda;
  pmLocal = (1.0 - 1.0 / varargin_1) * pmLocal + 1.0 / varargin_1 * rtu_0;
  varargin_1 = lambda * varargin_1 + 1.0;
  obj_3->pwN = varargin_1;
  obj_3->pmN = pmLocal;

  /* MATLABSystem: '<S15>/Moving Average phi' */
  localB->MovingAveragephi = pmLocal;
}

/* Termination for atomic system: */
void Sensors_a_MovingAveragephi_Term(DW_MovingAveragephi_Sensors_a_T *localDW)
{
  dsp_simulink_MovingAverage_Se_T *obj;
  g_dsp_internal_ExponentialMov_T *obj_0;

  /* Terminate for MATLABSystem: '<S15>/Moving Average phi' */
  obj = &localDW->obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete) {
      obj_0 = obj->pStatistic;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }

      obj->NumChannels = -1;
      obj->FrameLength = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S15>/Moving Average phi' */
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      y = ceil(u1);
    } else {
      y = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != y)) {
      q = fabs(u0 / u1);
      if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model output function */
void Sensors_and_actuators_ball_and_plate_2022b_output(void)
{
  real_T lastTime;
  real_T u1;
  real_T u2;
  real_T *lastU;
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

    /* S-Function (rti_commonblock): '<S18>/S-Function1' incorporates:
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
    Sensors_and_actuators_ball_an_B.Add1_c = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[4] +
      Sensors_and_actuators_ball_an_B.Gain1);

    /* Sum: '<S1>/Sum1' incorporates:
     *  Constant: '<S1>/Constant4'
     */
    lastTime = Sensors_and_actuators_ball_an_P.center[1];

    /* Sum: '<S1>/Sum1' */
    Sensors_and_actuators_ball_an_B.Sum1 = (real_T)
      Sensors_and_actuators_ball_an_B.Add1_c - lastTime;

    /* Gain: '<S1>/Gain4' */
    lastTime = -Sensors_and_actuators_ball_an_P.a_y;

    /* Gain: '<S1>/Gain4' */
    Sensors_and_actuators_ball_an_B.Gain4 = lastTime *
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
    Sensors_and_actuators_ball_an_B.Add_c = (uint16_T)((uint32_T)
      Sensors_and_actuators_ball_an_B.SFunction1_o1_n[0] +
      Sensors_and_actuators_ball_an_B.Gain2);

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<S1>/Constant3'
     */
    lastTime = Sensors_and_actuators_ball_an_P.center[0];

    /* Sum: '<S1>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum = (real_T)
      Sensors_and_actuators_ball_an_B.Add_c - lastTime;

    /* Gain: '<S1>/Gain3' */
    lastTime = Sensors_and_actuators_ball_an_P.a_x;

    /* Gain: '<S1>/Gain3' */
    Sensors_and_actuators_ball_an_B.Gain3 = lastTime *
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

  /* Clock: '<S22>/Clock' */
  Sensors_and_actuators_ball_an_B.Clock =
    Sensors_and_actuators_ball_a_M->Timing.t[0];

  /* Sum: '<S22>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S22>/startTime'
   */
  Sensors_and_actuators_ball_an_B.Sum_f = Sensors_and_actuators_ball_an_B.Clock
    - (0.0);

  /* Math: '<S22>/Math Function' incorporates:
   *  Constant: '<S22>/Constant'
   */
  Sensors_and_actuators_ball_an_B.MathFunction = rt_remd_snf
    (Sensors_and_actuators_ball_an_B.Sum_f,
     Sensors_and_actuators_ball_an_P.Constant_Value_o);

  /* Lookup_n-D: '<S22>/Look-Up Table1' incorporates:
   *  Math: '<S22>/Math Function'
   */
  Sensors_and_actuators_ball_an_B.LookUpTable1 = look1_binlxpw
    (Sensors_and_actuators_ball_an_B.MathFunction,
     Sensors_and_actuators_ball_an_P.LookUpTable1_bp01Data,
     Sensors_and_actuators_ball_an_P.RepeatingSequence1_rep_seq_y, 8U);

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch_Threshold_m) {
    /* SignalConversion: '<S22>/Output' */
    Sensors_and_actuators_ball_an_B.Output =
      Sensors_and_actuators_ball_an_B.LookUpTable1;

    /* Switch: '<S2>/Switch' */
    Sensors_and_actuators_ball_an_B.Switch =
      Sensors_and_actuators_ball_an_B.Output;
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
  if ((rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
       Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) &&
      (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
       Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0)) {
    Sensors_and_actuators_ball_a_DW.RateTransition_Buffer =
      Sensors_and_actuators_ball_an_B.Ref_error_sum_x;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition' */
    Sensors_and_actuators_ball_an_B.RateTransition =
      Sensors_and_actuators_ball_a_DW.RateTransition_Buffer;

    /* Gain: '<S203>/LQR_K_xPos' */
    Sensors_and_actuators_ball_an_B.LQR_K_xPos =
      Sensors_and_actuators_ball_an_P.LQR_K_xPos_Gain *
      Sensors_and_actuators_ball_an_B.RateTransition;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Derivative: '<S2>/Derivative1' */
  if ((Sensors_and_actuators_ball_a_DW.TimeStampA >=
       Sensors_and_actuators_ball_a_M->Timing.t[0]) &&
      (Sensors_and_actuators_ball_a_DW.TimeStampB >=
       Sensors_and_actuators_ball_a_M->Timing.t[0])) {
    /* Derivative: '<S2>/Derivative1' */
    Sensors_and_actuators_ball_an_B.Derivative1 = 0.0;
  } else {
    lastTime = Sensors_and_actuators_ball_a_DW.TimeStampA;
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA;
    if (Sensors_and_actuators_ball_a_DW.TimeStampA <
        Sensors_and_actuators_ball_a_DW.TimeStampB) {
      if (Sensors_and_actuators_ball_a_DW.TimeStampB <
          Sensors_and_actuators_ball_a_M->Timing.t[0]) {
        lastTime = Sensors_and_actuators_ball_a_DW.TimeStampB;
        lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB;
      }
    } else if (Sensors_and_actuators_ball_a_DW.TimeStampA >=
               Sensors_and_actuators_ball_a_M->Timing.t[0]) {
      lastTime = Sensors_and_actuators_ball_a_DW.TimeStampB;
      lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB;
    }

    lastTime = Sensors_and_actuators_ball_a_M->Timing.t[0] - lastTime;

    /* Derivative: '<S2>/Derivative1' */
    Sensors_and_actuators_ball_an_B.Derivative1 =
      (Sensors_and_actuators_ball_an_B.Switch - *lastU) / lastTime;
  }

  /* End of Derivative: '<S2>/Derivative1' */

  /* Switch: '<S2>/Switch3' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch3_Threshold) {
    /* Switch: '<S2>/Switch3' */
    Sensors_and_actuators_ball_an_B.Switch3 =
      Sensors_and_actuators_ball_an_B.Derivative1;
  } else {
    /* Switch: '<S2>/Switch3' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    Sensors_and_actuators_ball_an_B.Switch3 =
      Sensors_and_actuators_ball_an_P.Constant1_Value_o;
  }

  /* End of Switch: '<S2>/Switch3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S1>/Memory' */
    Sensors_and_actuators_ball_an_B.Memory =
      Sensors_and_actuators_ball_a_DW.Memory_PreviousInput;

    /* Memory: '<S1>/Memory1' */
    Sensors_and_actuators_ball_an_B.Memory1 =
      Sensors_and_actuators_ball_a_DW.Memory1_PreviousInput;

    /* Outport: '<Root>/Xvel' incorporates:
     *  Constant: '<S1>/velocity_N'
     *  MATLAB Function: '<S1>/MATLAB Function'
     *  Outport: '<Root>/Xpos '
     */
    /* MATLAB Function 'Camera output/MATLAB Function': '<S20>:1' */
    /* '<S20>:1:2' */
    /* '<S20>:1:4' */
    Sensors_and_actuators_ball_an_Y.Xvel = (exp
      (-Sensors_and_actuators_ball_an_P.velocity_N_Value * 0.001) *
      Sensors_and_actuators_ball_an_B.Memory1 +
      Sensors_and_actuators_ball_an_P.velocity_N_Value *
      Sensors_and_actuators_ball_an_Y.Xpos) -
      Sensors_and_actuators_ball_an_P.velocity_N_Value *
      Sensors_and_actuators_ball_an_B.Memory;
  }

  /* Sum: '<Root>/Ref_error_sum_velX' incorporates:
   *  Outport: '<Root>/Xvel'
   */
  Sensors_and_actuators_ball_an_B.Ref_error_sum_velX =
    Sensors_and_actuators_ball_an_B.Switch3 -
    Sensors_and_actuators_ball_an_Y.Xvel;

  /* RateTransition: '<Root>/Rate Transition2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
        Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
      Sensors_and_actuators_ball_a_DW.RateTransition2_Buffer =
        Sensors_and_actuators_ball_an_B.Ref_error_sum_velX;
    }

    /* MATLAB Function: '<S16>/Integrator reset determination outer loop' incorporates:
     *  Constant: '<S16>/Outerloop_controller_status'
     *  Constant: '<S16>/reset_integrator_outerloop'
     */
    /* MATLAB Function 'xy_controller/Integrator reset determination outer loop': '<S202>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_outerloop_Valu == 1.0)
        || (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val ==
            0.0)) {
      /* '<S202>:1:3' */
      /* '<S202>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop = 1.0;
    } else {
      /* '<S202>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop = 0.0;
    }

    /* End of MATLAB Function: '<S16>/Integrator reset determination outer loop' */

    /* DiscreteIntegrator: '<S287>/Integrator' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState != 0)) {
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE =
        Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialCondit_j;
    }

    /* DiscreteIntegrator: '<S287>/Integrator' */
    Sensors_and_actuators_ball_an_B.Integrator =
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition2' */
    Sensors_and_actuators_ball_an_B.RateTransition2 =
      Sensors_and_actuators_ball_a_DW.RateTransition2_Buffer;

    /* Gain: '<S203>/LQR_K_xVel' */
    Sensors_and_actuators_ball_an_B.LQR_K_xVel =
      Sensors_and_actuators_ball_an_P.LQR_K_xVel_Gain *
      Sensors_and_actuators_ball_an_B.RateTransition2;

    /* Sum: '<S203>/Add' */
    Sensors_and_actuators_ball_an_B.Add =
      Sensors_and_actuators_ball_an_B.LQR_K_xPos +
      Sensors_and_actuators_ball_an_B.LQR_K_xVel;

    /* Saturate: '<S16>/Saturation1' */
    lastTime = Sensors_and_actuators_ball_an_B.Add;
    u1 = Sensors_and_actuators_ball_an_P.Saturation1_LowerSat;
    u2 = Sensors_and_actuators_ball_an_P.Saturation1_UpperSat;
    if (lastTime > u2) {
      /* Saturate: '<S16>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = u2;
    } else if (lastTime < u1) {
      /* Saturate: '<S16>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = u1;
    } else {
      /* Saturate: '<S16>/Saturation1' */
      Sensors_and_actuators_ball_an_B.Saturation1 = lastTime;
    }

    /* End of Saturate: '<S16>/Saturation1' */

    /* Product: '<S292>/PProd Out' incorporates:
     *  Constant: '<Root>/Outer_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_P_Value;

    /* Product: '<S281>/DProd Out' incorporates:
     *  Constant: '<Root>/Outer_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_D_Value;
  }

  /* End of RateTransition: '<Root>/Rate Transition2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscreteIntegrator: '<S282>/Filter' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Filter_PrevResetState != 0)) {
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE =
        Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialConditio;
    }

    /* DiscreteIntegrator: '<S282>/Filter' */
    Sensors_and_actuators_ball_an_B.Filter =
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE;

    /* Sum: '<S282>/SumD' */
    Sensors_and_actuators_ball_an_B.SumD =
      Sensors_and_actuators_ball_an_B.DProdOut -
      Sensors_and_actuators_ball_an_B.Filter;

    /* Product: '<S290>/NProd Out' incorporates:
     *  Constant: '<Root>/Outer_N'
     */
    Sensors_and_actuators_ball_an_B.NProdOut =
      Sensors_and_actuators_ball_an_B.SumD *
      Sensors_and_actuators_ball_an_P.Outer_N_Value;

    /* Sum: '<S296>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum_n =
      (Sensors_and_actuators_ball_an_B.PProdOut +
       Sensors_and_actuators_ball_an_B.Integrator) +
      Sensors_and_actuators_ball_an_B.NProdOut;

    /* Saturate: '<S294>/Saturation' */
    lastTime = Sensors_and_actuators_ball_an_B.Sum_n;
    u1 = Sensors_and_actuators_ball_an_P.PID_outer_theta_LowerSaturation;
    u2 = Sensors_and_actuators_ball_an_P.PID_outer_theta_UpperSaturation;
    if (lastTime > u2) {
      /* Saturate: '<S294>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = u2;
    } else if (lastTime < u1) {
      /* Saturate: '<S294>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = u1;
    } else {
      /* Saturate: '<S294>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation = lastTime;
    }

    /* End of Saturate: '<S294>/Saturation' */

    /* Switch: '<S16>/Outerloop_theta_switch' incorporates:
     *  Constant: '<S16>/Outerloop_controller_status'
     */
    if (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val >
        Sensors_and_actuators_ball_an_P.Outerloop_theta_switch_Threshol) {
      /* Switch: '<S16>/Switch' incorporates:
       *  Constant: '<S16>/switch_outerloop_controller'
       */
      if (Sensors_and_actuators_ball_an_P.switch_outerloop_controller_Val >=
          Sensors_and_actuators_ball_an_P.Switch_Threshold) {
        /* Switch: '<S16>/Switch' */
        Sensors_and_actuators_ball_an_B.Switch_j =
          Sensors_and_actuators_ball_an_B.Saturation1;
      } else {
        /* Switch: '<S16>/Switch' */
        Sensors_and_actuators_ball_an_B.Switch_j =
          Sensors_and_actuators_ball_an_B.Saturation;
      }

      /* End of Switch: '<S16>/Switch' */

      /* Switch: '<S16>/Outerloop_theta_switch' */
      Sensors_and_actuators_ball_an_B.Outerloop_theta_switch =
        Sensors_and_actuators_ball_an_B.Switch_j;
    } else {
      /* Switch: '<S16>/Outerloop_theta_switch' incorporates:
       *  Constant: '<S16>/0_ref_outerloop_constant'
       */
      Sensors_and_actuators_ball_an_B.Outerloop_theta_switch =
        Sensors_and_actuators_ball_an_P.u_ref_outerloop_constant_Value;
    }

    /* End of Switch: '<S16>/Outerloop_theta_switch' */

    /* Constant: '<S15>/forgettingFactor' */
    Sensors_and_ac_MovingAveragephi
      (Sensors_and_actuators_ball_an_B.Outerloop_theta_switch,
       Sensors_and_actuators_ball_an_P.forgettingFactor_Value,
       &Sensors_and_actuators_ball_an_B.MovingAveragetheta,
       &Sensors_and_actuators_ball_a_DW.MovingAveragetheta);

    /* Outport: '<Root>/Outerloop_theta_output' */
    Sensors_and_actuators_ball_an_Y.Outerloop_theta_output =
      Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi;
  }

  /* Clock: '<S23>/Clock' */
  Sensors_and_actuators_ball_an_B.Clock_f =
    Sensors_and_actuators_ball_a_M->Timing.t[0];

  /* Sum: '<S23>/Sum' incorporates:
   *  S-Function (sfun_tstart): '<S23>/startTime'
   */
  Sensors_and_actuators_ball_an_B.Sum_j =
    Sensors_and_actuators_ball_an_B.Clock_f - (0.0);

  /* Math: '<S23>/Math Function' incorporates:
   *  Constant: '<S23>/Constant'
   */
  Sensors_and_actuators_ball_an_B.MathFunction_m = rt_remd_snf
    (Sensors_and_actuators_ball_an_B.Sum_j,
     Sensors_and_actuators_ball_an_P.Constant_Value_o0);

  /* Lookup_n-D: '<S23>/Look-Up Table1' incorporates:
   *  Math: '<S23>/Math Function'
   */
  Sensors_and_actuators_ball_an_B.LookUpTable1_g = look1_binlxpw
    (Sensors_and_actuators_ball_an_B.MathFunction_m,
     Sensors_and_actuators_ball_an_P.LookUpTable1_bp01Data_f,
     Sensors_and_actuators_ball_an_P.RepeatingSequence4_rep_seq_y, 8U);

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch1_Threshold_p) {
    /* SignalConversion: '<S23>/Output' */
    Sensors_and_actuators_ball_an_B.Output_m =
      Sensors_and_actuators_ball_an_B.LookUpTable1_g;

    /* Switch: '<S2>/Switch1' */
    Sensors_and_actuators_ball_an_B.Switch1 =
      Sensors_and_actuators_ball_an_B.Output_m;
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
  if ((rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
       Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) &&
      (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
       Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0)) {
    Sensors_and_actuators_ball_a_DW.RateTransition1_Buffer =
      Sensors_and_actuators_ball_an_B.Ref_error_sum_y;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition1' */
    Sensors_and_actuators_ball_an_B.RateTransition1 =
      Sensors_and_actuators_ball_a_DW.RateTransition1_Buffer;

    /* Gain: '<S203>/LQR_K_yPos' */
    Sensors_and_actuators_ball_an_B.LQR_K_yPos =
      Sensors_and_actuators_ball_an_P.LQR_K_yPos_Gain *
      Sensors_and_actuators_ball_an_B.RateTransition1;
  }

  /* End of RateTransition: '<Root>/Rate Transition1' */

  /* Derivative: '<S2>/Derivative' */
  if ((Sensors_and_actuators_ball_a_DW.TimeStampA_i >=
       Sensors_and_actuators_ball_a_M->Timing.t[0]) &&
      (Sensors_and_actuators_ball_a_DW.TimeStampB_j >=
       Sensors_and_actuators_ball_a_M->Timing.t[0])) {
    /* Derivative: '<S2>/Derivative' */
    Sensors_and_actuators_ball_an_B.Derivative = 0.0;
  } else {
    lastTime = Sensors_and_actuators_ball_a_DW.TimeStampA_i;
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA_a;
    if (Sensors_and_actuators_ball_a_DW.TimeStampA_i <
        Sensors_and_actuators_ball_a_DW.TimeStampB_j) {
      if (Sensors_and_actuators_ball_a_DW.TimeStampB_j <
          Sensors_and_actuators_ball_a_M->Timing.t[0]) {
        lastTime = Sensors_and_actuators_ball_a_DW.TimeStampB_j;
        lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB_f;
      }
    } else if (Sensors_and_actuators_ball_a_DW.TimeStampA_i >=
               Sensors_and_actuators_ball_a_M->Timing.t[0]) {
      lastTime = Sensors_and_actuators_ball_a_DW.TimeStampB_j;
      lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB_f;
    }

    lastTime = Sensors_and_actuators_ball_a_M->Timing.t[0] - lastTime;

    /* Derivative: '<S2>/Derivative' */
    Sensors_and_actuators_ball_an_B.Derivative =
      (Sensors_and_actuators_ball_an_B.Switch1 - *lastU) / lastTime;
  }

  /* End of Derivative: '<S2>/Derivative' */

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/circle_reference_on'
   */
  if (Sensors_and_actuators_ball_an_P.circle_reference_on_Value >=
      Sensors_and_actuators_ball_an_P.Switch2_Threshold) {
    /* Switch: '<S2>/Switch2' */
    Sensors_and_actuators_ball_an_B.Switch2 =
      Sensors_and_actuators_ball_an_B.Derivative;
  } else {
    /* Switch: '<S2>/Switch2' incorporates:
     *  Constant: '<S2>/Constant'
     */
    Sensors_and_actuators_ball_an_B.Switch2 =
      Sensors_and_actuators_ball_an_P.Constant_Value_j;
  }

  /* End of Switch: '<S2>/Switch2' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S1>/Memory2' */
    Sensors_and_actuators_ball_an_B.Memory2 =
      Sensors_and_actuators_ball_a_DW.Memory2_PreviousInput;

    /* Memory: '<S1>/Memory3' */
    Sensors_and_actuators_ball_an_B.Memory3 =
      Sensors_and_actuators_ball_a_DW.Memory3_PreviousInput;

    /* Outport: '<Root>/Yvel' incorporates:
     *  Constant: '<S1>/velocity_N'
     *  MATLAB Function: '<S1>/MATLAB Function1'
     *  Outport: '<Root>/Ypos '
     */
    /* MATLAB Function 'Camera output/MATLAB Function1': '<S21>:1' */
    /* '<S21>:1:2' */
    /* '<S21>:1:5' */
    Sensors_and_actuators_ball_an_Y.Yvel = (exp
      (-Sensors_and_actuators_ball_an_P.velocity_N_Value * 0.001) *
      Sensors_and_actuators_ball_an_B.Memory3 +
      Sensors_and_actuators_ball_an_P.velocity_N_Value *
      Sensors_and_actuators_ball_an_Y.Ypos) -
      Sensors_and_actuators_ball_an_P.velocity_N_Value *
      Sensors_and_actuators_ball_an_B.Memory2;
  }

  /* Sum: '<Root>/Ref_error_sum_velY' incorporates:
   *  Outport: '<Root>/Yvel'
   */
  Sensors_and_actuators_ball_an_B.Ref_error_sum_velY =
    Sensors_and_actuators_ball_an_B.Switch2 -
    Sensors_and_actuators_ball_an_Y.Yvel;

  /* RateTransition: '<Root>/Rate Transition3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
        Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
      Sensors_and_actuators_ball_a_DW.RateTransition3_Buffer =
        Sensors_and_actuators_ball_an_B.Ref_error_sum_velY;
    }

    /* DiscreteIntegrator: '<S239>/Integrator' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i != 0)) {
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j =
        Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditio_d;
    }

    /* DiscreteIntegrator: '<S239>/Integrator' */
    Sensors_and_actuators_ball_an_B.Integrator_l =
      Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[2] == 0) {
    /* RateTransition: '<Root>/Rate Transition3' */
    Sensors_and_actuators_ball_an_B.RateTransition3 =
      Sensors_and_actuators_ball_a_DW.RateTransition3_Buffer;

    /* Gain: '<S203>/LQR_K_yVel' */
    Sensors_and_actuators_ball_an_B.LQR_K_yVel =
      Sensors_and_actuators_ball_an_P.LQR_K_yVel_Gain *
      Sensors_and_actuators_ball_an_B.RateTransition3;

    /* Sum: '<S203>/Add1' */
    Sensors_and_actuators_ball_an_B.Add1 =
      Sensors_and_actuators_ball_an_B.LQR_K_yPos +
      Sensors_and_actuators_ball_an_B.LQR_K_yVel;

    /* Saturate: '<S16>/Saturation' */
    lastTime = Sensors_and_actuators_ball_an_B.Add1;
    u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_o;
    u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_k;
    if (lastTime > u2) {
      /* Saturate: '<S16>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = u2;
    } else if (lastTime < u1) {
      /* Saturate: '<S16>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = u1;
    } else {
      /* Saturate: '<S16>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_k = lastTime;
    }

    /* End of Saturate: '<S16>/Saturation' */

    /* Product: '<S244>/PProd Out' incorporates:
     *  Constant: '<Root>/Outer_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_m =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_P_Value;

    /* Product: '<S233>/DProd Out' incorporates:
     *  Constant: '<Root>/Outer_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_p =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_D_Value;
  }

  /* End of RateTransition: '<Root>/Rate Transition3' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscreteIntegrator: '<S234>/Filter' */
    if ((Sensors_and_actuators_ball_an_B.Integrator_reset_mode_outerloop != 0.0)
        || (Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m != 0)) {
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e =
        Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditionF;
    }

    /* DiscreteIntegrator: '<S234>/Filter' */
    Sensors_and_actuators_ball_an_B.Filter_d =
      Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e;

    /* Sum: '<S234>/SumD' */
    Sensors_and_actuators_ball_an_B.SumD_b =
      Sensors_and_actuators_ball_an_B.DProdOut_p -
      Sensors_and_actuators_ball_an_B.Filter_d;

    /* Product: '<S242>/NProd Out' incorporates:
     *  Constant: '<Root>/Outer_N'
     */
    Sensors_and_actuators_ball_an_B.NProdOut_d =
      Sensors_and_actuators_ball_an_B.SumD_b *
      Sensors_and_actuators_ball_an_P.Outer_N_Value;

    /* Sum: '<S248>/Sum' */
    Sensors_and_actuators_ball_an_B.Sum_nf =
      (Sensors_and_actuators_ball_an_B.PProdOut_m +
       Sensors_and_actuators_ball_an_B.Integrator_l) +
      Sensors_and_actuators_ball_an_B.NProdOut_d;

    /* Saturate: '<S246>/Saturation' */
    lastTime = Sensors_and_actuators_ball_an_B.Sum_nf;
    u1 = Sensors_and_actuators_ball_an_P.PID_outer_phi_LowerSaturationLi;
    u2 = Sensors_and_actuators_ball_an_P.PID_outer_phi_UpperSaturationLi;
    if (lastTime > u2) {
      /* Saturate: '<S246>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = u2;
    } else if (lastTime < u1) {
      /* Saturate: '<S246>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = u1;
    } else {
      /* Saturate: '<S246>/Saturation' */
      Sensors_and_actuators_ball_an_B.Saturation_o = lastTime;
    }

    /* End of Saturate: '<S246>/Saturation' */

    /* Switch: '<S16>/Outerloop_phi_switch' incorporates:
     *  Constant: '<S16>/Outerloop_controller_status'
     */
    if (Sensors_and_actuators_ball_an_P.Outerloop_controller_status_Val >
        Sensors_and_actuators_ball_an_P.Outerloop_phi_switch_Threshold) {
      /* Switch: '<S16>/Switch1' incorporates:
       *  Constant: '<S16>/switch_outerloop_controller'
       */
      if (Sensors_and_actuators_ball_an_P.switch_outerloop_controller_Val >
          Sensors_and_actuators_ball_an_P.Switch1_Threshold) {
        /* Switch: '<S16>/Switch1' */
        Sensors_and_actuators_ball_an_B.Switch1_c =
          Sensors_and_actuators_ball_an_B.Saturation_k;
      } else {
        /* Switch: '<S16>/Switch1' */
        Sensors_and_actuators_ball_an_B.Switch1_c =
          Sensors_and_actuators_ball_an_B.Saturation_o;
      }

      /* End of Switch: '<S16>/Switch1' */

      /* Switch: '<S16>/Outerloop_phi_switch' */
      Sensors_and_actuators_ball_an_B.Outerloop_phi_switch =
        Sensors_and_actuators_ball_an_B.Switch1_c;
    } else {
      /* Switch: '<S16>/Outerloop_phi_switch' incorporates:
       *  Constant: '<S16>/0_ref_outerloop_constant'
       */
      Sensors_and_actuators_ball_an_B.Outerloop_phi_switch =
        Sensors_and_actuators_ball_an_P.u_ref_outerloop_constant_Value;
    }

    /* End of Switch: '<S16>/Outerloop_phi_switch' */

    /* Constant: '<S15>/forgettingFactor' */
    Sensors_and_ac_MovingAveragephi
      (Sensors_and_actuators_ball_an_B.Outerloop_phi_switch,
       Sensors_and_actuators_ball_an_P.forgettingFactor_Value,
       &Sensors_and_actuators_ball_an_B.MovingAveragephi,
       &Sensors_and_actuators_ball_a_DW.MovingAveragephi);

    /* Outport: '<Root>/Outerloop_phi_output' */
    Sensors_and_actuators_ball_an_Y.Outerloop_phi_output =
      Sensors_and_actuators_ball_an_B.MovingAveragephi.MovingAveragephi;

    /* S-Function (rti_commonblock): '<S17>/S-Function1' */
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

    /* S-Function (rti_commonblock): '<S19>/S-Function1' */
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

    /* MATLAB Function: '<S4>/Inverse Kinematics Calculation Function' */
    /* MATLAB Function 'Inverse Kinematics/Inverse Kinematics Calculation Function': '<S27>:1' */
    /* '<S27>:1:2' */
    /* '<S27>:1:3' */
    Sensors_and_actuators_ball_an_B.z1 = -0.1732050807568877 * sin
      (Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi);

    /* '<S27>:1:4' */
    Sensors_and_actuators_ball_an_B.z2 = 0.086602540378443851 * sin
      (Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi) -
      0.15 * cos
      (Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi) *
      sin(Sensors_and_actuators_ball_an_B.MovingAveragephi.MovingAveragephi);

    /* '<S27>:1:5' */
    Sensors_and_actuators_ball_an_B.z3 = 0.15 * cos
      (Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi) *
      sin(Sensors_and_actuators_ball_an_B.MovingAveragephi.MovingAveragephi) +
      0.086602540378443851 * sin
      (Sensors_and_actuators_ball_an_B.MovingAveragetheta.MovingAveragephi);

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
     *  TriggerPort: '<S185>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_1' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__o,
                           (Sensors_and_actuators_ball_an_P.Init_1_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S185>/S-Function1' incorporates:
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

    /* S-Function (rti_commonblock): '<S184>/S-Function1' */
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

    /* Abs: '<S186>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_c = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_n);

    /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_1' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_1_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem' */

    /* RelationalOperator: '<S186>/Relational Operator1' incorporates:
     *  Constant: '<S186>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_b =
      (Sensors_and_actuators_ball_an_B.Abs_c <=
       Sensors_and_actuators_ball_an_P.Const_Value);
  }

  /* TransferFcn: '<S186>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_f =
    Sensors_and_actuators_ball_an_P.TransferFcn_C *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;

  /* RelationalOperator: '<S186>/Relational Operator' incorporates:
   *  Constant: '<S186>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_c =
    (Sensors_and_actuators_ball_an_P.Const1_Value >=
     Sensors_and_actuators_ball_an_B.TransferFcn_f);

  /* Logic: '<S186>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_1'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_c =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_b &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_c &&
     (Sensors_and_actuators_ball_an_P.Init_1_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_c,
    Sensors_and_actuators_ball_an_B.Inc2Pos_g,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Outputs for SubSystem: '<S186>/Enabled Subsystem1' */
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

    /* Product: '<S55>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_b =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S5>/Integrator reset determination1' incorporates:
     *  Constant: '<S5>/Actuator_controller_status_1'
     *  Constant: '<S5>/reset_integrator_1'
     */
    /* MATLAB Function 'Motor1/Integrator reset determination1': '<S29>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_1_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_1_Va == 0.0))
    {
      /* '<S29>:1:3' */
      /* '<S29>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 = 1.0;
    } else {
      /* '<S29>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_1 = 0.0;
    }

    /* End of MATLAB Function: '<S5>/Integrator reset determination1' */
  }

  /* Integrator: '<S56>/Filter' */
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

  /* Integrator: '<S56>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_b =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE;

  /* Sum: '<S56>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_c =
    Sensors_and_actuators_ball_an_B.DProdOut_b -
    Sensors_and_actuators_ball_an_B.Filter_b;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S58>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S61>/Integrator' */
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

  /* Integrator: '<S61>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_m =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE;

  /* Product: '<S64>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_e =
    Sensors_and_actuators_ball_an_B.SumD_c *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S66>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_j =
      Sensors_and_actuators_ball_an_B.Sum1_j *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S70>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_k =
    (Sensors_and_actuators_ball_an_B.PProdOut_j +
     Sensors_and_actuators_ball_an_B.Integrator_m) +
    Sensors_and_actuators_ball_an_B.NProdOut_e;

  /* Saturate: '<S68>/Saturation' */
  lastTime = Sensors_and_actuators_ball_an_B.Sum_k;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_1_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_1_UpperSaturationL;
  if (lastTime > u2) {
    /* Saturate: '<S68>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S68>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = u1;
  } else {
    /* Saturate: '<S68>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_m = lastTime;
  }

  /* End of Saturate: '<S68>/Saturation' */

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
     *  TriggerPort: '<S190>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/Init_2' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig__n,
                           (Sensors_and_actuators_ball_an_P.Init_2_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S190>/S-Function1' incorporates:
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

    /* S-Function (rti_commonblock): '<S189>/S-Function1' */
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

    /* Abs: '<S191>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs_l = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2_p);

    /* Outputs for Enabled SubSystem: '<S191>/Enabled Subsystem' */
    /* Constant: '<Root>/Init_2' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.Init_2_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

    /* End of Outputs for SubSystem: '<S191>/Enabled Subsystem' */

    /* RelationalOperator: '<S191>/Relational Operator1' incorporates:
     *  Constant: '<S191>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1_p =
      (Sensors_and_actuators_ball_an_B.Abs_l <=
       Sensors_and_actuators_ball_an_P.Const_Value_d);
  }

  /* TransferFcn: '<S191>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn_d =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_j *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;

  /* RelationalOperator: '<S191>/Relational Operator' incorporates:
   *  Constant: '<S191>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator_n =
    (Sensors_and_actuators_ball_an_P.Const1_Value_k >=
     Sensors_and_actuators_ball_an_B.TransferFcn_d);

  /* Logic: '<S191>/Logical Operator2' incorporates:
   *  Constant: '<Root>/Init_2'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2_k =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1_p &&
     Sensors_and_actuators_ball_an_B.RelationalOperator_n &&
     (Sensors_and_actuators_ball_an_P.Init_2_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2_k,
    Sensors_and_actuators_ball_an_B.Inc2Pos_i,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Outputs for SubSystem: '<S191>/Enabled Subsystem1' */
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

    /* Product: '<S105>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_pg =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S6>/Integrator reset determination' incorporates:
     *  Constant: '<S6>/Actuator_controller_status_2'
     *  Constant: '<S6>/reset_integrator_2'
     */
    /* MATLAB Function 'Motor2/Integrator reset determination': '<S79>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_2_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_2_Va == 0.0))
    {
      /* '<S79>:1:3' */
      /* '<S79>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 = 1.0;
    } else {
      /* '<S79>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_2 = 0.0;
    }

    /* End of MATLAB Function: '<S6>/Integrator reset determination' */
  }

  /* Integrator: '<S106>/Filter' */
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

  /* Integrator: '<S106>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_a =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_j;

  /* Sum: '<S106>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_k =
    Sensors_and_actuators_ball_an_B.DProdOut_pg -
    Sensors_and_actuators_ball_an_B.Filter_a;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S108>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_g =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S111>/Integrator' */
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

  /* Integrator: '<S111>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_a =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b;

  /* Product: '<S114>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_m =
    Sensors_and_actuators_ball_an_B.SumD_k *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S116>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_o =
      Sensors_and_actuators_ball_an_B.Sum2 *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S120>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_o =
    (Sensors_and_actuators_ball_an_B.PProdOut_o +
     Sensors_and_actuators_ball_an_B.Integrator_a) +
    Sensors_and_actuators_ball_an_B.NProdOut_m;

  /* Saturate: '<S118>/Saturation' */
  lastTime = Sensors_and_actuators_ball_an_B.Sum_o;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_2_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_2_UpperSaturationL;
  if (lastTime > u2) {
    /* Saturate: '<S118>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S118>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = u1;
  } else {
    /* Saturate: '<S118>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_l = lastTime;
  }

  /* End of Saturate: '<S118>/Saturation' */

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
     *  TriggerPort: '<S195>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Sensors_and_actuators_ball_a_M->solverInfo)) {
      /* Constant: '<Root>/init_3' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &Sensors_and_actuators_b_PrevZCX.EMC_ENCODER_POS_SET_BL1_Trig_ZC,
                           (Sensors_and_actuators_ball_an_P.init_3_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S195>/S-Function1' incorporates:
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

    /* S-Function (rti_commonblock): '<S194>/S-Function1' */
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

    /* Abs: '<S196>/Abs' */
    Sensors_and_actuators_ball_an_B.Abs = fabs
      (Sensors_and_actuators_ball_an_B.SFunction1_o2);

    /* Outputs for Enabled SubSystem: '<S196>/Enabled Subsystem' */
    /* Constant: '<Root>/init_3' */
    Sensors_and_ac_EnabledSubsystem(Sensors_and_actuators_ball_a_M,
      Sensors_and_actuators_ball_an_P.init_3_Value,
      &Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c,
      &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

    /* End of Outputs for SubSystem: '<S196>/Enabled Subsystem' */

    /* RelationalOperator: '<S196>/Relational Operator1' incorporates:
     *  Constant: '<S196>/Const'
     */
    Sensors_and_actuators_ball_an_B.RelationalOperator1 =
      (Sensors_and_actuators_ball_an_B.Abs <=
       Sensors_and_actuators_ball_an_P.Const_Value_i);
  }

  /* TransferFcn: '<S196>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_B.TransferFcn =
    Sensors_and_actuators_ball_an_P.TransferFcn_C_m *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;

  /* RelationalOperator: '<S196>/Relational Operator' incorporates:
   *  Constant: '<S196>/Const1'
   */
  Sensors_and_actuators_ball_an_B.RelationalOperator =
    (Sensors_and_actuators_ball_an_P.Const1_Value_n >=
     Sensors_and_actuators_ball_an_B.TransferFcn);

  /* Logic: '<S196>/Logical Operator2' incorporates:
   *  Constant: '<Root>/init_3'
   */
  Sensors_and_actuators_ball_an_B.LogicalOperator2 =
    (Sensors_and_actuators_ball_an_B.RelationalOperator1 &&
     Sensors_and_actuators_ball_an_B.RelationalOperator &&
     (Sensors_and_actuators_ball_an_P.init_3_Value != 0.0));

  /* Outputs for Enabled SubSystem: '<S196>/Enabled Subsystem1' */
  Sensors_and_a_EnabledSubsystem1(Sensors_and_actuators_ball_a_M,
    Sensors_and_actuators_ball_an_B.LogicalOperator2,
    Sensors_and_actuators_ball_an_B.Inc2Pos,
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Outputs for SubSystem: '<S196>/Enabled Subsystem1' */
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

    /* Product: '<S155>/DProd Out' incorporates:
     *  Constant: '<Root>/Controller_D'
     */
    Sensors_and_actuators_ball_an_B.DProdOut_k =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_D_Value;

    /* MATLAB Function: '<S7>/Integrator reset determination1' incorporates:
     *  Constant: '<S7>/Actuator_controller_status_3'
     *  Constant: '<S7>/reset_integrator_3'
     */
    /* MATLAB Function 'Motor3/Integrator reset determination1': '<S129>:1' */
    if ((Sensors_and_actuators_ball_an_P.reset_integrator_3_Value == 1.0) ||
        (Sensors_and_actuators_ball_an_P.Actuator_controller_status_3_Va == 0.0))
    {
      /* '<S129>:1:3' */
      /* '<S129>:1:4' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 = 1.0;
    } else {
      /* '<S129>:1:8' */
      Sensors_and_actuators_ball_an_B.Integrator_reset_mode_3 = 0.0;
    }

    /* End of MATLAB Function: '<S7>/Integrator reset determination1' */
  }

  /* Integrator: '<S156>/Filter' */
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

  /* Integrator: '<S156>/Filter' */
  Sensors_and_actuators_ball_an_B.Filter_o =
    Sensors_and_actuators_ball_an_X.Filter_CSTATE_a;

  /* Sum: '<S156>/SumD' */
  Sensors_and_actuators_ball_an_B.SumD_e =
    Sensors_and_actuators_ball_an_B.DProdOut_k -
    Sensors_and_actuators_ball_an_B.Filter_o;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S158>/IProd Out' incorporates:
     *  Constant: '<Root>/Controller_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_d =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_I_Value;
  }

  /* Integrator: '<S161>/Integrator' */
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

  /* Integrator: '<S161>/Integrator' */
  Sensors_and_actuators_ball_an_B.Integrator_d =
    Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k;

  /* Product: '<S164>/NProd Out' incorporates:
   *  Constant: '<Root>/Controller_N'
   */
  Sensors_and_actuators_ball_an_B.NProdOut_g =
    Sensors_and_actuators_ball_an_B.SumD_e *
    Sensors_and_actuators_ball_an_P.Controller_N_Value;
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S166>/PProd Out' incorporates:
     *  Constant: '<Root>/Controller_P'
     */
    Sensors_and_actuators_ball_an_B.PProdOut_k =
      Sensors_and_actuators_ball_an_B.Sum3 *
      Sensors_and_actuators_ball_an_P.Controller_P_Value;
  }

  /* Sum: '<S170>/Sum' */
  Sensors_and_actuators_ball_an_B.Sum_a =
    (Sensors_and_actuators_ball_an_B.PProdOut_k +
     Sensors_and_actuators_ball_an_B.Integrator_d) +
    Sensors_and_actuators_ball_an_B.NProdOut_g;

  /* Saturate: '<S168>/Saturation' */
  lastTime = Sensors_and_actuators_ball_an_B.Sum_a;
  u1 = Sensors_and_actuators_ball_an_P.Actuator_PID_3_LowerSaturationL;
  u2 = Sensors_and_actuators_ball_an_P.Actuator_PID_3_UpperSaturationL;
  if (lastTime > u2) {
    /* Saturate: '<S168>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S168>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = u1;
  } else {
    /* Saturate: '<S168>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_f = lastTime;
  }

  /* End of Saturate: '<S168>/Saturation' */

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
  lastTime = Sensors_and_actuators_ball_an_B.CloseLoop_disable_1;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat;
  if (lastTime > u2) {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = u1;
  } else {
    /* Saturate: '<S8>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_e = lastTime;
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
    /* S-Function (rti_commonblock): '<S178>/S-Function1' */
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
     &Sensors_and_actuators_ball_an_B.sf_MATLABFunction_n);

  /* End of Outputs for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Outputs for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Saturate: '<S9>/Saturation' */
  lastTime = Sensors_and_actuators_ball_an_B.CloseLoop_disable_2;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_a;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_g;
  if (lastTime > u2) {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = u1;
  } else {
    /* Saturate: '<S9>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_li = lastTime;
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
    /* S-Function (rti_commonblock): '<S180>/S-Function1' */
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
  lastTime = Sensors_and_actuators_ball_an_B.CloseLoop_disable_3;
  u1 = Sensors_and_actuators_ball_an_P.Saturation_LowerSat_m;
  u2 = Sensors_and_actuators_ball_an_P.Saturation_UpperSat_j;
  if (lastTime > u2) {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u2;
  } else if (lastTime < u1) {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = u1;
  } else {
    /* Saturate: '<S10>/Saturation' */
    Sensors_and_actuators_ball_an_B.Saturation_mt = lastTime;
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
    /* S-Function (rti_commonblock): '<S182>/S-Function1' */
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
    /* Product: '<S236>/IProd Out' incorporates:
     *  Constant: '<Root>/Outer_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_i =
      Sensors_and_actuators_ball_an_B.RateTransition1 *
      Sensors_and_actuators_ball_an_P.Outer_I_Value;

    /* Product: '<S284>/IProd Out' incorporates:
     *  Constant: '<Root>/Outer_I'
     */
    Sensors_and_actuators_ball_an_B.IProdOut_o =
      Sensors_and_actuators_ball_an_B.RateTransition *
      Sensors_and_actuators_ball_an_P.Outer_I_Value;
  }

  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLAB Function: '<S16>/phi_saturation_check' */
    /* MATLAB Function 'xy_controller/phi_saturation_check': '<S206>:1' */
    if (fabs(Sensors_and_actuators_ball_an_B.Outerloop_phi_switch) >=
        0.087266462599716474) {
      /* '<S206>:1:2' */
      /* '<S206>:1:3' */
      Sensors_and_actuators_ball_an_B.phi_saturation_reached_c = true;
    } else {
      /* '<S206>:1:5' */
      Sensors_and_actuators_ball_an_B.phi_saturation_reached_c = false;
    }

    /* End of MATLAB Function: '<S16>/phi_saturation_check' */

    /* MATLAB Function: '<S16>/theta_saturation_check' */
    /* MATLAB Function 'xy_controller/theta_saturation_check': '<S207>:1' */
    if (fabs(Sensors_and_actuators_ball_an_B.Outerloop_theta_switch) >=
        0.087266462599716474) {
      /* '<S207>:1:2' */
      /* '<S207>:1:3' */
      Sensors_and_actuators_ball_an_B.theta_saturation_reached_n = true;
    } else {
      /* '<S207>:1:5' */
      Sensors_and_actuators_ball_an_B.theta_saturation_reached_n = false;
    }

    /* End of MATLAB Function: '<S16>/theta_saturation_check' */

    /* DataTypeConversion: '<S3>/actuator_1_RefOutOfBounds' */
    Sensors_and_actuators_ball_an_B.actuator_1_RefOutOfBounds =
      Sensors_and_actuators_ball_an_B.sf_BoundsFunction1.outOfBounds;

    /* DataTypeConversion: '<S3>/actuator_2_RefOutOfBounds' */
    Sensors_and_actuators_ball_an_B.actuator_2_RefOutOfBounds =
      Sensors_and_actuators_ball_an_B.sf_BoundsFunction2.outOfBounds;
  }

  /* DataTypeConversion: '<S3>/actuator_1_SaturationReached' */
  Sensors_and_actuators_ball_an_B.actuator_1_SaturationReached =
    Sensors_and_actuators_ball_an_B.sf_MATLABFunction_n.saturation;

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
  real_T *lastU;

  /* Update for Derivative: '<S2>/Derivative1' */
  if (Sensors_and_actuators_ball_a_DW.TimeStampA == (rtInf)) {
    Sensors_and_actuators_ball_a_DW.TimeStampA =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA;
  } else if (Sensors_and_actuators_ball_a_DW.TimeStampB == (rtInf)) {
    Sensors_and_actuators_ball_a_DW.TimeStampB =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB;
  } else if (Sensors_and_actuators_ball_a_DW.TimeStampA <
             Sensors_and_actuators_ball_a_DW.TimeStampB) {
    Sensors_and_actuators_ball_a_DW.TimeStampA =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA;
  } else {
    Sensors_and_actuators_ball_a_DW.TimeStampB =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB;
  }

  *lastU = Sensors_and_actuators_ball_an_B.Switch;

  /* End of Update for Derivative: '<S2>/Derivative1' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S1>/Memory' incorporates:
     *  Outport: '<Root>/Xpos '
     */
    Sensors_and_actuators_ball_a_DW.Memory_PreviousInput =
      Sensors_and_actuators_ball_an_Y.Xpos;

    /* Update for Memory: '<S1>/Memory1' incorporates:
     *  Outport: '<Root>/Xvel'
     */
    Sensors_and_actuators_ball_a_DW.Memory1_PreviousInput =
      Sensors_and_actuators_ball_an_Y.Xvel;

    /* Update for DiscreteIntegrator: '<S287>/Integrator' */
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

    /* End of Update for DiscreteIntegrator: '<S287>/Integrator' */

    /* Update for DiscreteIntegrator: '<S282>/Filter' */
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

    /* End of Update for DiscreteIntegrator: '<S282>/Filter' */
  }

  /* Update for Derivative: '<S2>/Derivative' */
  if (Sensors_and_actuators_ball_a_DW.TimeStampA_i == (rtInf)) {
    Sensors_and_actuators_ball_a_DW.TimeStampA_i =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA_a;
  } else if (Sensors_and_actuators_ball_a_DW.TimeStampB_j == (rtInf)) {
    Sensors_and_actuators_ball_a_DW.TimeStampB_j =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB_f;
  } else if (Sensors_and_actuators_ball_a_DW.TimeStampA_i <
             Sensors_and_actuators_ball_a_DW.TimeStampB_j) {
    Sensors_and_actuators_ball_a_DW.TimeStampA_i =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeA_a;
  } else {
    Sensors_and_actuators_ball_a_DW.TimeStampB_j =
      Sensors_and_actuators_ball_a_M->Timing.t[0];
    lastU = &Sensors_and_actuators_ball_a_DW.LastUAtTimeB_f;
  }

  *lastU = Sensors_and_actuators_ball_an_B.Switch1;

  /* End of Update for Derivative: '<S2>/Derivative' */
  if (rtmIsMajorTimeStep(Sensors_and_actuators_ball_a_M) &&
      Sensors_and_actuators_ball_a_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S1>/Memory2' incorporates:
     *  Outport: '<Root>/Ypos '
     */
    Sensors_and_actuators_ball_a_DW.Memory2_PreviousInput =
      Sensors_and_actuators_ball_an_Y.Ypos;

    /* Update for Memory: '<S1>/Memory3' incorporates:
     *  Outport: '<Root>/Yvel'
     */
    Sensors_and_actuators_ball_a_DW.Memory3_PreviousInput =
      Sensors_and_actuators_ball_an_Y.Yvel;

    /* Update for DiscreteIntegrator: '<S239>/Integrator' */
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

    /* End of Update for DiscreteIntegrator: '<S239>/Integrator' */

    /* Update for DiscreteIntegrator: '<S234>/Filter' */
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

    /* End of Update for DiscreteIntegrator: '<S234>/Filter' */
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
  /* Derivatives for TransferFcn: '<S186>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_b = Sensors_and_actuators_ball_an_P.TransferFcn_A *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b;
  _rtXdot->TransferFcn_CSTATE_b +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement1' */

  /* Derivatives for Integrator: '<S56>/Filter' incorporates:
   *  Integrator: '<S61>/Integrator'
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

  /* End of Derivatives for Integrator: '<S56>/Filter' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Derivatives for TransferFcn: '<S191>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_k =
    Sensors_and_actuators_ball_an_P.TransferFcn_A_b *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k;
  _rtXdot->TransferFcn_CSTATE_k +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_h.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement2' */

  /* Derivatives for Integrator: '<S106>/Filter' incorporates:
   *  Integrator: '<S111>/Integrator'
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

  /* End of Derivatives for Integrator: '<S106>/Filter' */

  /* Derivatives for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Derivatives for TransferFcn: '<S196>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = Sensors_and_actuators_ball_an_P.TransferFcn_A_p *
    Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE +=
    Sensors_and_actuators_ball_an_B.EnabledSubsystem_c.OutportBufferForOut1;

  /* End of Derivatives for SubSystem: '<Root>/Position Measurement3' */

  /* Derivatives for Integrator: '<S156>/Filter' incorporates:
   *  Integrator: '<S161>/Integrator'
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

  /* End of Derivatives for Integrator: '<S156>/Filter' */
}

/* Model initialize function */
void Sensors_and_actuators_ball_and_plate_2022b_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

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

  /* Constant: '<S15>/forgettingFactor' */
  Sensors__MovingAveragephi_Start
    (&Sensors_and_actuators_ball_a_DW.MovingAveragetheta);
  Sensors__MovingAveragephi_Start
    (&Sensors_and_actuators_ball_a_DW.MovingAveragephi);

  /* Start for Enabled SubSystem: '<S186>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S186>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1);

  /* End of Start for SubSystem: '<S186>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement1' */

  /* Start for Enabled SubSystem: '<S191>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h);

  /* End of Start for SubSystem: '<S191>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m);

  /* End of Start for SubSystem: '<S191>/Enabled Subsystem1' */
  /* End of Start for SubSystem: '<Root>/Position Measurement2' */

  /* Start for Enabled SubSystem: '<S196>/Enabled Subsystem' */
  Sensors__EnabledSubsystem_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c);

  /* End of Start for SubSystem: '<S196>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S196>/Enabled Subsystem1' */
  Sensors_EnabledSubsystem1_Start
    (&Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j);

  /* End of Start for SubSystem: '<S196>/Enabled Subsystem1' */
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

  /* InitializeConditions for Derivative: '<S2>/Derivative1' */
  Sensors_and_actuators_ball_a_DW.TimeStampA = (rtInf);
  Sensors_and_actuators_ball_a_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Memory: '<S1>/Memory' */
  Sensors_and_actuators_ball_a_DW.Memory_PreviousInput =
    Sensors_and_actuators_ball_an_P.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S1>/Memory1' */
  Sensors_and_actuators_ball_a_DW.Memory1_PreviousInput =
    Sensors_and_actuators_ball_an_P.Memory1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S287>/Integrator' */
  Sensors_and_actuators_ball_a_DW.Integrator_DSTATE =
    Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialCondit_j;
  Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S282>/Filter' */
  Sensors_and_actuators_ball_a_DW.Filter_DSTATE =
    Sensors_and_actuators_ball_an_P.PID_outer_theta_InitialConditio;
  Sensors_and_actuators_ball_a_DW.Filter_PrevResetState = 0;

  /* InitializeConditions for Derivative: '<S2>/Derivative' */
  Sensors_and_actuators_ball_a_DW.TimeStampA_i = (rtInf);
  Sensors_and_actuators_ball_a_DW.TimeStampB_j = (rtInf);

  /* InitializeConditions for Memory: '<S1>/Memory2' */
  Sensors_and_actuators_ball_a_DW.Memory2_PreviousInput =
    Sensors_and_actuators_ball_an_P.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S1>/Memory3' */
  Sensors_and_actuators_ball_a_DW.Memory3_PreviousInput =
    Sensors_and_actuators_ball_an_P.Memory3_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S239>/Integrator' */
  Sensors_and_actuators_ball_a_DW.Integrator_DSTATE_j =
    Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditio_d;
  Sensors_and_actuators_ball_a_DW.Integrator_PrevResetState_i = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S234>/Filter' */
  Sensors_and_actuators_ball_a_DW.Filter_DSTATE_e =
    Sensors_and_actuators_ball_an_P.PID_outer_phi_InitialConditionF;
  Sensors_and_actuators_ball_a_DW.Filter_PrevResetState_m = 0;

  /* InitializeConditions for Integrator: '<S56>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE =
    Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialCondition;

  /* InitializeConditions for Integrator: '<S61>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE =
    Sensors_and_actuators_ball_an_P.Actuator_PID_1_InitialConditi_c;

  /* InitializeConditions for Integrator: '<S106>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_j =
    Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialCondition;

  /* InitializeConditions for Integrator: '<S111>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_b =
    Sensors_and_actuators_ball_an_P.Actuator_PID_2_InitialConditi_j;

  /* InitializeConditions for Integrator: '<S156>/Filter' */
  Sensors_and_actuators_ball_an_X.Filter_CSTATE_a =
    Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialCondition;

  /* InitializeConditions for Integrator: '<S161>/Integrator' */
  Sensors_and_actuators_ball_an_X.Integrator_CSTATE_k =
    Sensors_and_actuators_ball_an_P.Actuator_PID_3_InitialConditi_o;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement1' */
  /* InitializeConditions for TransferFcn: '<S186>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_b = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S186>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S186>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S186>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1);

  /* End of SystemInitialize for SubSystem: '<S186>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* InitializeConditions for TransferFcn: '<S191>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE_k = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S191>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_h,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S191>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S191>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_m);

  /* End of SystemInitialize for SubSystem: '<S191>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement2' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* InitializeConditions for TransferFcn: '<S196>/Transfer Fcn' */
  Sensors_and_actuators_ball_an_X.TransferFcn_CSTATE = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S196>/Enabled Subsystem' */
  Sensors_a_EnabledSubsystem_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem_c,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c);

  /* End of SystemInitialize for SubSystem: '<S196>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S196>/Enabled Subsystem1' */
  Sensors__EnabledSubsystem1_Init
    (&Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j,
     &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_j);

  /* End of SystemInitialize for SubSystem: '<S196>/Enabled Subsystem1' */
  /* End of SystemInitialize for SubSystem: '<Root>/Position Measurement3' */
  Sensors_a_MovingAveragephi_Init
    (&Sensors_and_actuators_ball_a_DW.MovingAveragetheta);
  Sensors_a_MovingAveragephi_Init
    (&Sensors_and_actuators_ball_a_DW.MovingAveragephi);
}

/* Model terminate function */
void Sensors_and_actuators_ball_and_plate_2022b_terminate(void)
{
  Sensors_a_MovingAveragephi_Term
    (&Sensors_and_actuators_ball_a_DW.MovingAveragetheta);
  Sensors_a_MovingAveragephi_Term
    (&Sensors_and_actuators_ball_a_DW.MovingAveragephi);

  /* Terminate for S-Function (rti_commonblock): '<S19>/S-Function1' */
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
  /* Terminate for S-Function (rti_commonblock): '<S185>/S-Function1' incorporates:
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

  /* Terminate for S-Function (rti_commonblock): '<S184>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 1 - Port: 1 - Channel: 1 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_1_DioCl_2_Port_1_Ch1);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement1' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement2' */
  /* Terminate for Triggered SubSystem: '<S12>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S190>/S-Function1' incorporates:
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

  /* Terminate for S-Function (rti_commonblock): '<S189>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 2 - Port: 1 - Channel: 3 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_2_DioCl_2_Port_1_Ch3);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement2' */

  /* Terminate for Atomic SubSystem: '<Root>/Position Measurement3' */
  /* Terminate for Triggered SubSystem: '<S13>/EMC_ENCODER_POS_SET_BL1' */
  /* Terminate for S-Function (rti_commonblock): '<S195>/S-Function1' incorporates:
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

  /* Terminate for S-Function (rti_commonblock): '<S194>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1 --- */
  /* --- [RTIEMC, Encoder] - DIO class: 2 - Unit: 3 - Port: 1 - Channel: 5 --- */
  {
    /* Deactivates encoder interface functionality */
    DioCl2EncoderIn_stop(pRTIEmcEncoder_Unit_3_DioCl_2_Port_1_Ch5);
  }

  /* End of Terminate for SubSystem: '<Root>/Position Measurement3' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier1' */
  /* Terminate for S-Function (rti_commonblock): '<S178>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 1 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_1, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_1);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier1' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier2' */
  /* Terminate for S-Function (rti_commonblock): '<S180>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 2 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_2, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_2);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier2' */

  /* Terminate for Atomic SubSystem: '<Root>/Outputs to Amplifier3' */
  /* Terminate for S-Function (rti_commonblock): '<S182>/S-Function1' */

  /* --- Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1 --- */
  /* --- [RTI120X, DAC C1] - Channel: 3 --- */

  /* All channel outputs are set to high impedance state */
  DacCl1AnalogOut_setOutputHighZ(pRTIDacC1AnalogOut_Ch_3, DAC_CLASS1_HIGH_Z_ON);

  /* Deactivates AnalogOut functionality */
  DacCl1AnalogOut_stop(pRTIDacC1AnalogOut_Ch_3);

  /* End of Terminate for SubSystem: '<Root>/Outputs to Amplifier3' */
}

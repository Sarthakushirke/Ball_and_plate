/*
 * Sensors_and_actuators_ball_and_plate.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate".
 *
 * Model version              : 7.5
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Tue May 16 15:19:06 2023
 *
 * Target selection: rti1202.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Sensors_and_actuators_ball_and_plate_h_
#define RTW_HEADER_Sensors_and_actuators_ball_and_plate_h_
#ifndef Sensors_and_actuators_ball_and_plate_COMMON_INCLUDES_
#define Sensors_and_actuators_ball_and_plate_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <dsIoEth.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif               /* Sensors_and_actuators_ball_and_plate_COMMON_INCLUDES_ */

#include "Sensors_and_actuators_ball_and_plate_types.h"
#include "rt_zcfcn.h"
#include <string.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#define Sensors_and_actuators_ball_and_plate_M (Sensors_and_actuators_ball_a_M)

/* Block signals for system '<S16>/Enabled Subsystem' */
typedef struct {
  real_T OutportBufferForOut1;         /* '<S17>/Constant' */
} B_EnabledSubsystem_Sensors_an_T;

/* Block states (default storage) for system '<S16>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S16>/Enabled Subsystem' */
} DW_EnabledSubsystem_Sensors_a_T;

/* Block signals for system '<S16>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S18>/In1' */
} B_EnabledSubsystem1_Sensors_a_T;

/* Block states (default storage) for system '<S16>/Enabled Subsystem1' */
typedef struct {
  boolean_T EnabledSubsystem1_MODE;    /* '<S16>/Enabled Subsystem1' */
} DW_EnabledSubsystem1_Sensors__T;

/* Block signals (default storage) */
typedef struct {
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T DiscreteTransferFcn;          /* '<Root>/Discrete Transfer Fcn' */
  real_T CloseLoop_disable_0;          /* '<Root>/CloseLoop_disable_0' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T DiscreteTransferFcn1;         /* '<Root>/Discrete Transfer Fcn1' */
  real_T CloseLoop_disable_1;          /* '<Root>/CloseLoop_disable_1' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  real_T DiscreteTransferFcn2;         /* '<Root>/Discrete Transfer Fcn2' */
  real_T CloseLoop_disable_2;          /* '<Root>/CloseLoop_disable_2' */
  real_T Integrator1;                  /* '<Root>/Integrator1' */
  real_T Integrator2;                  /* '<Root>/Integrator2' */
  real_T Integrator3;                  /* '<Root>/Integrator3' */
  real_T controller_disable_2;         /* '<Root>/controller_disable_2' */
  real_T controller_disable_1;         /* '<Root>/controller_disable_1' */
  real_T controller_disable_0;         /* '<Root>/controller_disable_0' */
  real_T SFunction1_o1;                /* '<S24>/S-Function1' */
  real_T SFunction1_o2;                /* '<S24>/S-Function1' */
  real_T Inc2Pos;                      /* '<S9>/Inc2Pos' */
  real_T AbsPosition;                  /* '<S9>/AbsPosition' */
  real_T Abs;                          /* '<S26>/Abs' */
  real_T TransferFcn;                  /* '<S26>/Transfer Fcn' */
  real_T SFunction1_o1_g;              /* '<S19>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S19>/S-Function1' */
  real_T Inc2Pos_i;                    /* '<S8>/Inc2Pos' */
  real_T AbsPosition_h;                /* '<S8>/AbsPosition' */
  real_T Abs_l;                        /* '<S21>/Abs' */
  real_T TransferFcn_d;                /* '<S21>/Transfer Fcn' */
  real_T SFunction1_o1_o;              /* '<S14>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S14>/S-Function1' */
  real_T Inc2Pos_g;                    /* '<S7>/Inc2Pos' */
  real_T AbsPosition_hs;               /* '<S7>/AbsPosition' */
  real_T Abs_c;                        /* '<S16>/Abs' */
  real_T TransferFcn_f;                /* '<S16>/Transfer Fcn' */
  real_T Saturation;                   /* '<S6>/Saturation' */
  real_T Current2V;                    /* '<S6>/Current2V' */
  real_T DSPscale;                     /* '<S6>/DSPscale' */
  real_T Saturation_l;                 /* '<S5>/Saturation' */
  real_T Current2V_a;                  /* '<S5>/Current2V' */
  real_T DSPscale_a;                   /* '<S5>/DSPscale' */
  real_T Saturation_e;                 /* '<S4>/Saturation' */
  real_T Current2V_p;                  /* '<S4>/Current2V' */
  real_T DSPscale_o;                   /* '<S4>/DSPscale' */
  uint32_T SFunction1_o4;              /* '<S2>/S-Function1' */
  uint32_T SFunction1_o1_h[3];         /* '<S1>/S-Function1' */
  uint16_T SFunction1_o6;              /* '<S2>/S-Function1' */
  uint16_T Gain2;                      /* '<Root>/Gain2' */
  uint16_T Gain1;                      /* '<Root>/Gain1' */
  uint8_T SFunction1_o1_n[32];         /* '<S2>/S-Function1' */
  uint8_T SFunction1_o5[4];            /* '<S2>/S-Function1' */
  uint8_T SFunction1_o2_m[4];          /* '<S1>/S-Function1' */
  boolean_T DataTypeConversion;        /* '<Root>/Data Type Conversion' */
  boolean_T RelationalOperator1;       /* '<S26>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S26>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S26>/Logical Operator2' */
  boolean_T RelationalOperator1_p;     /* '<S21>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S21>/Relational Operator' */
  boolean_T LogicalOperator2_k;        /* '<S21>/Logical Operator2' */
  boolean_T RelationalOperator1_b;     /* '<S16>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S16>/Relational Operator' */
  boolean_T LogicalOperator2_c;        /* '<S16>/Logical Operator2' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S26>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S26>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S21>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S21>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S16>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S16>/Enabled Subsystem' */
} B_Sensors_and_actuators_ball__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTransferFcn_states[3];/* '<Root>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_states[3];/* '<Root>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn2_states[3];/* '<Root>/Discrete Transfer Fcn2' */
  real_T DiscreteTransferFcn_tmp;      /* '<Root>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_tmp;     /* '<Root>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn2_tmp;     /* '<Root>/Discrete Transfer Fcn2' */
  struct {
    real_T RECEIVED_FRAMES;
  } SFunction1_RWORK;                  /* '<S2>/S-Function1' */

  struct {
    real_T RX_DROPPED_FRAMES[2];
  } SFunction1_RWORK_c;                /* '<S3>/S-Function1' */

  uint32_T Add1_DWORK1;                /* '<Root>/Add1' */
  uint16_T Add_DWORK1;                 /* '<Root>/Add' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_j;/* '<S26>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_c;/* '<S26>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_m;/* '<S21>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_h;/* '<S21>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1;/* '<S16>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem;/* '<S16>/Enabled Subsystem' */
} DW_Sensors_and_actuators_ball_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<Root>/Integrator3' */
  real_T TransferFcn_CSTATE;           /* '<S26>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S21>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S16>/Transfer Fcn' */
} X_Sensors_and_actuators_ball__T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<Root>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<Root>/Integrator3' */
  real_T TransferFcn_CSTATE;           /* '<S26>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S21>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S16>/Transfer Fcn' */
} XDot_Sensors_and_actuators_ba_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator1_CSTATE;        /* '<Root>/Integrator1' */
  boolean_T Integrator2_CSTATE;        /* '<Root>/Integrator2' */
  boolean_T Integrator3_CSTATE;        /* '<Root>/Integrator3' */
  boolean_T TransferFcn_CSTATE;        /* '<S26>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_k;      /* '<S21>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S16>/Transfer Fcn' */
} XDis_Sensors_and_actuators_ba_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<Root>/Integrator1' */
  ZCSigState Integrator2_Reset_ZCE;    /* '<Root>/Integrator2' */
  ZCSigState Integrator3_Reset_ZCE;    /* '<Root>/Integrator3' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig_ZC;/* '<S9>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__n;/* '<S8>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__o;/* '<S7>/EMC_ENCODER_POS_SET_BL1' */
} PrevZCX_Sensors_and_actuators_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T controller_disable;           /* '<Root>/controller_disable' */
  real_T CloseLoop_disable;            /* '<Root>/CloseLoop_disable' */
  real_T controller_disable1;          /* '<Root>/controller_disable1' */
  real_T CloseLoop_disable1;           /* '<Root>/CloseLoop_disable1' */
  real_T controller_disable2;          /* '<Root>/controller_disable2' */
  real_T CloseLoop_disable2;           /* '<Root>/CloseLoop_disable2' */
} ExtU_Sensors_and_actuators_ba_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T P_A;                          /* '<Root>/P_A' */
  uint16_T Xpos;                       /* '<Root>/Xpos ' */
  uint16_T Ypos;                       /* '<Root>/Ypos ' */
  uint32_T Status;                     /* '<Root>/Status ' */
  real_T Frames;                       /* '<Root>/Frames ' */
  real_T P_B;                          /* '<Root>/P_B' */
  real_T P_C;                          /* '<Root>/P_C' */
} ExtY_Sensors_and_actuators_ba_T;

/* Parameters for system: '<S16>/Enabled Subsystem' */
struct P_EnabledSubsystem_Sensors_an_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S17>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S17>/Constant'
                                        */
};

/* Parameters for system: '<S16>/Enabled Subsystem1' */
struct P_EnabledSubsystem1_Sensors_a_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S18>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Sensors_and_actuators_ball__T_ {
  real_T denc_mi[4];                   /* Variable: denc_mi
                                        * Referenced by:
                                        *   '<Root>/Discrete Transfer Fcn'
                                        *   '<Root>/Discrete Transfer Fcn1'
                                        *   '<Root>/Discrete Transfer Fcn2'
                                        */
  real_T numc_mi[4];                   /* Variable: numc_mi
                                        * Referenced by:
                                        *   '<Root>/Discrete Transfer Fcn'
                                        *   '<Root>/Discrete Transfer Fcn1'
                                        *   '<Root>/Discrete Transfer Fcn2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 3
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -3
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Current2V_Gain;               /* Expression: 10/3
                                        * Referenced by: '<S4>/Current2V'
                                        */
  real_T DSPscale_Gain;                /* Expression: 1/10
                                        * Referenced by: '<S4>/DSPscale'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 3
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -3
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Current2V_Gain_l;             /* Expression: 10/3
                                        * Referenced by: '<S5>/Current2V'
                                        */
  real_T DSPscale_Gain_j;              /* Expression: 1/10
                                        * Referenced by: '<S5>/DSPscale'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 3
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -3
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Current2V_Gain_j;             /* Expression: 10/3
                                        * Referenced by: '<S6>/Current2V'
                                        */
  real_T DSPscale_Gain_h;              /* Expression: 1/10
                                        * Referenced by: '<S6>/DSPscale'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T ZP_Value;                     /* Expression: 29
                                        * Referenced by: '<S7>/ZP'
                                        */
  real_T Inc2Pos_Gain;                 /* Expression: 8e-3
                                        * Referenced by: '<S7>/Inc2Pos'
                                        */
  real_T Pos_offset_Value;             /* Expression: 0
                                        * Referenced by: '<S7>/Pos_offset'
                                        */
  real_T Const_Value;                  /* Expression: 0.01
                                        * Referenced by: '<S16>/Const'
                                        */
  real_T Const1_Value;                 /* Expression: -0.98
                                        * Referenced by: '<S16>/Const1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S16>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S16>/Transfer Fcn'
                                        */
  real_T mm2m_Gain;                    /* Expression: 0.001
                                        * Referenced by: '<S7>/mm2m'
                                        */
  real_T Constant_Value_d;             /* Expression: 10
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T ZP_Value_a;                   /* Expression: 29
                                        * Referenced by: '<S8>/ZP'
                                        */
  real_T Inc2Pos_Gain_j;               /* Expression: 8e-3
                                        * Referenced by: '<S8>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_f;           /* Expression: 0
                                        * Referenced by: '<S8>/Pos_offset'
                                        */
  real_T Const_Value_d;                /* Expression: 0.01
                                        * Referenced by: '<S21>/Const'
                                        */
  real_T Const1_Value_k;               /* Expression: -0.98
                                        * Referenced by: '<S21>/Const1'
                                        */
  real_T TransferFcn_A_b;              /* Computed Parameter: TransferFcn_A_b
                                        * Referenced by: '<S21>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_j;              /* Computed Parameter: TransferFcn_C_j
                                        * Referenced by: '<S21>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_f;                  /* Expression: 0.001
                                        * Referenced by: '<S8>/mm2m'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T ZP_Value_d;                   /* Expression: 29
                                        * Referenced by: '<S9>/ZP'
                                        */
  real_T Inc2Pos_Gain_i;               /* Expression: 8e-3
                                        * Referenced by: '<S9>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_b;           /* Expression: 0
                                        * Referenced by: '<S9>/Pos_offset'
                                        */
  real_T Const_Value_i;                /* Expression: 0.01
                                        * Referenced by: '<S26>/Const'
                                        */
  real_T Const1_Value_n;               /* Expression: -0.98
                                        * Referenced by: '<S26>/Const1'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S26>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S26>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_a;                  /* Expression: 0.001
                                        * Referenced by: '<S9>/mm2m'
                                        */
  real_T controller_disable_0_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_0'
                                         */
  real_T controller_disable_1_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_1'
                                         */
  real_T controller_disable_2_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_2'
                                         */
  real_T Init_0_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_0'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T ref_0_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/ref_0'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn'
                                          */
  real_T CloseLoop_disable_0_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_0'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Init_1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T ref_1_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/ref_1'
                                        */
  real_T DiscreteTransferFcn1_InitialSta;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn1'
                                          */
  real_T CloseLoop_disable_1_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_1'
                                        */
  real_T init_2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/init_2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T ref_2_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/ref_2'
                                        */
  real_T DiscreteTransferFcn2_InitialSta;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn2'
                                          */
  real_T CloseLoop_disable_2_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_2'
                                        */
  real_T reset_integrator_1_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_1'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<Root>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Integrator1'
                                        */
  real_T reset_integrator_0_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_0'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<Root>/Integrator2'
                                        */
  real_T Integrator2_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Integrator2'
                                        */
  real_T Integrator2_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Integrator2'
                                        */
  real_T reset_integrator_2_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_2'
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<Root>/Integrator3'
                                        */
  real_T Integrator3_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Integrator3'
                                        */
  real_T Integrator3_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Integrator3'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
  uint8_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S26>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S26>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S21>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S21>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S16>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S16>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Sensors_and_actuators_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Sensors_and_actuators_ball__T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_Sensors_and_actuators_ba_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][6];
  ODE1_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P;

/* Block signals (default storage) */
extern B_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_B;

/* Continuous states (default storage) */
extern X_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_X;

/* Block states (default storage) */
extern DW_Sensors_and_actuators_ball_T Sensors_and_actuators_ball_a_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Sensors_and_actuators_T Sensors_and_actuators_b_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_Sensors_and_actuators_ba_T Sensors_and_actuators_ball_an_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Sensors_and_actuators_ba_T Sensors_and_actuators_ball_an_Y;

/* Model entry point functions */
extern void Sensors_and_actuators_ball_and_plate_initialize(void);
extern void Sensors_and_actuators_ball_and_plate_output(void);
extern void Sensors_and_actuators_ball_and_plate_update(void);
extern void Sensors_and_actuators_ball_and_plate_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Sensors_and_actuator_T *const Sensors_and_actuators_ball_a_M;

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
 * '<Root>' : 'Sensors_and_actuators_ball_and_plate'
 * '<S1>'   : 'Sensors_and_actuators_ball_and_plate/ETHERNET_SETUP_BL1'
 * '<S2>'   : 'Sensors_and_actuators_ball_and_plate/ETHERNET_UDP_RX_BL1'
 * '<S3>'   : 'Sensors_and_actuators_ball_and_plate/ETHERNET_UDP_SETUP_BL1'
 * '<S4>'   : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier'
 * '<S5>'   : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier1'
 * '<S6>'   : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier2'
 * '<S7>'   : 'Sensors_and_actuators_ball_and_plate/Position Measurement'
 * '<S8>'   : 'Sensors_and_actuators_ball_and_plate/Position Measurement1'
 * '<S9>'   : 'Sensors_and_actuators_ball_and_plate/Position Measurement2'
 * '<S10>'  : 'Sensors_and_actuators_ball_and_plate/RTI Data'
 * '<S11>'  : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier/DAC_CLASS1_BL1'
 * '<S12>'  : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier1/DAC_CLASS1_BL1'
 * '<S13>'  : 'Sensors_and_actuators_ball_and_plate/Outputs to Amplifier2/DAC_CLASS1_BL1'
 * '<S14>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement/EMC_ENCODER_BL1'
 * '<S15>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement/EMC_ENCODER_POS_SET_BL1'
 * '<S16>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement/Initial'
 * '<S17>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement/Initial/Enabled Subsystem'
 * '<S18>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement/Initial/Enabled Subsystem1'
 * '<S19>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement1/EMC_ENCODER_BL1'
 * '<S20>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement1/EMC_ENCODER_POS_SET_BL1'
 * '<S21>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement1/Initial'
 * '<S22>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement1/Initial/Enabled Subsystem'
 * '<S23>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement1/Initial/Enabled Subsystem1'
 * '<S24>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement2/EMC_ENCODER_BL1'
 * '<S25>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement2/EMC_ENCODER_POS_SET_BL1'
 * '<S26>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement2/Initial'
 * '<S27>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement2/Initial/Enabled Subsystem'
 * '<S28>'  : 'Sensors_and_actuators_ball_and_plate/Position Measurement2/Initial/Enabled Subsystem1'
 * '<S29>'  : 'Sensors_and_actuators_ball_and_plate/RTI Data/RTI Data Store'
 * '<S30>'  : 'Sensors_and_actuators_ball_and_plate/RTI Data/RTI Data Store/RTI Data Store'
 * '<S31>'  : 'Sensors_and_actuators_ball_and_plate/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                  /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_h_ */

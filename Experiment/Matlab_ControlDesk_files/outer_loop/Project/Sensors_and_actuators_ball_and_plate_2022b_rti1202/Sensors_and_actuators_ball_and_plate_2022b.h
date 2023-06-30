/*
 * Sensors_and_actuators_ball_and_plate_2022b.h
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

#ifndef RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_
#define RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_
#ifndef Sensors_and_actuators_ball_and_plate_2022b_COMMON_INCLUDES_
#define Sensors_and_actuators_ball_and_plate_2022b_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <dsIoEth.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif         /* Sensors_and_actuators_ball_and_plate_2022b_COMMON_INCLUDES_ */

#include "Sensors_and_actuators_ball_and_plate_2022b_types.h"
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

#define Sensors_and_actuators_ball_and_plate_2022b_M (Sensors_and_actuators_ball_a_M)

/* Block signals for system '<S163>/Enabled Subsystem' */
typedef struct {
  real_T OutportBufferForOut1;         /* '<S164>/Constant' */
} B_EnabledSubsystem_Sensors_an_T;

/* Block states (default storage) for system '<S163>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S163>/Enabled Subsystem' */
} DW_EnabledSubsystem_Sensors_a_T;

/* Block signals for system '<S163>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S165>/In1' */
} B_EnabledSubsystem1_Sensors_a_T;

/* Block states (default storage) for system '<S163>/Enabled Subsystem1' */
typedef struct {
  boolean_T EnabledSubsystem1_MODE;    /* '<S163>/Enabled Subsystem1' */
} DW_EnabledSubsystem1_Sensors__T;

/* Block signals (default storage) */
typedef struct {
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T switch_ref_constant_sin_1;    /* '<Root>/switch_ref_constant_sin_1' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T PProdOut;                     /* '<S53>/PProd Out' */
  real_T Integrator;                   /* '<S48>/Integrator' */
  real_T DProdOut;                     /* '<S42>/DProd Out' */
  real_T Filter;                       /* '<S43>/Filter' */
  real_T SumD;                         /* '<S43>/SumD' */
  real_T NProdOut;                     /* '<S51>/NProd Out' */
  real_T Sum;                          /* '<S57>/Sum' */
  real_T Saturation_m;                 /* '<S55>/Saturation' */
  real_T controller_disable_1;         /* '<Root>/controller_disable_1' */
  real_T switch_ref_constant_sin_2;    /* '<Root>/switch_ref_constant_sin_2' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T PProdOut_o;                   /* '<S101>/PProd Out' */
  real_T Integrator_a;                 /* '<S96>/Integrator' */
  real_T DProdOut_p;                   /* '<S90>/DProd Out' */
  real_T Filter_a;                     /* '<S91>/Filter' */
  real_T SumD_k;                       /* '<S91>/SumD' */
  real_T NProdOut_m;                   /* '<S99>/NProd Out' */
  real_T Sum_o;                        /* '<S105>/Sum' */
  real_T Saturation_l;                 /* '<S103>/Saturation' */
  real_T controller_disable_2;         /* '<Root>/controller_disable_2' */
  real_T switch_ref_constant_sin_3;    /* '<Root>/switch_ref_constant_sin_3' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  real_T PProdOut_k;                   /* '<S149>/PProd Out' */
  real_T Integrator_d;                 /* '<S144>/Integrator' */
  real_T DProdOut_k;                   /* '<S138>/DProd Out' */
  real_T Filter_o;                     /* '<S139>/Filter' */
  real_T SumD_e;                       /* '<S139>/SumD' */
  real_T NProdOut_g;                   /* '<S147>/NProd Out' */
  real_T Sum_a;                        /* '<S153>/Sum' */
  real_T Saturation_f;                 /* '<S151>/Saturation' */
  real_T controller_disable_3;         /* '<Root>/controller_disable_3' */
  real_T CloseLoop_disable_1;          /* '<Root>/CloseLoop_disable_1' */
  real_T CloseLoop_disable_2;          /* '<Root>/CloseLoop_disable_2' */
  real_T CloseLoop_disable_3;          /* '<Root>/CloseLoop_disable_3' */
  real_T IProdOut;                     /* '<S45>/IProd Out' */
  real_T IProdOut_g;                   /* '<S93>/IProd Out' */
  real_T IProdOut_d;                   /* '<S141>/IProd Out' */
  real_T SFunction1_o1;                /* '<S171>/S-Function1' */
  real_T SFunction1_o2;                /* '<S171>/S-Function1' */
  real_T Inc2Pos;                      /* '<S12>/Inc2Pos' */
  real_T AbsPosition;                  /* '<S12>/AbsPosition' */
  real_T Abs;                          /* '<S173>/Abs' */
  real_T TransferFcn;                  /* '<S173>/Transfer Fcn' */
  real_T SFunction1_o1_g;              /* '<S166>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S166>/S-Function1' */
  real_T Inc2Pos_i;                    /* '<S11>/Inc2Pos' */
  real_T AbsPosition_h;                /* '<S11>/AbsPosition' */
  real_T Abs_l;                        /* '<S168>/Abs' */
  real_T TransferFcn_d;                /* '<S168>/Transfer Fcn' */
  real_T SFunction1_o1_o;              /* '<S161>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S161>/S-Function1' */
  real_T Inc2Pos_g;                    /* '<S10>/Inc2Pos' */
  real_T AbsPosition_hs;               /* '<S10>/AbsPosition' */
  real_T Abs_c;                        /* '<S163>/Abs' */
  real_T TransferFcn_f;                /* '<S163>/Transfer Fcn' */
  real_T Saturation_mt;                /* '<S6>/Saturation' */
  real_T Current2V;                    /* '<S6>/Current2V' */
  real_T DSPscale;                     /* '<S6>/DSPscale' */
  real_T Saturation_li;                /* '<S5>/Saturation' */
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
  boolean_T RelationalOperator1;       /* '<S173>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S173>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S173>/Logical Operator2' */
  boolean_T RelationalOperator1_p;     /* '<S168>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S168>/Relational Operator' */
  boolean_T LogicalOperator2_k;        /* '<S168>/Logical Operator2' */
  boolean_T RelationalOperator1_b;     /* '<S163>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S163>/Relational Operator' */
  boolean_T LogicalOperator2_c;        /* '<S163>/Logical Operator2' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S173>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S173>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S168>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S168>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S163>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S163>/Enabled Subsystem' */
} B_Sensors_and_actuators_ball__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    real_T RECEIVED_FRAMES;
  } SFunction1_RWORK;                  /* '<S2>/S-Function1' */

  struct {
    real_T RX_DROPPED_FRAMES[2];
  } SFunction1_RWORK_c;                /* '<S3>/S-Function1' */

  uint32_T Add1_DWORK1;                /* '<Root>/Add1' */
  uint16_T Add_DWORK1;                 /* '<Root>/Add' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_j;/* '<S173>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_c;/* '<S173>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_m;/* '<S168>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_h;/* '<S168>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1;/* '<S163>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem;/* '<S163>/Enabled Subsystem' */
} DW_Sensors_and_actuators_ball_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Filter_CSTATE;                /* '<S43>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S96>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S91>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S144>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S139>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S173>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S168>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S163>/Transfer Fcn' */
} X_Sensors_and_actuators_ball__T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Filter_CSTATE;                /* '<S43>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S96>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S91>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S144>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S139>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S173>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S168>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S163>/Transfer Fcn' */
} XDot_Sensors_and_actuators_ba_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S48>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S43>/Filter' */
  boolean_T Integrator_CSTATE_b;       /* '<S96>/Integrator' */
  boolean_T Filter_CSTATE_j;           /* '<S91>/Filter' */
  boolean_T Integrator_CSTATE_k;       /* '<S144>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S139>/Filter' */
  boolean_T TransferFcn_CSTATE;        /* '<S173>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_k;      /* '<S168>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S163>/Transfer Fcn' */
} XDis_Sensors_and_actuators_ba_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S48>/Integrator' */
  ZCSigState Filter_Reset_ZCE;         /* '<S43>/Filter' */
  ZCSigState Integrator_Reset_ZCE_c;   /* '<S96>/Integrator' */
  ZCSigState Filter_Reset_ZCE_l;       /* '<S91>/Filter' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S144>/Integrator' */
  ZCSigState Filter_Reset_ZCE_f;       /* '<S139>/Filter' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig_ZC;/* '<S12>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__n;/* '<S11>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__o;/* '<S10>/EMC_ENCODER_POS_SET_BL1' */
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
  real_T controller_disable1;          /* '<Root>/controller_disable1' */
  real_T CloseLoop_disable1;           /* '<Root>/CloseLoop_disable1' */
  real_T controller_disable2;          /* '<Root>/controller_disable2' */
  real_T CloseLoop_disable2;           /* '<Root>/CloseLoop_disable2' */
  real_T controller_disable3;          /* '<Root>/controller_disable3' */
  real_T CloseLoop_disable3;           /* '<Root>/CloseLoop_disable3' */
  real_T switch_ref_inport_1;          /* '<Root>/switch_ref_inport_1' */
  real_T switch_ref_inport_2;          /* '<Root>/switch_ref_inport_2' */
  real_T switch_ref_inport_3;          /* '<Root>/switch_ref_inport_3' */
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
  real_T Actuator_Controller_Output_1;
                                     /* '<Root>/Actuator_Controller_Output_1' */
  real_T Actuator_Controller_Output_2;
                                     /* '<Root>/Actuator_Controller_Output_2' */
  real_T Actuator_Controller_Output_3;
                                     /* '<Root>/Actuator_Controller_Output_3' */
  real_T ref_1;                        /* '<Root>/ref_1' */
  real_T ref_2;                        /* '<Root>/ref_2' */
  real_T ref_3;                        /* '<Root>/ref_3' */
} ExtY_Sensors_and_actuators_ba_T;

/* Parameters for system: '<S163>/Enabled Subsystem' */
struct P_EnabledSubsystem_Sensors_an_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S164>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S164>/Constant'
                                        */
};

/* Parameters for system: '<S163>/Enabled Subsystem1' */
struct P_EnabledSubsystem1_Sensors_a_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S165>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Sensors_and_actuators_ball__T_ {
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S43>/Filter'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S91>/Filter'
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S139>/Filter'
                               */
  real_T PIDController_InitialConditio_c;
                              /* Mask Parameter: PIDController_InitialConditio_c
                               * Referenced by: '<S48>/Integrator'
                               */
  real_T PIDController1_InitialConditi_j;
                              /* Mask Parameter: PIDController1_InitialConditi_j
                               * Referenced by: '<S96>/Integrator'
                               */
  real_T PIDController2_InitialConditi_o;
                              /* Mask Parameter: PIDController2_InitialConditi_o
                               * Referenced by: '<S144>/Integrator'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S55>/Saturation'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by: '<S103>/Saturation'
                               */
  real_T PIDController2_LowerSaturationL;
                              /* Mask Parameter: PIDController2_LowerSaturationL
                               * Referenced by: '<S151>/Saturation'
                               */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S55>/Saturation'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by: '<S103>/Saturation'
                               */
  real_T PIDController2_UpperSaturationL;
                              /* Mask Parameter: PIDController2_UpperSaturationL
                               * Referenced by: '<S151>/Saturation'
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
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T ZP_Value;                     /* Expression: 29
                                        * Referenced by: '<S10>/ZP'
                                        */
  real_T Inc2Pos_Gain;                 /* Expression: 8e-3
                                        * Referenced by: '<S10>/Inc2Pos'
                                        */
  real_T Pos_offset_Value;             /* Expression: 0
                                        * Referenced by: '<S10>/Pos_offset'
                                        */
  real_T Const_Value;                  /* Expression: 0.01
                                        * Referenced by: '<S163>/Const'
                                        */
  real_T Const1_Value;                 /* Expression: -0.98
                                        * Referenced by: '<S163>/Const1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S163>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S163>/Transfer Fcn'
                                        */
  real_T mm2m_Gain;                    /* Expression: 0.001
                                        * Referenced by: '<S10>/mm2m'
                                        */
  real_T Constant_Value_d;             /* Expression: 10
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T ZP_Value_a;                   /* Expression: 29
                                        * Referenced by: '<S11>/ZP'
                                        */
  real_T Inc2Pos_Gain_j;               /* Expression: 8e-3
                                        * Referenced by: '<S11>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_f;           /* Expression: 0
                                        * Referenced by: '<S11>/Pos_offset'
                                        */
  real_T Const_Value_d;                /* Expression: 0.01
                                        * Referenced by: '<S168>/Const'
                                        */
  real_T Const1_Value_k;               /* Expression: -0.98
                                        * Referenced by: '<S168>/Const1'
                                        */
  real_T TransferFcn_A_b;              /* Computed Parameter: TransferFcn_A_b
                                        * Referenced by: '<S168>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_j;              /* Computed Parameter: TransferFcn_C_j
                                        * Referenced by: '<S168>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_f;                  /* Expression: 0.001
                                        * Referenced by: '<S11>/mm2m'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T ZP_Value_d;                   /* Expression: 29
                                        * Referenced by: '<S12>/ZP'
                                        */
  real_T Inc2Pos_Gain_i;               /* Expression: 8e-3
                                        * Referenced by: '<S12>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_b;           /* Expression: 0
                                        * Referenced by: '<S12>/Pos_offset'
                                        */
  real_T Const_Value_i;                /* Expression: 0.01
                                        * Referenced by: '<S173>/Const'
                                        */
  real_T Const1_Value_n;               /* Expression: -0.98
                                        * Referenced by: '<S173>/Const1'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S173>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S173>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_a;                  /* Expression: 0.001
                                        * Referenced by: '<S12>/mm2m'
                                        */
  real_T Init_1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_1'
                                        */
  real_T Init_2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_2'
                                        */
  real_T init_3_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/init_3'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T constant_ref_1_Value;         /* Expression: 0
                                        * Referenced by: '<Root>/constant_ref_1'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.01
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 0.75
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: 0.03
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: -0.03
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T switch_ref_constant_sin_1_Thres;/* Expression: 0.5
                                          * Referenced by: '<Root>/switch_ref_constant_sin_1'
                                          */
  real_T Controller_P_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/Controller_P'
                                        */
  real_T reset_integrator_1_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_1'
                                        */
  real_T Controller_D_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/Controller_D'
                                        */
  real_T Controller_N_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/Controller_N'
                                        */
  real_T controller_disable_1_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_1'
                                         */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T constant_ref_2_Value;         /* Expression: 0
                                        * Referenced by: '<Root>/constant_ref_2'
                                        */
  real_T switch_ref_constant_sin_2_Thres;/* Expression: 0.5
                                          * Referenced by: '<Root>/switch_ref_constant_sin_2'
                                          */
  real_T reset_integrator_2_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_2'
                                        */
  real_T controller_disable_2_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_2'
                                         */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T constant_ref_3_Value;         /* Expression: 0
                                        * Referenced by: '<Root>/constant_ref_3'
                                        */
  real_T switch_ref_constant_sin_3_Thres;/* Expression: 0.5
                                          * Referenced by: '<Root>/switch_ref_constant_sin_3'
                                          */
  real_T reset_integrator_3_Value;     /* Expression: 0
                                        * Referenced by: '<Root>/reset_integrator_3'
                                        */
  real_T controller_disable_3_Threshold;/* Expression: 0.5
                                         * Referenced by: '<Root>/controller_disable_3'
                                         */
  real_T CloseLoop_disable_1_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_1'
                                        */
  real_T CloseLoop_disable_2_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_2'
                                        */
  real_T CloseLoop_disable_3_Threshold;/* Expression: 0.5
                                        * Referenced by: '<Root>/CloseLoop_disable_3'
                                        */
  real_T Controller_I_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/Controller_I'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
  uint8_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S173>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S173>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S168>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S168>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S163>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S163>/Enabled Subsystem' */
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
  real_T odeF[1][9];
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
extern void Sensors_and_actuators_ball_and_plate_2022b_initialize(void);
extern void Sensors_and_actuators_ball_and_plate_2022b_output(void);
extern void Sensors_and_actuators_ball_and_plate_2022b_update(void);
extern void Sensors_and_actuators_ball_and_plate_2022b_terminate(void);

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
 * '<Root>' : 'Sensors_and_actuators_ball_and_plate_2022b'
 * '<S1>'   : 'Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_SETUP_BL1'
 * '<S2>'   : 'Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_UDP_RX_BL1'
 * '<S3>'   : 'Sensors_and_actuators_ball_and_plate_2022b/ETHERNET_UDP_SETUP_BL1'
 * '<S4>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1'
 * '<S5>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2'
 * '<S6>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3'
 * '<S7>'   : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller'
 * '<S8>'   : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1'
 * '<S9>'   : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2'
 * '<S10>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1'
 * '<S11>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2'
 * '<S12>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3'
 * '<S13>'  : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data'
 * '<S14>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1'
 * '<S15>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1'
 * '<S16>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1'
 * '<S17>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Anti-windup'
 * '<S18>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/D Gain'
 * '<S19>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Filter'
 * '<S20>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Filter ICs'
 * '<S21>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/I Gain'
 * '<S22>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Ideal P Gain'
 * '<S23>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Ideal P Gain Fdbk'
 * '<S24>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Integrator'
 * '<S25>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Integrator ICs'
 * '<S26>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/N Copy'
 * '<S27>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/N Gain'
 * '<S28>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/P Copy'
 * '<S29>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Parallel P Gain'
 * '<S30>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Reset Signal'
 * '<S31>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Saturation'
 * '<S32>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Saturation Fdbk'
 * '<S33>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Sum'
 * '<S34>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Sum Fdbk'
 * '<S35>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tracking Mode'
 * '<S36>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tracking Mode Sum'
 * '<S37>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tsamp - Integral'
 * '<S38>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tsamp - Ngain'
 * '<S39>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/postSat Signal'
 * '<S40>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/preSat Signal'
 * '<S41>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Anti-windup/Passthrough'
 * '<S42>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/D Gain/External Parameters'
 * '<S43>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Filter/Cont. Filter'
 * '<S44>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S45>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/I Gain/External Parameters'
 * '<S46>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Ideal P Gain/Passthrough'
 * '<S47>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S48>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Integrator/Continuous'
 * '<S49>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Integrator ICs/Internal IC'
 * '<S50>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/N Copy/Disabled'
 * '<S51>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/N Gain/External Parameters'
 * '<S52>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/P Copy/Disabled'
 * '<S53>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Parallel P Gain/External Parameters'
 * '<S54>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Reset Signal/External Reset'
 * '<S55>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Saturation/Enabled'
 * '<S56>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Saturation Fdbk/Disabled'
 * '<S57>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Sum/Sum_PID'
 * '<S58>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Sum Fdbk/Disabled'
 * '<S59>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tracking Mode/Disabled'
 * '<S60>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S61>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tsamp - Integral/Passthrough'
 * '<S62>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S63>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/postSat Signal/Forward_Path'
 * '<S64>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller/preSat Signal/Forward_Path'
 * '<S65>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Anti-windup'
 * '<S66>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/D Gain'
 * '<S67>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Filter'
 * '<S68>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Filter ICs'
 * '<S69>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/I Gain'
 * '<S70>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Ideal P Gain'
 * '<S71>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Ideal P Gain Fdbk'
 * '<S72>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Integrator'
 * '<S73>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Integrator ICs'
 * '<S74>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/N Copy'
 * '<S75>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/N Gain'
 * '<S76>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/P Copy'
 * '<S77>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Parallel P Gain'
 * '<S78>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Reset Signal'
 * '<S79>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Saturation'
 * '<S80>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Saturation Fdbk'
 * '<S81>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Sum'
 * '<S82>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Sum Fdbk'
 * '<S83>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tracking Mode'
 * '<S84>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tracking Mode Sum'
 * '<S85>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tsamp - Integral'
 * '<S86>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tsamp - Ngain'
 * '<S87>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/postSat Signal'
 * '<S88>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/preSat Signal'
 * '<S89>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Anti-windup/Passthrough'
 * '<S90>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/D Gain/External Parameters'
 * '<S91>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Filter/Cont. Filter'
 * '<S92>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S93>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/I Gain/External Parameters'
 * '<S94>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Ideal P Gain/Passthrough'
 * '<S95>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S96>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Integrator/Continuous'
 * '<S97>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Integrator ICs/Internal IC'
 * '<S98>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/N Copy/Disabled'
 * '<S99>'  : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/N Gain/External Parameters'
 * '<S100>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/P Copy/Disabled'
 * '<S101>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Parallel P Gain/External Parameters'
 * '<S102>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Reset Signal/External Reset'
 * '<S103>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Saturation/Enabled'
 * '<S104>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Saturation Fdbk/Disabled'
 * '<S105>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Sum/Sum_PID'
 * '<S106>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Sum Fdbk/Disabled'
 * '<S107>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tracking Mode/Disabled'
 * '<S108>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S109>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S110>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S111>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/postSat Signal/Forward_Path'
 * '<S112>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller1/preSat Signal/Forward_Path'
 * '<S113>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Anti-windup'
 * '<S114>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/D Gain'
 * '<S115>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Filter'
 * '<S116>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Filter ICs'
 * '<S117>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/I Gain'
 * '<S118>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Ideal P Gain'
 * '<S119>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Ideal P Gain Fdbk'
 * '<S120>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Integrator'
 * '<S121>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Integrator ICs'
 * '<S122>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/N Copy'
 * '<S123>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/N Gain'
 * '<S124>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/P Copy'
 * '<S125>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Parallel P Gain'
 * '<S126>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Reset Signal'
 * '<S127>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Saturation'
 * '<S128>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Saturation Fdbk'
 * '<S129>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Sum'
 * '<S130>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Sum Fdbk'
 * '<S131>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tracking Mode'
 * '<S132>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tracking Mode Sum'
 * '<S133>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tsamp - Integral'
 * '<S134>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tsamp - Ngain'
 * '<S135>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/postSat Signal'
 * '<S136>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/preSat Signal'
 * '<S137>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Anti-windup/Passthrough'
 * '<S138>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/D Gain/External Parameters'
 * '<S139>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Filter/Cont. Filter'
 * '<S140>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S141>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/I Gain/External Parameters'
 * '<S142>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Ideal P Gain/Passthrough'
 * '<S143>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S144>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Integrator/Continuous'
 * '<S145>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Integrator ICs/Internal IC'
 * '<S146>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/N Copy/Disabled'
 * '<S147>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/N Gain/External Parameters'
 * '<S148>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/P Copy/Disabled'
 * '<S149>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Parallel P Gain/External Parameters'
 * '<S150>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Reset Signal/External Reset'
 * '<S151>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Saturation/Enabled'
 * '<S152>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Saturation Fdbk/Disabled'
 * '<S153>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Sum/Sum_PID'
 * '<S154>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Sum Fdbk/Disabled'
 * '<S155>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tracking Mode/Disabled'
 * '<S156>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S157>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tsamp - Integral/Passthrough'
 * '<S158>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S159>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/postSat Signal/Forward_Path'
 * '<S160>' : 'Sensors_and_actuators_ball_and_plate_2022b/PID Controller2/preSat Signal/Forward_Path'
 * '<S161>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1'
 * '<S162>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1'
 * '<S163>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial'
 * '<S164>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem'
 * '<S165>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem1'
 * '<S166>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1'
 * '<S167>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1'
 * '<S168>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial'
 * '<S169>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem'
 * '<S170>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem1'
 * '<S171>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1'
 * '<S172>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1'
 * '<S173>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial'
 * '<S174>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem'
 * '<S175>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem1'
 * '<S176>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store'
 * '<S177>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store'
 * '<S178>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif            /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_ */

/*
 * Sensors_and_actuators_ball_and_plate_2022b.h
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

/* Block signals for system '<S4>/BoundsFunction1' */
typedef struct {
  boolean_T outOfBounds;               /* '<S4>/BoundsFunction1' */
} B_BoundsFunction1_Sensors_and_T;

/* Block signals for system '<S8>/MATLAB Function' */
typedef struct {
  boolean_T saturation;                /* '<S8>/MATLAB Function' */
} B_MATLABFunction_Sensors_and__T;

/* Block signals for system '<S181>/Enabled Subsystem' */
typedef struct {
  real_T OutportBufferForOut1;         /* '<S182>/Constant' */
} B_EnabledSubsystem_Sensors_an_T;

/* Block states (default storage) for system '<S181>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S181>/Enabled Subsystem' */
} DW_EnabledSubsystem_Sensors_a_T;

/* Block signals for system '<S181>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S183>/In1' */
} B_EnabledSubsystem1_Sensors_a_T;

/* Block states (default storage) for system '<S181>/Enabled Subsystem1' */
typedef struct {
  boolean_T EnabledSubsystem1_MODE;    /* '<S181>/Enabled Subsystem1' */
} DW_EnabledSubsystem1_Sensors__T;

/* Block signals (default storage) */
typedef struct {
  real_T Sum1;                         /* '<S1>/Sum1' */
  real_T Gain4;                        /* '<S1>/Gain4' */
  real_T Sum;                          /* '<S1>/Sum' */
  real_T Gain3;                        /* '<S1>/Gain3' */
  real_T Add3;                         /* '<S1>/Add3' */
  real_T SineWave;                     /* '<S2>/Sine Wave' */
  real_T Switch;                       /* '<S2>/Switch' */
  real_T Ref_error_sum_x;              /* '<Root>/Ref_error_sum_x' */
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T DiscreteTransferFcn2;         /* '<S15>/Discrete Transfer Fcn2' */
  real_T Saturation1;                  /* '<S15>/Saturation1' */
  real_T PProdOut;                     /* '<S286>/PProd Out' */
  real_T Integrator;                   /* '<S281>/Integrator' */
  real_T DProdOut;                     /* '<S275>/DProd Out' */
  real_T Filter;                       /* '<S276>/Filter' */
  real_T SumD;                         /* '<S276>/SumD' */
  real_T NProdOut;                     /* '<S284>/NProd Out' */
  real_T Sum_n;                        /* '<S290>/Sum' */
  real_T Saturation;                   /* '<S288>/Saturation' */
  real_T SineWave1;                    /* '<S2>/Sine Wave1' */
  real_T Switch1;                      /* '<S2>/Switch1' */
  real_T Ref_error_sum_y;              /* '<Root>/Ref_error_sum_y' */
  real_T RateTransition1;              /* '<Root>/Rate Transition1' */
  real_T DiscreteTransferFcn1;         /* '<S15>/Discrete Transfer Fcn1' */
  real_T Saturation_k;                 /* '<S15>/Saturation' */
  real_T PProdOut_m;                   /* '<S238>/PProd Out' */
  real_T Integrator_l;                 /* '<S233>/Integrator' */
  real_T DProdOut_p;                   /* '<S227>/DProd Out' */
  real_T Filter_d;                     /* '<S228>/Filter' */
  real_T SumD_b;                       /* '<S228>/SumD' */
  real_T NProdOut_d;                   /* '<S236>/NProd Out' */
  real_T Sum_nf;                       /* '<S242>/Sum' */
  real_T Saturation_o;                 /* '<S240>/Saturation' */
  real_T DataTypeConversion;           /* '<S5>/Data Type Conversion' */
  real_T ref_1;                        /* '<S5>/ref_1' */
  real_T Sum1_j;                       /* '<S5>/Sum1' */
  real_T DProdOut_b;                   /* '<S50>/DProd Out' */
  real_T Filter_b;                     /* '<S51>/Filter' */
  real_T SumD_c;                       /* '<S51>/SumD' */
  real_T IProdOut;                     /* '<S53>/IProd Out' */
  real_T Integrator_m;                 /* '<S56>/Integrator' */
  real_T NProdOut_e;                   /* '<S59>/NProd Out' */
  real_T PProdOut_j;                   /* '<S61>/PProd Out' */
  real_T Sum_k;                        /* '<S65>/Sum' */
  real_T Saturation_m;                 /* '<S63>/Saturation' */
  real_T CloseLoop_disable_1;          /* '<S5>/CloseLoop_disable_1' */
  real_T DataTypeConversion_a;         /* '<S6>/Data Type Conversion' */
  real_T ref_2;                        /* '<S6>/ref_2' */
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T DProdOut_pg;                  /* '<S100>/DProd Out' */
  real_T Filter_a;                     /* '<S101>/Filter' */
  real_T SumD_k;                       /* '<S101>/SumD' */
  real_T IProdOut_g;                   /* '<S103>/IProd Out' */
  real_T Integrator_a;                 /* '<S106>/Integrator' */
  real_T NProdOut_m;                   /* '<S109>/NProd Out' */
  real_T PProdOut_o;                   /* '<S111>/PProd Out' */
  real_T Sum_o;                        /* '<S115>/Sum' */
  real_T Saturation_l;                 /* '<S113>/Saturation' */
  real_T CloseLoop_disable_2;          /* '<S6>/CloseLoop_disable_2' */
  real_T DataTypeConversion_i;         /* '<S7>/Data Type Conversion' */
  real_T ref_3;                        /* '<S7>/ref_3' */
  real_T Sum3;                         /* '<S7>/Sum3' */
  real_T DProdOut_k;                   /* '<S150>/DProd Out' */
  real_T Filter_o;                     /* '<S151>/Filter' */
  real_T SumD_e;                       /* '<S151>/SumD' */
  real_T IProdOut_d;                   /* '<S153>/IProd Out' */
  real_T Integrator_d;                 /* '<S156>/Integrator' */
  real_T NProdOut_g;                   /* '<S159>/NProd Out' */
  real_T PProdOut_k;                   /* '<S161>/PProd Out' */
  real_T Sum_a;                        /* '<S165>/Sum' */
  real_T Saturation_f;                 /* '<S163>/Saturation' */
  real_T CloseLoop_disable_3;          /* '<S7>/CloseLoop_disable_3' */
  real_T IProdOut_i;                   /* '<S230>/IProd Out' */
  real_T IProdOut_o;                   /* '<S278>/IProd Out' */
  real_T Switch_j;                     /* '<S15>/Switch' */
  real_T Switch1_c;                    /* '<S15>/Switch1' */
  real_T Integrator_reset_mode_outerloop;
                         /* '<S15>/Integrator reset determination outer loop' */
  real_T SFunction1_o1;                /* '<S189>/S-Function1' */
  real_T SFunction1_o2;                /* '<S189>/S-Function1' */
  real_T Inc2Pos;                      /* '<S13>/Inc2Pos' */
  real_T AbsPosition;                  /* '<S13>/AbsPosition' */
  real_T Abs;                          /* '<S191>/Abs' */
  real_T TransferFcn;                  /* '<S191>/Transfer Fcn' */
  real_T mm2m;                         /* '<S13>/mm2m' */
  real_T SFunction1_o1_g;              /* '<S184>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S184>/S-Function1' */
  real_T Inc2Pos_i;                    /* '<S12>/Inc2Pos' */
  real_T AbsPosition_h;                /* '<S12>/AbsPosition' */
  real_T Abs_l;                        /* '<S186>/Abs' */
  real_T TransferFcn_d;                /* '<S186>/Transfer Fcn' */
  real_T mm2m_p;                       /* '<S12>/mm2m' */
  real_T SFunction1_o1_o;              /* '<S179>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S179>/S-Function1' */
  real_T Inc2Pos_g;                    /* '<S11>/Inc2Pos' */
  real_T AbsPosition_hs;               /* '<S11>/AbsPosition' */
  real_T Abs_c;                        /* '<S181>/Abs' */
  real_T TransferFcn_f;                /* '<S181>/Transfer Fcn' */
  real_T mm2m_h;                       /* '<S11>/mm2m' */
  real_T Saturation_mt;                /* '<S10>/Saturation' */
  real_T Current2V;                    /* '<S10>/Current2V' */
  real_T DSPscale;                     /* '<S10>/DSPscale' */
  real_T Saturation_li;                /* '<S9>/Saturation' */
  real_T Current2V_a;                  /* '<S9>/Current2V' */
  real_T DSPscale_a;                   /* '<S9>/DSPscale' */
  real_T Saturation_e;                 /* '<S8>/Saturation' */
  real_T Current2V_p;                  /* '<S8>/Current2V' */
  real_T DSPscale_o;                   /* '<S8>/DSPscale' */
  real_T Integrator_reset_mode_3;   /* '<S7>/Integrator reset determination1' */
  real_T Integrator_reset_mode_2;    /* '<S6>/Integrator reset determination' */
  real_T Integrator_reset_mode_1;   /* '<S5>/Integrator reset determination1' */
  real_T z1;                /* '<S4>/Inverse Kinematics Calculation Function' */
  real_T z2;                /* '<S4>/Inverse Kinematics Calculation Function' */
  real_T z3;                /* '<S4>/Inverse Kinematics Calculation Function' */
  uint32_T SFunction1_o4;              /* '<S17>/S-Function1' */
  uint32_T SFunction1_o1_h[3];         /* '<S16>/S-Function1' */
  uint16_T SFunction1_o6;              /* '<S17>/S-Function1' */
  uint16_T Gain1;                      /* '<S1>/Gain1' */
  uint16_T Add1;                       /* '<S1>/Add1' */
  uint16_T Gain2;                      /* '<S1>/Gain2' */
  uint16_T Add;                        /* '<S1>/Add' */
  uint8_T SFunction1_o1_n[32];         /* '<S17>/S-Function1' */
  uint8_T SFunction1_o5[4];            /* '<S17>/S-Function1' */
  uint8_T SFunction1_o2_m[4];          /* '<S16>/S-Function1' */
  boolean_T DataTypeConversion_k;      /* '<S1>/Data Type Conversion' */
  boolean_T OR;                        /* '<S5>/OR' */
  boolean_T OR_i;                      /* '<S6>/OR' */
  boolean_T OR_p;                      /* '<S7>/OR' */
  boolean_T actuator_1_RefOutOfBounds; /* '<S3>/actuator_1_RefOutOfBounds' */
  boolean_T actuator_1_SaturationReached;/* '<S3>/actuator_1_SaturationReached' */
  boolean_T actuator_2_RefOutOfBounds; /* '<S3>/actuator_2_RefOutOfBounds' */
  boolean_T actuator_2_SaturationReached;/* '<S3>/actuator_2_SaturationReached' */
  boolean_T actuator_3_RefOutOfBounds; /* '<S3>/actuator_3_RefOutOfBounds' */
  boolean_T actuator_3_SaturationReached;/* '<S3>/actuator_3_SaturationReached' */
  boolean_T phi_saturation_reached;    /* '<S3>/phi_saturation_reached' */
  boolean_T theta_saturation_reached;  /* '<S3>/theta_saturation_reached' */
  boolean_T theta_saturation_reached_n;/* '<S15>/theta_saturation_check' */
  boolean_T phi_saturation_reached_c;  /* '<S15>/phi_saturation_check' */
  boolean_T RelationalOperator1;       /* '<S191>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S191>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S191>/Logical Operator2' */
  boolean_T RelationalOperator1_p;     /* '<S186>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S186>/Relational Operator' */
  boolean_T LogicalOperator2_k;        /* '<S186>/Logical Operator2' */
  boolean_T RelationalOperator1_b;     /* '<S181>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S181>/Relational Operator' */
  boolean_T LogicalOperator2_c;        /* '<S181>/Logical Operator2' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S191>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S191>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S186>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S186>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S181>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S181>/Enabled Subsystem' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_f;/* '<S10>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_c;/* '<S9>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction;/* '<S8>/MATLAB Function' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction3;/* '<S4>/BoundsFunction3' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction2;/* '<S4>/BoundsFunction2' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction1;/* '<S4>/BoundsFunction1' */
} B_Sensors_and_actuators_ball__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTransferFcn2_states[2];/* '<S15>/Discrete Transfer Fcn2' */
  real_T Integrator_DSTATE;            /* '<S281>/Integrator' */
  real_T Filter_DSTATE;                /* '<S276>/Filter' */
  real_T DiscreteTransferFcn1_states[2];/* '<S15>/Discrete Transfer Fcn1' */
  real_T Integrator_DSTATE_j;          /* '<S233>/Integrator' */
  real_T Filter_DSTATE_e;              /* '<S228>/Filter' */
  real_T Sum1_DWORK1;                  /* '<S1>/Sum1' */
  real_T RateTransition_Buffer;        /* '<Root>/Rate Transition' */
  real_T DiscreteTransferFcn2_tmp;     /* '<S15>/Discrete Transfer Fcn2' */
  real_T RateTransition1_Buffer;       /* '<Root>/Rate Transition1' */
  real_T DiscreteTransferFcn1_tmp;     /* '<S15>/Discrete Transfer Fcn1' */
  struct {
    real_T RECEIVED_FRAMES;
  } SFunction1_RWORK;                  /* '<S17>/S-Function1' */

  struct {
    real_T RX_DROPPED_FRAMES[2];
  } SFunction1_RWORK_c;                /* '<S18>/S-Function1' */

  uint32_T Add1_DWORK1;                /* '<S1>/Add1' */
  uint16_T Add_DWORK1;                 /* '<S1>/Add' */
  int8_T Integrator_PrevResetState;    /* '<S281>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S276>/Filter' */
  int8_T Integrator_PrevResetState_i;  /* '<S233>/Integrator' */
  int8_T Filter_PrevResetState_m;      /* '<S228>/Filter' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_j;/* '<S191>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_c;/* '<S191>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_m;/* '<S186>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_h;/* '<S186>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1;/* '<S181>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem;/* '<S181>/Enabled Subsystem' */
} DW_Sensors_and_actuators_ball_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Filter_CSTATE;                /* '<S51>/Filter' */
  real_T Integrator_CSTATE;            /* '<S56>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S101>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S106>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S151>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S156>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S191>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S186>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S181>/Transfer Fcn' */
} X_Sensors_and_actuators_ball__T;

/* State derivatives (default storage) */
typedef struct {
  real_T Filter_CSTATE;                /* '<S51>/Filter' */
  real_T Integrator_CSTATE;            /* '<S56>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S101>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S106>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S151>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S156>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S191>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S186>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S181>/Transfer Fcn' */
} XDot_Sensors_and_actuators_ba_T;

/* State disabled  */
typedef struct {
  boolean_T Filter_CSTATE;             /* '<S51>/Filter' */
  boolean_T Integrator_CSTATE;         /* '<S56>/Integrator' */
  boolean_T Filter_CSTATE_j;           /* '<S101>/Filter' */
  boolean_T Integrator_CSTATE_b;       /* '<S106>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S151>/Filter' */
  boolean_T Integrator_CSTATE_k;       /* '<S156>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S191>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_k;      /* '<S186>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S181>/Transfer Fcn' */
} XDis_Sensors_and_actuators_ba_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Filter_Reset_ZCE;         /* '<S51>/Filter' */
  ZCSigState Integrator_Reset_ZCE;     /* '<S56>/Integrator' */
  ZCSigState Filter_Reset_ZCE_l;       /* '<S101>/Filter' */
  ZCSigState Integrator_Reset_ZCE_c;   /* '<S106>/Integrator' */
  ZCSigState Filter_Reset_ZCE_f;       /* '<S151>/Filter' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S156>/Integrator' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig_ZC;/* '<S13>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__n;/* '<S12>/EMC_ENCODER_POS_SET_BL1' */
  ZCSigState EMC_ENCODER_POS_SET_BL1_Trig__o;/* '<S11>/EMC_ENCODER_POS_SET_BL1' */
} PrevZCX_Sensors_and_actuators_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Xpos;                         /* '<Root>/Xpos ' */
  real_T Ypos;                         /* '<Root>/Ypos ' */
  uint32_T Status;                     /* '<Root>/Status ' */
  real_T Frames;                       /* '<Root>/Frames ' */
  real_T Outerloop_theta_output;       /* '<Root>/Outerloop_theta_output' */
  real_T Outerloop_phi_output;         /* '<Root>/Outerloop_phi_output' */
} ExtY_Sensors_and_actuators_ba_T;

/* Parameters for system: '<S181>/Enabled Subsystem' */
struct P_EnabledSubsystem_Sensors_an_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S182>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S182>/Constant'
                                        */
};

/* Parameters for system: '<S181>/Enabled Subsystem1' */
struct P_EnabledSubsystem1_Sensors_a_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S183>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Sensors_and_actuators_ball__T_ {
  real_T a_x;                          /* Variable: a_x
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T a_y;                          /* Variable: a_y
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real_T b_x;                          /* Variable: b_x
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T b_y;                          /* Variable: b_y
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T center[2];                    /* Variable: center
                                        * Referenced by:
                                        *   '<S1>/Constant3'
                                        *   '<S1>/Constant4'
                                        */
  real_T PID_outer_theta_InitialConditio;
                              /* Mask Parameter: PID_outer_theta_InitialConditio
                               * Referenced by: '<S276>/Filter'
                               */
  real_T PID_outer_phi_InitialConditionF;
                              /* Mask Parameter: PID_outer_phi_InitialConditionF
                               * Referenced by: '<S228>/Filter'
                               */
  real_T Actuator_PID_1_InitialCondition;
                              /* Mask Parameter: Actuator_PID_1_InitialCondition
                               * Referenced by: '<S51>/Filter'
                               */
  real_T Actuator_PID_2_InitialCondition;
                              /* Mask Parameter: Actuator_PID_2_InitialCondition
                               * Referenced by: '<S101>/Filter'
                               */
  real_T Actuator_PID_3_InitialCondition;
                              /* Mask Parameter: Actuator_PID_3_InitialCondition
                               * Referenced by: '<S151>/Filter'
                               */
  real_T PID_outer_theta_InitialCondit_j;
                              /* Mask Parameter: PID_outer_theta_InitialCondit_j
                               * Referenced by: '<S281>/Integrator'
                               */
  real_T PID_outer_phi_InitialConditio_d;
                              /* Mask Parameter: PID_outer_phi_InitialConditio_d
                               * Referenced by: '<S233>/Integrator'
                               */
  real_T Actuator_PID_1_InitialConditi_c;
                              /* Mask Parameter: Actuator_PID_1_InitialConditi_c
                               * Referenced by: '<S56>/Integrator'
                               */
  real_T Actuator_PID_2_InitialConditi_j;
                              /* Mask Parameter: Actuator_PID_2_InitialConditi_j
                               * Referenced by: '<S106>/Integrator'
                               */
  real_T Actuator_PID_3_InitialConditi_o;
                              /* Mask Parameter: Actuator_PID_3_InitialConditi_o
                               * Referenced by: '<S156>/Integrator'
                               */
  real_T PID_outer_theta_LowerSaturation;
                              /* Mask Parameter: PID_outer_theta_LowerSaturation
                               * Referenced by: '<S288>/Saturation'
                               */
  real_T PID_outer_phi_LowerSaturationLi;
                              /* Mask Parameter: PID_outer_phi_LowerSaturationLi
                               * Referenced by: '<S240>/Saturation'
                               */
  real_T Actuator_PID_1_LowerSaturationL;
                              /* Mask Parameter: Actuator_PID_1_LowerSaturationL
                               * Referenced by: '<S63>/Saturation'
                               */
  real_T Actuator_PID_2_LowerSaturationL;
                              /* Mask Parameter: Actuator_PID_2_LowerSaturationL
                               * Referenced by: '<S113>/Saturation'
                               */
  real_T Actuator_PID_3_LowerSaturationL;
                              /* Mask Parameter: Actuator_PID_3_LowerSaturationL
                               * Referenced by: '<S163>/Saturation'
                               */
  real_T PID_outer_theta_UpperSaturation;
                              /* Mask Parameter: PID_outer_theta_UpperSaturation
                               * Referenced by: '<S288>/Saturation'
                               */
  real_T PID_outer_phi_UpperSaturationLi;
                              /* Mask Parameter: PID_outer_phi_UpperSaturationLi
                               * Referenced by: '<S240>/Saturation'
                               */
  real_T Actuator_PID_1_UpperSaturationL;
                              /* Mask Parameter: Actuator_PID_1_UpperSaturationL
                               * Referenced by: '<S63>/Saturation'
                               */
  real_T Actuator_PID_2_UpperSaturationL;
                              /* Mask Parameter: Actuator_PID_2_UpperSaturationL
                               * Referenced by: '<S113>/Saturation'
                               */
  real_T Actuator_PID_3_UpperSaturationL;
                              /* Mask Parameter: Actuator_PID_3_UpperSaturationL
                               * Referenced by: '<S163>/Saturation'
                               */
  real_T constant_ref_1_Value;         /* Expression: 0
                                        * Referenced by: '<S5>/constant_ref_1'
                                        */
  real_T constant_ref_2_Value;         /* Expression: 0
                                        * Referenced by: '<S6>/constant_ref_2'
                                        */
  real_T constant_ref_3_Value;         /* Expression: 0
                                        * Referenced by: '<S7>/constant_ref_3'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 3
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -3
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Current2V_Gain;               /* Expression: 10/3
                                        * Referenced by: '<S8>/Current2V'
                                        */
  real_T DSPscale_Gain;                /* Expression: 1/10
                                        * Referenced by: '<S8>/DSPscale'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 3
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -3
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Current2V_Gain_l;             /* Expression: 10/3
                                        * Referenced by: '<S9>/Current2V'
                                        */
  real_T DSPscale_Gain_j;              /* Expression: 1/10
                                        * Referenced by: '<S9>/DSPscale'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 3
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -3
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Current2V_Gain_j;             /* Expression: 10/3
                                        * Referenced by: '<S10>/Current2V'
                                        */
  real_T DSPscale_Gain_h;              /* Expression: 1/10
                                        * Referenced by: '<S10>/DSPscale'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T ZP_Value;                     /* Expression: 29
                                        * Referenced by: '<S11>/ZP'
                                        */
  real_T Inc2Pos_Gain;                 /* Expression: 8e-3
                                        * Referenced by: '<S11>/Inc2Pos'
                                        */
  real_T Pos_offset_Value;             /* Expression: 0
                                        * Referenced by: '<S11>/Pos_offset'
                                        */
  real_T Const_Value;                  /* Expression: 0.01
                                        * Referenced by: '<S181>/Const'
                                        */
  real_T Const1_Value;                 /* Expression: -0.98
                                        * Referenced by: '<S181>/Const1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S181>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S181>/Transfer Fcn'
                                        */
  real_T mm2m_Gain;                    /* Expression: 0.001
                                        * Referenced by: '<S11>/mm2m'
                                        */
  real_T Constant_Value_d;             /* Expression: 10
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T ZP_Value_a;                   /* Expression: 29
                                        * Referenced by: '<S12>/ZP'
                                        */
  real_T Inc2Pos_Gain_j;               /* Expression: 8e-3
                                        * Referenced by: '<S12>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_f;           /* Expression: 0
                                        * Referenced by: '<S12>/Pos_offset'
                                        */
  real_T Const_Value_d;                /* Expression: 0.01
                                        * Referenced by: '<S186>/Const'
                                        */
  real_T Const1_Value_k;               /* Expression: -0.98
                                        * Referenced by: '<S186>/Const1'
                                        */
  real_T TransferFcn_A_b;              /* Computed Parameter: TransferFcn_A_b
                                        * Referenced by: '<S186>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_j;              /* Computed Parameter: TransferFcn_C_j
                                        * Referenced by: '<S186>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_f;                  /* Expression: 0.001
                                        * Referenced by: '<S12>/mm2m'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T ZP_Value_d;                   /* Expression: 29
                                        * Referenced by: '<S13>/ZP'
                                        */
  real_T Inc2Pos_Gain_i;               /* Expression: 8e-3
                                        * Referenced by: '<S13>/Inc2Pos'
                                        */
  real_T Pos_offset_Value_b;           /* Expression: 0
                                        * Referenced by: '<S13>/Pos_offset'
                                        */
  real_T Const_Value_i;                /* Expression: 0.01
                                        * Referenced by: '<S191>/Const'
                                        */
  real_T Const1_Value_n;               /* Expression: -0.98
                                        * Referenced by: '<S191>/Const1'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S191>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S191>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_a;                  /* Expression: 0.001
                                        * Referenced by: '<S13>/mm2m'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S15>/Switch1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.1
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 0.25*2*pi
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: pi/2
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T circle_reference_on_Value;    /* Expression: 0
                                        * Referenced by: '<S2>/circle_reference_on'
                                        */
  real_T ref_x_constant_Value;         /* Expression: 0
                                        * Referenced by: '<S2>/ref_x_constant'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch'
                                        */
  real_T DiscreteTransferFcn2_NumCoef[3];/* Expression: [-2.127 3.042 -0.9575]
                                          * Referenced by: '<S15>/Discrete Transfer Fcn2'
                                          */
  real_T DiscreteTransferFcn2_DenCoef[3];/* Expression: [1 -0.7776 0.199]
                                          * Referenced by: '<S15>/Discrete Transfer Fcn2'
                                          */
  real_T DiscreteTransferFcn2_InitialSta;/* Expression: 0
                                          * Referenced by: '<S15>/Discrete Transfer Fcn2'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 0.087
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -0.087
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real_T switch_outerloop_controller_Val;/* Expression: 0
                                          * Referenced by: '<S15>/switch_outerloop_controller'
                                          */
  real_T Outer_P_Value;                /* Expression: -0.157
                                        * Referenced by: '<Root>/Outer_P'
                                        */
  real_T Outerloop_controller_status_Val;/* Expression: 0
                                          * Referenced by: '<S15>/Outerloop_controller_status'
                                          */
  real_T reset_integrator_outerloop_Valu;/* Expression: 0
                                          * Referenced by: '<S15>/reset_integrator_outerloop'
                                          */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S281>/Integrator'
                                        */
  real_T Outer_D_Value;                /* Expression: -0.479
                                        * Referenced by: '<Root>/Outer_D'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S276>/Filter'
                                        */
  real_T Outer_N_Value;                /* Expression: 3.1722
                                        * Referenced by: '<Root>/Outer_N'
                                        */
  real_T u_ref_outerloop_constant_Value;/* Expression: 0
                                         * Referenced by: '<S15>/0_ref_outerloop_constant'
                                         */
  real_T Outerloop_theta_switch_Threshol;/* Expression: 0.5
                                          * Referenced by: '<S15>/Outerloop_theta_switch'
                                          */
  real_T SineWave1_Amp;                /* Expression: 0.1
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 0.25*2*pi
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T ref_y_constant_Value;         /* Expression: 0
                                        * Referenced by: '<S2>/ref_y_constant'
                                        */
  real_T Switch1_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T DiscreteTransferFcn1_NumCoef[3];/* Expression: [-2.127 3.042 -0.9575]
                                          * Referenced by: '<S15>/Discrete Transfer Fcn1'
                                          */
  real_T DiscreteTransferFcn1_DenCoef[3];/* Expression: [1 -0.7776 0.199]
                                          * Referenced by: '<S15>/Discrete Transfer Fcn1'
                                          */
  real_T DiscreteTransferFcn1_InitialSta;/* Expression: 0
                                          * Referenced by: '<S15>/Discrete Transfer Fcn1'
                                          */
  real_T Saturation_UpperSat_k;        /* Expression: 0.087
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: -0.087
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S233>/Integrator'
                                      */
  real_T Filter_gainval_o;             /* Computed Parameter: Filter_gainval_o
                                        * Referenced by: '<S228>/Filter'
                                        */
  real_T Outerloop_phi_switch_Threshold;/* Expression: 0.5
                                         * Referenced by: '<S15>/Outerloop_phi_switch'
                                         */
  real_T Init_1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_1'
                                        */
  real_T Init_2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_2'
                                        */
  real_T enable_constant_ref_all_Value;/* Expression: 1
                                        * Referenced by: '<Root>/enable_constant_ref_all'
                                        */
  real_T enable_constant_ref_1_Value;  /* Expression: 0
                                        * Referenced by: '<S5>/enable_constant_ref_1'
                                        */
  real_T ref_1_Threshold;              /* Expression: 0.5
                                        * Referenced by: '<S5>/ref_1'
                                        */
  real_T Controller_D_Value;           /* Expression: 4.2346
                                        * Referenced by: '<Root>/Controller_D'
                                        */
  real_T Actuator_controller_status_1_Va;/* Expression: 0
                                          * Referenced by: '<S5>/Actuator_controller_status_1'
                                          */
  real_T reset_integrator_1_Value;     /* Expression: 0
                                        * Referenced by: '<S5>/reset_integrator_1'
                                        */
  real_T Controller_I_Value;           /* Expression: 47.4209
                                        * Referenced by: '<Root>/Controller_I'
                                        */
  real_T Controller_N_Value;           /* Expression: 79.4328
                                        * Referenced by: '<Root>/Controller_N'
                                        */
  real_T Controller_P_Value;           /* Expression: 71.1953
                                        * Referenced by: '<Root>/Controller_P'
                                        */
  real_T CloseLoop_disable_1_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S5>/CloseLoop_disable_1'
                                        */
  real_T enable_constant_ref_2_Value;  /* Expression: 0
                                        * Referenced by: '<S6>/enable_constant_ref_2'
                                        */
  real_T ref_2_Threshold;              /* Expression: 0.5
                                        * Referenced by: '<S6>/ref_2'
                                        */
  real_T Actuator_controller_status_2_Va;/* Expression: 0
                                          * Referenced by: '<S6>/Actuator_controller_status_2'
                                          */
  real_T reset_integrator_2_Value;     /* Expression: 0
                                        * Referenced by: '<S6>/reset_integrator_2'
                                        */
  real_T CloseLoop_disable_2_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S6>/CloseLoop_disable_2'
                                        */
  real_T init_3_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/init_3'
                                        */
  real_T enable_constant_ref_3_Value;  /* Expression: 0
                                        * Referenced by: '<S7>/enable_constant_ref_3'
                                        */
  real_T ref_3_Threshold;              /* Expression: 0.5
                                        * Referenced by: '<S7>/ref_3'
                                        */
  real_T Actuator_controller_status_3_Va;/* Expression: 0
                                          * Referenced by: '<S7>/Actuator_controller_status_3'
                                          */
  real_T reset_integrator_3_Value;     /* Expression: 0
                                        * Referenced by: '<S7>/reset_integrator_3'
                                        */
  real_T CloseLoop_disable_3_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S7>/CloseLoop_disable_3'
                                        */
  real_T Outer_I_Value;                /* Expression: -0.0648
                                        * Referenced by: '<Root>/Outer_I'
                                        */
  uint8_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S1>/Gain1'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S1>/Gain2'
                                        */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S191>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S191>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S186>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S186>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S181>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S181>/Enabled Subsystem' */
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
    struct {
      uint8_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
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
 * '<S1>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Camera output'
 * '<S2>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Circular reference'
 * '<S3>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Error subsystem'
 * '<S4>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics'
 * '<S5>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1'
 * '<S6>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2'
 * '<S7>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3'
 * '<S8>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1'
 * '<S9>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2'
 * '<S10>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3'
 * '<S11>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1'
 * '<S12>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2'
 * '<S13>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3'
 * '<S14>'  : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data'
 * '<S15>'  : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller'
 * '<S16>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_SETUP_BL1'
 * '<S17>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_UDP_RX_BL1'
 * '<S18>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Camera output/ETHERNET_UDP_SETUP_BL1'
 * '<S19>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction1'
 * '<S20>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction2'
 * '<S21>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction3'
 * '<S22>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/Inverse Kinematics Calculation Function'
 * '<S23>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1'
 * '<S24>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Integrator reset determination1'
 * '<S25>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Anti-windup'
 * '<S26>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/D Gain'
 * '<S27>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Filter'
 * '<S28>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Filter ICs'
 * '<S29>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/I Gain'
 * '<S30>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Ideal P Gain'
 * '<S31>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Ideal P Gain Fdbk'
 * '<S32>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Integrator'
 * '<S33>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Integrator ICs'
 * '<S34>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/N Copy'
 * '<S35>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/N Gain'
 * '<S36>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/P Copy'
 * '<S37>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Parallel P Gain'
 * '<S38>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Reset Signal'
 * '<S39>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Saturation'
 * '<S40>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Saturation Fdbk'
 * '<S41>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Sum'
 * '<S42>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Sum Fdbk'
 * '<S43>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tracking Mode'
 * '<S44>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tracking Mode Sum'
 * '<S45>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tsamp - Integral'
 * '<S46>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tsamp - Ngain'
 * '<S47>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/postSat Signal'
 * '<S48>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/preSat Signal'
 * '<S49>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Anti-windup/Passthrough'
 * '<S50>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/D Gain/External Parameters'
 * '<S51>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Filter/Cont. Filter'
 * '<S52>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Filter ICs/Internal IC - Filter'
 * '<S53>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/I Gain/External Parameters'
 * '<S54>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Ideal P Gain/Passthrough'
 * '<S55>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Ideal P Gain Fdbk/Disabled'
 * '<S56>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Integrator/Continuous'
 * '<S57>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Integrator ICs/Internal IC'
 * '<S58>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/N Copy/Disabled'
 * '<S59>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/N Gain/External Parameters'
 * '<S60>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/P Copy/Disabled'
 * '<S61>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Parallel P Gain/External Parameters'
 * '<S62>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Reset Signal/External Reset'
 * '<S63>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Saturation/Enabled'
 * '<S64>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Saturation Fdbk/Disabled'
 * '<S65>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Sum/Sum_PID'
 * '<S66>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Sum Fdbk/Disabled'
 * '<S67>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tracking Mode/Disabled'
 * '<S68>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tracking Mode Sum/Passthrough'
 * '<S69>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tsamp - Integral/Passthrough'
 * '<S70>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/Tsamp - Ngain/Passthrough'
 * '<S71>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/postSat Signal/Forward_Path'
 * '<S72>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Actuator_PID_1/preSat Signal/Forward_Path'
 * '<S73>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2'
 * '<S74>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Integrator reset determination'
 * '<S75>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Anti-windup'
 * '<S76>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/D Gain'
 * '<S77>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Filter'
 * '<S78>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Filter ICs'
 * '<S79>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/I Gain'
 * '<S80>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Ideal P Gain'
 * '<S81>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Ideal P Gain Fdbk'
 * '<S82>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Integrator'
 * '<S83>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Integrator ICs'
 * '<S84>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/N Copy'
 * '<S85>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/N Gain'
 * '<S86>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/P Copy'
 * '<S87>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Parallel P Gain'
 * '<S88>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Reset Signal'
 * '<S89>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Saturation'
 * '<S90>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Saturation Fdbk'
 * '<S91>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Sum'
 * '<S92>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Sum Fdbk'
 * '<S93>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tracking Mode'
 * '<S94>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tracking Mode Sum'
 * '<S95>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tsamp - Integral'
 * '<S96>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tsamp - Ngain'
 * '<S97>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/postSat Signal'
 * '<S98>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/preSat Signal'
 * '<S99>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Anti-windup/Passthrough'
 * '<S100>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/D Gain/External Parameters'
 * '<S101>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Filter/Cont. Filter'
 * '<S102>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Filter ICs/Internal IC - Filter'
 * '<S103>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/I Gain/External Parameters'
 * '<S104>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Ideal P Gain/Passthrough'
 * '<S105>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Ideal P Gain Fdbk/Disabled'
 * '<S106>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Integrator/Continuous'
 * '<S107>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Integrator ICs/Internal IC'
 * '<S108>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/N Copy/Disabled'
 * '<S109>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/N Gain/External Parameters'
 * '<S110>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/P Copy/Disabled'
 * '<S111>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Parallel P Gain/External Parameters'
 * '<S112>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Reset Signal/External Reset'
 * '<S113>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Saturation/Enabled'
 * '<S114>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Saturation Fdbk/Disabled'
 * '<S115>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Sum/Sum_PID'
 * '<S116>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Sum Fdbk/Disabled'
 * '<S117>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tracking Mode/Disabled'
 * '<S118>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tracking Mode Sum/Passthrough'
 * '<S119>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tsamp - Integral/Passthrough'
 * '<S120>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/Tsamp - Ngain/Passthrough'
 * '<S121>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/postSat Signal/Forward_Path'
 * '<S122>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Actuator_PID_2/preSat Signal/Forward_Path'
 * '<S123>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3'
 * '<S124>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Integrator reset determination1'
 * '<S125>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Anti-windup'
 * '<S126>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/D Gain'
 * '<S127>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Filter'
 * '<S128>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Filter ICs'
 * '<S129>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/I Gain'
 * '<S130>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Ideal P Gain'
 * '<S131>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Ideal P Gain Fdbk'
 * '<S132>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Integrator'
 * '<S133>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Integrator ICs'
 * '<S134>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/N Copy'
 * '<S135>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/N Gain'
 * '<S136>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/P Copy'
 * '<S137>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Parallel P Gain'
 * '<S138>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Reset Signal'
 * '<S139>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Saturation'
 * '<S140>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Saturation Fdbk'
 * '<S141>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Sum'
 * '<S142>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Sum Fdbk'
 * '<S143>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tracking Mode'
 * '<S144>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tracking Mode Sum'
 * '<S145>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tsamp - Integral'
 * '<S146>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tsamp - Ngain'
 * '<S147>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/postSat Signal'
 * '<S148>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/preSat Signal'
 * '<S149>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Anti-windup/Passthrough'
 * '<S150>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/D Gain/External Parameters'
 * '<S151>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Filter/Cont. Filter'
 * '<S152>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Filter ICs/Internal IC - Filter'
 * '<S153>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/I Gain/External Parameters'
 * '<S154>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Ideal P Gain/Passthrough'
 * '<S155>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Ideal P Gain Fdbk/Disabled'
 * '<S156>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Integrator/Continuous'
 * '<S157>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Integrator ICs/Internal IC'
 * '<S158>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/N Copy/Disabled'
 * '<S159>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/N Gain/External Parameters'
 * '<S160>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/P Copy/Disabled'
 * '<S161>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Parallel P Gain/External Parameters'
 * '<S162>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Reset Signal/External Reset'
 * '<S163>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Saturation/Enabled'
 * '<S164>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Saturation Fdbk/Disabled'
 * '<S165>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Sum/Sum_PID'
 * '<S166>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Sum Fdbk/Disabled'
 * '<S167>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tracking Mode/Disabled'
 * '<S168>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tracking Mode Sum/Passthrough'
 * '<S169>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tsamp - Integral/Passthrough'
 * '<S170>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/Tsamp - Ngain/Passthrough'
 * '<S171>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/postSat Signal/Forward_Path'
 * '<S172>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Actuator_PID_3/preSat Signal/Forward_Path'
 * '<S173>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1'
 * '<S174>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/MATLAB Function'
 * '<S175>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1'
 * '<S176>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/MATLAB Function'
 * '<S177>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1'
 * '<S178>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/MATLAB Function'
 * '<S179>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1'
 * '<S180>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1'
 * '<S181>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial'
 * '<S182>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem'
 * '<S183>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem1'
 * '<S184>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1'
 * '<S185>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1'
 * '<S186>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial'
 * '<S187>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem'
 * '<S188>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem1'
 * '<S189>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1'
 * '<S190>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1'
 * '<S191>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial'
 * '<S192>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem'
 * '<S193>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem1'
 * '<S194>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store'
 * '<S195>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store'
 * '<S196>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S197>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/Integrator reset determination outer loop'
 * '<S198>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi'
 * '<S199>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta'
 * '<S200>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/phi_saturation_check'
 * '<S201>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/theta_saturation_check'
 * '<S202>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Anti-windup'
 * '<S203>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/D Gain'
 * '<S204>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Filter'
 * '<S205>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Filter ICs'
 * '<S206>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/I Gain'
 * '<S207>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Ideal P Gain'
 * '<S208>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Ideal P Gain Fdbk'
 * '<S209>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Integrator'
 * '<S210>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Integrator ICs'
 * '<S211>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/N Copy'
 * '<S212>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/N Gain'
 * '<S213>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/P Copy'
 * '<S214>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Parallel P Gain'
 * '<S215>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Reset Signal'
 * '<S216>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Saturation'
 * '<S217>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Saturation Fdbk'
 * '<S218>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Sum'
 * '<S219>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Sum Fdbk'
 * '<S220>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tracking Mode'
 * '<S221>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tracking Mode Sum'
 * '<S222>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tsamp - Integral'
 * '<S223>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tsamp - Ngain'
 * '<S224>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/postSat Signal'
 * '<S225>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/preSat Signal'
 * '<S226>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Anti-windup/Passthrough'
 * '<S227>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/D Gain/External Parameters'
 * '<S228>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Filter/Disc. Forward Euler Filter'
 * '<S229>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Filter ICs/Internal IC - Filter'
 * '<S230>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/I Gain/External Parameters'
 * '<S231>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Ideal P Gain/Passthrough'
 * '<S232>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Ideal P Gain Fdbk/Disabled'
 * '<S233>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Integrator/Discrete'
 * '<S234>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Integrator ICs/Internal IC'
 * '<S235>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/N Copy/Disabled'
 * '<S236>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/N Gain/External Parameters'
 * '<S237>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/P Copy/Disabled'
 * '<S238>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Parallel P Gain/External Parameters'
 * '<S239>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Reset Signal/External Reset'
 * '<S240>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Saturation/Enabled'
 * '<S241>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Saturation Fdbk/Disabled'
 * '<S242>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Sum/Sum_PID'
 * '<S243>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Sum Fdbk/Disabled'
 * '<S244>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tracking Mode/Disabled'
 * '<S245>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tracking Mode Sum/Passthrough'
 * '<S246>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tsamp - Integral/Passthrough'
 * '<S247>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/Tsamp - Ngain/Passthrough'
 * '<S248>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/postSat Signal/Forward_Path'
 * '<S249>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_phi/preSat Signal/Forward_Path'
 * '<S250>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Anti-windup'
 * '<S251>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/D Gain'
 * '<S252>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Filter'
 * '<S253>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Filter ICs'
 * '<S254>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/I Gain'
 * '<S255>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Ideal P Gain'
 * '<S256>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Ideal P Gain Fdbk'
 * '<S257>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Integrator'
 * '<S258>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Integrator ICs'
 * '<S259>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/N Copy'
 * '<S260>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/N Gain'
 * '<S261>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/P Copy'
 * '<S262>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Parallel P Gain'
 * '<S263>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Reset Signal'
 * '<S264>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Saturation'
 * '<S265>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Saturation Fdbk'
 * '<S266>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Sum'
 * '<S267>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Sum Fdbk'
 * '<S268>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tracking Mode'
 * '<S269>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tracking Mode Sum'
 * '<S270>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tsamp - Integral'
 * '<S271>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tsamp - Ngain'
 * '<S272>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/postSat Signal'
 * '<S273>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/preSat Signal'
 * '<S274>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Anti-windup/Passthrough'
 * '<S275>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/D Gain/External Parameters'
 * '<S276>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Filter/Disc. Forward Euler Filter'
 * '<S277>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Filter ICs/Internal IC - Filter'
 * '<S278>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/I Gain/External Parameters'
 * '<S279>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Ideal P Gain/Passthrough'
 * '<S280>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Ideal P Gain Fdbk/Disabled'
 * '<S281>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Integrator/Discrete'
 * '<S282>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Integrator ICs/Internal IC'
 * '<S283>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/N Copy/Disabled'
 * '<S284>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/N Gain/External Parameters'
 * '<S285>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/P Copy/Disabled'
 * '<S286>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Parallel P Gain/External Parameters'
 * '<S287>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Reset Signal/External Reset'
 * '<S288>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Saturation/Enabled'
 * '<S289>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Saturation Fdbk/Disabled'
 * '<S290>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Sum/Sum_PID'
 * '<S291>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Sum Fdbk/Disabled'
 * '<S292>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tracking Mode/Disabled'
 * '<S293>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tracking Mode Sum/Passthrough'
 * '<S294>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tsamp - Integral/Passthrough'
 * '<S295>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/Tsamp - Ngain/Passthrough'
 * '<S296>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/postSat Signal/Forward_Path'
 * '<S297>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID_outer_theta/preSat Signal/Forward_Path'
 */
#endif            /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_ */

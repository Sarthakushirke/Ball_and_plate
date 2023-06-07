/*
 * Sensors_and_actuators_ball_and_plate_2022b.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate_2022b".
 *
 * Model version              : 7.26
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Wed Jun  7 16:38:45 2023
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

/* Block signals for system '<S3>/BoundsFunction1' */
typedef struct {
  boolean_T outOfBounds;               /* '<S3>/BoundsFunction1' */
} B_BoundsFunction1_Sensors_and_T;

/* Block signals for system '<S7>/MATLAB Function' */
typedef struct {
  boolean_T saturation;                /* '<S7>/MATLAB Function' */
} B_MATLABFunction_Sensors_and__T;

/* Block signals for system '<S176>/Enabled Subsystem' */
typedef struct {
  real_T OutportBufferForOut1;         /* '<S177>/Constant' */
} B_EnabledSubsystem_Sensors_an_T;

/* Block states (default storage) for system '<S176>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S176>/Enabled Subsystem' */
} DW_EnabledSubsystem_Sensors_a_T;

/* Block signals for system '<S176>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S178>/In1' */
} B_EnabledSubsystem1_Sensors_a_T;

/* Block states (default storage) for system '<S176>/Enabled Subsystem1' */
typedef struct {
  boolean_T EnabledSubsystem1_MODE;    /* '<S176>/Enabled Subsystem1' */
} DW_EnabledSubsystem1_Sensors__T;

/* Block signals (default storage) */
typedef struct {
  real_T SineWave;                     /* '<S1>/Sine Wave' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T PProdOut;                     /* '<S233>/PProd Out' */
  real_T Integrator;                   /* '<S228>/Integrator' */
  real_T DProdOut;                     /* '<S222>/DProd Out' */
  real_T Filter;                       /* '<S223>/Filter' */
  real_T SumD;                         /* '<S223>/SumD' */
  real_T NProdOut;                     /* '<S231>/NProd Out' */
  real_T Sum_n;                        /* '<S237>/Sum' */
  real_T Saturation;                   /* '<S235>/Saturation' */
  real_T SineWave1;                    /* '<S1>/Sine Wave1' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T PProdOut_m;                   /* '<S281>/PProd Out' */
  real_T Integrator_m;                 /* '<S276>/Integrator' */
  real_T DProdOut_p;                   /* '<S270>/DProd Out' */
  real_T Filter_c;                     /* '<S271>/Filter' */
  real_T SumD_c;                       /* '<S271>/SumD' */
  real_T NProdOut_d;                   /* '<S279>/NProd Out' */
  real_T Sum_nf;                       /* '<S285>/Sum' */
  real_T Saturation_o;                 /* '<S283>/Saturation' */
  real_T switch_ref_constant_sin_1;    /* '<S4>/switch_ref_constant_sin_1' */
  real_T Sum1_j;                       /* '<S4>/Sum1' */
  real_T PProdOut_j;                   /* '<S57>/PProd Out' */
  real_T Integrator_m0;                /* '<S52>/Integrator' */
  real_T DProdOut_b;                   /* '<S46>/DProd Out' */
  real_T Filter_b;                     /* '<S47>/Filter' */
  real_T SumD_c3;                      /* '<S47>/SumD' */
  real_T NProdOut_e;                   /* '<S55>/NProd Out' */
  real_T Sum_k;                        /* '<S61>/Sum' */
  real_T Saturation_m;                 /* '<S59>/Saturation' */
  real_T controller_disable_1;         /* '<S4>/controller_disable_1' */
  real_T switch_ref_constant_sin_2;    /* '<S5>/switch_ref_constant_sin_2' */
  real_T Sum2;                         /* '<S5>/Sum2' */
  real_T PProdOut_o;                   /* '<S106>/PProd Out' */
  real_T Integrator_a;                 /* '<S101>/Integrator' */
  real_T DProdOut_pg;                  /* '<S95>/DProd Out' */
  real_T Filter_a;                     /* '<S96>/Filter' */
  real_T SumD_k;                       /* '<S96>/SumD' */
  real_T NProdOut_m;                   /* '<S104>/NProd Out' */
  real_T Sum_o;                        /* '<S110>/Sum' */
  real_T Saturation_l;                 /* '<S108>/Saturation' */
  real_T controller_disable_2;         /* '<S5>/controller_disable_2' */
  real_T switch_ref_constant_sin_3;    /* '<S6>/switch_ref_constant_sin_3' */
  real_T Sum3;                         /* '<S6>/Sum3' */
  real_T PProdOut_k;                   /* '<S156>/PProd Out' */
  real_T Integrator_d;                 /* '<S151>/Integrator' */
  real_T DProdOut_k;                   /* '<S145>/DProd Out' */
  real_T Filter_o;                     /* '<S146>/Filter' */
  real_T SumD_e;                       /* '<S146>/SumD' */
  real_T NProdOut_g;                   /* '<S154>/NProd Out' */
  real_T Sum_a;                        /* '<S160>/Sum' */
  real_T Saturation_f;                 /* '<S158>/Saturation' */
  real_T controller_disable_3;         /* '<S6>/controller_disable_3' */
  real_T CloseLoop_disable_1;          /* '<S4>/CloseLoop_disable_1' */
  real_T IProdOut;                     /* '<S49>/IProd Out' */
  real_T CloseLoop_disable_2;          /* '<S5>/CloseLoop_disable_2' */
  real_T IProdOut_g;                   /* '<S98>/IProd Out' */
  real_T CloseLoop_disable_3;          /* '<S6>/CloseLoop_disable_3' */
  real_T IProdOut_d;                   /* '<S148>/IProd Out' */
  real_T IProdOut_o;                   /* '<S225>/IProd Out' */
  real_T IProdOut_i;                   /* '<S273>/IProd Out' */
  real_T SFunction1_o1;                /* '<S184>/S-Function1' */
  real_T SFunction1_o2;                /* '<S184>/S-Function1' */
  real_T Inc2Pos;                      /* '<S12>/Inc2Pos' */
  real_T AbsPosition;                  /* '<S12>/AbsPosition' */
  real_T Abs;                          /* '<S186>/Abs' */
  real_T TransferFcn;                  /* '<S186>/Transfer Fcn' */
  real_T SFunction1_o1_g;              /* '<S179>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S179>/S-Function1' */
  real_T Inc2Pos_i;                    /* '<S11>/Inc2Pos' */
  real_T AbsPosition_h;                /* '<S11>/AbsPosition' */
  real_T Abs_l;                        /* '<S181>/Abs' */
  real_T TransferFcn_d;                /* '<S181>/Transfer Fcn' */
  real_T SFunction1_o1_o;              /* '<S174>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S174>/S-Function1' */
  real_T Inc2Pos_g;                    /* '<S10>/Inc2Pos' */
  real_T AbsPosition_hs;               /* '<S10>/AbsPosition' */
  real_T Abs_c;                        /* '<S176>/Abs' */
  real_T TransferFcn_f;                /* '<S176>/Transfer Fcn' */
  real_T Saturation_mt;                /* '<S9>/Saturation' */
  real_T Current2V;                    /* '<S9>/Current2V' */
  real_T DSPscale;                     /* '<S9>/DSPscale' */
  real_T Saturation_li;                /* '<S8>/Saturation' */
  real_T Current2V_a;                  /* '<S8>/Current2V' */
  real_T DSPscale_a;                   /* '<S8>/DSPscale' */
  real_T Saturation_e;                 /* '<S7>/Saturation' */
  real_T Current2V_p;                  /* '<S7>/Current2V' */
  real_T DSPscale_o;                   /* '<S7>/DSPscale' */
  real_T y;                          /* '<S6>/Integrator reset determination' */
  real_T z1;                /* '<S3>/Inverse Kinematics Calculation Function' */
  real_T z2;                /* '<S3>/Inverse Kinematics Calculation Function' */
  real_T z3;                /* '<S3>/Inverse Kinematics Calculation Function' */
  uint32_T SFunction1_o4;              /* '<S193>/S-Function1' */
  uint32_T SFunction1_o1_h[3];         /* '<S192>/S-Function1' */
  uint16_T SFunction1_o6;              /* '<S193>/S-Function1' */
  uint16_T Gain2;                      /* '<S14>/Gain2' */
  uint16_T Gain1;                      /* '<S14>/Gain1' */
  uint8_T SFunction1_o1_n[32];         /* '<S193>/S-Function1' */
  uint8_T SFunction1_o5[4];            /* '<S193>/S-Function1' */
  uint8_T SFunction1_o2_m[4];          /* '<S192>/S-Function1' */
  boolean_T DataTypeConversion;        /* '<S14>/Data Type Conversion' */
  boolean_T OR;                        /* '<S4>/OR' */
  boolean_T actuator_1_RefOutOfBounds; /* '<S2>/actuator_1_RefOutOfBounds' */
  boolean_T actuator_1_SaturationReached;/* '<S2>/actuator_1_SaturationReached' */
  boolean_T actuator_2_RefOutOfBounds; /* '<S2>/actuator_2_RefOutOfBounds' */
  boolean_T actuator_2_SaturationReached;/* '<S2>/actuator_2_SaturationReached' */
  boolean_T actuator_3_RefOutOfBounds; /* '<S2>/actuator_3_RefOutOfBounds' */
  boolean_T actuator_3_SaturationReached;/* '<S2>/actuator_3_SaturationReached' */
  boolean_T RelationalOperator1;       /* '<S186>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S186>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S186>/Logical Operator2' */
  boolean_T RelationalOperator1_p;     /* '<S181>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S181>/Relational Operator' */
  boolean_T LogicalOperator2_k;        /* '<S181>/Logical Operator2' */
  boolean_T RelationalOperator1_b;     /* '<S176>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S176>/Relational Operator' */
  boolean_T LogicalOperator2_c;        /* '<S176>/Logical Operator2' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S186>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S186>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S181>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S181>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S176>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S176>/Enabled Subsystem' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_f;/* '<S9>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_c;/* '<S8>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction;/* '<S7>/MATLAB Function' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction3;/* '<S3>/BoundsFunction3' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction2;/* '<S3>/BoundsFunction2' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction1;/* '<S3>/BoundsFunction1' */
} B_Sensors_and_actuators_ball__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Sum_DWORK1;                   /* '<Root>/Sum' */
  struct {
    real_T RECEIVED_FRAMES;
  } SFunction1_RWORK;                  /* '<S193>/S-Function1' */

  struct {
    real_T RX_DROPPED_FRAMES[2];
  } SFunction1_RWORK_c;                /* '<S194>/S-Function1' */

  uint32_T Add1_DWORK1;                /* '<S14>/Add1' */
  uint16_T Add_DWORK1;                 /* '<S14>/Add' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_j;/* '<S186>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_c;/* '<S186>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_m;/* '<S181>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_h;/* '<S181>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1;/* '<S176>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem;/* '<S176>/Enabled Subsystem' */
} DW_Sensors_and_actuators_ball_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S228>/Integrator' */
  real_T Filter_CSTATE;                /* '<S223>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S276>/Integrator' */
  real_T Filter_CSTATE_d;              /* '<S271>/Filter' */
  real_T Integrator_CSTATE_c;          /* '<S52>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S47>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S101>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S96>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S151>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S146>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S186>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S181>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S176>/Transfer Fcn' */
} X_Sensors_and_actuators_ball__T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S228>/Integrator' */
  real_T Filter_CSTATE;                /* '<S223>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S276>/Integrator' */
  real_T Filter_CSTATE_d;              /* '<S271>/Filter' */
  real_T Integrator_CSTATE_c;          /* '<S52>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S47>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S101>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S96>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S151>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S146>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S186>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S181>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S176>/Transfer Fcn' */
} XDot_Sensors_and_actuators_ba_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S228>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S223>/Filter' */
  boolean_T Integrator_CSTATE_h;       /* '<S276>/Integrator' */
  boolean_T Filter_CSTATE_d;           /* '<S271>/Filter' */
  boolean_T Integrator_CSTATE_c;       /* '<S52>/Integrator' */
  boolean_T Filter_CSTATE_g;           /* '<S47>/Filter' */
  boolean_T Integrator_CSTATE_b;       /* '<S101>/Integrator' */
  boolean_T Filter_CSTATE_j;           /* '<S96>/Filter' */
  boolean_T Integrator_CSTATE_k;       /* '<S151>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S146>/Filter' */
  boolean_T TransferFcn_CSTATE;        /* '<S186>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_k;      /* '<S181>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S176>/Transfer Fcn' */
} XDis_Sensors_and_actuators_ba_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S228>/Integrator' */
  ZCSigState Filter_Reset_ZCE;         /* '<S223>/Filter' */
  ZCSigState Integrator_Reset_ZCE_g;   /* '<S276>/Integrator' */
  ZCSigState Filter_Reset_ZCE_p;       /* '<S271>/Filter' */
  ZCSigState Integrator_Reset_ZCE_k;   /* '<S52>/Integrator' */
  ZCSigState Filter_Reset_ZCE_p4;      /* '<S47>/Filter' */
  ZCSigState Integrator_Reset_ZCE_c;   /* '<S101>/Integrator' */
  ZCSigState Filter_Reset_ZCE_l;       /* '<S96>/Filter' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S151>/Integrator' */
  ZCSigState Filter_Reset_ZCE_f;       /* '<S146>/Filter' */
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
  real_T Integrator_reset_mode_3;      /* '<Root>/Integrator_reset_mode_3' */
} ExtY_Sensors_and_actuators_ba_T;

/* Parameters for system: '<S176>/Enabled Subsystem' */
struct P_EnabledSubsystem_Sensors_an_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S177>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S177>/Constant'
                                        */
};

/* Parameters for system: '<S176>/Enabled Subsystem1' */
struct P_EnabledSubsystem1_Sensors_a_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S178>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Sensors_and_actuators_ball__T_ {
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S223>/Filter'
                               */
  real_T PIDController3_InitialCondition;
                              /* Mask Parameter: PIDController3_InitialCondition
                               * Referenced by: '<S271>/Filter'
                               */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S47>/Filter'
                               */
  real_T PIDController1_InitialConditi_j;
                              /* Mask Parameter: PIDController1_InitialConditi_j
                               * Referenced by: '<S96>/Filter'
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S146>/Filter'
                               */
  real_T PIDController1_InitialCondit_jy;
                              /* Mask Parameter: PIDController1_InitialCondit_jy
                               * Referenced by: '<S228>/Integrator'
                               */
  real_T PIDController3_InitialConditi_d;
                              /* Mask Parameter: PIDController3_InitialConditi_d
                               * Referenced by: '<S276>/Integrator'
                               */
  real_T PIDController_InitialConditio_c;
                              /* Mask Parameter: PIDController_InitialConditio_c
                               * Referenced by: '<S52>/Integrator'
                               */
  real_T PIDController1_InitialCondit_jl;
                              /* Mask Parameter: PIDController1_InitialCondit_jl
                               * Referenced by: '<S101>/Integrator'
                               */
  real_T PIDController2_InitialConditi_o;
                              /* Mask Parameter: PIDController2_InitialConditi_o
                               * Referenced by: '<S151>/Integrator'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by: '<S235>/Saturation'
                               */
  real_T PIDController3_LowerSaturationL;
                              /* Mask Parameter: PIDController3_LowerSaturationL
                               * Referenced by: '<S283>/Saturation'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S59>/Saturation'
                               */
  real_T PIDController1_LowerSaturatio_h;
                              /* Mask Parameter: PIDController1_LowerSaturatio_h
                               * Referenced by: '<S108>/Saturation'
                               */
  real_T PIDController2_LowerSaturationL;
                              /* Mask Parameter: PIDController2_LowerSaturationL
                               * Referenced by: '<S158>/Saturation'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by: '<S235>/Saturation'
                               */
  real_T PIDController3_UpperSaturationL;
                              /* Mask Parameter: PIDController3_UpperSaturationL
                               * Referenced by: '<S283>/Saturation'
                               */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S59>/Saturation'
                               */
  real_T PIDController1_UpperSaturatio_l;
                              /* Mask Parameter: PIDController1_UpperSaturatio_l
                               * Referenced by: '<S108>/Saturation'
                               */
  real_T PIDController2_UpperSaturationL;
                              /* Mask Parameter: PIDController2_UpperSaturationL
                               * Referenced by: '<S158>/Saturation'
                               */
  real_T Saturation_UpperSat;          /* Expression: 3
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -3
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Current2V_Gain;               /* Expression: 10/3
                                        * Referenced by: '<S7>/Current2V'
                                        */
  real_T DSPscale_Gain;                /* Expression: 1/10
                                        * Referenced by: '<S7>/DSPscale'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 3
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -3
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Current2V_Gain_l;             /* Expression: 10/3
                                        * Referenced by: '<S8>/Current2V'
                                        */
  real_T DSPscale_Gain_j;              /* Expression: 1/10
                                        * Referenced by: '<S8>/DSPscale'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 3
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -3
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Current2V_Gain_j;             /* Expression: 10/3
                                        * Referenced by: '<S9>/Current2V'
                                        */
  real_T DSPscale_Gain_h;              /* Expression: 1/10
                                        * Referenced by: '<S9>/DSPscale'
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
                                        * Referenced by: '<S176>/Const'
                                        */
  real_T Const1_Value;                 /* Expression: -0.98
                                        * Referenced by: '<S176>/Const1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S176>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S176>/Transfer Fcn'
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
                                        * Referenced by: '<S181>/Const'
                                        */
  real_T Const1_Value_k;               /* Expression: -0.98
                                        * Referenced by: '<S181>/Const1'
                                        */
  real_T TransferFcn_A_b;              /* Computed Parameter: TransferFcn_A_b
                                        * Referenced by: '<S181>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_j;              /* Computed Parameter: TransferFcn_C_j
                                        * Referenced by: '<S181>/Transfer Fcn'
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
                                        * Referenced by: '<S186>/Const'
                                        */
  real_T Const1_Value_n;               /* Expression: -0.98
                                        * Referenced by: '<S186>/Const1'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S186>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S186>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_a;                  /* Expression: 0.001
                                        * Referenced by: '<S12>/mm2m'
                                        */
  real_T Init_1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_1'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Init_2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_2'
                                        */
  real_T init_3_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/init_3'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T constant_ref_1_Value;         /* Expression: 0
                                        * Referenced by: '<S4>/constant_ref_1'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: (1/5)*2*pi
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: pi/2
                                        * Referenced by: '<S1>/Sine Wave'
                                        */
  real_T Controller2_P1_Value;         /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_P1'
                                        */
  real_T Controller2_D1_Value;         /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_D1'
                                        */
  real_T Controller2_N1_Value;         /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_N1'
                                        */
  real_T SineWave1_Amp;                /* Expression: 0.1
                                        * Referenced by: '<S1>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: (1/5)*2*pi
                                        * Referenced by: '<S1>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S1>/Sine Wave1'
                                        */
  real_T Controller2_P_Value;          /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_P'
                                        */
  real_T Controller2_D_Value;          /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_D'
                                        */
  real_T Controller2_N_Value;          /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_N'
                                        */
  real_T switch_ref_constant_sin_1_Thres;/* Expression: 0.5
                                          * Referenced by: '<S4>/switch_ref_constant_sin_1'
                                          */
  real_T Controller_P_Value;           /* Expression: 71.1953
                                        * Referenced by: '<Root>/Controller_P'
                                        */
  real_T reset_integrator_1_Value;     /* Expression: 0
                                        * Referenced by: '<S4>/reset_integrator_1'
                                        */
  real_T Controller_D_Value;           /* Expression: 4.2346
                                        * Referenced by: '<Root>/Controller_D'
                                        */
  real_T Controller_N_Value;           /* Expression: 79.4328
                                        * Referenced by: '<Root>/Controller_N'
                                        */
  real_T controller_disable_1_Threshold;/* Expression: 0.5
                                         * Referenced by: '<S4>/controller_disable_1'
                                         */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T constant_ref_2_Value;         /* Expression: 0
                                        * Referenced by: '<S5>/constant_ref_2'
                                        */
  real_T switch_ref_constant_sin_2_Thres;/* Expression: 0.5
                                          * Referenced by: '<S5>/switch_ref_constant_sin_2'
                                          */
  real_T reset_integrator_2_Value;     /* Expression: 0
                                        * Referenced by: '<S5>/reset_integrator_2'
                                        */
  real_T controller_disable_2_Threshold;/* Expression: 0.5
                                         * Referenced by: '<S5>/controller_disable_2'
                                         */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T constant_ref_3_Value;         /* Expression: 0
                                        * Referenced by: '<S6>/constant_ref_3'
                                        */
  real_T switch_ref_constant_sin_3_Thres;/* Expression: 0.5
                                          * Referenced by: '<S6>/switch_ref_constant_sin_3'
                                          */
  real_T reset_integrator_3_Value;     /* Expression: 0
                                        * Referenced by: '<S6>/reset_integrator_3'
                                        */
  real_T controller_disable_3_Threshold;/* Expression: 0.5
                                         * Referenced by: '<S6>/controller_disable_3'
                                         */
  real_T CloseLoop_disable_1_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S4>/CloseLoop_disable_1'
                                        */
  real_T Controller_I_Value;           /* Expression: 47.4209
                                        * Referenced by: '<Root>/Controller_I'
                                        */
  real_T CloseLoop_disable_2_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S5>/CloseLoop_disable_2'
                                        */
  real_T CloseLoop_disable_3_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S6>/CloseLoop_disable_3'
                                        */
  real_T Controller2_I1_Value;         /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_I1'
                                        */
  real_T Controller2_I_Value;          /* Expression: 0
                                        * Referenced by: '<S15>/Controller2_I'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S14>/Gain2'
                                        */
  uint8_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S14>/Gain1'
                                        */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S186>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S186>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S181>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S181>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S176>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S176>/Enabled Subsystem' */
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
  real_T odeF[1][13];
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
 * '<S1>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Circular reference'
 * '<S2>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Error subsystem'
 * '<S3>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics'
 * '<S4>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1'
 * '<S5>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2'
 * '<S6>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3'
 * '<S7>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1'
 * '<S8>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2'
 * '<S9>'   : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3'
 * '<S10>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1'
 * '<S11>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2'
 * '<S12>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3'
 * '<S13>'  : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data'
 * '<S14>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1'
 * '<S15>'  : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller'
 * '<S16>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction1'
 * '<S17>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction2'
 * '<S18>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/BoundsFunction3'
 * '<S19>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Inverse Kinematics/Inverse Kinematics Calculation Function'
 * '<S20>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller'
 * '<S21>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Anti-windup'
 * '<S22>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/D Gain'
 * '<S23>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter'
 * '<S24>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter ICs'
 * '<S25>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/I Gain'
 * '<S26>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain'
 * '<S27>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain Fdbk'
 * '<S28>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator'
 * '<S29>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator ICs'
 * '<S30>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Copy'
 * '<S31>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Gain'
 * '<S32>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/P Copy'
 * '<S33>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Parallel P Gain'
 * '<S34>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Reset Signal'
 * '<S35>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation'
 * '<S36>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation Fdbk'
 * '<S37>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum'
 * '<S38>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum Fdbk'
 * '<S39>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode'
 * '<S40>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode Sum'
 * '<S41>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Integral'
 * '<S42>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Ngain'
 * '<S43>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/postSat Signal'
 * '<S44>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/preSat Signal'
 * '<S45>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Anti-windup/Passthrough'
 * '<S46>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/D Gain/External Parameters'
 * '<S47>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter/Cont. Filter'
 * '<S48>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S49>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/I Gain/External Parameters'
 * '<S50>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain/Passthrough'
 * '<S51>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S52>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator/Continuous'
 * '<S53>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator ICs/Internal IC'
 * '<S54>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Copy/Disabled'
 * '<S55>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Gain/External Parameters'
 * '<S56>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/P Copy/Disabled'
 * '<S57>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Parallel P Gain/External Parameters'
 * '<S58>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Reset Signal/External Reset'
 * '<S59>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation/Enabled'
 * '<S60>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation Fdbk/Disabled'
 * '<S61>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum/Sum_PID'
 * '<S62>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum Fdbk/Disabled'
 * '<S63>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode/Disabled'
 * '<S64>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S65>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Integral/Passthrough'
 * '<S66>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S67>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/postSat Signal/Forward_Path'
 * '<S68>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/preSat Signal/Forward_Path'
 * '<S69>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1'
 * '<S70>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Anti-windup'
 * '<S71>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/D Gain'
 * '<S72>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter'
 * '<S73>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter ICs'
 * '<S74>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/I Gain'
 * '<S75>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain'
 * '<S76>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain Fdbk'
 * '<S77>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator'
 * '<S78>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator ICs'
 * '<S79>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Copy'
 * '<S80>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Gain'
 * '<S81>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/P Copy'
 * '<S82>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Parallel P Gain'
 * '<S83>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Reset Signal'
 * '<S84>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation'
 * '<S85>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation Fdbk'
 * '<S86>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum'
 * '<S87>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum Fdbk'
 * '<S88>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode'
 * '<S89>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode Sum'
 * '<S90>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Integral'
 * '<S91>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Ngain'
 * '<S92>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/postSat Signal'
 * '<S93>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/preSat Signal'
 * '<S94>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Anti-windup/Passthrough'
 * '<S95>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/D Gain/External Parameters'
 * '<S96>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter/Cont. Filter'
 * '<S97>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S98>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/I Gain/External Parameters'
 * '<S99>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain/Passthrough'
 * '<S100>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S101>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator/Continuous'
 * '<S102>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator ICs/Internal IC'
 * '<S103>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Copy/Disabled'
 * '<S104>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Gain/External Parameters'
 * '<S105>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/P Copy/Disabled'
 * '<S106>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Parallel P Gain/External Parameters'
 * '<S107>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Reset Signal/External Reset'
 * '<S108>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation/Enabled'
 * '<S109>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation Fdbk/Disabled'
 * '<S110>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum/Sum_PID'
 * '<S111>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum Fdbk/Disabled'
 * '<S112>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode/Disabled'
 * '<S113>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S114>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S115>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S116>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/postSat Signal/Forward_Path'
 * '<S117>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/preSat Signal/Forward_Path'
 * '<S118>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Integrator reset determination'
 * '<S119>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2'
 * '<S120>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Anti-windup'
 * '<S121>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/D Gain'
 * '<S122>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter'
 * '<S123>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter ICs'
 * '<S124>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/I Gain'
 * '<S125>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain'
 * '<S126>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain Fdbk'
 * '<S127>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator'
 * '<S128>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator ICs'
 * '<S129>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Copy'
 * '<S130>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Gain'
 * '<S131>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/P Copy'
 * '<S132>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Parallel P Gain'
 * '<S133>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Reset Signal'
 * '<S134>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation'
 * '<S135>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation Fdbk'
 * '<S136>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum'
 * '<S137>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum Fdbk'
 * '<S138>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode'
 * '<S139>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode Sum'
 * '<S140>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Integral'
 * '<S141>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Ngain'
 * '<S142>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/postSat Signal'
 * '<S143>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/preSat Signal'
 * '<S144>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Anti-windup/Passthrough'
 * '<S145>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/D Gain/External Parameters'
 * '<S146>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter/Cont. Filter'
 * '<S147>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S148>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/I Gain/External Parameters'
 * '<S149>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain/Passthrough'
 * '<S150>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S151>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator/Continuous'
 * '<S152>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator ICs/Internal IC'
 * '<S153>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Copy/Disabled'
 * '<S154>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Gain/External Parameters'
 * '<S155>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/P Copy/Disabled'
 * '<S156>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Parallel P Gain/External Parameters'
 * '<S157>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Reset Signal/External Reset'
 * '<S158>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation/Enabled'
 * '<S159>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation Fdbk/Disabled'
 * '<S160>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum/Sum_PID'
 * '<S161>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum Fdbk/Disabled'
 * '<S162>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode/Disabled'
 * '<S163>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S164>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Integral/Passthrough'
 * '<S165>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S166>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/postSat Signal/Forward_Path'
 * '<S167>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/preSat Signal/Forward_Path'
 * '<S168>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1'
 * '<S169>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/MATLAB Function'
 * '<S170>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1'
 * '<S171>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/MATLAB Function'
 * '<S172>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1'
 * '<S173>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/MATLAB Function'
 * '<S174>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1'
 * '<S175>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1'
 * '<S176>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial'
 * '<S177>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem'
 * '<S178>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem1'
 * '<S179>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1'
 * '<S180>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1'
 * '<S181>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial'
 * '<S182>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem'
 * '<S183>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem1'
 * '<S184>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1'
 * '<S185>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1'
 * '<S186>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial'
 * '<S187>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem'
 * '<S188>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem1'
 * '<S189>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store'
 * '<S190>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store'
 * '<S191>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S192>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_SETUP_BL1'
 * '<S193>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_UDP_RX_BL1'
 * '<S194>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_UDP_SETUP_BL1'
 * '<S195>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1'
 * '<S196>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3'
 * '<S197>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Anti-windup'
 * '<S198>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/D Gain'
 * '<S199>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter'
 * '<S200>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter ICs'
 * '<S201>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/I Gain'
 * '<S202>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain'
 * '<S203>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S204>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator'
 * '<S205>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator ICs'
 * '<S206>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Copy'
 * '<S207>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Gain'
 * '<S208>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/P Copy'
 * '<S209>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Parallel P Gain'
 * '<S210>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Reset Signal'
 * '<S211>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation'
 * '<S212>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation Fdbk'
 * '<S213>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum'
 * '<S214>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum Fdbk'
 * '<S215>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode'
 * '<S216>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode Sum'
 * '<S217>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Integral'
 * '<S218>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Ngain'
 * '<S219>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/postSat Signal'
 * '<S220>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/preSat Signal'
 * '<S221>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Anti-windup/Passthrough'
 * '<S222>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/D Gain/External Parameters'
 * '<S223>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter/Cont. Filter'
 * '<S224>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S225>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/I Gain/External Parameters'
 * '<S226>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S227>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S228>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator/Continuous'
 * '<S229>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S230>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Copy/Disabled'
 * '<S231>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Gain/External Parameters'
 * '<S232>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/P Copy/Disabled'
 * '<S233>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Parallel P Gain/External Parameters'
 * '<S234>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Reset Signal/External Reset'
 * '<S235>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation/Enabled'
 * '<S236>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S237>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum/Sum_PID'
 * '<S238>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S239>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode/Disabled'
 * '<S240>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S241>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S242>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S243>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S244>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S245>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Anti-windup'
 * '<S246>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/D Gain'
 * '<S247>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter'
 * '<S248>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter ICs'
 * '<S249>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/I Gain'
 * '<S250>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain'
 * '<S251>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain Fdbk'
 * '<S252>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator'
 * '<S253>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator ICs'
 * '<S254>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Copy'
 * '<S255>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Gain'
 * '<S256>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/P Copy'
 * '<S257>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Parallel P Gain'
 * '<S258>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Reset Signal'
 * '<S259>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation'
 * '<S260>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation Fdbk'
 * '<S261>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum'
 * '<S262>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum Fdbk'
 * '<S263>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode'
 * '<S264>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode Sum'
 * '<S265>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Integral'
 * '<S266>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Ngain'
 * '<S267>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/postSat Signal'
 * '<S268>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/preSat Signal'
 * '<S269>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Anti-windup/Passthrough'
 * '<S270>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/D Gain/External Parameters'
 * '<S271>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter/Cont. Filter'
 * '<S272>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter ICs/Internal IC - Filter'
 * '<S273>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/I Gain/External Parameters'
 * '<S274>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain/Passthrough'
 * '<S275>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S276>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator/Continuous'
 * '<S277>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator ICs/Internal IC'
 * '<S278>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Copy/Disabled'
 * '<S279>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Gain/External Parameters'
 * '<S280>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/P Copy/Disabled'
 * '<S281>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Parallel P Gain/External Parameters'
 * '<S282>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Reset Signal/External Reset'
 * '<S283>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation/Enabled'
 * '<S284>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation Fdbk/Disabled'
 * '<S285>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum/Sum_PID'
 * '<S286>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum Fdbk/Disabled'
 * '<S287>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode/Disabled'
 * '<S288>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S289>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Integral/Passthrough'
 * '<S290>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S291>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/postSat Signal/Forward_Path'
 * '<S292>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/preSat Signal/Forward_Path'
 */
#endif            /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_ */

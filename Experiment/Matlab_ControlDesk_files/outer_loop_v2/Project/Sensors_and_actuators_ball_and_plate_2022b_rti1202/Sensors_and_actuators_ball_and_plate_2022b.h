/*
 * Sensors_and_actuators_ball_and_plate_2022b.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate_2022b".
 *
 * Model version              : 7.48
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Jun  8 18:22:17 2023
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

/* Block signals for system '<S4>/Integrator reset determination1' */
typedef struct {
  real_T y;                         /* '<S4>/Integrator reset determination1' */
} B_Integratorresetdeterminatio_T;

/* Block signals for system '<S7>/MATLAB Function' */
typedef struct {
  boolean_T saturation;                /* '<S7>/MATLAB Function' */
} B_MATLABFunction_Sensors_and__T;

/* Block signals for system '<S178>/Enabled Subsystem' */
typedef struct {
  real_T OutportBufferForOut1;         /* '<S179>/Constant' */
} B_EnabledSubsystem_Sensors_an_T;

/* Block states (default storage) for system '<S178>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S178>/Enabled Subsystem' */
} DW_EnabledSubsystem_Sensors_a_T;

/* Block signals for system '<S178>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S180>/In1' */
} B_EnabledSubsystem1_Sensors_a_T;

/* Block states (default storage) for system '<S178>/Enabled Subsystem1' */
typedef struct {
  boolean_T EnabledSubsystem1_MODE;    /* '<S178>/Enabled Subsystem1' */
} DW_EnabledSubsystem1_Sensors__T;

/* Block signals (default storage) */
typedef struct {
  real_T SineWave;                     /* '<S1>/Sine Wave' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T PProdOut;                     /* '<S235>/PProd Out' */
  real_T Integrator;                   /* '<S230>/Integrator' */
  real_T DProdOut;                     /* '<S224>/DProd Out' */
  real_T Filter;                       /* '<S225>/Filter' */
  real_T SumD;                         /* '<S225>/SumD' */
  real_T NProdOut;                     /* '<S233>/NProd Out' */
  real_T Sum_n;                        /* '<S239>/Sum' */
  real_T Saturation;                   /* '<S237>/Saturation' */
  real_T SineWave1;                    /* '<S1>/Sine Wave1' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T PProdOut_m;                   /* '<S283>/PProd Out' */
  real_T Integrator_m;                 /* '<S278>/Integrator' */
  real_T DProdOut_p;                   /* '<S272>/DProd Out' */
  real_T Filter_c;                     /* '<S273>/Filter' */
  real_T SumD_c;                       /* '<S273>/SumD' */
  real_T NProdOut_d;                   /* '<S281>/NProd Out' */
  real_T Sum_nf;                       /* '<S287>/Sum' */
  real_T Saturation_o;                 /* '<S285>/Saturation' */
  real_T switch_ref_constant_sin_1;    /* '<S4>/switch_ref_constant_sin_1' */
  real_T Sum1_j;                       /* '<S4>/Sum1' */
  real_T PProdOut_j;                   /* '<S58>/PProd Out' */
  real_T Integrator_m0;                /* '<S53>/Integrator' */
  real_T DProdOut_b;                   /* '<S47>/DProd Out' */
  real_T Filter_b;                     /* '<S48>/Filter' */
  real_T SumD_c3;                      /* '<S48>/SumD' */
  real_T NProdOut_e;                   /* '<S56>/NProd Out' */
  real_T Sum_k;                        /* '<S62>/Sum' */
  real_T Saturation_m;                 /* '<S60>/Saturation' */
  real_T switch_ref_constant_sin_2;    /* '<S5>/switch_ref_constant_sin_2' */
  real_T Sum2;                         /* '<S5>/Sum2' */
  real_T PProdOut_o;                   /* '<S108>/PProd Out' */
  real_T Integrator_a;                 /* '<S103>/Integrator' */
  real_T DProdOut_pg;                  /* '<S97>/DProd Out' */
  real_T Filter_a;                     /* '<S98>/Filter' */
  real_T SumD_k;                       /* '<S98>/SumD' */
  real_T NProdOut_m;                   /* '<S106>/NProd Out' */
  real_T Sum_o;                        /* '<S112>/Sum' */
  real_T Saturation_l;                 /* '<S110>/Saturation' */
  real_T switch_ref_constant_sin_3;    /* '<S6>/switch_ref_constant_sin_3' */
  real_T Sum3;                         /* '<S6>/Sum3' */
  real_T PProdOut_k;                   /* '<S158>/PProd Out' */
  real_T Integrator_d;                 /* '<S153>/Integrator' */
  real_T DProdOut_k;                   /* '<S147>/DProd Out' */
  real_T Filter_o;                     /* '<S148>/Filter' */
  real_T SumD_e;                       /* '<S148>/SumD' */
  real_T NProdOut_g;                   /* '<S156>/NProd Out' */
  real_T Sum_a;                        /* '<S162>/Sum' */
  real_T Saturation_f;                 /* '<S160>/Saturation' */
  real_T CloseLoop_disable_1;          /* '<S4>/CloseLoop_disable_1' */
  real_T IProdOut;                     /* '<S50>/IProd Out' */
  real_T CloseLoop_disable_2;          /* '<S5>/CloseLoop_disable_2' */
  real_T IProdOut_g;                   /* '<S100>/IProd Out' */
  real_T CloseLoop_disable_3;          /* '<S6>/CloseLoop_disable_3' */
  real_T IProdOut_d;                   /* '<S150>/IProd Out' */
  real_T IProdOut_o;                   /* '<S227>/IProd Out' */
  real_T IProdOut_i;                   /* '<S275>/IProd Out' */
  real_T SFunction1_o1;                /* '<S186>/S-Function1' */
  real_T SFunction1_o2;                /* '<S186>/S-Function1' */
  real_T Inc2Pos;                      /* '<S12>/Inc2Pos' */
  real_T AbsPosition;                  /* '<S12>/AbsPosition' */
  real_T Abs;                          /* '<S188>/Abs' */
  real_T TransferFcn;                  /* '<S188>/Transfer Fcn' */
  real_T mm2m;                         /* '<S12>/mm2m' */
  real_T SFunction1_o1_g;              /* '<S181>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S181>/S-Function1' */
  real_T Inc2Pos_i;                    /* '<S11>/Inc2Pos' */
  real_T AbsPosition_h;                /* '<S11>/AbsPosition' */
  real_T Abs_l;                        /* '<S183>/Abs' */
  real_T TransferFcn_d;                /* '<S183>/Transfer Fcn' */
  real_T mm2m_p;                       /* '<S11>/mm2m' */
  real_T SFunction1_o1_o;              /* '<S176>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S176>/S-Function1' */
  real_T Inc2Pos_g;                    /* '<S10>/Inc2Pos' */
  real_T AbsPosition_hs;               /* '<S10>/AbsPosition' */
  real_T Abs_c;                        /* '<S178>/Abs' */
  real_T TransferFcn_f;                /* '<S178>/Transfer Fcn' */
  real_T mm2m_h;                       /* '<S10>/mm2m' */
  real_T Saturation_mt;                /* '<S9>/Saturation' */
  real_T Current2V;                    /* '<S9>/Current2V' */
  real_T DSPscale;                     /* '<S9>/DSPscale' */
  real_T Saturation_li;                /* '<S8>/Saturation' */
  real_T Current2V_a;                  /* '<S8>/Current2V' */
  real_T DSPscale_a;                   /* '<S8>/DSPscale' */
  real_T Saturation_e;                 /* '<S7>/Saturation' */
  real_T Current2V_p;                  /* '<S7>/Current2V' */
  real_T DSPscale_o;                   /* '<S7>/DSPscale' */
  real_T z1;                /* '<S3>/Inverse Kinematics Calculation Function' */
  real_T z2;                /* '<S3>/Inverse Kinematics Calculation Function' */
  real_T z3;                /* '<S3>/Inverse Kinematics Calculation Function' */
  uint32_T SFunction1_o4;              /* '<S195>/S-Function1' */
  uint32_T SFunction1_o1_h[3];         /* '<S194>/S-Function1' */
  uint16_T SFunction1_o6;              /* '<S195>/S-Function1' */
  uint16_T Gain2;                      /* '<S14>/Gain2' */
  uint16_T Gain1;                      /* '<S14>/Gain1' */
  uint8_T SFunction1_o1_n[32];         /* '<S195>/S-Function1' */
  uint8_T SFunction1_o5[4];            /* '<S195>/S-Function1' */
  uint8_T SFunction1_o2_m[4];          /* '<S194>/S-Function1' */
  boolean_T DataTypeConversion;        /* '<S14>/Data Type Conversion' */
  boolean_T actuator_1_RefOutOfBounds; /* '<S2>/actuator_1_RefOutOfBounds' */
  boolean_T actuator_1_SaturationReached;/* '<S2>/actuator_1_SaturationReached' */
  boolean_T actuator_2_RefOutOfBounds; /* '<S2>/actuator_2_RefOutOfBounds' */
  boolean_T actuator_2_SaturationReached;/* '<S2>/actuator_2_SaturationReached' */
  boolean_T actuator_3_RefOutOfBounds; /* '<S2>/actuator_3_RefOutOfBounds' */
  boolean_T actuator_3_SaturationReached;/* '<S2>/actuator_3_SaturationReached' */
  boolean_T RelationalOperator1;       /* '<S188>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S188>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S188>/Logical Operator2' */
  boolean_T RelationalOperator1_p;     /* '<S183>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S183>/Relational Operator' */
  boolean_T LogicalOperator2_k;        /* '<S183>/Logical Operator2' */
  boolean_T RelationalOperator1_b;     /* '<S178>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S178>/Relational Operator' */
  boolean_T LogicalOperator2_c;        /* '<S178>/Logical Operator2' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S188>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S188>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S183>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S183>/Enabled Subsystem' */
  B_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S178>/Enabled Subsystem1' */
  B_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S178>/Enabled Subsystem' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_f;/* '<S9>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction_c;/* '<S8>/MATLAB Function' */
  B_MATLABFunction_Sensors_and__T sf_MATLABFunction;/* '<S7>/MATLAB Function' */
  B_Integratorresetdeterminatio_T sf_Integratorresetdeterminati_l;
                                    /* '<S6>/Integrator reset determination1' */
  B_Integratorresetdeterminatio_T sf_Integratorresetdeterminati_k;
                                     /* '<S5>/Integrator reset determination' */
  B_Integratorresetdeterminatio_T sf_Integratorresetdetermination;
                                    /* '<S4>/Integrator reset determination1' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction3;/* '<S3>/BoundsFunction3' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction2;/* '<S3>/BoundsFunction2' */
  B_BoundsFunction1_Sensors_and_T sf_BoundsFunction1;/* '<S3>/BoundsFunction1' */
} B_Sensors_and_actuators_ball__T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Sum_DWORK1;                   /* '<Root>/Sum' */
  struct {
    real_T RECEIVED_FRAMES;
  } SFunction1_RWORK;                  /* '<S195>/S-Function1' */

  struct {
    real_T RX_DROPPED_FRAMES[2];
  } SFunction1_RWORK_c;                /* '<S196>/S-Function1' */

  uint32_T Add1_DWORK1;                /* '<S14>/Add1' */
  uint16_T Add_DWORK1;                 /* '<S14>/Add' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_j;/* '<S188>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_c;/* '<S188>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1_m;/* '<S183>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem_h;/* '<S183>/Enabled Subsystem' */
  DW_EnabledSubsystem1_Sensors__T EnabledSubsystem1;/* '<S178>/Enabled Subsystem1' */
  DW_EnabledSubsystem_Sensors_a_T EnabledSubsystem;/* '<S178>/Enabled Subsystem' */
} DW_Sensors_and_actuators_ball_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S230>/Integrator' */
  real_T Filter_CSTATE;                /* '<S225>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S278>/Integrator' */
  real_T Filter_CSTATE_d;              /* '<S273>/Filter' */
  real_T Integrator_CSTATE_c;          /* '<S53>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S48>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S103>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S98>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S153>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S148>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S188>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S183>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S178>/Transfer Fcn' */
} X_Sensors_and_actuators_ball__T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S230>/Integrator' */
  real_T Filter_CSTATE;                /* '<S225>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S278>/Integrator' */
  real_T Filter_CSTATE_d;              /* '<S273>/Filter' */
  real_T Integrator_CSTATE_c;          /* '<S53>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S48>/Filter' */
  real_T Integrator_CSTATE_b;          /* '<S103>/Integrator' */
  real_T Filter_CSTATE_j;              /* '<S98>/Filter' */
  real_T Integrator_CSTATE_k;          /* '<S153>/Integrator' */
  real_T Filter_CSTATE_a;              /* '<S148>/Filter' */
  real_T TransferFcn_CSTATE;           /* '<S188>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_k;         /* '<S183>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S178>/Transfer Fcn' */
} XDot_Sensors_and_actuators_ba_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S230>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S225>/Filter' */
  boolean_T Integrator_CSTATE_h;       /* '<S278>/Integrator' */
  boolean_T Filter_CSTATE_d;           /* '<S273>/Filter' */
  boolean_T Integrator_CSTATE_c;       /* '<S53>/Integrator' */
  boolean_T Filter_CSTATE_g;           /* '<S48>/Filter' */
  boolean_T Integrator_CSTATE_b;       /* '<S103>/Integrator' */
  boolean_T Filter_CSTATE_j;           /* '<S98>/Filter' */
  boolean_T Integrator_CSTATE_k;       /* '<S153>/Integrator' */
  boolean_T Filter_CSTATE_a;           /* '<S148>/Filter' */
  boolean_T TransferFcn_CSTATE;        /* '<S188>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_k;      /* '<S183>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S178>/Transfer Fcn' */
} XDis_Sensors_and_actuators_ba_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S230>/Integrator' */
  ZCSigState Filter_Reset_ZCE;         /* '<S225>/Filter' */
  ZCSigState Integrator_Reset_ZCE_g;   /* '<S278>/Integrator' */
  ZCSigState Filter_Reset_ZCE_p;       /* '<S273>/Filter' */
  ZCSigState Integrator_Reset_ZCE_k;   /* '<S53>/Integrator' */
  ZCSigState Filter_Reset_ZCE_p4;      /* '<S48>/Filter' */
  ZCSigState Integrator_Reset_ZCE_c;   /* '<S103>/Integrator' */
  ZCSigState Filter_Reset_ZCE_l;       /* '<S98>/Filter' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S153>/Integrator' */
  ZCSigState Filter_Reset_ZCE_f;       /* '<S148>/Filter' */
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

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Xpos;                       /* '<Root>/Xpos ' */
  uint16_T Ypos;                       /* '<Root>/Ypos ' */
  uint32_T Status;                     /* '<Root>/Status ' */
  real_T Frames;                       /* '<Root>/Frames ' */
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
  real_T Integrator_reset_mode_2;      /* '<Root>/Integrator_reset_mode_2' */
  real_T Integrator_reset_mode_1;      /* '<Root>/Integrator_reset_mode_1' */
} ExtY_Sensors_and_actuators_ba_T;

/* Parameters for system: '<S178>/Enabled Subsystem' */
struct P_EnabledSubsystem_Sensors_an_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S179>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<S179>/Constant'
                                        */
};

/* Parameters for system: '<S178>/Enabled Subsystem1' */
struct P_EnabledSubsystem1_Sensors_a_T_ {
  real_T Out1_Y0;                      /* Expression: [0]
                                        * Referenced by: '<S180>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Sensors_and_actuators_ball__T_ {
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S225>/Filter'
                               */
  real_T PIDController3_InitialCondition;
                              /* Mask Parameter: PIDController3_InitialCondition
                               * Referenced by: '<S273>/Filter'
                               */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S48>/Filter'
                               */
  real_T PIDController1_InitialConditi_j;
                              /* Mask Parameter: PIDController1_InitialConditi_j
                               * Referenced by: '<S98>/Filter'
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S148>/Filter'
                               */
  real_T PIDController1_InitialCondit_jy;
                              /* Mask Parameter: PIDController1_InitialCondit_jy
                               * Referenced by: '<S230>/Integrator'
                               */
  real_T PIDController3_InitialConditi_d;
                              /* Mask Parameter: PIDController3_InitialConditi_d
                               * Referenced by: '<S278>/Integrator'
                               */
  real_T PIDController_InitialConditio_c;
                              /* Mask Parameter: PIDController_InitialConditio_c
                               * Referenced by: '<S53>/Integrator'
                               */
  real_T PIDController1_InitialCondit_jl;
                              /* Mask Parameter: PIDController1_InitialCondit_jl
                               * Referenced by: '<S103>/Integrator'
                               */
  real_T PIDController2_InitialConditi_o;
                              /* Mask Parameter: PIDController2_InitialConditi_o
                               * Referenced by: '<S153>/Integrator'
                               */
  real_T PIDController1_LowerSaturationL;
                              /* Mask Parameter: PIDController1_LowerSaturationL
                               * Referenced by: '<S237>/Saturation'
                               */
  real_T PIDController3_LowerSaturationL;
                              /* Mask Parameter: PIDController3_LowerSaturationL
                               * Referenced by: '<S285>/Saturation'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S60>/Saturation'
                               */
  real_T PIDController1_LowerSaturatio_h;
                              /* Mask Parameter: PIDController1_LowerSaturatio_h
                               * Referenced by: '<S110>/Saturation'
                               */
  real_T PIDController2_LowerSaturationL;
                              /* Mask Parameter: PIDController2_LowerSaturationL
                               * Referenced by: '<S160>/Saturation'
                               */
  real_T PIDController1_UpperSaturationL;
                              /* Mask Parameter: PIDController1_UpperSaturationL
                               * Referenced by: '<S237>/Saturation'
                               */
  real_T PIDController3_UpperSaturationL;
                              /* Mask Parameter: PIDController3_UpperSaturationL
                               * Referenced by: '<S285>/Saturation'
                               */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S60>/Saturation'
                               */
  real_T PIDController1_UpperSaturatio_l;
                              /* Mask Parameter: PIDController1_UpperSaturatio_l
                               * Referenced by: '<S110>/Saturation'
                               */
  real_T PIDController2_UpperSaturationL;
                              /* Mask Parameter: PIDController2_UpperSaturationL
                               * Referenced by: '<S160>/Saturation'
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
                                        * Referenced by: '<S178>/Const'
                                        */
  real_T Const1_Value;                 /* Expression: -0.98
                                        * Referenced by: '<S178>/Const1'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S178>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S178>/Transfer Fcn'
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
                                        * Referenced by: '<S183>/Const'
                                        */
  real_T Const1_Value_k;               /* Expression: -0.98
                                        * Referenced by: '<S183>/Const1'
                                        */
  real_T TransferFcn_A_b;              /* Computed Parameter: TransferFcn_A_b
                                        * Referenced by: '<S183>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_j;              /* Computed Parameter: TransferFcn_C_j
                                        * Referenced by: '<S183>/Transfer Fcn'
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
                                        * Referenced by: '<S188>/Const'
                                        */
  real_T Const1_Value_n;               /* Expression: -0.98
                                        * Referenced by: '<S188>/Const1'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S188>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S188>/Transfer Fcn'
                                        */
  real_T mm2m_Gain_a;                  /* Expression: 0.001
                                        * Referenced by: '<S12>/mm2m'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Init_1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_1'
                                        */
  real_T constant_ref_1_Value;         /* Expression: 0
                                        * Referenced by: '<S4>/constant_ref_1'
                                        */
  real_T enable_constant_ref_1_Value;  /* Expression: 1
                                        * Referenced by: '<S4>/enable_constant_ref_1'
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
  real_T Actuator_controller_status_1_Va;/* Expression: 0
                                          * Referenced by: '<S4>/Actuator_controller_status_1'
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
  real_T Init_2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Init_2'
                                        */
  real_T constant_ref_2_Value;         /* Expression: 0
                                        * Referenced by: '<S5>/constant_ref_2'
                                        */
  real_T enable_constant_ref_2_Value;  /* Expression: 1
                                        * Referenced by: '<S5>/enable_constant_ref_2'
                                        */
  real_T switch_ref_constant_sin_2_Thres;/* Expression: 0.5
                                          * Referenced by: '<S5>/switch_ref_constant_sin_2'
                                          */
  real_T Actuator_controller_status_2_Va;/* Expression: 0
                                          * Referenced by: '<S5>/Actuator_controller_status_2'
                                          */
  real_T reset_integrator_2_Value;     /* Expression: 0
                                        * Referenced by: '<S5>/reset_integrator_2'
                                        */
  real_T init_3_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/init_3'
                                        */
  real_T constant_ref_3_Value;         /* Expression: 0
                                        * Referenced by: '<S6>/constant_ref_3'
                                        */
  real_T enable_constant_ref_3_Value;  /* Expression: 1
                                        * Referenced by: '<S6>/enable_constant_ref_3'
                                        */
  real_T switch_ref_constant_sin_3_Thres;/* Expression: 0.5
                                          * Referenced by: '<S6>/switch_ref_constant_sin_3'
                                          */
  real_T Actuator_controller_status_3_Va;/* Expression: 0
                                          * Referenced by: '<S6>/Actuator_controller_status_3'
                                          */
  real_T reset_integrator_3_Value;     /* Expression: 0
                                        * Referenced by: '<S6>/reset_integrator_3'
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
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_j;/* '<S188>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_c;/* '<S188>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1_m;/* '<S183>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem_h;/* '<S183>/Enabled Subsystem' */
  P_EnabledSubsystem1_Sensors_a_T EnabledSubsystem1;/* '<S178>/Enabled Subsystem1' */
  P_EnabledSubsystem_Sensors_an_T EnabledSubsystem;/* '<S178>/Enabled Subsystem' */
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
 * '<S20>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/Integrator reset determination1'
 * '<S21>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller'
 * '<S22>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Anti-windup'
 * '<S23>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/D Gain'
 * '<S24>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter'
 * '<S25>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter ICs'
 * '<S26>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/I Gain'
 * '<S27>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain'
 * '<S28>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain Fdbk'
 * '<S29>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator'
 * '<S30>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator ICs'
 * '<S31>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Copy'
 * '<S32>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Gain'
 * '<S33>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/P Copy'
 * '<S34>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Parallel P Gain'
 * '<S35>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Reset Signal'
 * '<S36>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation'
 * '<S37>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation Fdbk'
 * '<S38>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum'
 * '<S39>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum Fdbk'
 * '<S40>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode'
 * '<S41>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode Sum'
 * '<S42>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Integral'
 * '<S43>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Ngain'
 * '<S44>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/postSat Signal'
 * '<S45>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/preSat Signal'
 * '<S46>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Anti-windup/Passthrough'
 * '<S47>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/D Gain/External Parameters'
 * '<S48>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter/Cont. Filter'
 * '<S49>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S50>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/I Gain/External Parameters'
 * '<S51>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain/Passthrough'
 * '<S52>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S53>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator/Continuous'
 * '<S54>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Integrator ICs/Internal IC'
 * '<S55>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Copy/Disabled'
 * '<S56>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/N Gain/External Parameters'
 * '<S57>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/P Copy/Disabled'
 * '<S58>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Parallel P Gain/External Parameters'
 * '<S59>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Reset Signal/External Reset'
 * '<S60>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation/Enabled'
 * '<S61>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Saturation Fdbk/Disabled'
 * '<S62>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum/Sum_PID'
 * '<S63>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Sum Fdbk/Disabled'
 * '<S64>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode/Disabled'
 * '<S65>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S66>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Integral/Passthrough'
 * '<S67>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S68>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/postSat Signal/Forward_Path'
 * '<S69>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor1/PID Controller/preSat Signal/Forward_Path'
 * '<S70>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/Integrator reset determination'
 * '<S71>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1'
 * '<S72>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Anti-windup'
 * '<S73>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/D Gain'
 * '<S74>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter'
 * '<S75>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter ICs'
 * '<S76>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/I Gain'
 * '<S77>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain'
 * '<S78>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain Fdbk'
 * '<S79>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator'
 * '<S80>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator ICs'
 * '<S81>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Copy'
 * '<S82>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Gain'
 * '<S83>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/P Copy'
 * '<S84>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Parallel P Gain'
 * '<S85>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Reset Signal'
 * '<S86>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation'
 * '<S87>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation Fdbk'
 * '<S88>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum'
 * '<S89>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum Fdbk'
 * '<S90>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode'
 * '<S91>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode Sum'
 * '<S92>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Integral'
 * '<S93>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Ngain'
 * '<S94>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/postSat Signal'
 * '<S95>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/preSat Signal'
 * '<S96>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Anti-windup/Passthrough'
 * '<S97>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/D Gain/External Parameters'
 * '<S98>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter/Cont. Filter'
 * '<S99>'  : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S100>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/I Gain/External Parameters'
 * '<S101>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain/Passthrough'
 * '<S102>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S103>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator/Continuous'
 * '<S104>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Integrator ICs/Internal IC'
 * '<S105>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Copy/Disabled'
 * '<S106>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/N Gain/External Parameters'
 * '<S107>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/P Copy/Disabled'
 * '<S108>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Parallel P Gain/External Parameters'
 * '<S109>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Reset Signal/External Reset'
 * '<S110>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation/Enabled'
 * '<S111>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Saturation Fdbk/Disabled'
 * '<S112>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum/Sum_PID'
 * '<S113>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Sum Fdbk/Disabled'
 * '<S114>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode/Disabled'
 * '<S115>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S116>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S117>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S118>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/postSat Signal/Forward_Path'
 * '<S119>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor2/PID Controller1/preSat Signal/Forward_Path'
 * '<S120>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/Integrator reset determination1'
 * '<S121>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2'
 * '<S122>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Anti-windup'
 * '<S123>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/D Gain'
 * '<S124>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter'
 * '<S125>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter ICs'
 * '<S126>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/I Gain'
 * '<S127>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain'
 * '<S128>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain Fdbk'
 * '<S129>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator'
 * '<S130>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator ICs'
 * '<S131>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Copy'
 * '<S132>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Gain'
 * '<S133>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/P Copy'
 * '<S134>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Parallel P Gain'
 * '<S135>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Reset Signal'
 * '<S136>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation'
 * '<S137>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation Fdbk'
 * '<S138>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum'
 * '<S139>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum Fdbk'
 * '<S140>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode'
 * '<S141>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode Sum'
 * '<S142>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Integral'
 * '<S143>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Ngain'
 * '<S144>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/postSat Signal'
 * '<S145>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/preSat Signal'
 * '<S146>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Anti-windup/Passthrough'
 * '<S147>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/D Gain/External Parameters'
 * '<S148>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter/Cont. Filter'
 * '<S149>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S150>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/I Gain/External Parameters'
 * '<S151>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain/Passthrough'
 * '<S152>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S153>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator/Continuous'
 * '<S154>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Integrator ICs/Internal IC'
 * '<S155>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Copy/Disabled'
 * '<S156>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/N Gain/External Parameters'
 * '<S157>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/P Copy/Disabled'
 * '<S158>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Parallel P Gain/External Parameters'
 * '<S159>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Reset Signal/External Reset'
 * '<S160>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation/Enabled'
 * '<S161>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Saturation Fdbk/Disabled'
 * '<S162>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum/Sum_PID'
 * '<S163>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Sum Fdbk/Disabled'
 * '<S164>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode/Disabled'
 * '<S165>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S166>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Integral/Passthrough'
 * '<S167>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S168>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/postSat Signal/Forward_Path'
 * '<S169>' : 'Sensors_and_actuators_ball_and_plate_2022b/Motor3/PID Controller2/preSat Signal/Forward_Path'
 * '<S170>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/DAC_CLASS1_BL1'
 * '<S171>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier1/MATLAB Function'
 * '<S172>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/DAC_CLASS1_BL1'
 * '<S173>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier2/MATLAB Function'
 * '<S174>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/DAC_CLASS1_BL1'
 * '<S175>' : 'Sensors_and_actuators_ball_and_plate_2022b/Outputs to Amplifier3/MATLAB Function'
 * '<S176>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_BL1'
 * '<S177>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/EMC_ENCODER_POS_SET_BL1'
 * '<S178>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial'
 * '<S179>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem'
 * '<S180>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement1/Initial/Enabled Subsystem1'
 * '<S181>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_BL1'
 * '<S182>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/EMC_ENCODER_POS_SET_BL1'
 * '<S183>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial'
 * '<S184>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem'
 * '<S185>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement2/Initial/Enabled Subsystem1'
 * '<S186>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_BL1'
 * '<S187>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/EMC_ENCODER_POS_SET_BL1'
 * '<S188>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial'
 * '<S189>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem'
 * '<S190>' : 'Sensors_and_actuators_ball_and_plate_2022b/Position Measurement3/Initial/Enabled Subsystem1'
 * '<S191>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store'
 * '<S192>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store'
 * '<S193>' : 'Sensors_and_actuators_ball_and_plate_2022b/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S194>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_SETUP_BL1'
 * '<S195>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_UDP_RX_BL1'
 * '<S196>' : 'Sensors_and_actuators_ball_and_plate_2022b/Subsystem1/ETHERNET_UDP_SETUP_BL1'
 * '<S197>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1'
 * '<S198>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3'
 * '<S199>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Anti-windup'
 * '<S200>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/D Gain'
 * '<S201>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter'
 * '<S202>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter ICs'
 * '<S203>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/I Gain'
 * '<S204>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain'
 * '<S205>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S206>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator'
 * '<S207>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator ICs'
 * '<S208>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Copy'
 * '<S209>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Gain'
 * '<S210>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/P Copy'
 * '<S211>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Parallel P Gain'
 * '<S212>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Reset Signal'
 * '<S213>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation'
 * '<S214>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation Fdbk'
 * '<S215>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum'
 * '<S216>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum Fdbk'
 * '<S217>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode'
 * '<S218>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode Sum'
 * '<S219>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Integral'
 * '<S220>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Ngain'
 * '<S221>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/postSat Signal'
 * '<S222>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/preSat Signal'
 * '<S223>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Anti-windup/Passthrough'
 * '<S224>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/D Gain/External Parameters'
 * '<S225>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter/Cont. Filter'
 * '<S226>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S227>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/I Gain/External Parameters'
 * '<S228>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S229>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S230>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator/Continuous'
 * '<S231>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S232>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Copy/Disabled'
 * '<S233>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/N Gain/External Parameters'
 * '<S234>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/P Copy/Disabled'
 * '<S235>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Parallel P Gain/External Parameters'
 * '<S236>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Reset Signal/External Reset'
 * '<S237>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation/Enabled'
 * '<S238>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S239>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum/Sum_PID'
 * '<S240>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S241>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode/Disabled'
 * '<S242>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S243>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S244>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S245>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S246>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S247>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Anti-windup'
 * '<S248>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/D Gain'
 * '<S249>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter'
 * '<S250>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter ICs'
 * '<S251>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/I Gain'
 * '<S252>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain'
 * '<S253>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain Fdbk'
 * '<S254>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator'
 * '<S255>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator ICs'
 * '<S256>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Copy'
 * '<S257>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Gain'
 * '<S258>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/P Copy'
 * '<S259>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Parallel P Gain'
 * '<S260>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Reset Signal'
 * '<S261>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation'
 * '<S262>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation Fdbk'
 * '<S263>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum'
 * '<S264>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum Fdbk'
 * '<S265>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode'
 * '<S266>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode Sum'
 * '<S267>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Integral'
 * '<S268>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Ngain'
 * '<S269>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/postSat Signal'
 * '<S270>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/preSat Signal'
 * '<S271>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Anti-windup/Passthrough'
 * '<S272>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/D Gain/External Parameters'
 * '<S273>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter/Cont. Filter'
 * '<S274>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Filter ICs/Internal IC - Filter'
 * '<S275>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/I Gain/External Parameters'
 * '<S276>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain/Passthrough'
 * '<S277>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S278>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator/Continuous'
 * '<S279>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Integrator ICs/Internal IC'
 * '<S280>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Copy/Disabled'
 * '<S281>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/N Gain/External Parameters'
 * '<S282>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/P Copy/Disabled'
 * '<S283>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Parallel P Gain/External Parameters'
 * '<S284>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Reset Signal/External Reset'
 * '<S285>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation/Enabled'
 * '<S286>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Saturation Fdbk/Disabled'
 * '<S287>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum/Sum_PID'
 * '<S288>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Sum Fdbk/Disabled'
 * '<S289>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode/Disabled'
 * '<S290>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S291>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Integral/Passthrough'
 * '<S292>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S293>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/postSat Signal/Forward_Path'
 * '<S294>' : 'Sensors_and_actuators_ball_and_plate_2022b/xy_controller/PID Controller3/preSat Signal/Forward_Path'
 */
#endif            /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_h_ */

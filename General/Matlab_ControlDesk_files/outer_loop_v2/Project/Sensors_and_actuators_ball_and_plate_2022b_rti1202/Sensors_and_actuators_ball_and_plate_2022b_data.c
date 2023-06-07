/*
 * Sensors_and_actuators_ball_and_plate_2022b_data.c
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

#include "Sensors_and_actuators_ball_and_plate_2022b.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S223>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController3_InitialCondition
   * Referenced by: '<S271>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S47>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_j
   * Referenced by: '<S96>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialCondition
   * Referenced by: '<S146>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondit_jy
   * Referenced by: '<S228>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController3_InitialConditi_d
   * Referenced by: '<S276>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_c
   * Referenced by: '<S52>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondit_jl
   * Referenced by: '<S101>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialConditi_o
   * Referenced by: '<S151>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_LowerSaturationL
   * Referenced by: '<S235>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController3_LowerSaturationL
   * Referenced by: '<S283>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S59>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController1_LowerSaturatio_h
   * Referenced by: '<S108>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController2_LowerSaturationL
   * Referenced by: '<S158>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController1_UpperSaturationL
   * Referenced by: '<S235>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController3_UpperSaturationL
   * Referenced by: '<S283>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S59>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController1_UpperSaturatio_l
   * Referenced by: '<S108>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController2_UpperSaturationL
   * Referenced by: '<S158>/Saturation'
   */
  3.0,

  /* Expression: 3
   * Referenced by: '<S7>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S7>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S7>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S7>/DSPscale'
   */
  0.1,

  /* Expression: 3
   * Referenced by: '<S8>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S8>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S8>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S8>/DSPscale'
   */
  0.1,

  /* Expression: 3
   * Referenced by: '<S9>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S9>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S9>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S9>/DSPscale'
   */
  0.1,

  /* Expression: 10
   * Referenced by: '<S10>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S10>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S10>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S10>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S176>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S176>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S176>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S176>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S10>/mm2m'
   */
  0.001,

  /* Expression: 10
   * Referenced by: '<S11>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S11>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S11>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S11>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S181>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S181>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S181>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S181>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S11>/mm2m'
   */
  0.001,

  /* Expression: 10
   * Referenced by: '<S12>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S12>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S12>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S12>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S186>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S186>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S186>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S186>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S12>/mm2m'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<Root>/Init_1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S14>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Init_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/init_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/constant_ref_1'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S1>/Sine Wave'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S1>/Sine Wave'
   */
  0.0,

  /* Expression: (1/5)*2*pi
   * Referenced by: '<S1>/Sine Wave'
   */
  1.2566370614359172,

  /* Expression: pi/2
   * Referenced by: '<S1>/Sine Wave'
   */
  1.5707963267948966,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_P1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_D1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_N1'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S1>/Sine Wave1'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S1>/Sine Wave1'
   */
  0.0,

  /* Expression: (1/5)*2*pi
   * Referenced by: '<S1>/Sine Wave1'
   */
  1.2566370614359172,

  /* Expression: 0
   * Referenced by: '<S1>/Sine Wave1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_P'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_D'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_N'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S4>/switch_ref_constant_sin_1'
   */
  0.5,

  /* Expression: 71.1953
   * Referenced by: '<Root>/Controller_P'
   */
  71.1953,

  /* Expression: 0
   * Referenced by: '<S4>/reset_integrator_1'
   */
  0.0,

  /* Expression: 4.2346
   * Referenced by: '<Root>/Controller_D'
   */
  4.2346,

  /* Expression: 79.4328
   * Referenced by: '<Root>/Controller_N'
   */
  79.4328,

  /* Expression: 0.5
   * Referenced by: '<S4>/controller_disable_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S5>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/constant_ref_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/switch_ref_constant_sin_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S5>/reset_integrator_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/controller_disable_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/constant_ref_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S6>/switch_ref_constant_sin_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/reset_integrator_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S6>/controller_disable_3'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S4>/CloseLoop_disable_1'
   */
  0.5,

  /* Expression: 47.4209
   * Referenced by: '<Root>/Controller_I'
   */
  47.4209,

  /* Expression: 0.5
   * Referenced by: '<S5>/CloseLoop_disable_2'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S6>/CloseLoop_disable_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_I1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Controller2_I'
   */
  0.0,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S14>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S14>/Gain1'
   */
  128U,

  /* Start of '<S186>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S188>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S186>/Enabled Subsystem1' */

  /* Start of '<S186>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S187>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S187>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S186>/Enabled Subsystem' */

  /* Start of '<S181>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S183>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S181>/Enabled Subsystem1' */

  /* Start of '<S181>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S182>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S182>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S181>/Enabled Subsystem' */

  /* Start of '<S176>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S178>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S176>/Enabled Subsystem1' */

  /* Start of '<S176>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S177>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S177>/Constant'
     */
    -1.0
  }
  /* End of '<S176>/Enabled Subsystem' */
};

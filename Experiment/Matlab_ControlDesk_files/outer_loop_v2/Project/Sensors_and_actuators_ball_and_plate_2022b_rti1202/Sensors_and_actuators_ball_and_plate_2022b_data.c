/*
 * Sensors_and_actuators_ball_and_plate_2022b_data.c
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

#include "Sensors_and_actuators_ball_and_plate_2022b.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S225>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController3_InitialCondition
   * Referenced by: '<S273>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S48>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_j
   * Referenced by: '<S98>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialCondition
   * Referenced by: '<S148>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondit_jy
   * Referenced by: '<S230>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController3_InitialConditi_d
   * Referenced by: '<S278>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_c
   * Referenced by: '<S53>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondit_jl
   * Referenced by: '<S103>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialConditi_o
   * Referenced by: '<S153>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_LowerSaturationL
   * Referenced by: '<S237>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController3_LowerSaturationL
   * Referenced by: '<S285>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S60>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController1_LowerSaturatio_h
   * Referenced by: '<S110>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController2_LowerSaturationL
   * Referenced by: '<S160>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController1_UpperSaturationL
   * Referenced by: '<S237>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController3_UpperSaturationL
   * Referenced by: '<S285>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S60>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController1_UpperSaturatio_l
   * Referenced by: '<S110>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController2_UpperSaturationL
   * Referenced by: '<S160>/Saturation'
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
   * Referenced by: '<S178>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S178>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S178>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S178>/Transfer Fcn'
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
   * Referenced by: '<S183>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S183>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S183>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S183>/Transfer Fcn'
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
   * Referenced by: '<S188>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S188>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S188>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S188>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S12>/mm2m'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<S14>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Init_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/constant_ref_1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/enable_constant_ref_1'
   */
  1.0,

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
   * Referenced by: '<S4>/Actuator_controller_status_1'
   */
  0.0,

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

  /* Expression: 0
   * Referenced by: '<Root>/Init_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/constant_ref_2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S5>/enable_constant_ref_2'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/switch_ref_constant_sin_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S5>/Actuator_controller_status_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/reset_integrator_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/init_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/constant_ref_3'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/enable_constant_ref_3'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S6>/switch_ref_constant_sin_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/Actuator_controller_status_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/reset_integrator_3'
   */
  0.0,

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

  /* Start of '<S188>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S190>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S188>/Enabled Subsystem1' */

  /* Start of '<S188>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S189>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S189>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S188>/Enabled Subsystem' */

  /* Start of '<S183>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S185>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S183>/Enabled Subsystem1' */

  /* Start of '<S183>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S184>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S184>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S183>/Enabled Subsystem' */

  /* Start of '<S178>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S180>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S178>/Enabled Subsystem1' */

  /* Start of '<S178>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S179>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S179>/Constant'
     */
    -1.0
  }
  /* End of '<S178>/Enabled Subsystem' */
};

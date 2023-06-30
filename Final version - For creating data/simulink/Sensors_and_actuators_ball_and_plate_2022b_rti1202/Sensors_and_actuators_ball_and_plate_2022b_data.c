/*
 * Sensors_and_actuators_ball_and_plate_2022b_data.c
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

#include "Sensors_and_actuators_ball_and_plate_2022b.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Variable: a_x
   * Referenced by: '<S1>/Gain3'
   */
  0.0010427807486631017,

  /* Variable: a_y
   * Referenced by: '<S1>/Gain4'
   */
  0.0010863509749303622,

  /* Variable: b_x
   * Referenced by: '<S1>/Constant2'
   */
  0.0,

  /* Variable: b_y
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Variable: center
   * Referenced by:
   *   '<S1>/Constant3'
   *   '<S1>/Constant4'
   */
  { 248.0, 183.5 },

  /* Mask Parameter: PID_outer_theta_InitialConditio
   * Referenced by: '<S282>/Filter'
   */
  0.0,

  /* Mask Parameter: PID_outer_phi_InitialConditionF
   * Referenced by: '<S234>/Filter'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_1_InitialCondition
   * Referenced by: '<S56>/Filter'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_2_InitialCondition
   * Referenced by: '<S106>/Filter'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_3_InitialCondition
   * Referenced by: '<S156>/Filter'
   */
  0.0,

  /* Mask Parameter: PID_outer_theta_InitialCondit_j
   * Referenced by: '<S287>/Integrator'
   */
  0.0,

  /* Mask Parameter: PID_outer_phi_InitialConditio_d
   * Referenced by: '<S239>/Integrator'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_1_InitialConditi_c
   * Referenced by: '<S61>/Integrator'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_2_InitialConditi_j
   * Referenced by: '<S111>/Integrator'
   */
  0.0,

  /* Mask Parameter: Actuator_PID_3_InitialConditi_o
   * Referenced by: '<S161>/Integrator'
   */
  0.0,

  /* Mask Parameter: PID_outer_theta_LowerSaturation
   * Referenced by: '<S294>/Saturation'
   */
  -0.087,

  /* Mask Parameter: PID_outer_phi_LowerSaturationLi
   * Referenced by: '<S246>/Saturation'
   */
  -0.087,

  /* Mask Parameter: Actuator_PID_1_LowerSaturationL
   * Referenced by: '<S68>/Saturation'
   */
  -3.0,

  /* Mask Parameter: Actuator_PID_2_LowerSaturationL
   * Referenced by: '<S118>/Saturation'
   */
  -3.0,

  /* Mask Parameter: Actuator_PID_3_LowerSaturationL
   * Referenced by: '<S168>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PID_outer_theta_UpperSaturation
   * Referenced by: '<S294>/Saturation'
   */
  0.087,

  /* Mask Parameter: PID_outer_phi_UpperSaturationLi
   * Referenced by: '<S246>/Saturation'
   */
  0.087,

  /* Mask Parameter: Actuator_PID_1_UpperSaturationL
   * Referenced by: '<S68>/Saturation'
   */
  3.0,

  /* Mask Parameter: Actuator_PID_2_UpperSaturationL
   * Referenced by: '<S118>/Saturation'
   */
  3.0,

  /* Mask Parameter: Actuator_PID_3_UpperSaturationL
   * Referenced by: '<S168>/Saturation'
   */
  3.0,

  /* Mask Parameter: RepeatingSequence1_rep_seq_y
   * Referenced by: '<S22>/Look-Up Table1'
   */
  { -0.1, 0.0, 0.1, 0.1, 0.1, 0.0, -0.1, -0.1, -0.1 },

  /* Mask Parameter: RepeatingSequence4_rep_seq_y
   * Referenced by: '<S23>/Look-Up Table1'
   */
  { -0.1, -0.1, -0.1, 0.0, 0.1, 0.1, 0.1, 0.0, -0.1 },

  /* Expression: 0
   * Referenced by: '<S5>/constant_ref_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/constant_ref_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/constant_ref_3'
   */
  0.0,

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

  /* Expression: 3
   * Referenced by: '<S10>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S10>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S10>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S10>/DSPscale'
   */
  0.1,

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
   * Referenced by: '<S186>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S186>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S186>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S186>/Transfer Fcn'
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
   * Referenced by: '<S191>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S191>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S191>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S191>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S12>/mm2m'
   */
  0.001,

  /* Expression: 10
   * Referenced by: '<S13>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S13>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S13>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S13>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S196>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S196>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S196>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S196>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S13>/mm2m'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S16>/Switch1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S1>/Constant1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Gain'
   */
  -1.0,

  /* Expression: period
   * Referenced by: '<S22>/Constant'
   */
  8.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S22>/Look-Up Table1'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /* Expression: 0
   * Referenced by: '<S2>/circle_reference_on'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/ref_x_constant'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch'
   */
  0.5,

  /* Expression: -0.4371
   * Referenced by: '<S203>/LQR_K_xPos'
   */
  -0.4371,

  /* Expression: 0
   * Referenced by: '<S2>/Constant1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S1>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Memory1'
   */
  0.0,

  /* Expression: 4
   * Referenced by: '<S1>/velocity_N'
   */
  4.0,

  /* Expression: -0.3586
   * Referenced by: '<S203>/LQR_K_xVel'
   */
  -0.3586,

  /* Expression: 0.087
   * Referenced by: '<S16>/Saturation1'
   */
  0.087,

  /* Expression: -0.087
   * Referenced by: '<S16>/Saturation1'
   */
  -0.087,

  /* Expression: 0
   * Referenced by: '<S16>/switch_outerloop_controller'
   */
  0.0,

  /* Expression: -0.3
   * Referenced by: '<Root>/Outer_P'
   */
  -0.3,

  /* Expression: 0
   * Referenced by: '<S16>/Outerloop_controller_status'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S16>/reset_integrator_outerloop'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S287>/Integrator'
   */
  0.001,

  /* Expression: -0.5
   * Referenced by: '<Root>/Outer_D'
   */
  -0.5,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S282>/Filter'
   */
  0.001,

  /* Expression: 3.1722
   * Referenced by: '<Root>/Outer_N'
   */
  3.1722,

  /* Expression: 0
   * Referenced by: '<S16>/0_ref_outerloop_constant'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Outerloop_theta_switch'
   */
  0.5,

  /* Expression: 0.95
   * Referenced by: '<S15>/forgettingFactor'
   */
  0.95,

  /* Expression: period
   * Referenced by: '<S23>/Constant'
   */
  8.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S23>/Look-Up Table1'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /* Expression: 0
   * Referenced by: '<S2>/ref_y_constant'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch1'
   */
  0.5,

  /* Expression: -0.4371
   * Referenced by: '<S203>/LQR_K_yPos'
   */
  -0.4371,

  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S1>/Memory2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Memory3'
   */
  0.0,

  /* Expression: -0.3586
   * Referenced by: '<S203>/LQR_K_yVel'
   */
  -0.3586,

  /* Expression: 0.087
   * Referenced by: '<S16>/Saturation'
   */
  0.087,

  /* Expression: -0.087
   * Referenced by: '<S16>/Saturation'
   */
  -0.087,

  /* Computed Parameter: Integrator_gainval_e
   * Referenced by: '<S239>/Integrator'
   */
  0.001,

  /* Computed Parameter: Filter_gainval_o
   * Referenced by: '<S234>/Filter'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S16>/Outerloop_phi_switch'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Init_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Init_2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/enable_constant_ref_all'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S5>/enable_constant_ref_1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/ref_1'
   */
  0.5,

  /* Expression: 10
   * Referenced by: '<Root>/Controller_D'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<S5>/Actuator_controller_status_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S5>/reset_integrator_1'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<Root>/Controller_I'
   */
  100.0,

  /* Expression: 80
   * Referenced by: '<Root>/Controller_N'
   */
  80.0,

  /* Expression: 300
   * Referenced by: '<Root>/Controller_P'
   */
  300.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/CloseLoop_disable_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/enable_constant_ref_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S6>/ref_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/Actuator_controller_status_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/reset_integrator_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S6>/CloseLoop_disable_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/init_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/enable_constant_ref_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S7>/ref_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S7>/Actuator_controller_status_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/reset_integrator_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S7>/CloseLoop_disable_3'
   */
  0.5,

  /* Expression: -0.25
   * Referenced by: '<Root>/Outer_I'
   */
  -0.25,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S1>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S1>/Gain2'
   */
  128U,

  /* Start of '<S196>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S198>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S196>/Enabled Subsystem1' */

  /* Start of '<S196>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S197>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S197>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S196>/Enabled Subsystem' */

  /* Start of '<S191>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S193>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S191>/Enabled Subsystem1' */

  /* Start of '<S191>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S192>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S192>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S191>/Enabled Subsystem' */

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
  /* End of '<S186>/Enabled Subsystem' */
};

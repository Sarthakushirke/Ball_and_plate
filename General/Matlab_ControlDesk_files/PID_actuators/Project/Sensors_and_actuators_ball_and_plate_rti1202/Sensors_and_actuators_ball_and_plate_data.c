/*
 * Sensors_and_actuators_ball_and_plate_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Sensors_and_actuators_ball_and_plate".
 *
 * Model version              : 7.12
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Wed May 31 15:27:14 2023
 *
 * Target selection: rti1202.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Sensors_and_actuators_ball_and_plate.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Variable: denc_mi
   * Referenced by:
   *   '<Root>/Discrete Transfer Fcn1'
   *   '<Root>/Discrete Transfer Fcn2'
   */
  { 1.3438139347166456E-8, 1.2665147955292222E-5, 0.0072150240868325893, 1.0 },

  /* Variable: numc_mi
   * Referenced by:
   *   '<Root>/Discrete Transfer Fcn1'
   *   '<Root>/Discrete Transfer Fcn2'
   */
  { 0.0, 0.0, 4.7794277204773374, 100.0 },

  /* Mask Parameter: PIDController_D
   * Referenced by: '<S40>/Derivative Gain'
   */
  5.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S43>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S41>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_f
   * Referenced by: '<S46>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S49>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S51>/Proportional Gain'
   */
  200.0,

  /* Expression: 3
   * Referenced by: '<S4>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S4>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S4>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S4>/DSPscale'
   */
  0.1,

  /* Expression: 3
   * Referenced by: '<S5>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S5>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S5>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S5>/DSPscale'
   */
  0.1,

  /* Expression: 3
   * Referenced by: '<S6>/Saturation'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<S6>/Saturation'
   */
  -3.0,

  /* Expression: 10/3
   * Referenced by: '<S6>/Current2V'
   */
  3.3333333333333335,

  /* Expression: 1/10
   * Referenced by: '<S6>/DSPscale'
   */
  0.1,

  /* Expression: 10
   * Referenced by: '<S8>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S8>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S8>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S8>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S65>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S65>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S65>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S65>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S8>/mm2m'
   */
  0.001,

  /* Expression: 10
   * Referenced by: '<S9>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S9>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S9>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S9>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S70>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S70>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S70>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S70>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S9>/mm2m'
   */
  0.001,

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
   * Referenced by: '<S75>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S75>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S75>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S75>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S10>/mm2m'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_0'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_1'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Init_0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/ref_0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator2'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/Integrator2'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<Root>/Integrator2'
   */
  -3.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_0'
   */
  0.5,

  /* Expression: 4
   * Referenced by: '<Root>/Gain'
   */
  4.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Init_1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant6'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant7'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator1'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/Integrator1'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<Root>/Integrator1'
   */
  -3.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/ref_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/init_2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant9'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant8'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator3'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/Integrator3'
   */
  3.0,

  /* Expression: -3
   * Referenced by: '<Root>/Integrator3'
   */
  -3.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/ref_2'
   */
  0.0,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  128U,

  /* Start of '<S75>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S77>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S75>/Enabled Subsystem1' */

  /* Start of '<S75>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S76>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S76>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S75>/Enabled Subsystem' */

  /* Start of '<S70>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S72>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S70>/Enabled Subsystem1' */

  /* Start of '<S70>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S71>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S71>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S70>/Enabled Subsystem' */

  /* Start of '<S65>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S67>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S65>/Enabled Subsystem1' */

  /* Start of '<S65>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S66>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S66>/Constant'
     */
    -1.0
  }
  /* End of '<S65>/Enabled Subsystem' */
};

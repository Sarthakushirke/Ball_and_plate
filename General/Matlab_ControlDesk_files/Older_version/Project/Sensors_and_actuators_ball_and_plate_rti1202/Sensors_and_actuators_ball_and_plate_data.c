/*
 * Sensors_and_actuators_ball_and_plate_data.c
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

#include "Sensors_and_actuators_ball_and_plate.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Variable: denc_mi
   * Referenced by:
   *   '<Root>/Discrete Transfer Fcn'
   *   '<Root>/Discrete Transfer Fcn1'
   *   '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -2.5146, 2.1473, -0.6253 },

  /* Variable: numc_mi
   * Referenced by:
   *   '<Root>/Discrete Transfer Fcn'
   *   '<Root>/Discrete Transfer Fcn1'
   *   '<Root>/Discrete Transfer Fcn2'
   */
  { 17.8364, 18.0222, -17.4648, -17.6506 },

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
   * Referenced by: '<S7>/Constant'
   */
  10.0,

  /* Expression: 29
   * Referenced by: '<S7>/ZP'
   */
  29.0,

  /* Expression: 8e-3
   * Referenced by: '<S7>/Inc2Pos'
   */
  0.008,

  /* Expression: 0
   * Referenced by: '<S7>/Pos_offset'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S16>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S16>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S16>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S16>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S7>/mm2m'
   */
  0.001,

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
   * Referenced by: '<S21>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S21>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S21>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S21>/Transfer Fcn'
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
   * Referenced by: '<S26>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S26>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S26>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S26>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S9>/mm2m'
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
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_0'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Init_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/ref_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/init_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/ref_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_2'
   */
  0.5,

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

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  128U,

  /* Start of '<S26>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S28>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S26>/Enabled Subsystem1' */

  /* Start of '<S26>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S27>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S27>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S26>/Enabled Subsystem' */

  /* Start of '<S21>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S23>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S21>/Enabled Subsystem1' */

  /* Start of '<S21>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S22>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S22>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S21>/Enabled Subsystem' */

  /* Start of '<S16>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S18>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S16>/Enabled Subsystem1' */

  /* Start of '<S16>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S17>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S17>/Constant'
     */
    -1.0
  }
  /* End of '<S16>/Enabled Subsystem' */
};

/*
 * Sensors_and_actuators_ball_and_plate_2022b_data.c
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

#include "Sensors_and_actuators_ball_and_plate_2022b.h"

/* Block parameters (default storage) */
P_Sensors_and_actuators_ball__T Sensors_and_actuators_ball_an_P = {
  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S43>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S91>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialCondition
   * Referenced by: '<S139>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_c
   * Referenced by: '<S48>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_j
   * Referenced by: '<S96>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController2_InitialConditi_o
   * Referenced by: '<S144>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S55>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController1_LowerSaturationL
   * Referenced by: '<S103>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController2_LowerSaturationL
   * Referenced by: '<S151>/Saturation'
   */
  -3.0,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S55>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController1_UpperSaturationL
   * Referenced by: '<S103>/Saturation'
   */
  3.0,

  /* Mask Parameter: PIDController2_UpperSaturationL
   * Referenced by: '<S151>/Saturation'
   */
  3.0,

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
   * Referenced by: '<S163>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S163>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S163>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S163>/Transfer Fcn'
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
   * Referenced by: '<S168>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S168>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_b
   * Referenced by: '<S168>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_j
   * Referenced by: '<S168>/Transfer Fcn'
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
   * Referenced by: '<S173>/Const'
   */
  0.01,

  /* Expression: -0.98
   * Referenced by: '<S173>/Const1'
   */
  -0.98,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S173>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S173>/Transfer Fcn'
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

  /* Expression: 0
   * Referenced by: '<Root>/Init_2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/init_3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/constant_ref_1'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<Root>/Sine Wave'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: 0.75
   * Referenced by: '<Root>/Sine Wave'
   */
  0.75,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: 0.03
   * Referenced by: '<Root>/Saturation'
   */
  0.03,

  /* Expression: -0.03
   * Referenced by: '<Root>/Saturation'
   */
  -0.03,

  /* Expression: 0.5
   * Referenced by: '<Root>/switch_ref_constant_sin_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Controller_P'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Controller_D'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Controller_N'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/constant_ref_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/switch_ref_constant_sin_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/constant_ref_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/switch_ref_constant_sin_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/reset_integrator_3'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/controller_disable_3'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_1'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_2'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/CloseLoop_disable_3'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Controller_I'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  128U,

  /* Start of '<S173>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S175>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S173>/Enabled Subsystem1' */

  /* Start of '<S173>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S174>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S174>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S173>/Enabled Subsystem' */

  /* Start of '<S168>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S170>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S168>/Enabled Subsystem1' */

  /* Start of '<S168>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S169>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S169>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S168>/Enabled Subsystem' */

  /* Start of '<S163>/Enabled Subsystem1' */
  {
    /* Expression: [0]
     * Referenced by: '<S165>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S163>/Enabled Subsystem1' */

  /* Start of '<S163>/Enabled Subsystem' */
  {
    /* Expression: [0]
     * Referenced by: '<S164>/Out1'
     */
    0.0,

    /* Expression: -1
     * Referenced by: '<S164>/Constant'
     */
    -1.0
  }
  /* End of '<S163>/Enabled Subsystem' */
};

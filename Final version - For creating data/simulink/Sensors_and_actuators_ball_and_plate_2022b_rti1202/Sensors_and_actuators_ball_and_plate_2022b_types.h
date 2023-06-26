/*
 * Sensors_and_actuators_ball_and_plate_2022b_types.h
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

#ifndef RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_types_h_
#define RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_xm5q3dGCROLmOPhUk992jB
#define struct_tag_xm5q3dGCROLmOPhUk992jB

struct tag_xm5q3dGCROLmOPhUk992jB
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T ForgettingFactor;
  real_T pwN;
  real_T pmN;
  real_T plambda;
};

#endif                                 /* struct_tag_xm5q3dGCROLmOPhUk992jB */

#ifndef typedef_g_dsp_internal_ExponentialMov_T
#define typedef_g_dsp_internal_ExponentialMov_T

typedef struct tag_xm5q3dGCROLmOPhUk992jB g_dsp_internal_ExponentialMov_T;

#endif                             /* typedef_g_dsp_internal_ExponentialMov_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_Sensors_and_actuato_T
#define typedef_cell_wrap_Sensors_and_actuato_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_Sensors_and_actuato_T;

#endif                             /* typedef_cell_wrap_Sensors_and_actuato_T */

#ifndef struct_tag_5vcbTKo11W8xJ63mqsxdWB
#define struct_tag_5vcbTKo11W8xJ63mqsxdWB

struct tag_5vcbTKo11W8xJ63mqsxdWB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_Sensors_and_actuato_T inputVarSize[2];
  real_T ForgettingFactor;
  g_dsp_internal_ExponentialMov_T *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_ExponentialMov_T _pobj0;
};

#endif                                 /* struct_tag_5vcbTKo11W8xJ63mqsxdWB */

#ifndef typedef_dsp_simulink_MovingAverage_Se_T
#define typedef_dsp_simulink_MovingAverage_Se_T

typedef struct tag_5vcbTKo11W8xJ63mqsxdWB dsp_simulink_MovingAverage_Se_T;

#endif                             /* typedef_dsp_simulink_MovingAverage_Se_T */

/* Parameters for system: '<S186>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_Sensors_an_T_ P_EnabledSubsystem_Sensors_an_T;

/* Parameters for system: '<S186>/Enabled Subsystem1' */
typedef struct P_EnabledSubsystem1_Sensors_a_T_ P_EnabledSubsystem1_Sensors_a_T;

/* Parameters (default storage) */
typedef struct P_Sensors_and_actuators_ball__T_ P_Sensors_and_actuators_ball__T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Sensors_and_actuators_T RT_MODEL_Sensors_and_actuator_T;

#endif      /* RTW_HEADER_Sensors_and_actuators_ball_and_plate_2022b_types_h_ */

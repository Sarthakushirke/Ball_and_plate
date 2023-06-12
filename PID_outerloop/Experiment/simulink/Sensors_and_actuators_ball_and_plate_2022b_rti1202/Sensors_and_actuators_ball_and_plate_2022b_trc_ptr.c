/***************************************************************************

   Source file Sensors_and_actuators_ball_and_plate_2022b_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1202 7.15 (02-Nov-2020)
   Mon Jun 12 18:55:09 2023

   Copyright 2023, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Sensors_and_actuators_ball_and_plate_2022b_trc_ptr.h"
#include "Sensors_and_actuators_ball_and_plate_2022b.h"
#include "Sensors_and_actuators_ball_and_plate_2022b_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 = NULL;
volatile uint32_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
  NULL;
volatile uint16_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_uint16_T_2 =
  NULL;
volatile uint8_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_uint8_T_3 =
  NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_4 =
  NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_5 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_6 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_7 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_8 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_9 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_10 = NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_11 =
  NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_12 =
  NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_13 =
  NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_14 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_15 = NULL;
volatile real_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_16 = NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_17 =
  NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_18 =
  NULL;
volatile boolean_T *p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_19 =
  NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 = NULL;
volatile uint8_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_uint8_T_1 =
  NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_2 = NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_3 = NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_4 = NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_5 = NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_6 = NULL;
volatile real_T *p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_7 = NULL;
volatile real_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 = NULL;
volatile uint32_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
  NULL;
volatile uint16_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_uint16_T_2 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_3 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_4 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_5 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_6 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_7 =
  NULL;
volatile boolean_T *p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_8 =
  NULL;
volatile real_T *p_3_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 = NULL;
volatile real_T *p_5_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 = NULL;
volatile uint32_T *p_5_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
  NULL;
volatile real_T *p_5_Sensors_and_actuators_ball_and_plate_2022b_real_T_2 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 =
    &Sensors_and_actuators_ball_an_B.Sum1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
    &Sensors_and_actuators_ball_an_B.SFunction1_o4;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_uint16_T_2 =
    &Sensors_and_actuators_ball_an_B.SFunction1_o6;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_uint8_T_3 =
    &Sensors_and_actuators_ball_an_B.SFunction1_o1_n[0];
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_4 =
    &Sensors_and_actuators_ball_an_B.DataTypeConversion;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_5 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_j.In1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_6 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem_c.OutportBufferForOut1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_7 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1_m.In1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_8 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem_h.OutportBufferForOut1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_9 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem1.In1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_10 =
    &Sensors_and_actuators_ball_an_B.EnabledSubsystem.OutportBufferForOut1;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_11 =
    &Sensors_and_actuators_ball_an_B.sf_MATLABFunction_f.saturation;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_12 =
    &Sensors_and_actuators_ball_an_B.sf_MATLABFunction_c.saturation;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_13 =
    &Sensors_and_actuators_ball_an_B.sf_MATLABFunction.saturation;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_14 =
    &Sensors_and_actuators_ball_an_B.sf_Integratorresetdeterminati_l.y;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_15 =
    &Sensors_and_actuators_ball_an_B.sf_Integratorresetdeterminati_k.y;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_real_T_16 =
    &Sensors_and_actuators_ball_an_B.sf_Integratorresetdetermination.y;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_17 =
    &Sensors_and_actuators_ball_an_B.sf_BoundsFunction3.outOfBounds;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_18 =
    &Sensors_and_actuators_ball_an_B.sf_BoundsFunction2.outOfBounds;
  p_0_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_19 =
    &Sensors_and_actuators_ball_an_B.sf_BoundsFunction1.outOfBounds;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 =
    &Sensors_and_actuators_ball_an_P.a_x;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_uint8_T_1 =
    &Sensors_and_actuators_ball_an_P.Gain1_Gain;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_2 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_j.Out1_Y0;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_3 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem_c.Out1_Y0;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_4 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem1_m.Out1_Y0;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_5 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem_h.Out1_Y0;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_6 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem1.Out1_Y0;
  p_1_Sensors_and_actuators_ball_and_plate_2022b_real_T_7 =
    &Sensors_and_actuators_ball_an_P.EnabledSubsystem.Out1_Y0;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 =
    &Sensors_and_actuators_ball_a_DW.Sum1_DWORK1;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
    &Sensors_and_actuators_ball_a_DW.Add1_DWORK1;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_uint16_T_2 =
    &Sensors_and_actuators_ball_a_DW.Add_DWORK1;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_3 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_j.EnabledSubsystem1_MODE;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_4 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_c.EnabledSubsystem_MODE;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_5 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1_m.EnabledSubsystem1_MODE;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_6 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem_h.EnabledSubsystem_MODE;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_7 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem1.EnabledSubsystem1_MODE;
  p_2_Sensors_and_actuators_ball_and_plate_2022b_boolean_T_8 =
    &Sensors_and_actuators_ball_a_DW.EnabledSubsystem.EnabledSubsystem_MODE;
  p_3_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 =
    &Sensors_and_actuators_ball_an_X.Integrator_CSTATE;
  p_5_Sensors_and_actuators_ball_and_plate_2022b_real_T_0 =
    &Sensors_and_actuators_ball_an_Y.Xpos;
  p_5_Sensors_and_actuators_ball_and_plate_2022b_uint32_T_1 =
    &Sensors_and_actuators_ball_an_Y.Status;
  p_5_Sensors_and_actuators_ball_and_plate_2022b_real_T_2 =
    &Sensors_and_actuators_ball_an_Y.Frames;
}

void Sensors_and_actuators_ball_and_plate_2022b_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}

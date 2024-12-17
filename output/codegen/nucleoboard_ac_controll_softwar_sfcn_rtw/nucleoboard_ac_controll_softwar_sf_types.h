/*
 * nucleoboard_ac_controll_softwar_sf_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "nucleoboard_ac_controll_softwar_sf".
 *
 * Model version              : 1.50
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Tue Dec 17 18:12:01 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_nucleoboard_ac_controll_softwar_sf_types_h_
#define RTW_HEADER_nucleoboard_ac_controll_softwar_sf_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<S4>/Digital Write7' */
#include "MW_SVD.h"
#ifndef struct_tag_KxFW01GBdhqk5JOEHU3GlD
#define struct_tag_KxFW01GBdhqk5JOEHU3GlD

struct tag_KxFW01GBdhqk5JOEHU3GlD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /* struct_tag_KxFW01GBdhqk5JOEHU3GlD */

#ifndef typedef_mbed_DigitalWrite_nucleoboard_T
#define typedef_mbed_DigitalWrite_nucleoboard_T

typedef struct tag_KxFW01GBdhqk5JOEHU3GlD mbed_DigitalWrite_nucleoboard_T;

#endif                             /* typedef_mbed_DigitalWrite_nucleoboard_T */

/* Parameters (default storage) */
typedef struct P_nucleoboard_ac_controll_softwar_T_
  P_nucleoboard_ac_controll_softwar_T;

#endif              /* RTW_HEADER_nucleoboard_ac_controll_softwar_sf_types_h_ */

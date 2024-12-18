/*
 * nucleoboard_ac_controll_softwar_sf_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "nucleoboard_ac_controll_softwar_sf".
 *
 * Model version              : 1.49
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Dec 18 12:46:00 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "nucleoboard_ac_controll_softwar_sf.h"
#include "nucleoboard_ac_controll_softwar_sf_private.h"

/* Block parameters (default storage) */
P_nucleoboard_ac_controll_softwar_T nucleoboard_ac_controll_softwar_DefaultP = {
  /* Variable: K_p
   * Referenced by: '<S2>/Constant'
   */
  1000U,

  /* Variable: T_n
   * Referenced by: '<S2>/Constant1'
   */
  1800U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S7>/Out1'
   */
  0.0,

  /* Computed Parameter: Out1_Y0_p
   * Referenced by: '<S8>/Out1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S10>/Signal Generator'
   */
  1.0,

  /* Expression: 15
   * Referenced by: '<S10>/Signal Generator'
   */
  15.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0055555555555555558,

  /* Expression: 0
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S5>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S6>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S11>/Signal Generator'
   */
  1.0,

  /* Expression: 60
   * Referenced by: '<S11>/Signal Generator'
   */
  60.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant'
   */
  0.0,

  /* Computed Parameter: Q_Y0
   * Referenced by: '<S13>/Q'
   */
  false,

  /* Computed Parameter: Q_Y0_k
   * Referenced by: '<S13>/!Q'
   */
  true
};

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Klimaanlage_data.c
 *
 * Code generated for Simulink model 'Klimaanlage'.
 *
 * Model version                  : 1.34
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Nov 25 23:31:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Klimaanlage.h"

/* Block parameters (default storage) */
P rtP = {
  /* Variable: C
   * Referenced by: '<S2>/C'
   */
  6000.0,

  /* Variable: K_p
   * Referenced by: '<S4>/Constant'
   */
  5000.0,

  /* Variable: LowerUserTemp
   * Referenced by:
   *   '<S12>/Constant'
   *   '<S12>/Gain'
   */
  16.0,

  /* Variable: Quant
   * Referenced by: '<S12>/Gain'
   */
  1024.0,

  /* Variable: R
   * Referenced by: '<S2>/R'
   */
  0.3,

  /* Variable: T_a
   * Referenced by: '<Root>/Constant1'
   */
  5.0,

  /* Variable: T_i_start
   * Referenced by: '<Root>/Constant3'
   */
  10.0,

  /* Variable: T_n
   * Referenced by: '<S4>/Constant1'
   */
  1800.0,

  /* Variable: UpperUserTemp
   * Referenced by: '<S12>/Gain'
   */
  28.0,

  /* Expression: -1
   * Referenced by: '<S1>/Analog Input'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Digital Read'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Digital Read1'
   */
  -1.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S9>/Out1'
   */
  0.0,

  /* Computed Parameter: Out1_Y0_k
   * Referenced by: '<S10>/Out1'
   */
  0.0,

  /* Expression: 25
   * Referenced by: '<S6>/Constant'
   */
  25.0,

  /* Expression: 1
   * Referenced by: '<S11>/Signal Generator'
   */
  1.0,

  /* Expression: 100
   * Referenced by: '<S11>/Signal Generator'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S8>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S5>/Constant'
   */
  0.0,

  /* Computed Parameter: Q_Y0
   * Referenced by: '<S15>/Q'
   */
  false,

  /* Computed Parameter: Q_Y0_f
   * Referenced by: '<S15>/!Q'
   */
  true
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

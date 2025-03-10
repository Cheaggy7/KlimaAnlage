/*
 * ac_controller0_sf_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ac_controller0_sf".
 *
 * Model version              : 1.83
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Dec 18 17:08:40 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ac_controller0_sf.h"
#include "ac_controller0_sf_private.h"

/* Block parameters (default storage) */
P_ac_controller0_T ac_controller0_DefaultP = {
  /* Variable: K_p
   * Referenced by: '<S1>/Constant'
   */
  1000U,

  /* Variable: T_n
   * Referenced by: '<S1>/Constant1'
   */
  1800U,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S1>/Discrete-Time Integrator'
   */
  0
};

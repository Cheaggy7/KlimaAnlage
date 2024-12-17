/*
 * ac_controller0_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ac_controller0_sf".
 *
 * Model version              : 1.53
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Tue Dec 17 18:11:42 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ac_controller0_sf_h_
#define RTW_HEADER_ac_controller0_sf_h_
#ifndef ac_controller0_sf_COMMON_INCLUDES_
#define ac_controller0_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                ac_controller0_sf
#define S_FUNCTION_LEVEL               2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* ac_controller0_sf_COMMON_INCLUDES_ */

#include "ac_controller0_sf_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rt_defines.h"

/* Block signals (default storage) */
typedef struct {
  int16_T Sum1;                        /* '<S1>/Sum1' */
} B_ac_controller0_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T *current_temperature;        /* '<Root>/current_temperature' */
  int16_T *sampled_target_temperature; /* '<Root>/sampled_target_temperature' */
} ExternalUPtrs_ac_controller0_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T *Q_CH;                       /* '<Root>/Q_C//H' */
} ExtY_ac_controller0_T;

/* Parameters (default storage) */
struct P_ac_controller0_T_ {
  uint16_T K_p;                        /* Variable: K_p
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint16_T T_n;                        /* Variable: T_n
                                        * Referenced by: '<S1>/Constant1'
                                        */
  int16_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S1>/Discrete-Time Integrator'
                                 */
};

extern P_ac_controller0_T ac_controller0_DefaultP;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('test_ac_controller/ac_controller')    - opens subsystem test_ac_controller/ac_controller
 * hilite_system('test_ac_controller/ac_controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'test_ac_controller'
 * '<S1>'   : 'test_ac_controller/ac_controller'
 */
#endif                                 /* RTW_HEADER_ac_controller0_sf_h_ */

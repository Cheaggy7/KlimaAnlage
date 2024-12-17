/*
 * nucleoboard_ac_controll_softwar_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "nucleoboard_ac_controll_softwar_sf".
 *
 * Model version              : 1.49
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Dec 18 00:22:01 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_nucleoboard_ac_controll_softwar_sf_h_
#define RTW_HEADER_nucleoboard_ac_controll_softwar_sf_h_
#ifndef nucleoboard_ac_controll_softwar_sf_COMMON_INCLUDES_
#define nucleoboard_ac_controll_softwar_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                nucleoboard_ac_controll_softwar_sf
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
#endif                 /* nucleoboard_ac_controll_softwar_sf_COMMON_INCLUDES_ */

#include "nucleoboard_ac_controll_softwar_sf_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <math.h>
#include <stddef.h>
#include "rt_defines.h"

/* Block signals (default storage) */
typedef struct {
  real_T Sum1;                         /* '<S2>/Sum1' */
  real_T SignalGenerator;              /* '<S11>/Signal Generator' */
  real_T HiddenBuf_InsertedFor_DLatch_at;
  real_T In1;                          /* '<S8>/In1' */
  real_T In1_p;                        /* '<S7>/In1' */
  real_T DiscreteTimeIntegrator;       /* '<S2>/Discrete-Time Integrator' */
  real_T Product1;                     /* '<S2>/Product1' */
  real_T Switch;                       /* '<S3>/Switch' */
  uint32_T DataTypeConversion;         /* '<S2>/Data Type Conversion' */
  uint32_T Sum;                        /* '<S2>/Sum' */
  int32_T DataTypeConversion_o;        /* '<S6>/Data Type Conversion' */
  uint16_T Divide;                     /* '<S2>/Divide' */
  boolean_T AND;                       /* '<S3>/AND' */
  boolean_T D;                         /* '<S13>/D' */
  boolean_T AND1;                      /* '<S3>/AND1' */
} B_nucleoboard_ac_controll_softwar_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T *current_temperature;         /* '<Root>/current_temperature' */
  boolean_T *on_off_button;            /* '<Root>/on_off_button' */
  uint16_T *target_temperature;        /* '<Root>/target_temperature' */
} ExternalUPtrs_nucleoboard_ac_controll_softwar_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T *q_out;                       /* '<Root>/q_out' */
  boolean_T *A;                        /* '<Root>/A' */
  boolean_T *B;                        /* '<Root>/B' */
  boolean_T *C;                        /* '<Root>/C' */
  boolean_T *D;                        /* '<Root>/D' */
  boolean_T *E;                        /* '<Root>/E' */
  boolean_T *F;                        /* '<Root>/F' */
  boolean_T *G;                        /* '<Root>/G' */
  boolean_T *select;                   /* '<Root>/select' */
} ExtY_nucleoboard_ac_controll_softwar_T;

/* Parameters (default storage) */
struct P_nucleoboard_ac_controll_softwar_T_ {
  uint16_T K_p;                        /* Variable: K_p
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint16_T T_n;                        /* Variable: T_n
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S7>/Out1'
                                        */
  real_T Out1_Y0_p;                    /* Computed Parameter: Out1_Y0_p
                                        * Referenced by: '<S8>/Out1'
                                        */
  real_T SignalGenerator_Amplitude;    /* Expression: 1
                                        * Referenced by: '<S10>/Signal Generator'
                                        */
  real_T SignalGenerator_Frequency;    /* Expression: 15
                                        * Referenced by: '<S10>/Signal Generator'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S2>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T SignalGenerator_Amplitude_j;  /* Expression: 1
                                        * Referenced by: '<S11>/Signal Generator'
                                        */
  real_T SignalGenerator_Frequency_g;  /* Expression: 60
                                        * Referenced by: '<S11>/Signal Generator'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Q_Y0;                      /* Computed Parameter: Q_Y0
                                        * Referenced by: '<S13>/Q'
                                        */
  boolean_T Q_Y0_k;                    /* Computed Parameter: Q_Y0_k
                                        * Referenced by: '<S13>/!Q'
                                        */
};

extern P_nucleoboard_ac_controll_softwar_T
  nucleoboard_ac_controll_softwar_DefaultP;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S13>/Logic' : Unused code path elimination
 */

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
 * hilite_system('Klimaanlage/nucleoboard_ac_controll_software')    - opens subsystem Klimaanlage/nucleoboard_ac_controll_software
 * hilite_system('Klimaanlage/nucleoboard_ac_controll_software/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Klimaanlage'
 * '<S1>'   : 'Klimaanlage/nucleoboard_ac_controll_software'
 * '<S2>'   : 'Klimaanlage/nucleoboard_ac_controll_software/ac_controller'
 * '<S3>'   : 'Klimaanlage/nucleoboard_ac_controll_software/security_block'
 * '<S4>'   : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface'
 * '<S5>'   : 'Klimaanlage/nucleoboard_ac_controll_software/security_block/Security_PowerConsumption'
 * '<S6>'   : 'Klimaanlage/nucleoboard_ac_controll_software/security_block/Security_Temperature'
 * '<S7>'   : 'Klimaanlage/nucleoboard_ac_controll_software/security_block/Security_PowerConsumption/If Action Subsystem1'
 * '<S8>'   : 'Klimaanlage/nucleoboard_ac_controll_software/security_block/Security_Temperature/If Action Subsystem1'
 * '<S9>'   : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/input_system1'
 * '<S10>'  : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/seg_display'
 * '<S11>'  : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/input_system1/two_state_button'
 * '<S12>'  : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/input_system1/two_state_button/D Latch'
 * '<S13>'  : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/input_system1/two_state_button/D Latch/D Latch'
 * '<S14>'  : 'Klimaanlage/nucleoboard_ac_controll_software/user_interface/seg_display/seg_display_controller'
 */
#endif                    /* RTW_HEADER_nucleoboard_ac_controll_softwar_sf_h_ */

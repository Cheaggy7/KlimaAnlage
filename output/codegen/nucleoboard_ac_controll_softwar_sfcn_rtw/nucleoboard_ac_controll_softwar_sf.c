/*
 * nucleoboard_ac_controll_softwar_sf.c
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

#include "nucleoboard_ac_controll_softwar_sf.h"
#include "nucleoboard_ac_controll_softwar_sf_types.h"
#include "rtwtypes.h"
#include <math.h>
#include "nucleoboard_ac_controll_softwar_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *nucleoboard_ac_controll_softwar_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

/* Forward declaration for local functions */
static real_T nucleoboard_ac_co_rt_roundd_snf(real_T u);

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";
static real_T nucleoboard_ac_co_rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  if (ssIsFirstInitCond(S)) {
    B_nucleoboard_ac_controll_softwar_T *_rtB;
    P_nucleoboard_ac_controll_softwar_T *_rtP;
    _rtP = ((P_nucleoboard_ac_controll_softwar_T *) ssGetLocalDefaultParam(S));
    _rtB = ((B_nucleoboard_ac_controll_softwar_T *) ssGetLocalBlockIO(S));

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 8))[0] = _rtP->DiscreteTimeIntegrator_IC;

    /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem1' */
    /* SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
     *  Outport: '<S7>/Out1'
     */
    _rtB->In1_p = _rtP->Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S6>/If Action Subsystem1' */
    /* SystemInitialize for SignalConversion generated from: '<S8>/In1' incorporates:
     *  Outport: '<S8>/Out1'
     */
    _rtB->In1 = _rtP->Out1_Y0_p;

    /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */

    /* SystemInitialize for Enabled SubSystem: '<S12>/D Latch' */
    /* SystemInitialize for SignalConversion generated from: '<S13>/D' incorporates:
     *  Outport: '<S13>/Q'
     */
    _rtB->D = _rtP->Q_Y0;

    /* End of SystemInitialize for SubSystem: '<S12>/D Latch' */
  } else {
    P_nucleoboard_ac_controll_softwar_T *_rtP;
    _rtP = ((P_nucleoboard_ac_controll_softwar_T *) ssGetLocalDefaultParam(S));

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 8))[0] = _rtP->DiscreteTimeIntegrator_IC;
  }
}

/* Disable for root system: '<Root>' */
#define RTW_GENERATED_DISABLE

static void mdlDisable(SimStruct *S)
{
  /* Disable for If: '<S5>/If' */
  ssSetBlockStateForSolverChangedAtMajorStep(S);
  ((int8_T *)ssGetDWork(S, 9))[0] = -1;

  /* Disable for If: '<S6>/If' */
  ssSetBlockStateForSolverChangedAtMajorStep(S);
  ((int8_T *)ssGetDWork(S, 10))[0] = -1;

  /* Disable for Enabled SubSystem: '<S12>/D Latch' */
  ((boolean_T *)ssGetDWork(S, 19))[0] = false;

  /* End of Disable for SubSystem: '<S12>/D Latch' */
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Check for invalid switching between solver types */
  if (ssIsVariableStepSolver(S)) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "a solver type of variable-step "
                     "because this S-Function was created from a model with "
                     "solver type of fixed-step and it has continuous time blocks. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

  if (fabs(ssGetFixedStepSize(S) - 0.0055555555555555558) > mxGetEps()*100*
      0.0055555555555555558) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "the current fixed step size "
                     "because this S-Function was created from a model with "
                     "a fixed step size of 0.0055555555555555558 and had both "
                     "continuous blocks and discrete blocks running at this rate. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

#endif

  nucleoboard_ac_controll_softwar_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    uint32_T pinname;

    /* Start for MATLABSystem: '<S4>/Digital Write' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 18))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).isInitialized = 1;
    pinname = PA_5;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write1' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 17))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).isInitialized = 1;
    pinname = PA_6;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write2' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 16))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).isInitialized = 1;
    pinname = PA_7;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write3' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 15))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).isInitialized = 1;
    pinname = PA_8;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write4' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 14))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).isInitialized = 1;
    pinname = PA_9;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write5' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 13))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).isInitialized = 1;
    pinname = PA_15;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write6' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 12))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).isInitialized = 1;
    pinname = PB_9;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).isSetupComplete =
      true;

    /* Start for MATLABSystem: '<S4>/Digital Write7' */
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
      matlabCodegenIsDeleted = false;
    ((boolean_T *)ssGetDWork(S, 11))[0] = true;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).isInitialized = 1;
    pinname = PB_0;
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).MW_DIGITALIO_HANDLE =
      MW_digitalIO_open(pinname, 1);
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).isSetupComplete =
      true;

    /* Start for If: '<S5>/If' */
    ((int8_T *)ssGetDWork(S, 9))[0] = -1;

    /* Start for If: '<S6>/If' */
    ((int8_T *)ssGetDWork(S, 10))[0] = -1;

    /* Start for Enabled SubSystem: '<S12>/D Latch' */
    ((boolean_T *)ssGetDWork(S, 19))[0] = false;
    ssSetBlockStateForSolverChangedAtMajorStep(S);

    /* End of Start for SubSystem: '<S12>/D Latch' */
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  real_T rtb_select;
  int32_T i;
  int32_T y_0;
  uint32_T tmp;
  uint16_T y;
  int8_T rtb_segment[7];
  static const int8_T b[70] = { 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0,
    0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0,
    0, 0 };

  static const int8_T c[70] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1,
    1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1,
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1,
    1, 1 };

  B_nucleoboard_ac_controll_softwar_T *_rtB;
  P_nucleoboard_ac_controll_softwar_T *_rtP;
  _rtP = ((P_nucleoboard_ac_controll_softwar_T *) ssGetLocalDefaultParam(S));
  _rtB = ((B_nucleoboard_ac_controll_softwar_T *) ssGetLocalBlockIO(S));
  if (1) {
    /* SignalGenerator: '<S10>/Signal Generator' */
    rtb_select = _rtP->SignalGenerator_Frequency * ssGetT(S);
    if (rtb_select - floor(rtb_select) >= 0.5) {
      /* Switch: '<S3>/Switch' */
      _rtB->Switch = _rtP->SignalGenerator_Amplitude;
    } else {
      /* Switch: '<S3>/Switch' */
      _rtB->Switch = -_rtP->SignalGenerator_Amplitude;
    }

    /* End of SignalGenerator: '<S10>/Signal Generator' */

    /* MATLAB Function: '<S10>/seg_display_controller' */
    if (*((const uint16_T **)ssGetInputPortSignalPtrs(S, 2))[0] < 99) {
      y = *((const uint16_T **)ssGetInputPortSignalPtrs(S, 2))[0];
    } else {
      y = 99U;
    }

    if (_rtB->Switch == 1.0) {
      y_0 = (int32_T)nucleoboard_ac_co_rt_roundd_snf((real_T)y / 10.0);
      for (i = 0; i < 7; i++) {
        rtb_segment[i] = b[10 * i + y_0];
      }

      rtb_select = 1.0;
    } else {
      tmp = (uint16_T)(y - (uint32_T)((int32_T)(y / 10U) * 10)) + 1U;
      if (tmp > 65535U) {
        tmp = 65535U;
      }

      for (i = 0; i < 7; i++) {
        rtb_segment[i] = c[(10 * i + (int32_T)tmp) - 1];
      }

      rtb_select = 0.0;
    }

    /* End of MATLAB Function: '<S10>/seg_display_controller' */

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    _rtB->AND1 = (rtb_segment[6] != 0);

    /* MATLABSystem: '<S4>/Digital Write' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion1'
     */
    _rtB->AND1 = (rtb_segment[5] != 0);

    /* MATLABSystem: '<S4>/Digital Write1' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion2'
     */
    _rtB->AND1 = (rtb_segment[4] != 0);

    /* MATLABSystem: '<S4>/Digital Write2' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion3'
     */
    _rtB->AND1 = (rtb_segment[3] != 0);

    /* MATLABSystem: '<S4>/Digital Write3' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion4'
     */
    _rtB->AND1 = (rtb_segment[2] != 0);

    /* MATLABSystem: '<S4>/Digital Write4' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion5'
     */
    _rtB->AND1 = (rtb_segment[1] != 0);

    /* MATLABSystem: '<S4>/Digital Write5' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion6'
     */
    _rtB->AND1 = (rtb_segment[0] != 0);

    /* MATLABSystem: '<S4>/Digital Write6' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Logic: '<S3>/AND1' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion7'
     */
    _rtB->AND1 = (rtb_select != 0.0);

    /* MATLABSystem: '<S4>/Digital Write7' */
    MW_digitalIO_write((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
                       MW_DIGITALIO_HANDLE, _rtB->AND1);

    /* Sum: '<S2>/Sum1' */
    _rtB->Sum1 = (real_T)*((const uint16_T **)ssGetInputPortSignalPtrs(S, 2))[0]
      - *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0];

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S2>/Product'
     */
    _rtB->Switch = _rtB->Sum1 * (real_T)_rtP->K_p;
  }

  if (ssIsSampleHit(S, 1, 0)) {
    /* Product: '<S2>/Divide' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    if (_rtP->T_n == 0U) {
      /* Product: '<S2>/Divide' */
      _rtB->Divide = MAX_uint16_T;

      /* Divide by zero handler */
    } else {
      /* Product: '<S2>/Divide' incorporates:
       *  Constant: '<S2>/Constant'
       */
      _rtB->Divide = (uint16_T)((uint32_T)_rtP->K_p / _rtP->T_n);
    }

    /* End of Product: '<S2>/Divide' */

    /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
    _rtB->DiscreteTimeIntegrator = ((real_T *)ssGetDWork(S, 8))[0];

    /* Product: '<S2>/Product1' */
    _rtB->Product1 = (real_T)_rtB->Divide * _rtB->DiscreteTimeIntegrator;
  }

  if (1) {
    /* Switch: '<S3>/Switch' incorporates:
     *  Sum: '<S2>/Sum'
     */
    _rtB->Switch += _rtB->Product1;

    /* If: '<S5>/If' */
    ((int8_T *)ssGetDWork(S, 9))[0] = -1;
    if ((_rtB->Switch < 5.0) || (_rtB->Switch > -5.0)) {
      ((int8_T *)ssGetDWork(S, 9))[0] = 0;

      /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      if (ssIsSampleHit(S, 1, 0)) {
        /* SignalConversion generated from: '<S7>/In1' incorporates:
         *  Constant: '<S5>/Constant'
         */
        _rtB->In1_p = _rtP->Constant_Value;
      }

      /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
    }

    /* End of If: '<S5>/If' */

    /* If: '<S6>/If' */
    ((int8_T *)ssGetDWork(S, 10))[0] = -1;
    if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0] < 50.0) || (*((
           const real_T **)ssGetInputPortSignalPtrs(S, 0))[0] > -20.0)) {
      ((int8_T *)ssGetDWork(S, 10))[0] = 0;

      /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      if (ssIsSampleHit(S, 1, 0)) {
        /* SignalConversion generated from: '<S8>/In1' incorporates:
         *  Constant: '<S6>/Constant'
         */
        _rtB->In1 = _rtP->Constant_Value_h;
      }

      /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
    }

    /* End of If: '<S6>/If' */

    /* SignalGenerator: '<S11>/Signal Generator' */
    rtb_select = _rtP->SignalGenerator_Frequency_g * ssGetT(S);
    if (rtb_select - floor(rtb_select) >= 0.5) {
      /* SignalGenerator: '<S11>/Signal Generator' */
      _rtB->SignalGenerator = _rtP->SignalGenerator_Amplitude_j;
    } else {
      /* SignalGenerator: '<S11>/Signal Generator' */
      _rtB->SignalGenerator = -_rtP->SignalGenerator_Amplitude_j;
    }

    /* End of SignalGenerator: '<S11>/Signal Generator' */
  }

  if (ssIsSampleHit(S, 1, 0)) {
    /* Logic: '<S3>/AND' */
    _rtB->AND = ((_rtB->In1_p != 0.0) && (_rtB->In1 != 0.0));

    /* SignalConversion generated from: '<S13>/C' */
    _rtB->HiddenBuf_InsertedFor_DLatch_at = _rtB->SignalGenerator;

    /* Outputs for Enabled SubSystem: '<S12>/D Latch' incorporates:
     *  EnablePort: '<S13>/C'
     */
    if (_rtB->HiddenBuf_InsertedFor_DLatch_at > 0.0) {
      if (!((boolean_T *)ssGetDWork(S, 19))[0]) {
        if (ssGetT(S) != ssGetTStart(S)) {
          ssSetBlockStateForSolverChangedAtMajorStep(S);
        }

        ((boolean_T *)ssGetDWork(S, 19))[0] = true;
      }
    } else if (((boolean_T *)ssGetDWork(S, 19))[0]) {
      ssSetBlockStateForSolverChangedAtMajorStep(S);
      ((boolean_T *)ssGetDWork(S, 19))[0] = false;
    }

    /* End of Outputs for SubSystem: '<S12>/D Latch' */
  }

  /* Outputs for Enabled SubSystem: '<S12>/D Latch' incorporates:
   *  EnablePort: '<S13>/C'
   */
  if (((boolean_T *)ssGetDWork(S, 19))[0] && 1) {
    /* SignalConversion generated from: '<S13>/D' */
    _rtB->D = *((const boolean_T **)ssGetInputPortSignalPtrs(S, 1))[0];
  }

  /* End of Outputs for SubSystem: '<S12>/D Latch' */
  if (1) {
    /* Logic: '<S3>/AND1' */
    _rtB->AND1 = (_rtB->AND && _rtB->D);

    /* Switch: '<S3>/Switch' */
    if (!_rtB->AND1) {
      /* Switch: '<S3>/Switch' incorporates:
       *  Constant: '<S3>/Constant'
       */
      _rtB->Switch = _rtP->Constant_Value_b;
    }

    /* End of Switch: '<S3>/Switch' */

    /* Outport: '<Root>/q_out' */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = _rtB->Switch;
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  B_nucleoboard_ac_controll_softwar_T *_rtB;
  P_nucleoboard_ac_controll_softwar_T *_rtP;
  _rtP = ((P_nucleoboard_ac_controll_softwar_T *) ssGetLocalDefaultParam(S));
  _rtB = ((B_nucleoboard_ac_controll_softwar_T *) ssGetLocalBlockIO(S));
  if (ssIsSampleHit(S, 1, 0)) {
    /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 8))[0] = _rtP->DiscreteTimeIntegrator_gainval *
      _rtB->Sum1 + ((real_T *)ssGetDWork(S, 8))[0];
  }

  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  /* Terminate for MATLABSystem: '<S4>/Digital Write' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 7)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write1' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 6)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write1' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write2' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 5)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write2' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write3' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 4)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write3' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write4' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 3)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write4' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write5' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 2)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write5' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write6' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 1)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write6' */

  /* Terminate for MATLABSystem: '<S4>/Digital Write7' */
  if (!(*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
      matlabCodegenIsDeleted) {
    (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
      matlabCodegenIsDeleted = true;
    if (((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).isInitialized ==
         1) && (*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
        isSetupComplete) {
      MW_digitalIO_close((*(mbed_DigitalWrite_nucleoboard_T *)ssGetDWork(S, 0)).
                         MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Write7' */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#include "nucleoboard_ac_controll_softwar_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 2);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.0);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 3))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.0);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortSampleTime(S, 1, 0.0);
    ssSetInputPortOffsetTime(S, 1, 0.0);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 2 */
  {
    if (!ssSetInputPortVectorDimension(S, 2, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 2, SS_UINT16);
    }

    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortSampleTime(S, 2, 0.0);
    ssSetInputPortOffsetTime(S, 2, 0.0);
    ssSetInputPortOverWritable(S, 2, 0);
    ssSetInputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 21)) {
    return;
  }

  /* '<S4>/Digital Write7': DW1 */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 0, id);
  }

#endif

  /* '<S4>/Digital Write6': DW1 */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 1, id);
  }

#endif

  /* '<S4>/Digital Write5': DW1 */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 2, id);
  }

#endif

  /* '<S4>/Digital Write4': DW1 */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 3, id);
  }

#endif

  /* '<S4>/Digital Write3': DW1 */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 4, id);
  }

#endif

  /* '<S4>/Digital Write2': DW1 */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 5, id);
  }

#endif

  /* '<S4>/Digital Write1': DW1 */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 6, id);
  }

#endif

  /* '<S4>/Digital Write': DW1 */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 1);

#if SS_SFCN_FOR_SIM

  {
    int id = ssRegisterDataType(S, "mbed_DigitalWrite_nucleoboard_T");
    if (id == INVALID_DTYPE_ID )
      return;
    if (!ssSetDataTypeSize(S, id, sizeof(mbed_DigitalWrite_nucleoboard_T)))
      return;
    ssSetDWorkDataType(S, 7, id);
  }

#endif

  /* '<S2>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 1);
  ssSetDWorkUsedAsDState(S, 8, 1);

  /* '<S5>/If': ActiveSubsystem */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 1);
  ssSetDWorkDataType(S, 9, SS_INT8);

  /* '<S6>/If': ActiveSubsystem */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 1);
  ssSetDWorkDataType(S, 10, SS_INT8);

  /* '<S4>/Digital Write7': DW0 */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 1);
  ssSetDWorkDataType(S, 11, SS_BOOLEAN);

  /* '<S4>/Digital Write6': DW0 */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);
  ssSetDWorkDataType(S, 12, SS_BOOLEAN);

  /* '<S4>/Digital Write5': DW0 */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);
  ssSetDWorkDataType(S, 13, SS_BOOLEAN);

  /* '<S4>/Digital Write4': DW0 */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 1);
  ssSetDWorkDataType(S, 14, SS_BOOLEAN);

  /* '<S4>/Digital Write3': DW0 */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);
  ssSetDWorkDataType(S, 15, SS_BOOLEAN);

  /* '<S4>/Digital Write2': DW0 */
  ssSetDWorkName(S, 16, "DWORK16");
  ssSetDWorkWidth(S, 16, 1);
  ssSetDWorkDataType(S, 16, SS_BOOLEAN);

  /* '<S4>/Digital Write1': DW0 */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 1);
  ssSetDWorkDataType(S, 17, SS_BOOLEAN);

  /* '<S4>/Digital Write': DW0 */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 1);
  ssSetDWorkDataType(S, 18, SS_BOOLEAN);

  /* '<S12>/D Latch': MODE */
  ssSetDWorkName(S, 19, "DWORK19");
  ssSetDWorkWidth(S, 19, 1);
  ssSetDWorkDataType(S, 19, SS_BOOLEAN);

  /* '<S2>/Sum1': DWORK1 */
  ssSetDWorkName(S, 20, "DWORK20");
  ssSetDWorkWidth(S, 20, 1);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, false);
    ssRegisterMsgForNotSupportingMultiExecInst(S,
      "<diag_root><diag id=\"Simulink:blocks:UserSystemObjectDoesNotSupportMultiExecInstances\" pr=\"d\"><arguments><arg type=\"encoded\">bgB1AGMAbABlAG8AYgBvAGEAcgBkAF8AYQBjAF8AYwBvAG4AdAByAG8AbABsAF8AcwBvAGYAdAB3AGEAcgAvAG4AdQBjAGwAZQBvAGIAbwBhAHIAZABfAGEAYwBfAGMAbwBuAHQAcgBvAGwAbABfAHMAbwBmAHQAdwBhAHIAZQAvAHUAcwBlAHIAXwBpAG4AdABlAHIAZgBhAGMAZQAvAEQAaQBnAGkAdABhAGwAIABXAHIAaQB0AGUAAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg><arg type=\"encoded\">bQBiAGUAZAAuAEQAaQBnAGkAdABhAGwAVwByAGkAdABlAAAA</arg></arguments><hs><h>AAAAcABUo0BL</h></hs></diag></diag_root>");
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.0);
  ssSetSampleTime(S, 1, 0.0055555555555555558);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
  ssSetOffsetTime(S, 1, 0.0);
}

#if defined(MATLAB_MEX_FILE)
#include "fixedpoint.c"
#include "simulink.c"
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                nucleoboard_ac_controll_softwar_sf
#include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */

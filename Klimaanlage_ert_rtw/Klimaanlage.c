/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Klimaanlage.c
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
#include <math.h>
#include "rtwtypes.h"
#include <stddef.h>
#define NumBitsPerChar                 8U

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* Continuous states */
X rtX;

/* Disabled State Vector */
XDis rtXDis;

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* private model entry point functions */
extern void Klimaanlage_derivatives(void);

#define NOT_USING_NONFINITE_LITERALS   1

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
static void rt_InitInfAndNaN(size_t realSize);
static boolean_T rtIsInf(real_T value);
static boolean_T rtIsInfF(real32_T value);
static boolean_T rtIsNaN(real_T value);
static boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;
static real_T rtGetInf(void);
static real32_T rtGetInfF(void);
static real_T rtGetMinusInf(void);
static real32_T rtGetMinusInfF(void);
static real_T rtGetNaN(void);
static real32_T rtGetNaNF(void);

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
static void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
static boolean_T rtIsInf(real_T value)
{
  return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
static boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
static boolean_T rtIsNaN(real_T value)
{
  boolean_T result = (boolean_T) 0;
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  if (bitsPerReal == 32U) {
    result = rtIsNaNF((real32_T)value);
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.fltVal = value;
    result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF00000 &&
                         ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
                          (tmpVal.bitVal.words.wordL != 0) ));
  }

  return result;
}

/* Test if single-precision value is not a number */
static boolean_T rtIsNaNF(real32_T value)
{
  IEEESingle tmp;
  tmp.wordL.wordLreal = value;
  return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                     (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
}

/*
 * Initialize rtInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T inf = 0.0;
  if (bitsPerReal == 32U) {
    inf = rtGetInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    inf = tmpVal.fltVal;
  }

  return inf;
}

/*
 * Initialize rtInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetInfF(void)
{
  IEEESingle infF;
  infF.wordL.wordLuint = 0x7F800000U;
  return infF.wordL.wordLreal;
}

/*
 * Initialize rtMinusInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetMinusInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T minf = 0.0;
  if (bitsPerReal == 32U) {
    minf = rtGetMinusInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    minf = tmpVal.fltVal;
  }

  return minf;
}

/*
 * Initialize rtMinusInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetMinusInfF(void)
{
  IEEESingle minfF;
  minfF.wordL.wordLuint = 0xFF800000U;
  return minfF.wordL.wordLreal;
}

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetNaNF(void)
{
  IEEESingle nanF = { { 0.0F } };

  nanF.wordL.wordLuint = 0xFFC00000U;
  return nanF.wordL.wordLreal;
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Klimaanlage_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  Klimaanlage_step();
  Klimaanlage_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  Klimaanlage_step();
  Klimaanlage_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void Klimaanlage_step(void)
{
  real_T rtb_select;
  real_T y;
  int32_T i;
  int32_T i_0;
  int8_T rtb_segment[7];
  int8_T rtAction;
  boolean_T rtb_DigitalRead_0;
  boolean_T tmp;
  static const int8_T segments[70] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0,
    1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1,
    1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1,
    1, 1, 1, 1 };

  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  /* SignalGenerator: '<S11>/Signal Generator' */
  rtb_select = rtP.SignalGenerator_Frequency * rtM->Timing.t[0];

  /* MATLAB Function: '<S11>/MATLAB Function' incorporates:
   *  Constant: '<S6>/Constant'
   */
  if ((rtP.Constant_Value >= 99.0) || rtIsNaN(rtP.Constant_Value)) {
    y = 99.0;
  } else {
    y = rtP.Constant_Value;
  }

  if (y <= 0.0) {
    y = 0.0;
  }

  /* SignalGenerator: '<S11>/Signal Generator' */
  if (rtb_select - floor(rtb_select) >= 0.5) {
    rtb_select = rtP.SignalGenerator_Amplitude;
  } else {
    rtb_select = -rtP.SignalGenerator_Amplitude;
  }

  /* MATLAB Function: '<S11>/MATLAB Function' incorporates:
   *  SignalGenerator: '<S11>/Signal Generator'
   */
  if (rtb_select == 1.0) {
    i = (int32_T)floor(y / 10.0) + 1;
    for (i_0 = 0; i_0 < 7; i_0++) {
      rtb_segment[i_0] = segments[(10 * i_0 + i) - 1];
    }

    rtb_select = 0.0;
  } else {
    if (y == 0.0) {
      rtb_select = 0.0;
    } else {
      rtb_select = fmod(y, 10.0);
    }

    for (i = 0; i < 7; i++) {
      rtb_segment[i] = segments[((int32_T)(rtb_select + 1.0) + 10 * i) - 1];
    }

    rtb_select = 1.0;
  }

  /* MATLABSystem: '<S6>/Digital Write' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion6'
   */
  MW_digitalIO_write(rtDW.obj_k.MW_DIGITALIO_HANDLE, rtb_segment[0] != 0);

  /* MATLABSystem: '<S6>/Digital Write1' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion5'
   */
  MW_digitalIO_write(rtDW.obj_mi.MW_DIGITALIO_HANDLE, rtb_segment[1] != 0);

  /* MATLABSystem: '<S6>/Digital Write2' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion4'
   */
  MW_digitalIO_write(rtDW.obj_e.MW_DIGITALIO_HANDLE, rtb_segment[2] != 0);

  /* MATLABSystem: '<S6>/Digital Write3' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion3'
   */
  MW_digitalIO_write(rtDW.obj_m.MW_DIGITALIO_HANDLE, rtb_segment[3] != 0);

  /* MATLABSystem: '<S6>/Digital Write4' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion2'
   */
  MW_digitalIO_write(rtDW.obj_ga.MW_DIGITALIO_HANDLE, rtb_segment[4] != 0);

  /* MATLABSystem: '<S6>/Digital Write5' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion1'
   */
  MW_digitalIO_write(rtDW.obj_i.MW_DIGITALIO_HANDLE, rtb_segment[5] != 0);

  /* MATLABSystem: '<S6>/Digital Write6' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion'
   */
  MW_digitalIO_write(rtDW.obj_d.MW_DIGITALIO_HANDLE, rtb_segment[6] != 0);

  /* MATLABSystem: '<S6>/Digital Write7' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion7'
   */
  MW_digitalIO_write(rtDW.obj_c.MW_DIGITALIO_HANDLE, rtb_select != 0.0);
  if (rtmIsMajorTimeStep(rtM)) {
    /* Constant: '<Root>/Constant3' */
    rtDW.Constant3 = rtP.T_i_start;
  }

  /* Integrator: '<S2>/Integrator' */
  if (rtDW.Integrator_IWORK != 0) {
    rtX.Integrator_CSTATE = rtDW.Constant3;
  }

  /* MATLABSystem: '<S1>/Analog Input' */
  if (rtDW.obj.SampleTime != rtP.AnalogInput_SampleTime) {
    rtDW.obj.SampleTime = rtP.AnalogInput_SampleTime;
  }

  MW_AnalogIn_Start(rtDW.obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(rtDW.obj.MW_ANALOGIN_HANDLE, &rtb_select, 7);

  /* Sum: '<S4>/Sum1' incorporates:
   *  Constant: '<S12>/Constant'
   *  Gain: '<S12>/Gain'
   *  Integrator: '<S2>/Integrator'
   *  MATLABSystem: '<S1>/Analog Input'
   *  Sum: '<S12>/Sum'
   */
  rtDW.Sum1 = ((real_T)(int32_T)floor((rtP.UpperUserTemp - rtP.LowerUserTemp) /
    rtP.Quant * rtb_select) + rtP.LowerUserTemp) - rtX.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(rtM)) {
    /* Product: '<S4>/Divide' incorporates:
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     */
    rtDW.Divide = rtP.K_p / rtP.T_n;
  }

  /* Sum: '<S4>/Sum' incorporates:
   *  Constant: '<S4>/Constant'
   *  Integrator: '<S4>/Integrator'
   *  Product: '<S4>/Product'
   *  Product: '<S4>/Product1'
   */
  rtb_select = rtDW.Sum1 * rtP.K_p + rtDW.Divide * rtX.Integrator_CSTATE_k;

  /* If: '<S7>/If' */
  rtAction = -1;
  if (rtsiIsModeUpdateTimeStep(&rtM->solverInfo)) {
    if ((rtb_select < 5.0) || (rtb_select > -5.0)) {
      rtAction = 0;
    }

    rtDW.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = rtDW.If_ActiveSubsystem;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    if (rtmIsMajorTimeStep(rtM)) {
      /* SignalConversion generated from: '<S9>/In1' incorporates:
       *  Constant: '<S7>/Constant'
       */
      rtDW.In1_g = rtP.Constant_Value_g;
    }

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  }

  /* End of If: '<S7>/If' */

  /* If: '<S8>/If' incorporates:
   *  Integrator: '<S2>/Integrator'
   */
  rtAction = -1;
  if (rtsiIsModeUpdateTimeStep(&rtM->solverInfo)) {
    if ((rtX.Integrator_CSTATE < 50.0) || (rtX.Integrator_CSTATE > -20.0)) {
      rtAction = 0;
    }

    rtDW.If_ActiveSubsystem_i = rtAction;
  } else {
    rtAction = rtDW.If_ActiveSubsystem_i;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    if (rtmIsMajorTimeStep(rtM)) {
      /* SignalConversion generated from: '<S10>/In1' incorporates:
       *  Constant: '<S8>/Constant'
       */
      rtDW.In1 = rtP.Constant_Value_i;
    }

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  }

  /* End of If: '<S8>/If' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* Logic: '<S5>/AND' */
    rtDW.AND = ((rtDW.In1_g != 0.0) && (rtDW.In1 != 0.0));
  }

  /* MATLABSystem: '<S1>/Digital Read' */
  if (rtDW.obj_g.SampleTime != rtP.DigitalRead_SampleTime) {
    rtDW.obj_g.SampleTime = rtP.DigitalRead_SampleTime;
  }

  rtb_DigitalRead_0 = MW_digitalIO_read(rtDW.obj_g.MW_DIGITALIO_HANDLE);
  if (rtmIsMajorTimeStep(rtM)) {
    /* MATLABSystem: '<S1>/Digital Read1' */
    if (rtDW.obj_j.SampleTime != rtP.DigitalRead1_SampleTime) {
      rtDW.obj_j.SampleTime = rtP.DigitalRead1_SampleTime;
    }

    tmp = MW_digitalIO_read(rtDW.obj_j.MW_DIGITALIO_HANDLE);

    /* Outputs for Enabled SubSystem: '<S14>/D Latch' incorporates:
     *  EnablePort: '<S15>/C'
     */
    if (rtsiIsModeUpdateTimeStep(&rtM->solverInfo)) {
      /* MATLABSystem: '<S1>/Digital Read1' */
      rtDW.DLatch_MODE = tmp;
    }

    /* End of Outputs for SubSystem: '<S14>/D Latch' */
  }

  /* Outputs for Enabled SubSystem: '<S14>/D Latch' incorporates:
   *  EnablePort: '<S15>/C'
   */
  if (rtDW.DLatch_MODE) {
    /* SignalConversion generated from: '<S15>/D' incorporates:
     *  MATLABSystem: '<S1>/Digital Read'
     */
    rtDW.D = rtb_DigitalRead_0;
  }

  /* End of Outputs for SubSystem: '<S14>/D Latch' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  DataTypeConversion: '<S12>/Data Type Conversion'
   *  Logic: '<S5>/AND1'
   */
  if ((!rtDW.AND) || (!rtDW.D)) {
    rtb_select = rtP.Constant_Value_j;
  }

  /* Product: '<S2>/divider' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<S2>/C'
   *  Constant: '<S2>/R'
   *  Integrator: '<S2>/Integrator'
   *  Product: '<S2>/Divide'
   *  Sum: '<S2>/Sum'
   *  Sum: '<S2>/Sum1'
   *  Switch: '<S5>/Switch'
   */
  rtDW.divider = (rtb_select - (rtX.Integrator_CSTATE - rtP.T_a) / rtP.R) /
    rtP.C;
  if (rtmIsMajorTimeStep(rtM)) {
    /* Update for Integrator: '<S2>/Integrator' */
    rtDW.Integrator_IWORK = 0;
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [0.0033333333333333335s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.0033333333333333335, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Klimaanlage_derivatives(void)
{
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' */
  _rtXdot->Integrator_CSTATE = rtDW.divider;

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE_k = rtDW.Sum1;
}

/* Model initialize function */
void Klimaanlage_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&rtM->solverInfo, (boolean_T**)
      &rtM->contStateDisabled);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&rtM->solverInfo, false);
  rtM->intgData.y = rtM->odeY;
  rtM->intgData.f[0] = rtM->odeF[0];
  rtM->intgData.f[1] = rtM->odeF[1];
  rtM->intgData.f[2] = rtM->odeF[2];
  rtM->contStates = ((X *) &rtX);
  rtM->contStateDisabled = ((XDis *) &rtXDis);
  rtM->Timing.tStart = (0.0);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode3");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 0.0033333333333333335;
  rtmSetFirstInitCond(rtM, 1);

  /* Start for Constant: '<Root>/Constant3' */
  rtDW.Constant3 = rtP.T_i_start;

  /* Start for If: '<S7>/If' */
  rtDW.If_ActiveSubsystem = -1;

  /* Start for If: '<S8>/If' */
  rtDW.If_ActiveSubsystem_i = -1;

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  if (rtmIsFirstInitCond(rtM)) {
    rtX.Integrator_CSTATE = 10.0;
  }

  rtDW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S2>/Integrator' */

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  rtX.Integrator_CSTATE_k = rtP.Integrator_IC;

  /* SystemInitialize for IfAction SubSystem: '<S7>/If Action Subsystem1' */
  /* SystemInitialize for SignalConversion generated from: '<S9>/In1' incorporates:
   *  Outport: '<S9>/Out1'
   */
  rtDW.In1_g = rtP.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S7>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S8>/If Action Subsystem1' */
  /* SystemInitialize for SignalConversion generated from: '<S10>/In1' incorporates:
   *  Outport: '<S10>/Out1'
   */
  rtDW.In1 = rtP.Out1_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S8>/If Action Subsystem1' */

  /* SystemInitialize for Enabled SubSystem: '<S14>/D Latch' */
  /* SystemInitialize for SignalConversion generated from: '<S15>/D' incorporates:
   *  Outport: '<S15>/Q'
   */
  rtDW.D = rtP.Q_Y0;

  /* End of SystemInitialize for SubSystem: '<S14>/D Latch' */

  /* Start for MATLABSystem: '<S6>/Digital Write' */
  rtDW.obj_k.matlabCodegenIsDeleted = false;
  rtDW.obj_k.isInitialized = 1;
  rtDW.obj_k.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_5, 1);
  rtDW.obj_k.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write1' */
  rtDW.obj_mi.matlabCodegenIsDeleted = false;
  rtDW.obj_mi.isInitialized = 1;
  rtDW.obj_mi.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_6, 1);
  rtDW.obj_mi.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write2' */
  rtDW.obj_e.matlabCodegenIsDeleted = false;
  rtDW.obj_e.isInitialized = 1;
  rtDW.obj_e.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_7, 1);
  rtDW.obj_e.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write3' */
  rtDW.obj_m.matlabCodegenIsDeleted = false;
  rtDW.obj_m.isInitialized = 1;
  rtDW.obj_m.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_8, 1);
  rtDW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write4' */
  rtDW.obj_ga.matlabCodegenIsDeleted = false;
  rtDW.obj_ga.isInitialized = 1;
  rtDW.obj_ga.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_9, 1);
  rtDW.obj_ga.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write5' */
  rtDW.obj_i.matlabCodegenIsDeleted = false;
  rtDW.obj_i.isInitialized = 1;
  rtDW.obj_i.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PA_15, 1);
  rtDW.obj_i.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write6' */
  rtDW.obj_d.matlabCodegenIsDeleted = false;
  rtDW.obj_d.isInitialized = 1;
  rtDW.obj_d.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PB_9, 1);
  rtDW.obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/Digital Write7' */
  rtDW.obj_c.matlabCodegenIsDeleted = false;
  rtDW.obj_c.isInitialized = 1;
  rtDW.obj_c.MW_DIGITALIO_HANDLE = MW_digitalIO_open(PB_0, 1);
  rtDW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/Analog Input' */
  rtDW.obj.matlabCodegenIsDeleted = false;
  rtDW.obj.SampleTime = rtP.AnalogInput_SampleTime;
  rtDW.obj.isInitialized = 1;
  rtDW.obj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(A0);
  MW_AnalogIn_SetTriggerSource(rtDW.obj.MW_ANALOGIN_HANDLE,
    MW_ANALOGIN_SOFTWARE_TRIGGER, 0U);
  rtDW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/Digital Read' */
  rtDW.obj_g.matlabCodegenIsDeleted = false;
  rtDW.obj_g.SampleTime = rtP.DigitalRead_SampleTime;
  rtDW.obj_g.isInitialized = 1;
  rtDW.obj_g.MW_DIGITALIO_HANDLE = MW_digitalIO_open(D2, 0);
  rtDW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/Digital Read1' */
  rtDW.obj_j.matlabCodegenIsDeleted = false;
  rtDW.obj_j.SampleTime = rtP.DigitalRead1_SampleTime;
  rtDW.obj_j.isInitialized = 1;
  rtDW.obj_j.MW_DIGITALIO_HANDLE = MW_digitalIO_open(D3, 0);
  rtDW.obj_j.isSetupComplete = true;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(rtM)) {
    rtmSetFirstInitCond(rtM, 0);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

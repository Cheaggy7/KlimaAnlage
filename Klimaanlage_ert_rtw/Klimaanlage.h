/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Klimaanlage.h
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

#ifndef RTW_HEADER_Klimaanlage_h_
#define RTW_HEADER_Klimaanlage_h_
#ifndef Klimaanlage_COMMON_INCLUDES_
#define Klimaanlage_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* Klimaanlage_COMMON_INCLUDES_ */

#include "MW_SVD.h"
#include <string.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#define Klimaanlage_M                  (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Custom Type definition for MATLABSystem: '<S6>/Digital Write7' */
#include "MW_SVD.h"
#ifndef struct_tag_p5Oj7yF0nd6COoUgI0GAlG
#define struct_tag_p5Oj7yF0nd6COoUgI0GAlG

struct tag_p5Oj7yF0nd6COoUgI0GAlG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_p5Oj7yF0nd6COoUgI0GAlG */

#ifndef typedef_mbed_AnalogInput
#define typedef_mbed_AnalogInput

typedef struct tag_p5Oj7yF0nd6COoUgI0GAlG mbed_AnalogInput;

#endif                                 /* typedef_mbed_AnalogInput */

#ifndef struct_tag_5FwKk6wA1XPbMoI1XCDeDF
#define struct_tag_5FwKk6wA1XPbMoI1XCDeDF

struct tag_5FwKk6wA1XPbMoI1XCDeDF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_5FwKk6wA1XPbMoI1XCDeDF */

#ifndef typedef_mbed_DigitalRead
#define typedef_mbed_DigitalRead

typedef struct tag_5FwKk6wA1XPbMoI1XCDeDF mbed_DigitalRead;

#endif                                 /* typedef_mbed_DigitalRead */

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

#ifndef typedef_mbed_DigitalWrite
#define typedef_mbed_DigitalWrite

typedef struct tag_KxFW01GBdhqk5JOEHU3GlD mbed_DigitalWrite;

#endif                                 /* typedef_mbed_DigitalWrite */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  mbed_AnalogInput obj;                /* '<S1>/Analog Input' */
  mbed_DigitalRead obj_j;              /* '<S1>/Digital Read1' */
  mbed_DigitalRead obj_g;              /* '<S1>/Digital Read' */
  mbed_DigitalWrite obj_c;             /* '<S6>/Digital Write7' */
  mbed_DigitalWrite obj_d;             /* '<S6>/Digital Write6' */
  mbed_DigitalWrite obj_i;             /* '<S6>/Digital Write5' */
  mbed_DigitalWrite obj_ga;            /* '<S6>/Digital Write4' */
  mbed_DigitalWrite obj_m;             /* '<S6>/Digital Write3' */
  mbed_DigitalWrite obj_e;             /* '<S6>/Digital Write2' */
  mbed_DigitalWrite obj_mi;            /* '<S6>/Digital Write1' */
  mbed_DigitalWrite obj_k;             /* '<S6>/Digital Write' */
  real_T Constant3;                    /* '<Root>/Constant3' */
  real_T Sum1;                         /* '<S4>/Sum1' */
  real_T Divide;                       /* '<S4>/Divide' */
  real_T divider;                      /* '<S2>/divider' */
  real_T In1;                          /* '<S10>/In1' */
  real_T In1_g;                        /* '<S9>/In1' */
  int_T Integrator_IWORK;              /* '<S2>/Integrator' */
  int8_T If_ActiveSubsystem;           /* '<S7>/If' */
  int8_T If_ActiveSubsystem_i;         /* '<S8>/If' */
  boolean_T AND;                       /* '<S5>/AND' */
  boolean_T D;                         /* '<S15>/D' */
  boolean_T DLatch_MODE;               /* '<S14>/D Latch' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S4>/Integrator' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S4>/Integrator' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S2>/Integrator' */
  boolean_T Integrator_CSTATE_k;       /* '<S4>/Integrator' */
} XDis;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_ {
  real_T C;                            /* Variable: C
                                        * Referenced by: '<S2>/C'
                                        */
  real_T K_p;                          /* Variable: K_p
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T LowerUserTemp;                /* Variable: LowerUserTemp
                                        * Referenced by:
                                        *   '<S12>/Constant'
                                        *   '<S12>/Gain'
                                        */
  real_T Quant;                        /* Variable: Quant
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T R;                            /* Variable: R
                                        * Referenced by: '<S2>/R'
                                        */
  real_T T_a;                          /* Variable: T_a
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T T_i_start;                    /* Variable: T_i_start
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T T_n;                          /* Variable: T_n
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T UpperUserTemp;                /* Variable: UpperUserTemp
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<S1>/Analog Input'
                                        */
  real_T DigitalRead_SampleTime;       /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read'
                                        */
  real_T DigitalRead1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read1'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S9>/Out1'
                                        */
  real_T Out1_Y0_k;                    /* Computed Parameter: Out1_Y0_k
                                        * Referenced by: '<S10>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 25
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T SignalGenerator_Amplitude;    /* Expression: 1
                                        * Referenced by: '<S11>/Signal Generator'
                                        */
  real_T SignalGenerator_Frequency;    /* Expression: 100
                                        * Referenced by: '<S11>/Signal Generator'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Constant_Value_g;             /* Expression: 1
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  boolean_T Q_Y0;                      /* Computed Parameter: Q_Y0
                                        * Referenced by: '<S15>/Q'
                                        */
  boolean_T Q_Y0_f;                    /* Computed Parameter: Q_Y0_f
                                        * Referenced by: '<S15>/!Q'
                                        */
};

/* Parameters (default storage) */
typedef struct P_ P;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[2];
  real_T odeF[3][2];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    boolean_T firstInitCondFlag;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P rtP;

/* Continuous states (default storage) */
extern X rtX;

/* Disabled states (default storage) */
extern XDis rtXDis;

/* Block signals and states (default storage) */
extern DW rtDW;

/* Model entry point functions */
extern void Klimaanlage_initialize(void);
extern void Klimaanlage_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S15>/Logic' : Unused code path elimination
 * Block '<S12>/Cast To Boolean' : Eliminate redundant data type conversion
 * Block '<S12>/Cast To Boolean1' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Klimaanlage'
 * '<S1>'   : 'Klimaanlage/Physical_imputs'
 * '<S2>'   : 'Klimaanlage/Regelstrecke'
 * '<S3>'   : 'Klimaanlage/´KlimaRegelung1'
 * '<S4>'   : 'Klimaanlage/´KlimaRegelung1/AC_Controller'
 * '<S5>'   : 'Klimaanlage/´KlimaRegelung1/SecurityBlock'
 * '<S6>'   : 'Klimaanlage/´KlimaRegelung1/User_Interface'
 * '<S7>'   : 'Klimaanlage/´KlimaRegelung1/SecurityBlock/Security_PowerConsumption'
 * '<S8>'   : 'Klimaanlage/´KlimaRegelung1/SecurityBlock/Security_Temperature'
 * '<S9>'   : 'Klimaanlage/´KlimaRegelung1/SecurityBlock/Security_PowerConsumption/If Action Subsystem1'
 * '<S10>'  : 'Klimaanlage/´KlimaRegelung1/SecurityBlock/Security_Temperature/If Action Subsystem1'
 * '<S11>'  : 'Klimaanlage/´KlimaRegelung1/User_Interface/7SegDisplay'
 * '<S12>'  : 'Klimaanlage/´KlimaRegelung1/User_Interface/InputSystem'
 * '<S13>'  : 'Klimaanlage/´KlimaRegelung1/User_Interface/7SegDisplay/MATLAB Function'
 * '<S14>'  : 'Klimaanlage/´KlimaRegelung1/User_Interface/InputSystem/D Latch'
 * '<S15>'  : 'Klimaanlage/´KlimaRegelung1/User_Interface/InputSystem/D Latch/D Latch'
 */
#endif                                 /* RTW_HEADER_Klimaanlage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

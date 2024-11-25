/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  __enable_irq();
  Klimaanlage_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.0033333333333333335;
  float systemClock = 72;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  (void)systemClock;

#if defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  ;
  HAL_Init();
  SystemCoreClockUpdate();
  rtmSetErrorStatus(rtM, 0);
  Klimaanlage_initialize();
  ARMCM_SysTick_Config(modelBaseRate);
  runModel = (rtmGetErrorStatus(rtM) == (NULL)) && !rtmGetStopRequested(rtM);
  __enable_irq();
  while (runModel) {
    stopRequested = !((rtmGetErrorStatus(rtM) == (NULL)) && !rtmGetStopRequested
                      (rtM));
    runModel = !(stopRequested);
  }

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

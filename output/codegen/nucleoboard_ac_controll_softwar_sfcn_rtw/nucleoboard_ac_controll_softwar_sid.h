/*
 * nucleoboard_ac_controll_softwar_sid.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "nucleoboard_ac_controll_softwar_sf".
 *
 * Model version              : 1.49
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Dec 18 17:08:51 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 *
 * SOURCES: nucleoboard_ac_controll_softwar_sf.c
 */

/* statically allocated instance data for model: nucleoboard_ac_controll_softwar */
{
  extern P_nucleoboard_ac_controll_softwar_T
    nucleoboard_ac_controll_softwar_DefaultP;

  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_nucleoboard_ac_controll_softwar_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_nucleoboard_ac_controll_softwar_T));
    }

    /* model parameters */
    ssSetLocalDefaultParam(rts, (real_T *)
      &nucleoboard_ac_controll_softwar_DefaultP);

    /* model checksums */
    ssSetChecksumVal(rts, 0, 3367073584U);
    ssSetChecksumVal(rts, 1, 3726743285U);
    ssSetChecksumVal(rts, 2, 453809037U);
    ssSetChecksumVal(rts, 3, 2091973323U);
  }
}

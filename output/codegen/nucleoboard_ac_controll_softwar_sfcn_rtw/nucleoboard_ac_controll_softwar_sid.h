/*
 * nucleoboard_ac_controll_softwar_sid.h
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
    ssSetChecksumVal(rts, 0, 429764183U);
    ssSetChecksumVal(rts, 1, 628712952U);
    ssSetChecksumVal(rts, 2, 1612258509U);
    ssSetChecksumVal(rts, 3, 1464061807U);
  }
}

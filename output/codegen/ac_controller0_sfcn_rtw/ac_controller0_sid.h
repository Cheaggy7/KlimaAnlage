/*
 * ac_controller0_sid.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ac_controller0_sf".
 *
 * Model version              : 1.80
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Dec 18 12:45:50 2024
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 *
 * SOURCES: ac_controller0_sf.c
 */

/* statically allocated instance data for model: ac_controller0 */
{
  extern P_ac_controller0_T ac_controller0_DefaultP;

  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_ac_controller0_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_ac_controller0_T));
    }

    /* model parameters */
    ssSetLocalDefaultParam(rts, (real_T *) &ac_controller0_DefaultP);

    /* model checksums */
    ssSetChecksumVal(rts, 0, 3586140273U);
    ssSetChecksumVal(rts, 1, 2912092176U);
    ssSetChecksumVal(rts, 2, 1215585954U);
    ssSetChecksumVal(rts, 3, 1132869888U);
  }
}

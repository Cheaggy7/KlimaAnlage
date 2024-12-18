/*
 * nucleoboard_ac_controll_softwar_sf_private.h
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
 */

#ifndef RTW_HEADER_nucleoboard_ac_controll_softwar_sf_private_h_
#define RTW_HEADER_nucleoboard_ac_controll_softwar_sf_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "nucleoboard_ac_controll_softwar_sf_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif

#if defined(MULTITASKING)
#  error Model (nucleoboard_ac_controll_softwar_sf) was built in \
SingleTasking solver mode, however the MULTITASKING define is \
present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \
defined on the Code Generation page of Simulation parameter dialog, please \
remove it and on the Solver page, select solver mode \
MultiTasking. If the Simulation parameter dialog is configured \
correctly, please verify that your template makefile is \
configured correctly.
#endif
#endif            /* RTW_HEADER_nucleoboard_ac_controll_softwar_sf_private_h_ */

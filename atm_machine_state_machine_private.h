/*
 * atm_machine_state_machine_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "atm_machine_state_machine".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Mon Apr  4 02:23:01 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#ifndef RTW_HEADER_atm_machine_state_machine_private_h_
#define RTW_HEADER_atm_machine_state_machine_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern real_T rt_roundd_snf(real_T u);

#endif                     /* RTW_HEADER_atm_machine_state_machine_private_h_ */

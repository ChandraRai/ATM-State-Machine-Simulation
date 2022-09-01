/*
 * atm_machine_state_machine_types.h
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

#ifndef RTW_HEADER_atm_machine_state_machine_types_h_
#define RTW_HEADER_atm_machine_state_machine_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLAB Function: '<Root>/Update Balance' */
#include <stdio.h>
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_int32_T */

#ifndef typedef_emxArray_int32_T_atm_machine__T
#define typedef_emxArray_int32_T_atm_machine__T

typedef struct emxArray_int32_T emxArray_int32_T_atm_machine__T;

#endif                             /* typedef_emxArray_int32_T_atm_machine__T */

/* Parameters (default storage) */
typedef struct P_atm_machine_state_machine_T_ P_atm_machine_state_machine_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_atm_machine_state_mac_T RT_MODEL_atm_machine_state_ma_T;

#endif                       /* RTW_HEADER_atm_machine_state_machine_types_h_ */

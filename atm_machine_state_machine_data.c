/*
 * atm_machine_state_machine_data.c
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

#include "atm_machine_state_machine.h"
#include "atm_machine_state_machine_private.h"

/* Block parameters (default storage) */
P_atm_machine_state_machine_T atm_machine_state_machine_P = {
  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 555
   * Referenced by: '<Root>/Client Card'
   */
  555.0,

  /* Expression: 123
   * Referenced by: '<Root>/PIN'
   */
  123.0,

  /* Expression: 2
   * Referenced by: '<Root>/Select Option: 1.Balance Check 2.Fund Withdraw'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<Root>/Fund'
   */
  2.0,

  /* Computed Parameter: Switch0Off1ON_CurrentSetting
   * Referenced by: '<Root>/Switch: 0=Off 1=ON'
   */
  1U
};

/*
 * atm_machine_state_machine.h
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

#ifndef RTW_HEADER_atm_machine_state_machine_h_
#define RTW_HEADER_atm_machine_state_machine_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef atm_machine_state_machine_COMMON_INCLUDES_
#define atm_machine_state_machine_COMMON_INCLUDES_
#include <stdio.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "stdio.h"
#endif                          /* atm_machine_state_machine_COMMON_INCLUDES_ */

#include "atm_machine_state_machine_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
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
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  char_T status[7];                    /* '<Root>/PIN Verification' */
  char_T status_n[14];                 /* '<Root>/Card Validation' */
  char_T status_h[11];                 /* '<Root>/Chart' */
  real_T switch_signal;                /* '<Root>/Switch: 0=Off 1=ON' */
  real_T Add;                          /* '<Root>/Add' */
  real_T y;                            /* '<Root>/Update Balance' */
  real_T y_k;                          /* '<Root>/Read Balance' */
  real_T device_idle;                  /* '<Root>/Power' */
  real_T status_e;                     /* '<Root>/Power' */
  real_T pin_output;                   /* '<Root>/PIN Verification' */
  real_T y_i;                          /* '<Root>/Fund Deposit' */
  real_T balance_output;               /* '<Root>/Chart1' */
  real_T withdraw_output;              /* '<Root>/Chart1' */
  real_T card_output;                  /* '<Root>/Card Validation' */
} B_atm_machine_state_machine_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_atm_machine_state_;/* '<Root>/Power' */
  uint8_T is_c3_atm_machine_state_machine;/* '<Root>/Power' */
  uint8_T temporalCounter_i1;          /* '<Root>/Power' */
  uint8_T is_active_c2_atm_machine_state_;/* '<Root>/PIN Verification' */
  uint8_T is_c2_atm_machine_state_machine;/* '<Root>/PIN Verification' */
  uint8_T is_active_c8_atm_machine_state_;/* '<Root>/Chart1' */
  uint8_T is_c8_atm_machine_state_machine;/* '<Root>/Chart1' */
  uint8_T is_active_c4_atm_machine_state_;/* '<Root>/Chart' */
  uint8_T is_c4_atm_machine_state_machine;/* '<Root>/Chart' */
  boolean_T eml_autoflush[20];         /* '<Root>/Update Balance' */
  FILE* eml_openfiles[20];             /* '<Root>/Read Balance' */
  FILE* eml_openfiles_g[20];           /* '<Root>/Update Balance' */
} DW_atm_machine_state_machine_T;

/* Parameters (default storage) */
struct P_atm_machine_state_machine_T_ {
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T ClientCard_Value;             /* Expression: 555
                                        * Referenced by: '<Root>/Client Card'
                                        */
  real_T PIN_Value;                    /* Expression: 123
                                        * Referenced by: '<Root>/PIN'
                                        */
  real_T SelectOption1BalanceCheck2FundW;/* Expression: 2
                                          * Referenced by: '<Root>/Select Option: 1.Balance Check 2.Fund Withdraw'
                                          */
  real_T Fund_Value;                   /* Expression: 2
                                        * Referenced by: '<Root>/Fund'
                                        */
  uint8_T Switch0Off1ON_CurrentSetting;
                             /* Computed Parameter: Switch0Off1ON_CurrentSetting
                              * Referenced by: '<Root>/Switch: 0=Off 1=ON'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_atm_machine_state_mac_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_atm_machine_state_machine_T atm_machine_state_machine_P;

/* Block signals (default storage) */
extern B_atm_machine_state_machine_T atm_machine_state_machine_B;

/* Block states (default storage) */
extern DW_atm_machine_state_machine_T atm_machine_state_machine_DW;

/* Model entry point functions */
extern void atm_machine_state_machine_initialize(void);
extern void atm_machine_state_machine_step(void);
extern void atm_machine_state_machine_terminate(void);

/* Real-time Model object */
extern RT_MODEL_atm_machine_state_ma_T *const atm_machine_state_machine_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
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
 * '<Root>' : 'atm_machine_state_machine'
 * '<S1>'   : 'atm_machine_state_machine/Card Validation'
 * '<S2>'   : 'atm_machine_state_machine/Chart'
 * '<S3>'   : 'atm_machine_state_machine/Chart1'
 * '<S4>'   : 'atm_machine_state_machine/Fund Deposit'
 * '<S5>'   : 'atm_machine_state_machine/PIN Verification'
 * '<S6>'   : 'atm_machine_state_machine/Power'
 * '<S7>'   : 'atm_machine_state_machine/Read Balance'
 * '<S8>'   : 'atm_machine_state_machine/Update Balance'
 */
#endif                             /* RTW_HEADER_atm_machine_state_machine_h_ */

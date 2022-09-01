/*
 * atm_machine_state_machine.c
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

/* Named constants for Chart: '<Root>/Chart' */
#define atm_machine__IN_FUND_DISPENSING ((uint8_T)1U)
#define atm_machine_state_IN_PROCESSING ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Chart1' */
#define atm_machine_state_m_IN_Decision ((uint8_T)2U)
#define atm_machine_state_m_IN_Withdraw ((uint8_T)3U)
#define atm_machine_state_ma_IN_Balance ((uint8_T)1U)

/* Named constants for Chart: '<Root>/PIN Verification' */
#define atm_machine_sta_IN_PROCESSING_b ((uint8_T)1U)
#define atm_machine_state_ma_IN_WAITING ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Power' */
#define atm_machine_state_machi_IN_IDLE ((uint8_T)1U)
#define atm_machine_state_machin_IN_OFF ((uint8_T)2U)
#define atm_machine_state_machine_IN_ON ((uint8_T)3U)

/* Block signals (default storage) */
B_atm_machine_state_machine_T atm_machine_state_machine_B;

/* Block states (default storage) */
DW_atm_machine_state_machine_T atm_machine_state_machine_DW;

/* Real-time model */
static RT_MODEL_atm_machine_state_ma_T atm_machine_state_machine_M_;
RT_MODEL_atm_machine_state_ma_T *const atm_machine_state_machine_M =
  &atm_machine_state_machine_M_;

/* Forward declaration for local functions */
static void atm_machine_sta_emxInit_int32_T(emxArray_int32_T_atm_machine__T
  **pEmxArray, int32_T numDimensions);
static int8_T atm_machine_state_mach_filedata(void);
static int8_T atm_machine_state_machin_cfopen(const char_T *cfilename, const
  char_T *cpermission);
static void atm_m_emxEnsureCapacity_int32_T(emxArray_int32_T_atm_machine__T
  *emxArray, int32_T oldNumel);
static int32_T atm_machine_state_machi_cfclose(real_T fid);
static void atm_machine_sta_emxFree_int32_T(emxArray_int32_T_atm_machine__T
  **pEmxArray);
static int8_T atm_machine_state_ma_filedata_d(void);
static int8_T atm_machine_state_mach_cfopen_i(const char_T *cfilename, const
  char_T *cpermission);
static int32_T atm_machine_state_mac_cfclose_e(real_T fid);
static void atm_machine_sta_emxInit_int32_T(emxArray_int32_T_atm_machine__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_int32_T_atm_machine__T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T_atm_machine__T *)malloc(sizeof
    (emxArray_int32_T_atm_machine__T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* Function for MATLAB Function: '<Root>/Read Balance' */
static int8_T atm_machine_state_mach_filedata(void)
{
  int32_T k;
  int8_T f;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k - 1 < 20)) {
    if (atm_machine_state_machine_DW.eml_openfiles[(int8_T)k - 1] == NULL) {
      f = (int8_T)k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/Read Balance' */
static int8_T atm_machine_state_machin_cfopen(const char_T *cfilename, const
  char_T *cpermission)
{
  int8_T fileid;
  int8_T j;
  fileid = -1;
  j = atm_machine_state_mach_filedata();
  if (j >= 1) {
    FILE* filestar;
    filestar = fopen(cfilename, cpermission);
    if (filestar != NULL) {
      int32_T tmp;
      atm_machine_state_machine_DW.eml_openfiles[j - 1] = filestar;
      tmp = j + 2;
      if (tmp > 127) {
        tmp = 127;
      }

      fileid = (int8_T)tmp;
    }
  }

  return fileid;
}

static void atm_m_emxEnsureCapacity_int32_T(emxArray_int32_T_atm_machine__T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/Read Balance' */
static int32_T atm_machine_state_machi_cfclose(real_T fid)
{
  FILE* filestar;
  int32_T st;
  int8_T b_fileid;
  int8_T fileid;
  boolean_T condition;
  st = -1;
  fileid = (int8_T)rt_roundd_snf(fid);
  if ((fileid < 0) || (fid != fileid)) {
    fileid = -1;
  }

  b_fileid = fileid;
  if (fileid < 0) {
    b_fileid = -1;
  }

  if (b_fileid >= 3) {
    filestar = atm_machine_state_machine_DW.eml_openfiles[b_fileid - 3];
  } else if (b_fileid == 0) {
    filestar = stdin;
  } else if (b_fileid == 1) {
    filestar = stdout;
  } else if (b_fileid == 2) {
    filestar = stderr;
  } else {
    filestar = NULL;
  }

  condition = ((filestar != NULL) && (fileid >= 3));
  if (condition) {
    int32_T cst;
    cst = fclose(filestar);
    if (cst == 0) {
      st = 0;
      atm_machine_state_machine_DW.eml_openfiles[fileid - 3] = NULL;
    }
  }

  return st;
}

static void atm_machine_sta_emxFree_int32_T(emxArray_int32_T_atm_machine__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_atm_machine__T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_atm_machine__T *)NULL;
  }
}

/* Function for MATLAB Function: '<Root>/Update Balance' */
static int8_T atm_machine_state_ma_filedata_d(void)
{
  int32_T k;
  int8_T f;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k - 1 < 20)) {
    if (atm_machine_state_machine_DW.eml_openfiles_g[(int8_T)k - 1] == NULL) {
      f = (int8_T)k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

/* Function for MATLAB Function: '<Root>/Update Balance' */
static int8_T atm_machine_state_mach_cfopen_i(const char_T *cfilename, const
  char_T *cpermission)
{
  int8_T fileid;
  int8_T j;
  fileid = -1;
  j = atm_machine_state_ma_filedata_d();
  if (j >= 1) {
    FILE* filestar;
    filestar = fopen(cfilename, cpermission);
    if (filestar != NULL) {
      int32_T tmp;
      atm_machine_state_machine_DW.eml_openfiles_g[j - 1] = filestar;
      atm_machine_state_machine_DW.eml_autoflush[j - 1] = true;
      tmp = j + 2;
      if (tmp > 127) {
        tmp = 127;
      }

      fileid = (int8_T)tmp;
    }
  }

  return fileid;
}

/* Function for MATLAB Function: '<Root>/Update Balance' */
static int32_T atm_machine_state_mac_cfclose_e(real_T fid)
{
  FILE* filestar;
  int32_T st;
  int8_T b_fileid;
  int8_T fileid;
  boolean_T condition;
  st = -1;
  fileid = (int8_T)rt_roundd_snf(fid);
  if ((fileid > 22) || (fileid < 0) || (fid != fileid)) {
    fileid = -1;
  }

  b_fileid = fileid;
  if (fileid < 0) {
    b_fileid = -1;
  }

  if (b_fileid >= 3) {
    filestar = atm_machine_state_machine_DW.eml_openfiles_g[b_fileid - 3];
  } else if (b_fileid == 0) {
    filestar = stdin;
  } else if (b_fileid == 1) {
    filestar = stdout;
  } else if (b_fileid == 2) {
    filestar = stderr;
  } else {
    filestar = NULL;
  }

  condition = ((filestar != NULL) && (fileid >= 3));
  if (condition) {
    int32_T cst;
    cst = fclose(filestar);
    if (cst == 0) {
      st = 0;
      atm_machine_state_machine_DW.eml_openfiles_g[fileid - 3] = NULL;
      atm_machine_state_machine_DW.eml_autoflush[fileid - 3] = true;
    }
  }

  return st;
}

/* Model step function */
void atm_machine_state_machine_step(void)
{
  static const char_T b[13] = { 'C', 'a', 'r', 'd', ' ', 'I', 'n', 's', 'e', 'r',
    't', 'e', 'd' };

  static const char_T c[12] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'c', 'a',
    'r', 'd' };

  static const char_T d[10] = { 'D', 'e', 'v', 'i', 'c', 'e', ' ', 'O', 'f', 'f'
  };

  static const char_T b_0[5] = { 'E', 'r', 'r', 'o', 'r' };

  static const char_T c_0[5] = { 'E', 'r', 'r', 'o', 'r' };

  static const char_T d_0[6] = { 'P', 'I', 'N', ' ', 'O', 'k' };

  FILE* filestar;
  emxArray_int32_T_atm_machine__T *bigA;
  int32_T tmpOut[2];
  int8_T b_fileid;
  int8_T fileid;
  boolean_T incompleteRead;
  static const char_T b_1[10] = { 'N', 'o', 't', ' ', 'i', 'n', ' ', 'u', 's',
    'e' };

  static const char_T c_1[10] = { 'N', 'o', 't', ' ', 'i', 'n', ' ', 'u', 's',
    'e' };

  static const char_T d_1[10] = { 'D', 'i', 's', 'p', 'e', 'n', 's', 'i', 'n',
    'g' };

  real_T u;
  int32_T i;
  char_T (*tmp)[14];
  char_T (*tmp_2)[11];
  char_T (*tmp_1)[7];
  const char_T *tmp_0;

  /* ManualSwitch: '<Root>/Switch: 0=Off 1=ON' */
  if (atm_machine_state_machine_P.Switch0Off1ON_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Switch: 0=Off 1=ON' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    atm_machine_state_machine_B.switch_signal =
      atm_machine_state_machine_P.Constant1_Value;
  } else {
    /* ManualSwitch: '<Root>/Switch: 0=Off 1=ON' incorporates:
     *  Constant: '<Root>/Constant'
     */
    atm_machine_state_machine_B.switch_signal =
      atm_machine_state_machine_P.Constant_Value;
  }

  /* End of ManualSwitch: '<Root>/Switch: 0=Off 1=ON' */

  /* Chart: '<Root>/Power' */
  if (atm_machine_state_machine_DW.temporalCounter_i1 < 15U) {
    atm_machine_state_machine_DW.temporalCounter_i1++;
  }

  if (atm_machine_state_machine_DW.is_active_c3_atm_machine_state_ == 0U) {
    atm_machine_state_machine_DW.is_active_c3_atm_machine_state_ = 1U;
    atm_machine_state_machine_DW.is_c3_atm_machine_state_machine =
      atm_machine_state_machin_IN_OFF;

    /* :  status=0; */
    atm_machine_state_machine_B.status_e = 0.0;
  } else {
    switch (atm_machine_state_machine_DW.is_c3_atm_machine_state_machine) {
     case atm_machine_state_machi_IN_IDLE:
      atm_machine_state_machine_B.device_idle = 1.0;
      break;

     case atm_machine_state_machin_IN_OFF:
      atm_machine_state_machine_B.status_e = 0.0;

      /* :  sf_internal_predicateOutput = switch_on; */
      if (atm_machine_state_machine_B.switch_signal != 0.0) {
        atm_machine_state_machine_DW.is_c3_atm_machine_state_machine =
          atm_machine_state_machine_IN_ON;
        atm_machine_state_machine_DW.temporalCounter_i1 = 0U;

        /* :  status=1; */
        atm_machine_state_machine_B.status_e = 1.0;
      }
      break;

     default:
      /* case IN_ON: */
      atm_machine_state_machine_B.status_e = 1.0;

      /* :  sf_internal_predicateOutput = ~switch_on; */
      if (!(atm_machine_state_machine_B.switch_signal != 0.0)) {
        atm_machine_state_machine_DW.is_c3_atm_machine_state_machine =
          atm_machine_state_machin_IN_OFF;

        /* :  status=0; */
        atm_machine_state_machine_B.status_e = 0.0;

        /* :  sf_internal_predicateOutput = after(2, sec); */
      } else if (atm_machine_state_machine_DW.temporalCounter_i1 >= 10U) {
        atm_machine_state_machine_DW.is_c3_atm_machine_state_machine =
          atm_machine_state_machi_IN_IDLE;

        /* :  device_idle = 1 */
        atm_machine_state_machine_B.device_idle = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Power' */

  /* Chart: '<Root>/Card Validation' incorporates:
   *  Constant: '<Root>/Client Card'
   */
  /* :  sf_internal_predicateOutput = device_idle==1&&card==555; */
  incompleteRead = ((atm_machine_state_machine_B.device_idle == 1.0) &&
                    (atm_machine_state_machine_P.ClientCard_Value == 555.0));
  if (incompleteRead) {
    /* :  status="Card Inserted", */
    strncpy(&atm_machine_state_machine_B.status_n[0], "", 13U);
    atm_machine_state_machine_B.status_n[13] = '\x00';
    tmp = &atm_machine_state_machine_B.status_n;
    tmp_0 = &b[0];
    for (i = 0; i < 13; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[13] = '\x00';

    /* :  card_output=1; */
    atm_machine_state_machine_B.card_output = 1.0;

    /* :  sf_internal_predicateOutput = device_idle==0; */
  } else if (atm_machine_state_machine_B.device_idle == 0.0) {
    /* :  status="Device Off"; */
    strncpy(&atm_machine_state_machine_B.status_n[0], "", 13U);
    atm_machine_state_machine_B.status_n[13] = '\x00';
    tmp = &atm_machine_state_machine_B.status_n;
    tmp_0 = &d[0];
    for (i = 0; i < 10; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[10] = '\x00';
  } else {
    /* :  status="Invalid card"; */
    strncpy(&atm_machine_state_machine_B.status_n[0], "", 13U);
    atm_machine_state_machine_B.status_n[13] = '\x00';
    tmp = &atm_machine_state_machine_B.status_n;
    tmp_0 = &c[0];
    for (i = 0; i < 12; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[12] = '\x00';
  }

  /* End of Chart: '<Root>/Card Validation' */

  /* Chart: '<Root>/PIN Verification' incorporates:
   *  Constant: '<Root>/PIN'
   */
  if (atm_machine_state_machine_DW.is_active_c2_atm_machine_state_ == 0U) {
    atm_machine_state_machine_DW.is_active_c2_atm_machine_state_ = 1U;
    atm_machine_state_machine_DW.is_c2_atm_machine_state_machine =
      atm_machine_state_ma_IN_WAITING;

    /* :  status="Error"; */
    strncpy(&atm_machine_state_machine_B.status[0], "", 6U);
    atm_machine_state_machine_B.status[6] = '\x00';
    tmp_1 = &atm_machine_state_machine_B.status;
    tmp_0 = &b_0[0];
    for (i = 0; i < 5; i++) {
      (*tmp_1)[i] = tmp_0[i];
    }

    (*tmp_1)[5] = '\x00';

    /* :  pin_output=0; */
    atm_machine_state_machine_B.pin_output = 0.0;
  } else if (atm_machine_state_machine_DW.is_c2_atm_machine_state_machine ==
             atm_machine_sta_IN_PROCESSING_b) {
    atm_machine_state_machine_B.pin_output = 1.0;

    /* :  sf_internal_predicateOutput = ~card_output; */
    if (!(atm_machine_state_machine_B.card_output != 0.0)) {
      atm_machine_state_machine_DW.is_c2_atm_machine_state_machine =
        atm_machine_state_ma_IN_WAITING;

      /* :  status="Error"; */
      strncpy(&atm_machine_state_machine_B.status[0], "", 6U);
      atm_machine_state_machine_B.status[6] = '\x00';
      tmp_1 = &atm_machine_state_machine_B.status;
      tmp_0 = &c_0[0];
      for (i = 0; i < 5; i++) {
        (*tmp_1)[i] = tmp_0[i];
      }

      (*tmp_1)[5] = '\x00';

      /* :  pin_output=0; */
      atm_machine_state_machine_B.pin_output = 0.0;
    }
  } else {
    /* case IN_WAITING: */
    atm_machine_state_machine_B.pin_output = 0.0;

    /* :  sf_internal_predicateOutput = card_output&&pin==123; */
    incompleteRead = ((atm_machine_state_machine_B.card_output != 0.0) &&
                      (atm_machine_state_machine_P.PIN_Value == 123.0));
    if (incompleteRead) {
      atm_machine_state_machine_DW.is_c2_atm_machine_state_machine =
        atm_machine_sta_IN_PROCESSING_b;

      /* :  status="PIN Ok"; */
      strncpy(&atm_machine_state_machine_B.status[0], "", 6U);
      atm_machine_state_machine_B.status[6] = '\x00';
      tmp_1 = &atm_machine_state_machine_B.status;
      tmp_0 = &d_0[0];
      for (i = 0; i < 6; i++) {
        (*tmp_1)[i] = tmp_0[i];
      }

      (*tmp_1)[6] = '\x00';

      /* :  pin_output=1; */
      atm_machine_state_machine_B.pin_output = 1.0;
    }
  }

  /* End of Chart: '<Root>/PIN Verification' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  Constant: '<Root>/Select Option: 1.Balance Check 2.Fund Withdraw'
   */
  if (atm_machine_state_machine_DW.is_active_c8_atm_machine_state_ == 0U) {
    atm_machine_state_machine_DW.is_active_c8_atm_machine_state_ = 1U;
    atm_machine_state_machine_DW.is_c8_atm_machine_state_machine =
      atm_machine_state_m_IN_Decision;

    /* :  balance_output = 0; */
    atm_machine_state_machine_B.balance_output = 0.0;

    /* :  withdraw_output = 0; */
    atm_machine_state_machine_B.withdraw_output = 0.0;
  } else {
    switch (atm_machine_state_machine_DW.is_c8_atm_machine_state_machine) {
     case atm_machine_state_ma_IN_Balance:
      /* :  sf_internal_predicateOutput = pin_output ~= 1; */
      if (atm_machine_state_machine_B.pin_output != 1.0) {
        atm_machine_state_machine_DW.is_c8_atm_machine_state_machine =
          atm_machine_state_m_IN_Decision;

        /* :  balance_output = 0; */
        atm_machine_state_machine_B.balance_output = 0.0;

        /* :  withdraw_output = 0; */
        atm_machine_state_machine_B.withdraw_output = 0.0;
      }
      break;

     case atm_machine_state_m_IN_Decision:
      /* :  sf_internal_predicateOutput = pin_output==1 && option == 1; */
      incompleteRead = ((atm_machine_state_machine_B.pin_output == 1.0) &&
                        (atm_machine_state_machine_P.SelectOption1BalanceCheck2FundW
                         == 1.0));
      if (incompleteRead) {
        atm_machine_state_machine_DW.is_c8_atm_machine_state_machine =
          atm_machine_state_ma_IN_Balance;

        /* :  balance_output = 1; */
        atm_machine_state_machine_B.balance_output = 1.0;
      } else {
        /* :  sf_internal_predicateOutput = pin_output == 1 && option == 2; */
        incompleteRead = ((atm_machine_state_machine_B.pin_output == 1.0) &&
                          (atm_machine_state_machine_P.SelectOption1BalanceCheck2FundW
                           == 2.0));
        if (incompleteRead) {
          atm_machine_state_machine_DW.is_c8_atm_machine_state_machine =
            atm_machine_state_m_IN_Withdraw;

          /* :  withdraw_output = 1 */
          atm_machine_state_machine_B.withdraw_output = 1.0;
        } else {
          /* :  balance_output = 0; */
          atm_machine_state_machine_B.balance_output = 0.0;

          /* :  withdraw_output = 0; */
          atm_machine_state_machine_B.withdraw_output = 0.0;
        }
      }
      break;

     default:
      /* case IN_Withdraw: */
      /* :  sf_internal_predicateOutput = pin_output ~= 1; */
      if (atm_machine_state_machine_B.pin_output != 1.0) {
        atm_machine_state_machine_DW.is_c8_atm_machine_state_machine =
          atm_machine_state_m_IN_Decision;

        /* :  balance_output = 0; */
        atm_machine_state_machine_B.balance_output = 0.0;

        /* :  withdraw_output = 0; */
        atm_machine_state_machine_B.withdraw_output = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* MATLAB Function: '<Root>/Read Balance' */
  /* :  if balance_output == 1 */
  if (atm_machine_state_machine_B.balance_output == 1.0) {
    int32_T numRead;
    boolean_T exitg1;
    atm_machine_sta_emxInit_int32_T(&bigA, 1);

    /* :  fid = fopen('account.txt','r'); */
    fileid = atm_machine_state_machin_cfopen("account.txt", "rb");

    /* :  x = fscanf(fid, '%i'); */
    tmpOut[0] = 0;
    bigA->size[0] = 0;
    numRead = 1;
    b_fileid = fileid;
    if (fileid < 0) {
      b_fileid = -1;
    }

    if (b_fileid >= 3) {
      filestar = atm_machine_state_machine_DW.eml_openfiles[b_fileid - 3];
    } else if (b_fileid == 0) {
      filestar = stdin;
    } else if (b_fileid == 1) {
      filestar = stdout;
    } else if (b_fileid == 2) {
      filestar = stderr;
    } else {
      filestar = NULL;
    }

    exitg1 = false;
    while ((!exitg1) && (numRead > 0)) {
      tmpOut[1] = -1;
      numRead = fscanf(filestar, "%i%n", &tmpOut[0], &tmpOut[1]);
      if (tmpOut[1] != -1) {
        numRead++;
      }

      incompleteRead = (numRead == 0);
      if (numRead > 0) {
        int32_T tmp_3;
        i = bigA->size[0];
        tmp_3 = bigA->size[0];
        bigA->size[0] = i + 1;
        atm_m_emxEnsureCapacity_int32_T(bigA, tmp_3);
        bigA->data[i] = tmpOut[0];
        if (2 > numRead) {
          incompleteRead = true;
        }
      }

      if (incompleteRead) {
        exitg1 = true;
      }
    }

    /* :  fclose(fid); */
    atm_machine_state_machi_cfclose((real_T)fileid);

    /* :  y = x(1); */
    atm_machine_state_machine_B.y_k = bigA->data[0];
    atm_machine_sta_emxFree_int32_T(&bigA);
  } else {
    /* :  else */
    /* :  y = 0; */
    atm_machine_state_machine_B.y_k = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Read Balance' */

  /* MATLAB Function: '<Root>/Fund Deposit' incorporates:
   *  Constant: '<Root>/Fund'
   */
  if (atm_machine_state_machine_B.balance_output == 1.0) {
    /* :  y = a; */
    atm_machine_state_machine_B.y_i = atm_machine_state_machine_P.Fund_Value;
  } else {
    /* :  else */
    /* :  y = 0; */
    atm_machine_state_machine_B.y_i = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Fund Deposit' */

  /* Sum: '<Root>/Add' */
  /* :  if balance_output == 1 */
  atm_machine_state_machine_B.Add = atm_machine_state_machine_B.y_k +
    atm_machine_state_machine_B.y_i;

  /* Chart: '<Root>/Chart' */
  if (atm_machine_state_machine_DW.is_active_c4_atm_machine_state_ == 0U) {
    atm_machine_state_machine_DW.is_active_c4_atm_machine_state_ = 1U;
    atm_machine_state_machine_DW.is_c4_atm_machine_state_machine =
      atm_machine_state_IN_PROCESSING;

    /* :  status="Not in use"; */
    strncpy(&atm_machine_state_machine_B.status_h[0], "", 10U);
    atm_machine_state_machine_B.status_h[10] = '\x00';
    tmp_2 = &atm_machine_state_machine_B.status_h;
    tmp_0 = &b_1[0];
    for (i = 0; i < 10; i++) {
      (*tmp_2)[i] = tmp_0[i];
    }

    (*tmp_2)[10] = '\x00';
  } else if (atm_machine_state_machine_DW.is_c4_atm_machine_state_machine ==
             atm_machine__IN_FUND_DISPENSING) {
    /* :  sf_internal_predicateOutput = pin_output==0; */
    if (atm_machine_state_machine_B.withdraw_output == 0.0) {
      atm_machine_state_machine_DW.is_c4_atm_machine_state_machine =
        atm_machine_state_IN_PROCESSING;

      /* :  status="Not in use"; */
      strncpy(&atm_machine_state_machine_B.status_h[0], "", 10U);
      atm_machine_state_machine_B.status_h[10] = '\x00';
      tmp_2 = &atm_machine_state_machine_B.status_h;
      tmp_0 = &c_1[0];
      for (i = 0; i < 10; i++) {
        (*tmp_2)[i] = tmp_0[i];
      }

      (*tmp_2)[10] = '\x00';
    }

    /* case IN_PROCESSING: */
    /* :  sf_internal_predicateOutput = pin_output==1; */
  } else if (atm_machine_state_machine_B.withdraw_output == 1.0) {
    atm_machine_state_machine_DW.is_c4_atm_machine_state_machine =
      atm_machine__IN_FUND_DISPENSING;

    /* :  status="Dispensing"; */
    strncpy(&atm_machine_state_machine_B.status_h[0], "", 10U);
    atm_machine_state_machine_B.status_h[10] = '\x00';
    tmp_2 = &atm_machine_state_machine_B.status_h;
    tmp_0 = &d_1[0];
    for (i = 0; i < 10; i++) {
      (*tmp_2)[i] = tmp_0[i];
    }

    (*tmp_2)[10] = '\x00';
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLAB Function: '<Root>/Update Balance' */
  u = atm_machine_state_machine_B.Add;

  /* :  if balance_output == 1 */
  if (atm_machine_state_machine_B.balance_output == 1.0) {
    FILE* b_NULL;

    /* :  fid = fopen('account1.txt','w'); */
    fileid = atm_machine_state_mach_cfopen_i("account1.txt", "wb");

    /* :  fprintf(fid, '%2.2f',u); */
    b_NULL = NULL;
    b_fileid = fileid;
    if ((fileid > 22) || (fileid < 0)) {
      b_fileid = -1;
    }

    if (b_fileid >= 3) {
      filestar = atm_machine_state_machine_DW.eml_openfiles_g[b_fileid - 3];
      incompleteRead = atm_machine_state_machine_DW.eml_autoflush[b_fileid - 3];
    } else if (b_fileid == 0) {
      filestar = stdin;
      incompleteRead = true;
    } else if (b_fileid == 1) {
      filestar = stdout;
      incompleteRead = true;
    } else if (b_fileid == 2) {
      filestar = stderr;
      incompleteRead = true;
    } else {
      filestar = NULL;
      incompleteRead = true;
    }

    if (!(filestar == b_NULL)) {
      fprintf(filestar, "%2.2f", u);
      if (incompleteRead) {
        fflush(filestar);
      }
    }

    /* :  fclose(fid); */
    atm_machine_state_mac_cfclose_e((real_T)fileid);

    /* :  y = u; */
    atm_machine_state_machine_B.y = u;
  } else {
    /* :  else */
    /* :  y = 0; */
    atm_machine_state_machine_B.y = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Update Balance' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(atm_machine_state_machine_M->rtwLogInfo,
                      (&atm_machine_state_machine_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(atm_machine_state_machine_M)!=-1) &&
        !((rtmGetTFinal(atm_machine_state_machine_M)-
           atm_machine_state_machine_M->Timing.taskTime0) >
          atm_machine_state_machine_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(atm_machine_state_machine_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++atm_machine_state_machine_M->Timing.clockTick0)) {
    ++atm_machine_state_machine_M->Timing.clockTickH0;
  }

  atm_machine_state_machine_M->Timing.taskTime0 =
    atm_machine_state_machine_M->Timing.clockTick0 *
    atm_machine_state_machine_M->Timing.stepSize0 +
    atm_machine_state_machine_M->Timing.clockTickH0 *
    atm_machine_state_machine_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void atm_machine_state_machine_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)atm_machine_state_machine_M, 0,
                sizeof(RT_MODEL_atm_machine_state_ma_T));
  rtmSetTFinal(atm_machine_state_machine_M, 10.0);
  atm_machine_state_machine_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    atm_machine_state_machine_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(atm_machine_state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(atm_machine_state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogT(atm_machine_state_machine_M->rtwLogInfo, "tout");
    rtliSetLogX(atm_machine_state_machine_M->rtwLogInfo, "");
    rtliSetLogXFinal(atm_machine_state_machine_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(atm_machine_state_machine_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(atm_machine_state_machine_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(atm_machine_state_machine_M->rtwLogInfo, 0);
    rtliSetLogDecimation(atm_machine_state_machine_M->rtwLogInfo, 1);
    rtliSetLogY(atm_machine_state_machine_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(atm_machine_state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(atm_machine_state_machine_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &atm_machine_state_machine_B), 0,
                sizeof(B_atm_machine_state_machine_T));

  /* states (dwork) */
  (void) memset((void *)&atm_machine_state_machine_DW, 0,
                sizeof(DW_atm_machine_state_machine_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(atm_machine_state_machine_M->rtwLogInfo, 0.0,
    rtmGetTFinal(atm_machine_state_machine_M),
    atm_machine_state_machine_M->Timing.stepSize0, (&rtmGetErrorStatus
    (atm_machine_state_machine_M)));

  {
    FILE* a;
    int32_T i;

    /* SystemInitialize for Chart: '<Root>/Power' */
    atm_machine_state_machine_DW.temporalCounter_i1 = 0U;
    atm_machine_state_machine_DW.is_active_c3_atm_machine_state_ = 0U;
    atm_machine_state_machine_DW.is_c3_atm_machine_state_machine = 0;
    atm_machine_state_machine_B.device_idle = 0.0;
    atm_machine_state_machine_B.status_e = 0.0;

    /* SystemInitialize for Chart: '<Root>/Card Validation' */
    strncpy(&atm_machine_state_machine_B.status_n[0], "", 13U);
    atm_machine_state_machine_B.status_n[13] = '\x00';

    /* SystemInitialize for Chart: '<Root>/Card Validation' */
    atm_machine_state_machine_B.card_output = 0.0;

    /* SystemInitialize for Chart: '<Root>/PIN Verification' */
    atm_machine_state_machine_DW.is_active_c2_atm_machine_state_ = 0U;
    atm_machine_state_machine_DW.is_c2_atm_machine_state_machine = 0;
    atm_machine_state_machine_B.pin_output = 0.0;
    strncpy(&atm_machine_state_machine_B.status[0], "", 6U);
    atm_machine_state_machine_B.status[6] = '\x00';

    /* SystemInitialize for Chart: '<Root>/Chart1' */
    atm_machine_state_machine_DW.is_active_c8_atm_machine_state_ = 0U;
    atm_machine_state_machine_DW.is_c8_atm_machine_state_machine = 0;
    atm_machine_state_machine_B.balance_output = 0.0;
    atm_machine_state_machine_B.withdraw_output = 0.0;

    /* SystemInitialize for MATLAB Function: '<Root>/Read Balance' */
    a = NULL;
    for (i = 0; i < 20; i++) {
      atm_machine_state_machine_DW.eml_openfiles[i] = a;
    }

    /* End of SystemInitialize for MATLAB Function: '<Root>/Read Balance' */

    /* SystemInitialize for Chart: '<Root>/Chart' */
    atm_machine_state_machine_DW.is_active_c4_atm_machine_state_ = 0U;
    atm_machine_state_machine_DW.is_c4_atm_machine_state_machine = 0;
    strncpy(&atm_machine_state_machine_B.status_h[0], "", 10U);
    atm_machine_state_machine_B.status_h[10] = '\x00';

    /* SystemInitialize for MATLAB Function: '<Root>/Update Balance' */
    a = NULL;
    for (i = 0; i < 20; i++) {
      atm_machine_state_machine_DW.eml_autoflush[i] = false;
      atm_machine_state_machine_DW.eml_openfiles_g[i] = a;
    }

    /* End of SystemInitialize for MATLAB Function: '<Root>/Update Balance' */
  }
}

/* Model terminate function */
void atm_machine_state_machine_terminate(void)
{
  /* (no terminate code required) */
}

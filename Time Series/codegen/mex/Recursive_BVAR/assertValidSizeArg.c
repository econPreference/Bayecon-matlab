/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * assertValidSizeArg.c
 *
 * Code generation for function 'assertValidSizeArg'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "assertValidSizeArg.h"
#include "Recursive_BVAR_data.h"

/* Variable Definitions */
static emlrtRTEInfo mk_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

/* Function Definitions */
void assertValidSizeArg(const emlrtStack *sp, real_T varargin_1)
{
  real_T b_varargin_1;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1) || (varargin_1 < -2.147483648E+9) || (varargin_1 >
       2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(sp, &lk_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (!(b_varargin_1 <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(sp, &mk_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }
}

/* End of code generation (assertValidSizeArg.c) */

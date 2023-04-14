/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "Ordinary_Regression_emxutil.h"
#include "Ordinary_Regression_types.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    yg_emlrtRSI =
        {
            49,     /* lineNo */
            "mean", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pathName */
};

static emlrtRTEInfo
    w_emlrtRTEI =
        {
            18,     /* lineNo */
            15,     /* colNo */
            "mean", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pName */
};

static emlrtRTEInfo
    x_emlrtRTEI =
        {
            22,     /* lineNo */
            5,      /* colNo */
            "mean", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pName */
};

static emlrtRTEInfo
    ue_emlrtRTEI =
        {
            49,     /* lineNo */
            5,      /* colNo */
            "mean", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pName */
};

/* Function Definitions */
void mean(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack st;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(sp, &w_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(sp, &x_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  st.site = &yg_emlrtRSI;
  combineVectorElements(&st, x, y);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, i, &ue_emlrtRTEI);
  y_data = y->data;
  loop_ub = y->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    y_data[i] /= (real_T)x->size[0];
  }
}

/* End of code generation (mean.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "sum.h"
#include "combineVectorElements.h"
#include "isequal.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRTEInfo lo_emlrtRTEI = { 22,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo mo_emlrtRTEI = { 54,/* lineNo */
  9,                                   /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

/* Function Definitions */
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &lo_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &xb_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    c_st.site = &y_emlrtRSI;
    y = colMajorFlatIter(&c_st, x, x->size[1]);
  }

  return y;
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &lo_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &xb_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    c_st.site = &y_emlrtRSI;
    y = b_colMajorFlatIter(&c_st, x, x->size[0]);
  }

  return y;
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &lo_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b1 = !isequal(x);
  if (!b1) {
    emlrtErrorWithMessageIdR2018a(&st, &mo_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &xb_emlrtRSI;
  combineVectorElements(&b_st, x, y);
}

/* End of code generation (sum.c) */

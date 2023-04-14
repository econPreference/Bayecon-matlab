/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * kron.c
 *
 * Code generation for function 'kron'
 *
 */

/* Include files */
#include "kron.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = { 32, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 33, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 34, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 35, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "kron",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pName */
};

/* Function Definitions */
void kron(const emlrtStack *sp, const emxArray_real_T *A, const emxArray_real_T *
          B, emxArray_real_T *K)
{
  int32_T ma;
  int32_T na;
  int32_T mb;
  int32_T nb;
  int32_T kidx;
  int32_T b_j1;
  int32_T j2;
  int32_T i1;
  int32_T i2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ma = A->size[0];
  na = A->size[1];
  mb = B->size[0];
  nb = B->size[1];
  kidx = K->size[0] * K->size[1];
  K->size[0] = A->size[0] * B->size[0];
  K->size[1] = A->size[1] * B->size[1];
  emxEnsureCapacity_real_T(sp, K, kidx, &eg_emlrtRTEI);
  kidx = -1;
  st.site = &ie_emlrtRSI;
  if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
    b_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (b_j1 = 0; b_j1 < na; b_j1++) {
    st.site = &je_emlrtRSI;
    if ((1 <= nb) && (nb > 2147483646)) {
      b_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j2 = 0; j2 < nb; j2++) {
      st.site = &ke_emlrtRSI;
      if ((1 <= ma) && (ma > 2147483646)) {
        b_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (i1 = 0; i1 < ma; i1++) {
        st.site = &le_emlrtRSI;
        if ((1 <= mb) && (mb > 2147483646)) {
          b_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (i2 = 0; i2 < mb; i2++) {
          kidx++;
          K->data[kidx] = A->data[i1 + A->size[0] * b_j1] * B->data[i2 + B->
            size[0] * j2];
        }
      }
    }
  }
}

/* End of code generation (kron.c) */

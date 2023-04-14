/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cov.c
 *
 * Code generation for function 'cov'
 *
 */

/* Include files */
#include "cov.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo mc_emlrtRSI = {
    71,    /* lineNo */
    "cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRSInfo nc_emlrtRSI = {
    73,    /* lineNo */
    "cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRSInfo oc_emlrtRSI = {
    153,         /* lineNo */
    "local_cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRSInfo pc_emlrtRSI = {
    158,         /* lineNo */
    "local_cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRSInfo qc_emlrtRSI = {
    179,         /* lineNo */
    "local_cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRSInfo tc_emlrtRSI = {
    150,         /* lineNo */
    "local_cov", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pathName
                                                                            */
};

static emlrtRTEInfo od_emlrtRTEI = {
    73,    /* lineNo */
    20,    /* colNo */
    "cov", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pName
                                                                            */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    71,    /* lineNo */
    20,    /* colNo */
    "cov", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pName
                                                                            */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    73,    /* lineNo */
    5,     /* colNo */
    "cov", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pName
                                                                            */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    71,    /* lineNo */
    5,     /* colNo */
    "cov", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/cov.m" /* pName
                                                                            */
};

/* Function Definitions */
void cov(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *xy)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_x;
  const real_T *x_data;
  real_T beta1;
  real_T c;
  real_T muj;
  real_T *b_x_data;
  real_T *xy_data;
  int32_T LDA;
  int32_T i;
  int32_T m;
  int32_T n;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] == 1) {
    emxInit_real_T(sp, &b_x, 1, &pd_emlrtRTEI);
    st.site = &mc_emlrtRSI;
    LDA = x->size[1];
    i = b_x->size[0];
    b_x->size[0] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &pd_emlrtRTEI);
    b_x_data = b_x->data;
    for (i = 0; i < LDA; i++) {
      b_x_data[i] = x_data[x->size[0] * i];
    }
    m = b_x->size[0];
    c = 0.0;
    if (b_x->size[0] == 0) {
      c = rtNaN;
    } else {
      LDA = b_x->size[0];
      if (b_x->size[0] >= 2) {
        muj = 0.0;
        b_st.site = &oc_emlrtRSI;
        if (b_x->size[0] > 2147483646) {
          c_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < m; i++) {
          muj += b_x_data[i];
        }
        muj /= (real_T)b_x->size[0];
        b_st.site = &pc_emlrtRSI;
        for (i = 0; i < m; i++) {
          b_x_data[i] -= muj;
        }
        muj = 1.0 / ((real_T)m - 1.0);
        b_st.site = &qc_emlrtRSI;
        beta1 = 0.0;
        TRANSB1 = 'N';
        TRANSA1 = 'C';
        m_t = (ptrdiff_t)1;
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)m;
        lda_t = (ptrdiff_t)LDA;
        ldb_t = (ptrdiff_t)LDA;
        ldc_t = (ptrdiff_t)1;
        dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &muj, &b_x_data[0], &lda_t,
              &b_x_data[0], &ldb_t, &beta1, &c, &ldc_t);
      }
    }
    emxFree_real_T(&st, &b_x);
    i = xy->size[0] * xy->size[1];
    xy->size[0] = 1;
    xy->size[1] = 1;
    emxEnsureCapacity_real_T(sp, xy, i, &rd_emlrtRTEI);
    xy_data = xy->data;
    xy_data[0] = c;
  } else {
    emxInit_real_T(sp, &b_x, 2, &od_emlrtRTEI);
    st.site = &nc_emlrtRSI;
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &od_emlrtRTEI);
    b_x_data = b_x->data;
    LDA = x->size[0] * x->size[1];
    for (i = 0; i < LDA; i++) {
      b_x_data[i] = x_data[i];
    }
    m = x->size[0];
    n = x->size[1];
    i = xy->size[0] * xy->size[1];
    xy->size[0] = x->size[1];
    xy->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, xy, i, &qd_emlrtRTEI);
    xy_data = xy->data;
    LDA = x->size[1] * x->size[1];
    for (i = 0; i < LDA; i++) {
      xy_data[i] = 0.0;
    }
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(&st, xy, i, &qd_emlrtRTEI);
      xy_data = xy->data;
      LDA = x->size[1] * x->size[1];
      for (i = 0; i < LDA; i++) {
        xy_data[i] = rtNaN;
      }
    } else if (x->size[0] >= 2) {
      b_st.site = &tc_emlrtRSI;
      if (x->size[1] > 2147483646) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (LDA = 0; LDA < n; LDA++) {
        muj = 0.0;
        b_st.site = &oc_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          c_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < m; i++) {
          muj += b_x_data[i + b_x->size[0] * LDA];
        }
        muj /= (real_T)m;
        b_st.site = &pc_emlrtRSI;
        for (i = 0; i < m; i++) {
          b_x_data[i + b_x->size[0] * LDA] -= muj;
        }
      }
      muj = 1.0 / ((real_T)x->size[0] - 1.0);
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(&st, xy, i, &qd_emlrtRTEI);
      xy_data = xy->data;
      LDA = x->size[1] * x->size[1];
      for (i = 0; i < LDA; i++) {
        xy_data[i] = 0.0;
      }
      b_st.site = &qc_emlrtRSI;
      beta1 = 0.0;
      TRANSB1 = 'N';
      TRANSA1 = 'C';
      m_t = (ptrdiff_t)x->size[1];
      n_t = (ptrdiff_t)x->size[1];
      k_t = (ptrdiff_t)x->size[0];
      lda_t = (ptrdiff_t)x->size[0];
      ldb_t = (ptrdiff_t)x->size[0];
      ldc_t = (ptrdiff_t)x->size[1];
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &muj, &b_x_data[0], &lda_t,
            &b_x_data[0], &ldb_t, &beta1, &xy_data[0], &ldc_t);
    }
    emxFree_real_T(&st, &b_x);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (cov.c) */

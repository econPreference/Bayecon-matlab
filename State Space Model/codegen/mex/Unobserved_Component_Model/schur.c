/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "schur.h"
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_types.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    mg_emlrtRSI =
        {
            35,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    ng_emlrtRSI =
        {
            43,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    og_emlrtRSI =
        {
            52,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    pg_emlrtRSI =
        {
            54,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    qg_emlrtRSI =
        {
            83,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    48,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo sg_emlrtRSI = {
    47,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo tg_emlrtRSI = {
    15,       /* lineNo */
    "xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    85,             /* lineNo */
    "ceval_xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = {
    28,       /* lineNo */
    "xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    128,            /* lineNo */
    "ceval_xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRTEInfo
    db_emlrtRTEI =
        {
            18,      /* lineNo */
            15,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo
    wg_emlrtRTEI =
        {
            42,      /* lineNo */
            9,       /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = {
    76,       /* lineNo */
    22,       /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = {
    111,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = {
    86,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    112,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = {
    129,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo
    dh_emlrtRTEI =
        {
            1,       /* lineNo */
            18,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = {
    111,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = {
    112,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, emxArray_real_T *A)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'h', 'r', 'd'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *tau;
  emxArray_real_T *wi;
  emxArray_real_T *wr;
  real_T z;
  real_T *A_data;
  real_T *wi_data;
  real_T *wr_data;
  int32_T A_idx_1;
  int32_T i;
  int32_T istart;
  int32_T j;
  int32_T n;
  boolean_T b_p;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &db_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &mg_emlrtRSI;
  if (anyNonFinite(&st, A)) {
    A_idx_1 = A->size[0];
    n = A->size[1];
    i = A->size[0] * A->size[1];
    A->size[0] = A_idx_1;
    A->size[1] = n;
    emxEnsureCapacity_real_T(sp, A, i, &wg_emlrtRTEI);
    A_data = A->data;
    for (i = 0; i < n; i++) {
      for (j = 0; j < A_idx_1; j++) {
        A_data[j + A->size[0] * i] = rtNaN;
      }
    }
    st.site = &ng_emlrtRSI;
    if ((A_idx_1 != 0) && (n != 0) && (1 < A_idx_1)) {
      istart = 2;
      if (A_idx_1 - 2 < n - 1) {
        n = A_idx_1 - 1;
      }
      b_st.site = &sg_emlrtRSI;
      if ((1 <= n) && (n > 2147483646)) {
        c_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (j = 0; j < n; j++) {
        b_st.site = &rg_emlrtRSI;
        if ((istart <= A_idx_1) && (A_idx_1 > 2147483646)) {
          c_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = istart; i <= A_idx_1; i++) {
          A_data[(i + A->size[0] * j) - 1] = 0.0;
        }
        istart++;
      }
    }
  } else {
    emxInit_real_T(sp, &tau, 1, &dh_emlrtRTEI);
    st.site = &og_emlrtRSI;
    b_st.site = &tg_emlrtRSI;
    n = A->size[0];
    i = tau->size[0];
    if (A->size[0] < 1) {
      tau->size[0] = 0;
    } else {
      tau->size[0] = A->size[0] - 1;
    }
    emxEnsureCapacity_real_T(&b_st, tau, i, &xg_emlrtRTEI);
    wr_data = tau->data;
    if (A->size[0] > 1) {
      info_t = LAPACKE_dgehrd(
          102, (ptrdiff_t)A->size[0], (ptrdiff_t)1, (ptrdiff_t)A->size[0],
          &A_data[0], (ptrdiff_t)muIntScalarMax_sint32(1, n), &wr_data[0]);
      n = (int32_T)info_t;
      c_st.site = &ug_emlrtRSI;
      if (n != 0) {
        p = true;
        if (n != -5) {
          if (n == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &fname[0], 12, n);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        istart = A->size[0];
        A_idx_1 = A->size[1];
        i = A->size[0] * A->size[1];
        A->size[0] = istart;
        A->size[1] = A_idx_1;
        emxEnsureCapacity_real_T(&b_st, A, i, &ah_emlrtRTEI);
        A_data = A->data;
        for (i = 0; i < A_idx_1; i++) {
          for (j = 0; j < istart; j++) {
            A_data[j + A->size[0] * i] = rtNaN;
          }
        }
      }
    }
    emxFree_real_T(&b_st, &tau);
    st.site = &pg_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    z = 0.0;
    n = A->size[0];
    info_t = (ptrdiff_t)A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      emxInit_real_T(&b_st, &wr, 2, &eh_emlrtRTEI);
      emxInit_real_T(&b_st, &wi, 2, &fh_emlrtRTEI);
      A_idx_1 = A->size[0];
      i = wr->size[0] * wr->size[1];
      wr->size[0] = 1;
      wr->size[1] = A_idx_1;
      emxEnsureCapacity_real_T(&b_st, wr, i, &yg_emlrtRTEI);
      wr_data = wr->data;
      i = wi->size[0] * wi->size[1];
      wi->size[0] = 1;
      wi->size[1] = A_idx_1;
      emxEnsureCapacity_real_T(&b_st, wi, i, &bh_emlrtRTEI);
      wi_data = wi->data;
      info_t = LAPACKE_dhseqr(102, 'S', 'N', info_t, (ptrdiff_t)1,
                              (ptrdiff_t)A->size[0], &A_data[0], info_t,
                              &wr_data[0], &wi_data[0], &z,
                              (ptrdiff_t)muIntScalarMax_sint32(1, n));
      n = (int32_T)info_t;
      c_st.site = &wg_emlrtRSI;
      emxFree_real_T(&c_st, &wi);
      emxFree_real_T(&c_st, &wr);
      if (n < 0) {
        p = true;
        b_p = false;
        if (n == -7) {
          b_p = true;
        } else if (n == -11) {
          b_p = true;
        }
        if (!b_p) {
          if (n == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &b_fname[0], 12, n);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        istart = A->size[0];
        A_idx_1 = A->size[1];
        i = A->size[0] * A->size[1];
        A->size[0] = istart;
        A->size[1] = A_idx_1;
        emxEnsureCapacity_real_T(&b_st, A, i, &ch_emlrtRTEI);
        A_data = A->data;
        for (i = 0; i < A_idx_1; i++) {
          for (j = 0; j < istart; j++) {
            A_data[j + A->size[0] * i] = rtNaN;
          }
        }
      }
    } else {
      n = 0;
    }
    if (n != 0) {
      st.site = &qg_emlrtRSI;
      c_warning(&st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (schur.c) */

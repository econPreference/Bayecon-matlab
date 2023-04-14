/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfwishart.c
 *
 * Code generation for function 'lnpdfwishart'
 *
 */

/* Include files */
#include "lnpdfwishart.h"
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_emxutil.h"
#include "Reduced_BVAR_types.h"
#include "applyScalarFunctionInPlace.h"
#include "det.h"
#include "inv.h"
#include "mpower.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    db_emlrtRSI =
        {
            28,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    5,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo lh_emlrtRSI = {
    6,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo mh_emlrtRSI = {
    7,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo nh_emlrtRSI = {
    8,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo oh_emlrtRSI = {
    14,                                                          /* lineNo */
    "logMvGamma",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    15,                                                          /* lineNo */
    "logMvGamma",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI =
    {
        10,        /* lineNo */
        "gammaln", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/"
        "gammaln.m" /* pathName */
};

static emlrtRTEInfo
    fb_emlrtRTEI =
        {
            53,       /* lineNo */
            15,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtRTEInfo
    gb_emlrtRTEI =
        {
            11,      /* lineNo */
            15,      /* colNo */
            "trace", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "trace.m" /* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    28,      /* lineNo */
    9,       /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    14,                                                          /* lineNo */
    32,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

static emlrtRTEInfo
    og_emlrtRTEI =
        {
            60,       /* lineNo */
            20,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    5,                                                             /* lineNo */
    1,                                                             /* colNo */
    "lnpdfwishart",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = {
    8,                                                             /* lineNo */
    18,                                                            /* colNo */
    "lnpdfwishart",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = {
    1,                                                           /* lineNo */
    25,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    14,                                                          /* lineNo */
    36,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

/* Function Definitions */
real_T lnpdfwishart(const emlrtStack *sp, const emxArray_real_T *X,
                    const emxArray_real_T *R, real_T v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *R_inv;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *x;
  emxArray_real_T *y;
  real_T a;
  real_T b_x;
  real_T log_numer;
  real_T t;
  real_T val;
  real_T *b_data;
  real_T *x_data;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &R_inv, 2, &pg_emlrtRTEI);
  /*  Compute log of Wishart dist pdf */
  st.site = &kh_emlrtRSI;
  inv(&st, R, R_inv);
  st.site = &lh_emlrtRSI;
  b_st.site = &lh_emlrtRSI;
  log_numer =
      mpower(&b_st, det(&b_st, X), ((v - (real_T)X->size[0]) - 1.0) / 2.0);
  if (log_numer < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  emxInit_real_T(&st, &y, 2, &sg_emlrtRTEI);
  x_data = y->data;
  log_numer = muDoubleScalarLog(log_numer);
  st.site = &mh_emlrtRSI;
  st.site = &mh_emlrtRSI;
  a = v / 2.0;
  /*  Compute logarithm multivariate Gamma function  */
  /*  which is used in the probability density function of the Wishart and
   * inverse Wishart distributions. */
  /*  Gamma_d(x) = pi^(d(d-1)/4) \prod_(j=1)^d Gamma(x+(1-j)/2) */
  /*  log(Gamma_d(x)) = d(d-1)/4 log(pi) + \sum_(j=1)^d log(Gamma(x+(1-j)/2)) */
  /*  Input: */
  /*    x: m x n data matrix */
  /*    d: dimension */
  /*  Output: */
  /*    y: m x n logarithm multivariate Gamma */
  /*  Written by Michael Chen (sth4nth@gmail.com). */
  if (X->size[0] < 1) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(&st, y, i, &mg_emlrtRTEI);
    x_data = y->data;
    bcoef = X->size[0] - 1;
    for (i = 0; i <= bcoef; i++) {
      x_data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &b, 1, &ng_emlrtRTEI);
  b_st.site = &oh_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &oh_emlrtRSI;
  i = b->size[0];
  b->size[0] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b, i, &ng_emlrtRTEI);
  b_data = b->data;
  bcoef = y->size[1];
  for (i = 0; i < bcoef; i++) {
    b_data[i] = (1.0 - x_data[i]) / 2.0;
  }
  emxFree_real_T(&b_st, &y);
  if (b->size[0] == 1) {
    csz_idx_0 = X->size[0];
  } else if (X->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else if (X->size[0] == b->size[0]) {
    csz_idx_0 = X->size[0];
  } else {
    emlrtErrorWithMessageIdR2018a(&b_st, &fb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  emxInit_real_T(&b_st, &x, 1, &rg_emlrtRTEI);
  i = x->size[0];
  x->size[0] = csz_idx_0;
  emxEnsureCapacity_real_T(&b_st, x, i, &og_emlrtRTEI);
  x_data = x->data;
  if (csz_idx_0 != 0) {
    bcoef = (b->size[0] != 1);
    i = csz_idx_0 - 1;
    for (csz_idx_0 = 0; csz_idx_0 <= i; csz_idx_0++) {
      x_data[csz_idx_0] = a + b_data[bcoef * csz_idx_0];
    }
  }
  emxFree_real_T(&b_st, &b);
  b_st.site = &ph_emlrtRSI;
  b_st.site = &ph_emlrtRSI;
  c_st.site = &qh_emlrtRSI;
  applyScalarFunctionInPlace(&c_st, x);
  b_st.site = &ph_emlrtRSI;
  c_st.site = &ae_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  e_st.site = &xb_emlrtRSI;
  if (x->size[0] == 0) {
    a = 0.0;
  } else {
    f_st.site = &yb_emlrtRSI;
    g_st.site = &ac_emlrtRSI;
    a = sumMatrixColumns(&g_st, x, x->size[0]);
  }
  emxFree_real_T(&e_st, &x);
  st.site = &mh_emlrtRSI;
  b_st.site = &mh_emlrtRSI;
  b_x = det(&b_st, R);
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  emxInit_real_T(&st, &b_y, 2, &qg_emlrtRTEI);
  b_x = muDoubleScalarLog(b_x);
  st.site = &nh_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (X->size[0] != R_inv->size[1]) {
    if (((R_inv->size[0] == 1) && (R_inv->size[1] == 1)) ||
        ((X->size[0] == 1) && (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &dd_emlrtRSI;
  b_mtimes(&b_st, R_inv, X, b_y);
  x_data = b_y->data;
  st.site = &nh_emlrtRSI;
  emxFree_real_T(&st, &R_inv);
  if (b_y->size[0] != b_y->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &gb_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  t = 0.0;
  i = b_y->size[0];
  for (csz_idx_0 = 0; csz_idx_0 < i; csz_idx_0++) {
    t += x_data[csz_idx_0 + b_y->size[0] * csz_idx_0];
  }
  emxFree_real_T(&st, &b_y);
  val = (log_numer -
         ((v * (real_T)X->size[0] / 2.0 * 0.69314718055994529 + v / 2.0 * b_x) +
          ((real_T)X->size[0] * ((real_T)X->size[0] - 1.0) / 4.0 *
               1.1447298858494002 +
           a))) +
        -0.5 * t;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return val;
}

/* End of code generation (lnpdfwishart.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * invpd.c
 *
 * Code generation for function 'invpd'
 *
 */

/* Include files */
#include "invpd.h"
#include "ARMA_X_data.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_types.h"
#include "cholmod.h"
#include "eml_int_forloop_overflow_check.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = {
    23,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    22,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    17,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    14,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    23,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    42,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

static emlrtMCInfo o_emlrtMCI = {
    11,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtMCInfo q_emlrtMCI = {
    11,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtMCInfo r_emlrtMCI = {
    17,                                                         /* lineNo */
    13,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    2,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    1,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    15,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    21,                                                         /* lineNo */
    12,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    26,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    31,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    35,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    37,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    18,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    17,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    19,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    6,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    24,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    10,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtRTEInfo od_emlrtRTEI = {
    25,                                                       /* lineNo */
    12,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    25,                                                       /* lineNo */
    5,                                                        /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    23,                                                         /* lineNo */
    18,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    23,                                                         /* lineNo */
    29,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    22,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static const char_T cv[20] = {'m', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ', 'i',
                              's', ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r'};

static emlrtRSInfo ql_emlrtRSI = {
    17,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo rl_emlrtRSI = {
    11,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo sl_emlrtRSI = {
    11,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo gm_emlrtRSI = {
    25,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

/* Function Definitions */
void b_invpd(const emlrtStack *sp, real_T A, real_T Ainv_data[],
             int32_T Ainv_size[2])
{
  static const int32_T iv[2] = {1, 18};
  static const int32_T iv1[2] = {1, 20};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T L;
  real_T varargin_1_idx_0;
  real_T xi;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  st.site = &qb_emlrtRSI;
  /*  function [R, indef, E, err] = cholmod(A) */
  /*  CHOLMOD Modified Cholesky factorization */
  /*   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL) */
  /*   if A is (sufficiently) positive definite, and otherwise returns a  */
  /*   modified factor R with diagonal enries >= sqrt(delta) and */
  /*   offdiagonal entries <= beta in absolute value, */
  /*   where delta and beta are defined in terms of size of diagonal and */
  /*   offdiagonal entries of A and the machine precision; see below. */
  /*   The idea is to ensure that E = A - R'*R is reasonably small if A is  */
  /*   not too far from being indefinite.  If A is sparse, so is R. */
  /*   The output parameter indef is set to 0 if A is sufficiently positive */
  /*   definite and to 1 if the factorization is modified. */
  /*  */
  /*   The point of modified Cholesky is to avoid computing eigenvalues,  */
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  b_st.site = &rb_emlrtRSI;
  xi = e_sumColumnB(muDoubleScalarAbs(A - A));
  b_st.site = &rb_emlrtRSI;
  xi = e_sumColumnB(xi);
  if (xi > 0.0) {
    b_st.site = &sb_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 18, m, &cv1[0]);
    emlrtAssign(&y, m);
    c_st.site = &bm_emlrtRSI;
    c_error(&c_st, y, &p_emlrtMCI);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  L = muDoubleScalarAbs(A);
  /*  max diagonal entry */
  xi = muDoubleScalarAbs(A - A);
  /*  max off-diagonal entry */
  varargin_1_idx_0 = L + xi;
  if ((varargin_1_idx_0 < 1.0) || muDoubleScalarIsNaN(varargin_1_idx_0)) {
    varargin_1_idx_0 = 1.0;
  }
  b_st.site = &wb_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  /*  initialize d and L */
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  /*  C(j,j) in book */
  xi = 2.2204460492503131E-16 * varargin_1_idx_0;
  if ((L < xi) || (muDoubleScalarIsNaN(L) && (!muDoubleScalarIsNaN(xi)))) {
    L = xi;
  }
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  b_st.site = &ec_emlrtRSI;
  xi = muDoubleScalarSqrt(L);
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  st.site = &pb_emlrtRSI;
  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  if (xi == 0.0) {
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 20, m, &cv[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &ql_emlrtRSI;
    disp(&b_st, b_y, &r_emlrtMCI);
  } else {
    xi = 1.0 / xi;
  }
  Ainv_size[0] = 1;
  Ainv_size[1] = 1;
  xi *= xi;
  Ainv_data[0] = (xi + xi) / 2.0;
}

void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Ainv)
{
  emxArray_real_T *b_Ainv;
  real_T *Ainv_data;
  real_T *b_Ainv_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  Ainv_data = Ainv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Ainv, 2, &od_emlrtRTEI);
  i = b_Ainv->size[0] * b_Ainv->size[1];
  if (Ainv->size[1] == 1) {
    b_Ainv->size[0] = Ainv->size[0];
  } else {
    b_Ainv->size[0] = Ainv->size[1];
  }
  if (Ainv->size[0] == 1) {
    b_Ainv->size[1] = Ainv->size[1];
  } else {
    b_Ainv->size[1] = Ainv->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Ainv, i, &od_emlrtRTEI);
  b_Ainv_data = b_Ainv->data;
  stride_0_0 = (Ainv->size[0] != 1);
  stride_0_1 = (Ainv->size[1] != 1);
  stride_1_0 = (Ainv->size[1] != 1);
  stride_1_1 = (Ainv->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Ainv->size[0] == 1) {
    loop_ub = Ainv->size[1];
  } else {
    loop_ub = Ainv->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Ainv->size[1] == 1) {
      b_loop_ub = Ainv->size[0];
    } else {
      b_loop_ub = Ainv->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Ainv_data[i1 + b_Ainv->size[0] * i] =
          (Ainv_data[i1 * stride_0_0 + Ainv->size[0] * aux_0_1] +
           Ainv_data[aux_1_1 + Ainv->size[0] * (i1 * stride_1_0)]) /
          2.0;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Ainv->size[0] * Ainv->size[1];
  Ainv->size[0] = b_Ainv->size[0];
  Ainv->size[1] = b_Ainv->size[1];
  emxEnsureCapacity_real_T(sp, Ainv, i, &pd_emlrtRTEI);
  Ainv_data = Ainv->data;
  loop_ub = b_Ainv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Ainv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Ainv_data[i1 + Ainv->size[0] * i] = b_Ainv_data[i1 + b_Ainv->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_Ainv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void invpd(const emlrtStack *sp, const emxArray_real_T *A,
           emxArray_real_T *Ainv)
{
  static const int32_T iv[2] = {1, 23};
  static const int32_T iv1[2] = {1, 23};
  static const int32_T iv2[2] = {1, 20};
  static const char_T b_u[23] = {'m', 'a', 't', 'r', 'i', 'x', ' ', 'T',
                                 ' ', ' ', 'i', 's', ' ', 'n', 'o', 't',
                                 ' ', 's', 'q', 'u', 'a', 'r', 'e'};
  static const char_T u[23] = {'m', 'a', 't', 'r', 'i', 'x', ' ', 'A',
                               ' ', ' ', 'i', 's', ' ', 'n', 'o', 't',
                               ' ', 's', 'q', 'u', 'a', 'r', 'e'};
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Hinv;
  emxArray_real_T *a;
  emxArray_real_T *b;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T d_sum;
  real_T *Ainv_data;
  real_T *Hinv_data;
  real_T *b_data;
  int32_T b_i;
  int32_T b_k;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  if (A->size[0] != A->size[1]) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &rl_emlrtRSI;
    disp(&st, y, &o_emlrtMCI);
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
  } else {
    emxInit_real_T(sp, &Hinv, 2, &sd_emlrtRTEI);
    st.site = &qb_emlrtRSI;
    cholmod(&st, A, Hinv, &d_sum);
    Hinv_data = Hinv->data;
    st.site = &pb_emlrtRSI;
    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    emxInit_real_T(&st, &a, 2, &qd_emlrtRTEI);
    emxInit_real_T(&st, &b, 1, &rd_emlrtRTEI);
    if (Hinv->size[0] != n) {
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 23, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      b_st.site = &sl_emlrtRSI;
      disp(&b_st, b_y, &q_emlrtMCI);
    } else {
      b_st.site = &kd_emlrtRSI;
      c_st.site = &md_emlrtRSI;
      if (n > 0) {
        c_st.site = &bd_emlrtRSI;
        if (n > 2147483646) {
          d_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }
      emlrtForLoopVectorCheckR2021a(n, -1.0, 1.0, mxDOUBLE_CLASS, n,
                                    &f_emlrtRTEI, &st);
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= n - 1)) {
        b_k = n - k;
        if ((b_k < 1) || (b_k > Hinv->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &gb_emlrtBCI,
                                        &st);
        }
        if (b_k > Hinv->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &hb_emlrtBCI,
                                        &st);
        }
        d_sum = Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1];
        if (d_sum == 0.0) {
          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&st, 20, m, &cv[0]);
          emlrtAssign(&c_y, m);
          b_st.site = &ql_emlrtRSI;
          disp(&b_st, c_y, &r_emlrtMCI);
          exitg1 = true;
        } else {
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &ib_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &jb_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &kb_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &lb_emlrtBCI,
                                          &st);
          }
          Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1] = 1.0 / d_sum;
          emlrtForLoopVectorCheckR2021a((real_T)b_k - 1.0, -1.0, 1.0,
                                        mxDOUBLE_CLASS, b_k - 1, &g_emlrtRTEI,
                                        &st);
          for (b_i = 0; b_i <= b_k - 2; b_i++) {
            c_i = b_k - b_i;
            if (c_i > b_k) {
              i = -1;
              i1 = -1;
              i2 = -1;
              i3 = -1;
            } else {
              if ((c_i < 1) || (c_i > Hinv->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[1],
                                              &bb_emlrtBCI, &st);
              }
              i = c_i - 2;
              if (b_k > Hinv->size[1]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1],
                                              &cb_emlrtBCI, &st);
              }
              i1 = b_k - 1;
              if (c_i > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[0],
                                              &db_emlrtBCI, &st);
              }
              i2 = c_i - 2;
              if (b_k > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0],
                                              &eb_emlrtBCI, &st);
              }
              i3 = b_k - 1;
            }
            b_st.site = &ld_emlrtRSI;
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &ab_emlrtBCI, &b_st);
            }
            b_loop_ub = a->size[0] * a->size[1];
            a->size[0] = 1;
            loop_ub = i1 - i;
            a->size[1] = loop_ub;
            emxEnsureCapacity_real_T(&b_st, a, b_loop_ub, &qd_emlrtRTEI);
            Ainv_data = a->data;
            for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
              Ainv_data[b_loop_ub] =
                  Hinv_data[(c_i + Hinv->size[0] * ((i + b_loop_ub) + 1)) - 2];
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &fb_emlrtBCI,
                                            &b_st);
            }
            b_loop_ub = i3 - i2;
            i3 = b->size[0];
            b->size[0] = b_loop_ub;
            emxEnsureCapacity_real_T(&b_st, b, i3, &rd_emlrtRTEI);
            b_data = b->data;
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              b_data[i3] =
                  Hinv_data[((i2 + i3) + Hinv->size[0] * (b_k - 1)) + 1];
            }
            c_st.site = &dd_emlrtRSI;
            if (loop_ub != b_loop_ub) {
              if ((loop_ub == 1) || (b_loop_ub == 1)) {
                emlrtErrorWithMessageIdR2018a(
                    &c_st, &i_emlrtRTEI,
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
                                              "MATLAB:innerdim",
                                              "MATLAB:innerdim", 0);
              }
            }
            if (loop_ub < 1) {
              d_sum = 0.0;
            } else {
              n_t = (ptrdiff_t)(i1 - i);
              incx_t = (ptrdiff_t)1;
              incy_t = (ptrdiff_t)1;
              d_sum = ddot(&n_t, &Ainv_data[0], &incx_t, &b_data[0], &incy_t);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &mb_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[1],
                                            &nb_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &ob_emlrtBCI, &st);
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &pb_emlrtBCI,
                                            &st);
            }
            Hinv_data[(c_i + Hinv->size[0] * (b_k - 1)) - 2] =
                -d_sum / Hinv_data[(c_i + Hinv->size[0] * (c_i - 2)) - 2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          k++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
    emxFree_real_T(&st, &b);
    emxFree_real_T(&st, &a);
    st.site = &ob_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_st.site = &fd_emlrtRSI;
    c_mtimes(&b_st, Hinv, Hinv, Ainv);
    Ainv_data = Ainv->data;
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[0] != 1) && (Ainv->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[0], Ainv->size[1], &k_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[1] != 1) && (Ainv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[1], Ainv->size[0], &j_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (Ainv->size[0] == Ainv->size[1]) {
      i = Hinv->size[0] * Hinv->size[1];
      Hinv->size[0] = Ainv->size[0];
      Hinv->size[1] = Ainv->size[1];
      emxEnsureCapacity_real_T(sp, Hinv, i, &od_emlrtRTEI);
      Hinv_data = Hinv->data;
      loop_ub = Ainv->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = Ainv->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Hinv_data[i1 + Hinv->size[0] * i] =
              (Ainv_data[i1 + Ainv->size[0] * i] +
               Ainv_data[i + Ainv->size[0] * i1]) /
              2.0;
        }
      }
      i = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = Hinv->size[1];
      emxEnsureCapacity_real_T(sp, Ainv, i, &pd_emlrtRTEI);
      Ainv_data = Ainv->data;
      loop_ub = Hinv->size[0] * Hinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        Ainv_data[i] = Hinv_data[i];
      }
    } else {
      st.site = &gm_emlrtRSI;
      c_binary_expand_op(&st, Ainv);
    }
    emxFree_real_T(sp, &Hinv);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (invpd.c) */

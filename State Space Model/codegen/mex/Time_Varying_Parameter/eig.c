/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_emxutil.h"
#include "Time_Varying_Parameter_types.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "schur.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo xg_emlrtRSI = {
    93,    /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo yg_emlrtRSI = {
    139,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo ah_emlrtRSI = {
    147,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo bh_emlrtRSI = {
    155,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo fh_emlrtRSI = {
    21,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    22,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    47,                 /* lineNo */
    "mainDiagZeroImag", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    10,                         /* lineNo */
    "eigSkewHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigSkewHermitianStandard.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    12,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    59,            /* lineNo */
    "eigStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    44,            /* lineNo */
    "eigStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    38,      /* lineNo */
    "xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    148,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    143,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    62,    /* lineNo */
    27,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    78,    /* lineNo */
    24,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo tg_emlrtRTEI = {
    110,   /* lineNo */
    9,     /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo ug_emlrtRTEI = {
    21,                     /* lineNo */
    9,                      /* colNo */
    "eigHermitianStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = {
    12,                             /* lineNo */
    5,                              /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = {
    38,      /* lineNo */
    33,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = {
    46,                     /* lineNo */
    20,                     /* colNo */
    "eigHermitianStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = {
    83,      /* lineNo */
    24,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = {
    28,                             /* lineNo */
    24,                             /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    86,      /* lineNo */
    21,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = {
    115,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = {
    139,   /* lineNo */
    9,     /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo eh_emlrtRTEI = {
    116,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = {
    83,      /* lineNo */
    1,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    115,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    116,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const emxArray_real_T *A, emxArray_creal_T *V)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *T;
  emxArray_real_T *scale;
  emxArray_real_T *wimag;
  emxArray_real_T *wreal;
  creal_T *V_data;
  const real_T *A_data;
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  real_T vright;
  real_T *T_data;
  real_T *scale_data;
  real_T *wimag_data;
  real_T *wreal_data;
  int32_T exitg1;
  int32_T i;
  int32_T j;
  int32_T n;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T p;
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
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  i = V->size[0];
  V->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(sp, V, i, &sg_emlrtRTEI);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    st.site = &xg_emlrtRSI;
    if (anyNonFinite(&st, A)) {
      i = V->size[0];
      V->size[0] = A->size[0];
      emxEnsureCapacity_creal_T(sp, V, i, &tg_emlrtRTEI);
      V_data = V->data;
      j = A->size[0];
      for (i = 0; i < j; i++) {
        V_data[i].re = rtNaN;
        V_data[i].im = 0.0;
      }
    } else {
      p = (A->size[0] == A->size[1]);
      if (p) {
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j <= A->size[1] - 1)) {
          i = 0;
          do {
            exitg1 = 0;
            if (i <= j) {
              if (!(A_data[i + A->size[0] * j] == A_data[j + A->size[0] * i])) {
                p = false;
                exitg1 = 1;
              } else {
                i++;
              }
            } else {
              j++;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      }
      emxInit_real_T(sp, &scale, 1, &fh_emlrtRTEI);
      emxInit_real_T(sp, &T, 2, &vg_emlrtRTEI);
      if (p) {
        st.site = &yg_emlrtRSI;
        i = T->size[0] * T->size[1];
        T->size[0] = A->size[0];
        T->size[1] = A->size[1];
        emxEnsureCapacity_real_T(&st, T, i, &ug_emlrtRTEI);
        T_data = T->data;
        j = A->size[0] * A->size[1];
        for (i = 0; i < j; i++) {
          T_data[i] = A_data[i];
        }
        b_st.site = &fh_emlrtRSI;
        schur(&b_st, T);
        T_data = T->data;
        b_st.site = &gh_emlrtRSI;
        n = T->size[0];
        i = scale->size[0];
        scale->size[0] = T->size[0];
        emxEnsureCapacity_real_T(&b_st, scale, i, &xg_emlrtRTEI);
        scale_data = scale->data;
        c_st.site = &sh_emlrtRSI;
        if ((1 <= T->size[0]) && (T->size[0] > 2147483646)) {
          d_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (j = 0; j < n; j++) {
          scale_data[j] = T_data[j + T->size[0] * j];
        }
        i = V->size[0];
        V->size[0] = scale->size[0];
        emxEnsureCapacity_creal_T(sp, V, i, &dh_emlrtRTEI);
        V_data = V->data;
        j = scale->size[0];
        for (i = 0; i < j; i++) {
          V_data[i].re = scale_data[i];
          V_data[i].im = 0.0;
        }
      } else {
        p = (A->size[0] == A->size[1]);
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A->size[1] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A_data[i + A->size[0] * j] ==
                      -A_data[j + A->size[0] * i])) {
                  p = false;
                  exitg1 = 1;
                } else {
                  i++;
                }
              } else {
                j++;
                exitg1 = 2;
              }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        }
        if (p) {
          st.site = &ah_emlrtRSI;
          b_st.site = &th_emlrtRSI;
          i = T->size[0] * T->size[1];
          T->size[0] = A->size[0];
          T->size[1] = A->size[1];
          emxEnsureCapacity_real_T(&b_st, T, i, &vg_emlrtRTEI);
          T_data = T->data;
          j = A->size[0] * A->size[1];
          for (i = 0; i < j; i++) {
            T_data[i] = A_data[i];
          }
          c_st.site = &uh_emlrtRSI;
          schur(&c_st, T);
          T_data = T->data;
          n = T->size[0];
          i = V->size[0];
          V->size[0] = T->size[0];
          emxEnsureCapacity_creal_T(&b_st, V, i, &ah_emlrtRTEI);
          V_data = V->data;
          i = 1;
          do {
            exitg1 = 0;
            if (i <= n) {
              guard1 = false;
              if (i != n) {
                vleft = T_data[i + T->size[0] * (i - 1)];
                if (vleft != 0.0) {
                  vleft = muDoubleScalarAbs(vleft);
                  V_data[i - 1].re = 0.0;
                  V_data[i - 1].im = vleft;
                  V_data[i].re = 0.0;
                  V_data[i].im = -vleft;
                  i += 2;
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
              if (guard1) {
                V_data[i - 1].re = 0.0;
                V_data[i - 1].im = 0.0;
                i++;
              }
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        } else {
          st.site = &bh_emlrtRSI;
          b_st.site = &wh_emlrtRSI;
          c_st.site = &xh_emlrtRSI;
          i = T->size[0] * T->size[1];
          T->size[0] = A->size[0];
          T->size[1] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, T, i, &wg_emlrtRTEI);
          T_data = T->data;
          j = A->size[0] * A->size[1];
          for (i = 0; i < j; i++) {
            T_data[i] = A_data[i];
          }
          emxInit_real_T(&c_st, &wreal, 1, &gh_emlrtRTEI);
          emxInit_real_T(&c_st, &wimag, 1, &hh_emlrtRTEI);
          n = A->size[1];
          i = scale->size[0];
          scale->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, scale, i, &yg_emlrtRTEI);
          scale_data = scale->data;
          i = V->size[0];
          V->size[0] = A->size[1];
          emxEnsureCapacity_creal_T(&c_st, V, i, &bh_emlrtRTEI);
          V_data = V->data;
          i = wreal->size[0];
          wreal->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, wreal, i, &ch_emlrtRTEI);
          wreal_data = wreal->data;
          i = wimag->size[0];
          wimag->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, wimag, i, &eh_emlrtRTEI);
          wimag_data = wimag->data;
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'N', 'N', (ptrdiff_t)A->size[1], &T_data[0],
              (ptrdiff_t)A->size[0], &wreal_data[0], &wimag_data[0], &vleft,
              (ptrdiff_t)1, &vright, (ptrdiff_t)1, &ilo_t, &ihi_t,
              &scale_data[0], &abnrm, &rconde, &rcondv);
          j = (int32_T)info_t;
          d_st.site = &ai_emlrtRSI;
          if (j < 0) {
            if (j == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &o_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(&d_st, &n_emlrtRTEI,
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            5, 4, 14, &fname[0], 12, j);
            }
          }
          d_st.site = &yh_emlrtRSI;
          if (A->size[1] > 2147483646) {
            e_st.site = &ib_emlrtRSI;
            check_forloop_overflow_error(&e_st);
          }
          for (i = 0; i < n; i++) {
            V_data[i].re = wreal_data[i];
            V_data[i].im = wimag_data[i];
          }
          emxFree_real_T(&c_st, &wimag);
          emxFree_real_T(&c_st, &wreal);
          if ((j != 0) && (!emlrtSetWarningFlag(&st))) {
            b_st.site = &vh_emlrtRSI;
            d_warning(&b_st);
          }
        }
      }
      emxFree_real_T(sp, &T);
      emxFree_real_T(sp, &scale);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (eig.c) */

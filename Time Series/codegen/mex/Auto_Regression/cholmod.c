/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.c
 *
 * Code generation for function 'cholmod'
 *
 */

/* Include files */
#include "cholmod.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "abs.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "eye.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = {
    29,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    31,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    37,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    38,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    39,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    41,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    50,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    59,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    61,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    62,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    63,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    66,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    77,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo uc_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    186,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    897,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    314,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    382,          /* lineNo */
    "minOrMax2D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    464,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    462,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    25,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    11,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    66,                                                          /* lineNo */
    11,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    29,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    27,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    62,                                                          /* lineNo */
    18,                                                          /* colNo */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    45,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    35,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    69,                                                          /* lineNo */
    11,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    16,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    27,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    43,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    33,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    28,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    1,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    2,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    1,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo u_emlrtECI = {
    2,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    25,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    41,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    20,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    43,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo v_emlrtECI = {
    1,                                                          /* nDims */
    62,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    13,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo w_emlrtECI = {
    -1,                                                         /* nDims */
    67,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    71,                                                          /* lineNo */
    10,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    9,                                                           /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo x_emlrtECI = {
    -1,                                                         /* nDims */
    77,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    28,              /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    454,             /* lineNo */
    21,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    46,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    57,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    79,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    59,                                                         /* lineNo */
    33,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    77,                                                         /* lineNo */
    14,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    59,                                                         /* lineNo */
    23,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    59,                                                         /* lineNo */
    31,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    61,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    62,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    62,                                                         /* lineNo */
    25,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    62,                                                         /* lineNo */
    33,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    62,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    67,                                                         /* lineNo */
    11,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    37,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    48,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    2,                                                          /* lineNo */
    21,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    38,                                                         /* lineNo */
    13,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    39,                                                         /* lineNo */
    14,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

/* Function Declarations */
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *diagA,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1, int32_T j,
                               const emxArray_real_T *varargin_1);

static void i_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo jm_emlrtRSI,
                               const emxArray_real_T *A);

static void j_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo jm_emlrtRSI,
                               const emxArray_real_T *A);

/* Function Definitions */
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *diagA,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1, int32_T j,
                               const emxArray_real_T *varargin_1)
{
  const real_T *A_data;
  const real_T *r;
  const real_T *varargin_1_data;
  real_T *diagA_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  varargin_1_data = varargin_1->data;
  r = r1->data;
  A_data = A->data;
  i = diagA->size[0];
  if (varargin_1->size[0] == 1) {
    diagA->size[0] = r1->size[0];
  } else {
    diagA->size[0] = varargin_1->size[0];
  }
  emxEnsureCapacity_real_T(sp, diagA, i, &if_emlrtRTEI);
  diagA_data = diagA->data;
  stride_0_0 = (r1->size[0] != 1);
  stride_1_0 = (varargin_1->size[0] != 1);
  if (varargin_1->size[0] == 1) {
    loop_ub = r1->size[0];
  } else {
    loop_ub = varargin_1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    diagA_data[i] = A_data[((int32_T)r[i * stride_0_0] + A->size[0] * j) - 1] -
                    varargin_1_data[i * stride_1_0];
  }
}

static void i_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo jm_emlrtRSI,
                               const emxArray_real_T *A)
{
  emlrtStack st;
  emxArray_real_T *b_A;
  const real_T *A_data;
  real_T *b_A_data;
  real_T *varargin_1_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  A_data = A->data;
  varargin_1_data = varargin_1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &ue_emlrtRTEI);
  i = b_A->size[0] * b_A->size[1];
  if (varargin_1->size[0] == 1) {
    b_A->size[0] = A->size[0];
  } else {
    b_A->size[0] = varargin_1->size[0];
  }
  if (varargin_1->size[1] == 1) {
    b_A->size[1] = A->size[1];
  } else {
    b_A->size[1] = varargin_1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_A, i, &ue_emlrtRTEI);
  b_A_data = b_A->data;
  stride_0_0 = (A->size[0] != 1);
  stride_0_1 = (A->size[1] != 1);
  stride_1_0 = (varargin_1->size[0] != 1);
  stride_1_1 = (varargin_1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varargin_1->size[1] == 1) {
    loop_ub = A->size[1];
  } else {
    loop_ub = varargin_1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (varargin_1->size[0] == 1) {
      b_loop_ub = A->size[0];
    } else {
      b_loop_ub = varargin_1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_A_data[i1 + b_A->size[0] * i] =
          A_data[i1 * stride_0_0 + A->size[0] * aux_0_1] -
          varargin_1_data[i1 * stride_1_0 + varargin_1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &jm_emlrtRSI;
  b_abs(&st, b_A, varargin_1);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void j_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo jm_emlrtRSI,
                               const emxArray_real_T *A)
{
  emlrtStack st;
  emxArray_real_T *b_A;
  const real_T *A_data;
  real_T *b_A_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &te_emlrtRTEI);
  i = b_A->size[0] * b_A->size[1];
  if (A->size[1] == 1) {
    b_A->size[0] = A->size[0];
  } else {
    b_A->size[0] = A->size[1];
  }
  if (A->size[0] == 1) {
    b_A->size[1] = A->size[1];
  } else {
    b_A->size[1] = A->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_A, i, &te_emlrtRTEI);
  b_A_data = b_A->data;
  stride_0_0 = (A->size[0] != 1);
  stride_0_1 = (A->size[1] != 1);
  stride_1_0 = (A->size[1] != 1);
  stride_1_1 = (A->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (A->size[0] == 1) {
    loop_ub = A->size[1];
  } else {
    loop_ub = A->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (A->size[1] == 1) {
      b_loop_ub = A->size[0];
    } else {
      b_loop_ub = A->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_A_data[i1 + b_A->size[0] * i] =
          A_data[i1 * stride_0_0 + A->size[0] * aux_0_1] -
          A_data[aux_1_1 + A->size[0] * (i1 * stride_1_0)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &jm_emlrtRSI;
  b_abs(&st, b_A, varargin_1);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *R,
             real_T *err)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_real_T *K;
  emxArray_real_T *L;
  emxArray_real_T *b_d;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *diagA;
  emxArray_real_T *r1;
  emxArray_real_T *varargin_1;
  real_T c_varargin_1[3];
  const real_T *A_data;
  real_T b_gamma;
  real_T d;
  real_T delta;
  real_T djtemp;
  real_T theta;
  real_T xi;
  real_T *K_data;
  real_T *L_data;
  real_T *d_data;
  real_T *diagA_data;
  real_T *r2;
  real_T *varargin_1_data;
  int32_T a;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T j;
  int32_T last;
  int32_T loop_ub;
  int32_T n;
  int32_T *r3;
  boolean_T exitg1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
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
  if ((A->size[0] != A->size[1]) && ((A->size[0] != 1) && (A->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], A->size[1], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A->size[0] != A->size[1]) && ((A->size[1] != 1) && (A->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], A->size[0], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &L, 2, &lf_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &of_emlrtRTEI);
  if (A->size[0] == A->size[1]) {
    i = L->size[0] * L->size[1];
    L->size[0] = A->size[0];
    L->size[1] = A->size[1];
    emxEnsureCapacity_real_T(sp, L, i, &te_emlrtRTEI);
    L_data = L->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      last = A->size[0];
      for (i1 = 0; i1 < last; i1++) {
        L_data[i1 + L->size[0] * i] =
            A_data[i1 + A->size[0] * i] - A_data[i + A->size[0] * i1];
      }
    }
    st.site = &lb_emlrtRSI;
    b_abs(&st, L, varargin_1);
  } else {
    st.site = &lb_emlrtRSI;
    j_binary_expand_op(&st, varargin_1, lb_emlrtRSI, A);
  }
  emxInit_real_T(sp, &K, 2, &xe_emlrtRTEI);
  st.site = &lb_emlrtRSI;
  sum(&st, varargin_1, K);
  st.site = &lb_emlrtRSI;
  if (b_sum(&st, K) > 0.0) {
    st.site = &mb_emlrtRSI;
    b_error(&st);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }
  emxInit_real_T(sp, &diagA, 1, &kf_emlrtRTEI);
  emxInit_real_T(sp, &b_varargin_1, 1, &nf_emlrtRTEI);
  st.site = &nb_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &ob_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_abs(&b_st, diagA, b_varargin_1);
  varargin_1_data = b_varargin_1->data;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (b_varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  last = b_varargin_1->size[0];
  if (b_varargin_1->size[0] <= 2) {
    if (b_varargin_1->size[0] == 1) {
      b_gamma = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      b_gamma = varargin_1_data[1];
    } else {
      b_gamma = varargin_1_data[0];
    }
  } else {
    g_st.site = &ad_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &bd_emlrtRSI;
      if (b_varargin_1->size[0] > 2147483646) {
        i_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[loop_ub - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (idx == 0) {
      b_gamma = varargin_1_data[0];
    } else {
      g_st.site = &yc_emlrtRSI;
      b_gamma = varargin_1_data[idx - 1];
      a = idx + 1;
      h_st.site = &cd_emlrtRSI;
      if ((idx + 1 <= b_varargin_1->size[0]) &&
          (b_varargin_1->size[0] > 2147483646)) {
        i_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = a; loop_ub <= last; loop_ub++) {
        d = varargin_1_data[loop_ub - 1];
        if (b_gamma < d) {
          b_gamma = d;
        }
      }
    }
  }
  /*  max diagonal entry */
  st.site = &pb_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  diagA_data = varargin_1->data;
  if ((A->size[0] != varargin_1->size[0]) &&
      ((A->size[0] != 1) && (varargin_1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], varargin_1->size[0], &t_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A->size[1] != varargin_1->size[1]) &&
      ((A->size[1] != 1) && (varargin_1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], varargin_1->size[1], &u_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &pb_emlrtRSI;
  if ((A->size[0] == varargin_1->size[0]) &&
      (A->size[1] == varargin_1->size[1])) {
    i = L->size[0] * L->size[1];
    L->size[0] = A->size[0];
    L->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, L, i, &ue_emlrtRTEI);
    L_data = L->data;
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      L_data[i] = A_data[i] - diagA_data[i];
    }
    b_st.site = &pb_emlrtRSI;
    b_abs(&b_st, L, varargin_1);
    diagA_data = varargin_1->data;
  } else {
    b_st.site = &pb_emlrtRSI;
    i_binary_expand_op(&b_st, varargin_1, pb_emlrtRSI, A);
    diagA_data = varargin_1->data;
  }
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (((varargin_1->size[0] != 1) || (varargin_1->size[1] != 1)) &&
      (varargin_1->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &j_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ed_emlrtRSI;
  f_st.site = &fd_emlrtRSI;
  g_st.site = &gd_emlrtRSI;
  last = varargin_1->size[0];
  idx = varargin_1->size[1];
  i = K->size[0] * K->size[1];
  K->size[0] = 1;
  K->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&g_st, K, i, &ve_emlrtRTEI);
  K_data = K->data;
  if (varargin_1->size[1] >= 1) {
    h_st.site = &id_emlrtRSI;
    if (varargin_1->size[1] > 2147483646) {
      i_st.site = &bc_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }
    for (j = 0; j < idx; j++) {
      K_data[j] = diagA_data[varargin_1->size[0] * j];
      h_st.site = &hd_emlrtRSI;
      if ((2 <= last) && (last > 2147483646)) {
        i_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (a = 2; a <= last; a++) {
        xi = K_data[j];
        theta = diagA_data[(a + varargin_1->size[0] * j) - 1];
        if (muDoubleScalarIsNaN(theta)) {
          p = false;
        } else if (muDoubleScalarIsNaN(xi)) {
          p = true;
        } else {
          p = (xi < theta);
        }
        if (p) {
          K_data[j] = theta;
        }
      }
    }
  }
  st.site = &pb_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (K->size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  last = K->size[1];
  if (K->size[1] <= 2) {
    if (K->size[1] == 1) {
      xi = K_data[0];
    } else if ((K_data[0] < K_data[1]) || (muDoubleScalarIsNaN(K_data[0]) &&
                                           (!muDoubleScalarIsNaN(K_data[1])))) {
      xi = K_data[1];
    } else {
      xi = K_data[0];
    }
  } else {
    g_st.site = &ad_emlrtRSI;
    if (!muDoubleScalarIsNaN(K_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &bd_emlrtRSI;
      if (K->size[1] > 2147483646) {
        i_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= last)) {
        if (!muDoubleScalarIsNaN(K_data[loop_ub - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (idx == 0) {
      xi = K_data[0];
    } else {
      g_st.site = &yc_emlrtRSI;
      xi = K_data[idx - 1];
      a = idx + 1;
      h_st.site = &cd_emlrtRSI;
      if ((idx + 1 <= K->size[1]) && (K->size[1] > 2147483646)) {
        i_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = a; loop_ub <= last; loop_ub++) {
        d = K_data[loop_ub - 1];
        if (xi < d) {
          xi = d;
        }
      }
    }
  }
  /*  max off-diagonal entry */
  theta = b_gamma + xi;
  if ((theta < 1.0) || muDoubleScalarIsNaN(theta)) {
    theta = 1.0;
  }
  delta = 2.2204460492503131E-16 * theta;
  st.site = &qb_emlrtRSI;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (real_T)n;
  c_varargin_1[2] = 2.2204460492503131E-16;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    loop_ub = 2;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 4)) {
      if (!muDoubleScalarIsNaN(c_varargin_1[loop_ub - 1])) {
        idx = loop_ub;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }
  if (idx != 0) {
    g_st.site = &yc_emlrtRSI;
    b_gamma = c_varargin_1[idx - 1];
    a = idx + 1;
    h_st.site = &cd_emlrtRSI;
    for (loop_ub = a; loop_ub < 4; loop_ub++) {
      d = c_varargin_1[loop_ub - 1];
      if (b_gamma < d) {
        b_gamma = d;
      }
    }
  }
  emxInit_real_T(&f_st, &b_d, 1, &we_emlrtRTEI);
  st.site = &qb_emlrtRSI;
  if (b_gamma < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &lb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_gamma = muDoubleScalarSqrt(b_gamma);
  /*  initialize d and L */
  i = b_d->size[0];
  b_d->size[0] = n;
  emxEnsureCapacity_real_T(sp, b_d, i, &we_emlrtRTEI);
  d_data = b_d->data;
  for (i = 0; i < n; i++) {
    d_data[i] = 0.0;
  }
  st.site = &rb_emlrtRSI;
  eye(&st, n, L);
  L_data = L->data;
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_int32_T(sp, &r, 1, &mf_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &ff_emlrtRTEI);
  for (j = 0; j < n; j++) {
    if (j < 1) {
      K->size[0] = 1;
      K->size[1] = 0;
    } else {
      i = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(sp, K, i, &xe_emlrtRTEI);
      K_data = K->data;
      loop_ub = j - 1;
      for (i = 0; i <= loop_ub; i++) {
        K_data[i] = (real_T)i + 1.0;
      }
    }
    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    i = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, b_varargin_1, i, &af_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    loop_ub = K->size[1];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = K_data[i];
    }
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > b_d->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_d->size[0], &sc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    if (j + 1 > L->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &vc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, L->size[1], &rc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    st.site = &sb_emlrtRSI;
    if (j + 1 > L->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &uc_emlrtBCI, &st);
    }
    i = K->size[0] * K->size[1];
    K->size[0] = 1;
    K->size[1] = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, K, i, &cf_emlrtRTEI);
    K_data = K->data;
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)varargin_1_data[i], 1,
                                      L->size[1], &qc_emlrtBCI, &st);
      }
      K_data[i] = L_data[j + L->size[0] * (i1 - 1)];
    }
    i = diagA->size[0];
    diagA->size[0] = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, diagA, i, &df_emlrtRTEI);
    diagA_data = diagA->data;
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      last = (int32_T)varargin_1_data[i] - 1;
      diagA_data[i] = d_data[last] * L_data[j + L->size[0] * last];
    }
    b_st.site = &md_emlrtRSI;
    dynamic_size_checks(&b_st, K, diagA, b_varargin_1->size[0], diagA->size[0]);
    if (j + 1 > A->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[1], &oc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (j + 1 > A->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[0], &pc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    djtemp = A_data[j + A->size[0] * j] - mtimes(K, diagA);
    /*  C(j,j) in book */
    if (j + 1 < n) {
      st.site = &tb_emlrtRSI;
      b_st.site = &nd_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        K->size[0] = 1;
        K->size[1] = 0;
      } else {
        i = K->size[0] * K->size[1];
        K->size[0] = 1;
        i1 = n - j;
        K->size[1] = i1 - 1;
        emxEnsureCapacity_real_T(&b_st, K, i, &ef_emlrtRTEI);
        K_data = K->data;
        loop_ub = i1 - 2;
        for (i = 0; i <= loop_ub; i++) {
          K_data[i] = ((uint32_T)j + i) + 2U;
        }
      }
      /*  row index: all rows below diagonal */
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)varargin_1_data[i];
        if (i1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_d->size[0], &mc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      if (j + 1 > L->size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &xc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)varargin_1_data[i];
        if (i1 > L->size[1]) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, L->size[1], &lc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      i = r1->size[0];
      r1->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, r1, i, &ff_emlrtRTEI);
      r2 = r1->data;
      loop_ub = K->size[1];
      for (i = 0; i < loop_ub; i++) {
        r2[i] = K_data[i];
      }
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)r2[i];
        if (r2[i] != i1) {
          emlrtIntegerCheckR2012b(r2[i], &s_emlrtDCI, (emlrtCTX)sp);
        }
        if ((i1 < 1) || (i1 > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, A->size[0], &kc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      if (j + 1 > A->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[1], &wc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &ub_emlrtRSI;
      i = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = r1->size[0];
      varargin_1->size[1] = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, varargin_1, i, &gf_emlrtRTEI);
      diagA_data = varargin_1->data;
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        last = r1->size[0];
        for (i1 = 0; i1 < last; i1++) {
          idx = (int32_T)varargin_1_data[i];
          if (idx > L->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)varargin_1_data[i], 1,
                                          L->size[1], &ic_emlrtBCI, &st);
          }
          a = (int32_T)r2[i1];
          if ((a < 1) || (a > L->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)r2[i1], 1, L->size[0],
                                          &jc_emlrtBCI, &st);
          }
          diagA_data[i1 + varargin_1->size[0] * i] =
              L_data[(a + L->size[0] * (idx - 1)) - 1];
        }
      }
      i = diagA->size[0];
      diagA->size[0] = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, diagA, i, &hf_emlrtRTEI);
      diagA_data = diagA->data;
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        last = (int32_T)varargin_1_data[i] - 1;
        diagA_data[i] = d_data[last] * L_data[j + L->size[0] * last];
      }
      b_st.site = &md_emlrtRSI;
      b_dynamic_size_checks(&b_st, varargin_1, diagA, b_varargin_1->size[0],
                            diagA->size[0]);
      b_st.site = &od_emlrtRSI;
      b_mtimes(&b_st, varargin_1, diagA, b_varargin_1);
      varargin_1_data = b_varargin_1->data;
      if ((r1->size[0] != b_varargin_1->size[0]) &&
          ((r1->size[0] != 1) && (b_varargin_1->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r1->size[0], b_varargin_1->size[0],
                                    &v_emlrtECI, (emlrtCTX)sp);
      }
      if (r1->size[0] == b_varargin_1->size[0]) {
        i = diagA->size[0];
        diagA->size[0] = r1->size[0];
        emxEnsureCapacity_real_T(sp, diagA, i, &if_emlrtRTEI);
        diagA_data = diagA->data;
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          diagA_data[i] = A_data[((int32_T)r2[i] + A->size[0] * j) - 1] -
                          varargin_1_data[i];
        }
      } else {
        st.site = &ub_emlrtRSI;
        h_binary_expand_op(&st, diagA, A, r1, j, b_varargin_1);
        diagA_data = diagA->data;
      }
      /*  C(I,j) in book */
      st.site = &vb_emlrtRSI;
      b_st.site = &vb_emlrtRSI;
      c_abs(&b_st, diagA, b_varargin_1);
      varargin_1_data = b_varargin_1->data;
      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (b_varargin_1->size[0] < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &k_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &wc_emlrtRSI;
      f_st.site = &xc_emlrtRSI;
      last = b_varargin_1->size[0];
      if (b_varargin_1->size[0] <= 2) {
        if (b_varargin_1->size[0] == 1) {
          theta = varargin_1_data[0];
        } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
                   (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                    (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
          theta = varargin_1_data[1];
        } else {
          theta = varargin_1_data[0];
        }
      } else {
        g_st.site = &ad_emlrtRSI;
        if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &bd_emlrtRSI;
          if (b_varargin_1->size[0] > 2147483646) {
            i_st.site = &bc_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          loop_ub = 2;
          exitg1 = false;
          while ((!exitg1) && (loop_ub <= last)) {
            if (!muDoubleScalarIsNaN(varargin_1_data[loop_ub - 1])) {
              idx = loop_ub;
              exitg1 = true;
            } else {
              loop_ub++;
            }
          }
        }
        if (idx == 0) {
          theta = varargin_1_data[0];
        } else {
          g_st.site = &yc_emlrtRSI;
          theta = varargin_1_data[idx - 1];
          a = idx + 1;
          h_st.site = &cd_emlrtRSI;
          if ((idx + 1 <= b_varargin_1->size[0]) &&
              (b_varargin_1->size[0] > 2147483646)) {
            i_st.site = &bc_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          for (loop_ub = a; loop_ub <= last; loop_ub++) {
            d = varargin_1_data[loop_ub - 1];
            if (theta < d) {
              theta = d;
            }
          }
        }
      }
      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      st.site = &wb_emlrtRSI;
      xi = theta / b_gamma;
      b_st.site = &rd_emlrtRSI;
      c_st.site = &sd_emlrtRSI;
      st.site = &wb_emlrtRSI;
      d = muDoubleScalarAbs(djtemp);
      c_varargin_1[0] = muDoubleScalarAbs(djtemp);
      c_varargin_1[1] = xi * xi;
      c_varargin_1[2] = delta;
      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      e_st.site = &wc_emlrtRSI;
      f_st.site = &xc_emlrtRSI;
      if (!muDoubleScalarIsNaN(d)) {
        idx = 1;
      } else {
        idx = 0;
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 4)) {
          if (!muDoubleScalarIsNaN(c_varargin_1[loop_ub - 1])) {
            idx = loop_ub;
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }
      if (idx == 0) {
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &hc_emlrtBCI,
                                        &f_st);
        }
        d_data[j] = d;
      } else {
        g_st.site = &yc_emlrtRSI;
        theta = c_varargin_1[idx - 1];
        a = idx + 1;
        h_st.site = &cd_emlrtRSI;
        for (loop_ub = a; loop_ub < 4; loop_ub++) {
          d = c_varargin_1[loop_ub - 1];
          if (theta < d) {
            theta = d;
          }
        }
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &hc_emlrtBCI,
                                        &f_st);
        }
        d_data[j] = theta;
      }
      i = r->size[0];
      r->size[0] = r1->size[0];
      emxEnsureCapacity_int32_T(sp, r, i, &jf_emlrtRTEI);
      r3 = r->data;
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)r2[i];
        if ((i1 < 1) || (i1 > L->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)r2[i], 1, L->size[0],
                                        &gc_emlrtBCI, (emlrtCTX)sp);
        }
        r3[i] = i1 - 1;
      }
      if (j + 1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[1], &yc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (j + 1 > b_d->size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &fc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = diagA->size[0];
      for (i = 0; i < loop_ub; i++) {
        diagA_data[i] /= d_data[j];
      }
      emlrtSubAssignSizeCheckR2012b(&r->size[0], 1, &diagA->size[0], 1,
                                    &w_emlrtECI, (emlrtCTX)sp);
      loop_ub = diagA->size[0];
      for (i = 0; i < loop_ub; i++) {
        L_data[r3[i] + L->size[0] * j] = diagA_data[i];
      }
    } else {
      d = muDoubleScalarAbs(djtemp);
      if ((d < delta) ||
          (muDoubleScalarIsNaN(d) && (!muDoubleScalarIsNaN(delta)))) {
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &nc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        d_data[j] = delta;
      } else {
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &nc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        d_data[j] = d;
      }
    }
    if (j + 1 > b_d->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &ad_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &varargin_1);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &K);
  emxFree_real_T(sp, &diagA);
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < n; j++) {
    if (j + 1 > L->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[1], &bd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (j + 1 > b_d->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &tc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    theta = d_data[j];
    st.site = &xb_emlrtRSI;
    if (theta < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &lb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    theta = muDoubleScalarSqrt(theta);
    loop_ub = L->size[0];
    i = b_varargin_1->size[0];
    b_varargin_1->size[0] = L->size[0];
    emxEnsureCapacity_real_T(sp, b_varargin_1, i, &bf_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = L_data[i + L->size[0] * j] * theta;
    }
    emlrtSubAssignSizeCheckR2012b(&L->size[0], 1, &b_varargin_1->size[0], 1,
                                  &x_emlrtECI, (emlrtCTX)sp);
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      L_data[i + L->size[0] * j] = varargin_1_data[i];
    }
    /*  L = L*diag(sqrt(d)) bad in sparse case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_varargin_1);
  emxFree_real_T(sp, &b_d);
  i = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i, &ye_emlrtRTEI);
  diagA_data = R->data;
  loop_ub = L->size[0];
  for (i = 0; i < loop_ub; i++) {
    last = L->size[1];
    for (i1 = 0; i1 < last; i1++) {
      diagA_data[i1 + R->size[0] * i] = L_data[i + L->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &L);
  *err = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (cholmod.c) */

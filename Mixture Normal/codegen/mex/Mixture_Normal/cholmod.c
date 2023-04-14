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
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
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
static emlrtRSInfo pf_emlrtRSI = {
    29,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    31,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    37,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    38,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    39,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    41,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI = {
    50,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI = {
    59,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo xf_emlrtRSI = {
    61,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    62,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    63,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    66,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    77,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo ig_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI = {
    186,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo lg_emlrtRSI = {
    897,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ng_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo qg_emlrtRSI = {
    221,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    314,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo sg_emlrtRSI = {
    382,          /* lineNo */
    "minOrMax2D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo tg_emlrtRSI = {
    464,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    462,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    28,              /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    25,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    11,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    66,                                                          /* lineNo */
    11,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    29,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    27,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    62,                                                          /* lineNo */
    18,                                                          /* colNo */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    45,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    35,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    69,                                                          /* lineNo */
    11,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    16,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    27,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    43,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    33,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo ab_emlrtECI = {
    1,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo bb_emlrtECI = {
    2,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo cb_emlrtECI = {
    1,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo db_emlrtECI = {
    2,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    25,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    41,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    20,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    43,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo eb_emlrtECI = {
    1,                                                          /* nDims */
    62,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    13,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo fb_emlrtECI = {
    -1,                                                         /* nDims */
    67,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    71,                                                          /* lineNo */
    10,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    28,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    9,                                                           /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo gb_emlrtECI = {
    -1,                                                         /* nDims */
    77,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    454,             /* lineNo */
    21,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    46,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    57,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI = {
    79,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI = {
    59,                                                         /* lineNo */
    33,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    77,                                                         /* lineNo */
    14,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    59,                                                         /* lineNo */
    23,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    59,                                                         /* lineNo */
    31,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    61,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    62,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    62,                                                         /* lineNo */
    25,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    62,                                                         /* lineNo */
    33,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    62,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    67,                                                         /* lineNo */
    11,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    37,                                                         /* lineNo */
    1,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    48,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    2,                                                          /* lineNo */
    21,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    38,                                                         /* lineNo */
    13,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
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
                               emlrtRSInfo qh_emlrtRSI,
                               const emxArray_real_T *A);

static void j_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo qh_emlrtRSI,
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
  emxEnsureCapacity_real_T(sp, diagA, i, &bf_emlrtRTEI);
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
                               emlrtRSInfo qh_emlrtRSI,
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
  emxInit_real_T(sp, &b_A, 2, &ne_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, b_A, i, &ne_emlrtRTEI);
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
  st.site = &qh_emlrtRSI;
  b_abs(&st, b_A, varargin_1);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void j_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *varargin_1,
                               emlrtRSInfo qh_emlrtRSI,
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
  emxInit_real_T(sp, &b_A, 2, &me_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, b_A, i, &me_emlrtRTEI);
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
  st.site = &qh_emlrtRSI;
  b_abs(&st, b_A, varargin_1);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *R)
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
    emlrtDimSizeImpxCheckR2021b(A->size[0], A->size[1], &ab_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A->size[0] != A->size[1]) && ((A->size[1] != 1) && (A->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], A->size[0], &bb_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &L, 2, &ef_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &hf_emlrtRTEI);
  if (A->size[0] == A->size[1]) {
    i = L->size[0] * L->size[1];
    L->size[0] = A->size[0];
    L->size[1] = A->size[1];
    emxEnsureCapacity_real_T(sp, L, i, &me_emlrtRTEI);
    L_data = L->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      last = A->size[0];
      for (i1 = 0; i1 < last; i1++) {
        L_data[i1 + L->size[0] * i] =
            A_data[i1 + A->size[0] * i] - A_data[i + A->size[0] * i1];
      }
    }
    st.site = &pf_emlrtRSI;
    b_abs(&st, L, varargin_1);
  } else {
    st.site = &pf_emlrtRSI;
    j_binary_expand_op(&st, varargin_1, pf_emlrtRSI, A);
  }
  emxInit_real_T(sp, &K, 2, &qe_emlrtRTEI);
  st.site = &pf_emlrtRSI;
  sum(&st, varargin_1, K);
  st.site = &pf_emlrtRSI;
  if (b_sum(&st, K) > 0.0) {
    st.site = &qf_emlrtRSI;
    b_error(&st);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }
  emxInit_real_T(sp, &diagA, 1, &df_emlrtRTEI);
  emxInit_real_T(sp, &b_varargin_1, 1, &gf_emlrtRTEI);
  st.site = &rf_emlrtRSI;
  b_diag(&st, A, diagA);
  st.site = &sf_emlrtRSI;
  b_st.site = &sf_emlrtRSI;
  c_abs(&b_st, diagA, b_varargin_1);
  varargin_1_data = b_varargin_1->data;
  b_st.site = &hg_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  if (b_varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &kg_emlrtRSI;
  f_st.site = &lg_emlrtRSI;
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
    g_st.site = &ng_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &og_emlrtRSI;
      if (b_varargin_1->size[0] > 2147483646) {
        i_st.site = &cb_emlrtRSI;
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
      g_st.site = &mg_emlrtRSI;
      b_gamma = varargin_1_data[idx - 1];
      a = idx + 1;
      h_st.site = &pg_emlrtRSI;
      if ((idx + 1 <= b_varargin_1->size[0]) &&
          (b_varargin_1->size[0] > 2147483646)) {
        i_st.site = &cb_emlrtRSI;
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
  st.site = &tf_emlrtRSI;
  diag(&st, diagA, varargin_1);
  diagA_data = varargin_1->data;
  if ((A->size[0] != varargin_1->size[0]) &&
      ((A->size[0] != 1) && (varargin_1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], varargin_1->size[0], &cb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A->size[1] != varargin_1->size[1]) &&
      ((A->size[1] != 1) && (varargin_1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], varargin_1->size[1], &db_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &tf_emlrtRSI;
  if ((A->size[0] == varargin_1->size[0]) &&
      (A->size[1] == varargin_1->size[1])) {
    i = L->size[0] * L->size[1];
    L->size[0] = A->size[0];
    L->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, L, i, &ne_emlrtRTEI);
    L_data = L->data;
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      L_data[i] = A_data[i] - diagA_data[i];
    }
    b_st.site = &tf_emlrtRSI;
    b_abs(&b_st, L, varargin_1);
    diagA_data = varargin_1->data;
  } else {
    b_st.site = &tf_emlrtRSI;
    i_binary_expand_op(&b_st, varargin_1, tf_emlrtRSI, A);
    diagA_data = varargin_1->data;
  }
  b_st.site = &hg_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  if (((varargin_1->size[0] != 1) || (varargin_1->size[1] != 1)) &&
      (varargin_1->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &qg_emlrtRSI;
  f_st.site = &rg_emlrtRSI;
  g_st.site = &sg_emlrtRSI;
  last = varargin_1->size[0];
  idx = varargin_1->size[1];
  i = K->size[0] * K->size[1];
  K->size[0] = 1;
  K->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&g_st, K, i, &oe_emlrtRTEI);
  K_data = K->data;
  if (varargin_1->size[1] >= 1) {
    h_st.site = &ug_emlrtRSI;
    if (varargin_1->size[1] > 2147483646) {
      i_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }
    for (j = 0; j < idx; j++) {
      K_data[j] = diagA_data[varargin_1->size[0] * j];
      h_st.site = &tg_emlrtRSI;
      if ((2 <= last) && (last > 2147483646)) {
        i_st.site = &cb_emlrtRSI;
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
  st.site = &tf_emlrtRSI;
  b_st.site = &hg_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  if (K->size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &kg_emlrtRSI;
  f_st.site = &lg_emlrtRSI;
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
    g_st.site = &ng_emlrtRSI;
    if (!muDoubleScalarIsNaN(K_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &og_emlrtRSI;
      if (K->size[1] > 2147483646) {
        i_st.site = &cb_emlrtRSI;
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
      g_st.site = &mg_emlrtRSI;
      xi = K_data[idx - 1];
      a = idx + 1;
      h_st.site = &pg_emlrtRSI;
      if ((idx + 1 <= K->size[1]) && (K->size[1] > 2147483646)) {
        i_st.site = &cb_emlrtRSI;
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
  st.site = &uf_emlrtRSI;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (real_T)n;
  c_varargin_1[2] = 2.2204460492503131E-16;
  b_st.site = &hg_emlrtRSI;
  c_st.site = &ig_emlrtRSI;
  d_st.site = &jg_emlrtRSI;
  e_st.site = &kg_emlrtRSI;
  f_st.site = &lg_emlrtRSI;
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
    g_st.site = &mg_emlrtRSI;
    b_gamma = c_varargin_1[idx - 1];
    a = idx + 1;
    h_st.site = &pg_emlrtRSI;
    for (loop_ub = a; loop_ub < 4; loop_ub++) {
      d = c_varargin_1[loop_ub - 1];
      if (b_gamma < d) {
        b_gamma = d;
      }
    }
  }
  emxInit_real_T(&f_st, &b_d, 1, &pe_emlrtRTEI);
  st.site = &uf_emlrtRSI;
  b_gamma = muDoubleScalarSqrt(b_gamma);
  /*  initialize d and L */
  i = b_d->size[0];
  b_d->size[0] = n;
  emxEnsureCapacity_real_T(sp, b_d, i, &pe_emlrtRTEI);
  d_data = b_d->data;
  for (i = 0; i < n; i++) {
    d_data[i] = 0.0;
  }
  st.site = &vf_emlrtRSI;
  eye(&st, n, L);
  L_data = L->data;
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_int32_T(sp, &r, 1, &ff_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &xe_emlrtRTEI);
  for (j = 0; j < n; j++) {
    if (j < 1) {
      K->size[0] = 1;
      K->size[1] = 0;
    } else {
      i = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(sp, K, i, &qe_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, b_varargin_1, i, &se_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    loop_ub = K->size[1];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = K_data[i];
    }
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > b_d->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_d->size[0], &sb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    if (j + 1 > L->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &ub_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, L->size[1], &rb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    st.site = &wf_emlrtRSI;
    if (j + 1 > L->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &tb_emlrtBCI, &st);
    }
    i = K->size[0] * K->size[1];
    K->size[0] = 1;
    K->size[1] = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, K, i, &ue_emlrtRTEI);
    K_data = K->data;
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)varargin_1_data[i];
      if (i1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)varargin_1_data[i], 1,
                                      L->size[1], &qb_emlrtBCI, &st);
      }
      K_data[i] = L_data[j + L->size[0] * (i1 - 1)];
    }
    i = diagA->size[0];
    diagA->size[0] = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, diagA, i, &ve_emlrtRTEI);
    diagA_data = diagA->data;
    loop_ub = b_varargin_1->size[0];
    for (i = 0; i < loop_ub; i++) {
      last = (int32_T)varargin_1_data[i] - 1;
      diagA_data[i] = d_data[last] * L_data[j + L->size[0] * last];
    }
    b_st.site = &ve_emlrtRSI;
    c_dynamic_size_checks(&b_st, K, diagA, b_varargin_1->size[0],
                          diagA->size[0]);
    if (j + 1 > A->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[1], &ob_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (j + 1 > A->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[0], &pb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    djtemp = A_data[j + A->size[0] * j] - c_mtimes(K, diagA);
    /*  C(j,j) in book */
    if (j + 1 < n) {
      st.site = &xf_emlrtRSI;
      b_st.site = &x_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        K->size[0] = 1;
        K->size[1] = 0;
      } else {
        i = K->size[0] * K->size[1];
        K->size[0] = 1;
        i1 = n - j;
        K->size[1] = i1 - 1;
        emxEnsureCapacity_real_T(&b_st, K, i, &we_emlrtRTEI);
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
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_d->size[0], &mb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      if (j + 1 > L->size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[0], &wb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)varargin_1_data[i];
        if (i1 > L->size[1]) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, L->size[1], &lb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      i = r1->size[0];
      r1->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, r1, i, &xe_emlrtRTEI);
      r2 = r1->data;
      loop_ub = K->size[1];
      for (i = 0; i < loop_ub; i++) {
        r2[i] = K_data[i];
      }
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)r2[i];
        if (r2[i] != i1) {
          emlrtIntegerCheckR2012b(r2[i], &p_emlrtDCI, (emlrtCTX)sp);
        }
        if ((i1 < 1) || (i1 > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, A->size[0], &kb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      if (j + 1 > A->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, A->size[1], &vb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &yf_emlrtRSI;
      i = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = r1->size[0];
      varargin_1->size[1] = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, varargin_1, i, &ye_emlrtRTEI);
      diagA_data = varargin_1->data;
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        last = r1->size[0];
        for (i1 = 0; i1 < last; i1++) {
          idx = (int32_T)varargin_1_data[i];
          if (idx > L->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)varargin_1_data[i], 1,
                                          L->size[1], &ib_emlrtBCI, &st);
          }
          a = (int32_T)r2[i1];
          if ((a < 1) || (a > L->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)r2[i1], 1, L->size[0],
                                          &jb_emlrtBCI, &st);
          }
          diagA_data[i1 + varargin_1->size[0] * i] =
              L_data[(a + L->size[0] * (idx - 1)) - 1];
        }
      }
      i = diagA->size[0];
      diagA->size[0] = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, diagA, i, &af_emlrtRTEI);
      diagA_data = diagA->data;
      loop_ub = b_varargin_1->size[0];
      for (i = 0; i < loop_ub; i++) {
        last = (int32_T)varargin_1_data[i] - 1;
        diagA_data[i] = d_data[last] * L_data[j + L->size[0] * last];
      }
      b_st.site = &ve_emlrtRSI;
      b_dynamic_size_checks(&b_st, varargin_1, diagA, b_varargin_1->size[0],
                            diagA->size[0]);
      b_st.site = &ue_emlrtRSI;
      b_mtimes(&b_st, varargin_1, diagA, b_varargin_1);
      varargin_1_data = b_varargin_1->data;
      if ((r1->size[0] != b_varargin_1->size[0]) &&
          ((r1->size[0] != 1) && (b_varargin_1->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r1->size[0], b_varargin_1->size[0],
                                    &eb_emlrtECI, (emlrtCTX)sp);
      }
      if (r1->size[0] == b_varargin_1->size[0]) {
        i = diagA->size[0];
        diagA->size[0] = r1->size[0];
        emxEnsureCapacity_real_T(sp, diagA, i, &bf_emlrtRTEI);
        diagA_data = diagA->data;
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          diagA_data[i] = A_data[((int32_T)r2[i] + A->size[0] * j) - 1] -
                          varargin_1_data[i];
        }
      } else {
        st.site = &yf_emlrtRSI;
        h_binary_expand_op(&st, diagA, A, r1, j, b_varargin_1);
        diagA_data = diagA->data;
      }
      /*  C(I,j) in book */
      st.site = &ag_emlrtRSI;
      b_st.site = &ag_emlrtRSI;
      c_abs(&b_st, diagA, b_varargin_1);
      varargin_1_data = b_varargin_1->data;
      b_st.site = &hg_emlrtRSI;
      c_st.site = &ig_emlrtRSI;
      d_st.site = &jg_emlrtRSI;
      if (b_varargin_1->size[0] < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &e_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &kg_emlrtRSI;
      f_st.site = &lg_emlrtRSI;
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
        g_st.site = &ng_emlrtRSI;
        if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &og_emlrtRSI;
          if (b_varargin_1->size[0] > 2147483646) {
            i_st.site = &cb_emlrtRSI;
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
          g_st.site = &mg_emlrtRSI;
          theta = varargin_1_data[idx - 1];
          a = idx + 1;
          h_st.site = &pg_emlrtRSI;
          if ((idx + 1 <= b_varargin_1->size[0]) &&
              (b_varargin_1->size[0] > 2147483646)) {
            i_st.site = &cb_emlrtRSI;
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
      st.site = &bg_emlrtRSI;
      xi = theta / b_gamma;
      b_st.site = &i_emlrtRSI;
      c_st.site = &j_emlrtRSI;
      st.site = &bg_emlrtRSI;
      d = muDoubleScalarAbs(djtemp);
      c_varargin_1[0] = muDoubleScalarAbs(djtemp);
      c_varargin_1[1] = xi * xi;
      c_varargin_1[2] = delta;
      b_st.site = &hg_emlrtRSI;
      c_st.site = &ig_emlrtRSI;
      d_st.site = &jg_emlrtRSI;
      e_st.site = &kg_emlrtRSI;
      f_st.site = &lg_emlrtRSI;
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
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &hb_emlrtBCI,
                                        &f_st);
        }
        d_data[j] = d;
      } else {
        g_st.site = &mg_emlrtRSI;
        theta = c_varargin_1[idx - 1];
        a = idx + 1;
        h_st.site = &pg_emlrtRSI;
        for (loop_ub = a; loop_ub < 4; loop_ub++) {
          d = c_varargin_1[loop_ub - 1];
          if (theta < d) {
            theta = d;
          }
        }
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &hb_emlrtBCI,
                                        &f_st);
        }
        d_data[j] = theta;
      }
      i = r->size[0];
      r->size[0] = r1->size[0];
      emxEnsureCapacity_int32_T(sp, r, i, &cf_emlrtRTEI);
      r3 = r->data;
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)r2[i];
        if ((i1 < 1) || (i1 > L->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)r2[i], 1, L->size[0],
                                        &gb_emlrtBCI, (emlrtCTX)sp);
        }
        r3[i] = i1 - 1;
      }
      if (j + 1 > L->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[1], &xb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (j + 1 > b_d->size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &fb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = diagA->size[0];
      for (i = 0; i < loop_ub; i++) {
        diagA_data[i] /= d_data[j];
      }
      emlrtSubAssignSizeCheckR2012b(&r->size[0], 1, &diagA->size[0], 1,
                                    &fb_emlrtECI, (emlrtCTX)sp);
      loop_ub = diagA->size[0];
      for (i = 0; i < loop_ub; i++) {
        L_data[r3[i] + L->size[0] * j] = diagA_data[i];
      }
    } else {
      d = muDoubleScalarAbs(djtemp);
      if ((d < delta) ||
          (muDoubleScalarIsNaN(d) && (!muDoubleScalarIsNaN(delta)))) {
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &nb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        d_data[j] = delta;
      } else {
        if (j + 1 > b_d->size[0]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &nb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        d_data[j] = d;
      }
    }
    if (j + 1 > b_d->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &yb_emlrtBCI,
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
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L->size[1], &bc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &cg_emlrtRSI;
    if (j + 1 > b_d->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_d->size[0], &ac_emlrtBCI, &st);
    }
    theta = muDoubleScalarSqrt(d_data[j]);
    loop_ub = L->size[0];
    i = b_varargin_1->size[0];
    b_varargin_1->size[0] = L->size[0];
    emxEnsureCapacity_real_T(sp, b_varargin_1, i, &te_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = L_data[i + L->size[0] * j] * theta;
    }
    emlrtSubAssignSizeCheckR2012b(&L->size[0], 1, &b_varargin_1->size[0], 1,
                                  &gb_emlrtECI, (emlrtCTX)sp);
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
  emxEnsureCapacity_real_T(sp, R, i, &re_emlrtRTEI);
  diagA_data = R->data;
  loop_ub = L->size[0];
  for (i = 0; i < loop_ub; i++) {
    last = L->size[1];
    for (i1 = 0; i1 < last; i1++) {
      diagA_data[i1 + R->size[0] * i] = L_data[i + L->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &L);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (cholmod.c) */

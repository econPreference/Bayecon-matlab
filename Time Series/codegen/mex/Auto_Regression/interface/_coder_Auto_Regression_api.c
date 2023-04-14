/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Auto_Regression_api.c
 *
 * Code generation for function '_coder_Auto_Regression_api'
 *
 */

/* Include files */
#include "_coder_Auto_Regression_api.h"
#include "Auto_Regression.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_mexutil.h"
#include "Auto_Regression_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ok_emlrtRTEI = {
    1,                            /* lineNo */
    1,                            /* colNo */
    "_coder_Auto_Regression_api", /* fName */
    ""                            /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static const mxArray *k_emlrt_marshallOut(const struct0_T u);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(xind), &thisId, y);
  emlrtDestroyArray(&xind);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b0), &thisId, y);
  emlrtDestroyArray(&b0);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  char_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(forecast), &thisId);
  emlrtDestroyArray(&forecast);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[5] = {"yfm", "betam", "phim", "sigma2m", "lnML"};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yfm", g_emlrt_marshallOut(u.yfm),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      l_emlrt_marshallOut(u.betam), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"phim", l_emlrt_marshallOut(u.phim),
                      2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sigma2m",
                      g_emlrt_marshallOut(u.sigma2m), 3);
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", b_y, 4);
  return y;
}

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u_data[c_i + u->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  char_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 0U, (void *)&dims);
  emlrtImportCharR2015b((emlrtCTX)sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

void Auto_Regression_api(const mxArray *const prhs[14], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *B0;
  emxArray_real_T *PHI0;
  emxArray_real_T *b0;
  emxArray_real_T *data;
  emxArray_real_T *phi0;
  emxArray_real_T *x_f;
  emxArray_real_T *xind;
  emxArray_real_T *yind;
  struct0_T Output;
  real_T a0;
  real_T d0;
  real_T n0;
  real_T n1;
  char_T ML;
  char_T forecast;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &data, 2, &ok_emlrtRTEI);
  emxInit_real_T(&st, &xind, 2, &ok_emlrtRTEI);
  emxInit_real_T(&st, &yind, 2, &ok_emlrtRTEI);
  emxInit_real_T(&st, &b0, 1, &ok_emlrtRTEI);
  emxInit_real_T(&st, &B0, 2, &ok_emlrtRTEI);
  emxInit_real_T(&st, &phi0, 1, &ok_emlrtRTEI);
  emxInit_real_T(&st, &PHI0, 2, &ok_emlrtRTEI);
  emxInit_real_T(&st, &x_f, 1, &ok_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &ok_emlrtRTEI);
  /* Marshall function inputs */
  data->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data", data);
  xind->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "xind", xind);
  yind->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "yind", yind);
  b0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "b0", b0);
  B0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "B0", B0);
  a0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "a0");
  d0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "d0");
  phi0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "phi0", phi0);
  PHI0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "PHI0", PHI0);
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "n1");
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "forecast");
  x_f->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "x_f", x_f);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "ML");
  /* Invoke the target function */
  Auto_Regression(&st, data, xind, yind, b0, B0, a0, d0, phi0, PHI0, n0, n1,
                  forecast, x_f, ML, &Output);
  /* Marshall function outputs */
  *plhs = k_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &x_f);
  emxFree_real_T(&st, &PHI0);
  emxFree_real_T(&st, &phi0);
  emxFree_real_T(&st, &B0);
  emxFree_real_T(&st, &b0);
  emxFree_real_T(&st, &yind);
  emxFree_real_T(&st, &xind);
  emxFree_real_T(&st, &data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Auto_Regression_api.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Common_Factor_Model_mexutil.h
 *
 * Code generation for function 'Common_Factor_Model_mexutil'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

void c_error(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1,
                       const mxArray *m2, const mxArray *m3, const mxArray *m4,
                       emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

real_T emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

/* End of code generation (Common_Factor_Model_mexutil.h) */

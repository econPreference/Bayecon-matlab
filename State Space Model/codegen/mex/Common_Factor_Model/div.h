/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.h
 *
 * Code generation for function 'div'
 *
 */

#pragma once

/* Include files */
#include "Common_Factor_Model_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                        const emxArray_real_T *rawY, int32_T i,
                        const emxArray_real_T *std_Y);

void rdivide(const emlrtStack *sp, emxArray_real_T *beta,
             const emxArray_real_T *y);

/* End of code generation (div.h) */

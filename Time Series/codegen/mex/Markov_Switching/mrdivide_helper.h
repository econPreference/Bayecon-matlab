/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.h
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

#pragma once

/* Include files */
#include "Markov_Switching_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_mrdiv(const emlrtStack *sp, emxArray_real_T *A,
             const emxArray_real_T *B);

void mrdiv(const emlrtStack *sp, const emxArray_real_T *B, emxArray_real_T *Y);

/* End of code generation (mrdivide_helper.h) */

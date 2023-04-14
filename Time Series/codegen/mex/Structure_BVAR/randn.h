/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randn.h
 *
 * Code generation for function 'randn'
 *
 */

#pragma once

/* Include files */
#include "Structure_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_randn(const emlrtStack *sp, real_T varargin_1, real_T varargin_2,
             emxArray_real_T *r);

void randn(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *r);

/* End of code generation (randn.h) */

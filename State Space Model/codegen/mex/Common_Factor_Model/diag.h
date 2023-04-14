/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.h
 *
 * Code generation for function 'diag'
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
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d);

void c_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d);

void diag(const emlrtStack *sp, const emxArray_creal_T *v, emxArray_creal_T *d);

/* End of code generation (diag.h) */

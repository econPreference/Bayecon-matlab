/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root_emxutil.c
 *
 * Code generation for function 'Unit_Root_emxutil'
 *
 */

/* Include files */
#include "Unit_Root_emxutil.h"
#include "Unit_Root.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void emxFreeStruct_cell_wrap_1(cell_wrap_1 *pStruct);
static void emxInitStruct_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);

/* Function Definitions */
static void emxFreeStruct_cell_wrap_1(cell_wrap_1 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

static void emxInitStruct_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 2, srcLocation, doPush);
}

void emxEnsureCapacity_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(boolean_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_creal_T(const emlrtStack *sp, emxArray_creal_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(creal_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(creal_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (creal_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_int8_T(const emlrtStack *sp, emxArray_int8_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int8_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int8_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int8_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_ptrdiff_t(const emlrtStack *sp, emxArray_ptrdiff_t
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(ptrdiff_t));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(ptrdiff_t) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (ptrdiff_t *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeMatrix_cell_wrap_1(cell_wrap_1 pMatrix[2])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    emxFreeStruct_cell_wrap_1(&pMatrix[i]);
  }
}

void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_real_T(&pStruct->betam);
  emxFree_real_T(&pStruct->cm);
  emxFree_real_T(&pStruct->phim);
  emxFree_real_T(&pStruct->sigma2m);
  emxFree_real_T(&pStruct->logpostm);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_creal_T(emxArray_creal_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_creal_T *)NULL) {
    if (((*pEmxArray)->data != (creal_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_creal_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (int8_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
  }
}

void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray)
{
  if (*pEmxArray != (emxArray_ptrdiff_t *)NULL) {
    if (((*pEmxArray)->data != (ptrdiff_t *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_ptrdiff_t *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitMatrix_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 pMatrix[2],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    emxInitStruct_cell_wrap_1(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->betam, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->cm, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->phim, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->sigma2m, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->logpostm, 1, srcLocation, doPush);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_creal_T(const emlrtStack *sp, emxArray_creal_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_creal_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_creal_T *)emlrtMallocMex(sizeof(emxArray_creal_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_creal_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_int8_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int8_T *)emlrtMallocMex(sizeof(emxArray_int8_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int8_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int8_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_ptrdiff_t(const emlrtStack *sp, emxArray_ptrdiff_t **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_ptrdiff_t *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_ptrdiff_t *)emlrtMallocMex(sizeof(emxArray_ptrdiff_t));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_ptrdiff_t);
  }

  emxArray = *pEmxArray;
  emxArray->data = (ptrdiff_t *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (Unit_Root_emxutil.c) */

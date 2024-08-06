/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: consegnaTest1_types.h
 *
 * Code generated for Simulink model 'consegnaTest1'.
 *
 * Model version                  : 2.2
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Jun 17 20:35:03 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_consegnaTest1_types_h_
#define RTW_HEADER_consegnaTest1_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<Root>/Digital Write2' */
#include "MW_SVD.h"
#ifndef struct_tag_5FwKk6wA1XPbMoI1XCDeDF
#define struct_tag_5FwKk6wA1XPbMoI1XCDeDF

struct tag_5FwKk6wA1XPbMoI1XCDeDF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_5FwKk6wA1XPbMoI1XCDeDF */

#ifndef typedef_mbed_DigitalRead_consegnaTest_T
#define typedef_mbed_DigitalRead_consegnaTest_T

typedef struct tag_5FwKk6wA1XPbMoI1XCDeDF mbed_DigitalRead_consegnaTest_T;

#endif                             /* typedef_mbed_DigitalRead_consegnaTest_T */

#ifndef struct_tag_KxFW01GBdhqk5JOEHU3GlD
#define struct_tag_KxFW01GBdhqk5JOEHU3GlD

struct tag_KxFW01GBdhqk5JOEHU3GlD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /* struct_tag_KxFW01GBdhqk5JOEHU3GlD */

#ifndef typedef_mbed_DigitalWrite_consegnaTes_T
#define typedef_mbed_DigitalWrite_consegnaTes_T

typedef struct tag_KxFW01GBdhqk5JOEHU3GlD mbed_DigitalWrite_consegnaTes_T;

#endif                             /* typedef_mbed_DigitalWrite_consegnaTes_T */

/* Parameters (default storage) */
typedef struct P_consegnaTest1_T_ P_consegnaTest1_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_consegnaTest1_T RT_MODEL_consegnaTest1_T;

#endif                                 /* RTW_HEADER_consegnaTest1_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

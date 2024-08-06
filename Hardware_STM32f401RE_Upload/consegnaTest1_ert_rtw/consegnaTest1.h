/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: consegnaTest1.h
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

#ifndef RTW_HEADER_consegnaTest1_h_
#define RTW_HEADER_consegnaTest1_h_
#ifndef consegnaTest1_COMMON_INCLUDES_
#define consegnaTest1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* consegnaTest1_COMMON_INCLUDES_ */

#include "consegnaTest1_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  boolean_T NOT;                       /* '<Root>/NOT' */
} B_consegnaTest1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  mbed_DigitalRead_consegnaTest_T obj; /* '<Root>/Digital Read3' */
  mbed_DigitalRead_consegnaTest_T obj_l;/* '<Root>/Digital Read2' */
  mbed_DigitalRead_consegnaTest_T obj_j;/* '<Root>/Digital Read1' */
  mbed_DigitalRead_consegnaTest_T obj_n;/* '<Root>/Digital Read' */
  mbed_DigitalWrite_consegnaTes_T obj_g;/* '<Root>/Digital Write2' */
  mbed_DigitalWrite_consegnaTes_T obj_h;/* '<Root>/Digital Write1' */
  mbed_DigitalWrite_consegnaTes_T obj_o;/* '<Root>/Digital Write' */
  real_T acceso;                       /* '<Root>/Chart' */
  real_T app;                          /* '<Root>/Chart' */
  real_T attivo;                       /* '<Root>/Chart' */
  real_T contatore;                    /* '<Root>/Chart' */
  real_T disattivaFornello;            /* '<Root>/Chart' */
  real_T evento_spegnimento;           /* '<Root>/Chart' */
  real_T pentola;                      /* '<Root>/Chart' */
  real_T frequenza;                    /* '<Root>/Chart' */
  real_T accendi_led_anomalia;         /* '<Root>/Chart' */
  uint32_T temporalCounter_i5;         /* '<Root>/Chart' */
  uint8_T is_active_c2_consegnaTest1;  /* '<Root>/Chart' */
  uint8_T is_Gestione_Potenza;         /* '<Root>/Chart' */
  uint8_T is_Bottone_Aumento;          /* '<Root>/Chart' */
  uint8_T is_Bottone_Diminuzione;      /* '<Root>/Chart' */
  uint8_T is_Toggling_Led;             /* '<Root>/Chart' */
  uint8_T is_Logica_Accensione_Spegniment;/* '<Root>/Chart' */
  uint8_T is_Bottone_Accensione;       /* '<Root>/Chart' */
  uint8_T is_led_accensione;           /* '<Root>/Chart' */
  uint8_T is_Logica_Sensore_Pentola;   /* '<Root>/Chart' */
  uint8_T is_Sensore_Prossimita;       /* '<Root>/Chart' */
  uint8_T is_Led_Anomalia;             /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i2;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i3;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i4;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i6;          /* '<Root>/Chart' */
} DW_consegnaTest1_T;

/* Parameters (default storage) */
struct P_consegnaTest1_T_ {
  real_T DigitalRead_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read'
                                        */
  real_T DigitalRead1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read1'
                                        */
  real_T DigitalRead2_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read2'
                                        */
  real_T DigitalRead3_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_consegnaTest1_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_consegnaTest1_T consegnaTest1_P;

/* Block signals (default storage) */
extern B_consegnaTest1_T consegnaTest1_B;

/* Block states (default storage) */
extern DW_consegnaTest1_T consegnaTest1_DW;

/* Model entry point functions */
extern void consegnaTest1_initialize(void);
extern void consegnaTest1_step(void);
extern void consegnaTest1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_consegnaTest1_T *const consegnaTest1_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'consegnaTest1'
 * '<S1>'   : 'consegnaTest1/Chart'
 */
#endif                                 /* RTW_HEADER_consegnaTest1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

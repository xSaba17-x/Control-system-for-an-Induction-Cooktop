/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: consegnaTest1.c
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

#include "consegnaTest1.h"
#include "rtwtypes.h"
#include "consegnaTest1_types.h"
#include <math.h>

/* Named constants for Chart: '<Root>/Chart' */
#define IN_Non_Premuto_Aumento_Potenza ((uint8_T)2U)
#define IN_Non_Premuto_Diminuzione_Pote ((uint8_T)2U)
#define conse_IN_In_Pressione_Dimuzione ((uint8_T)1U)
#define conse_IN_Potenza_Non_Attivabile ((uint8_T)7U)
#define consegn_IN_In_Pressione_Aumento ((uint8_T)1U)
#define consegnaT_IN_Led_Non_Attivabile ((uint8_T)1U)
#define consegnaT_IN_Potenza_Attivabile ((uint8_T)6U)
#define consegnaT_IN_RilevamentoPentola ((uint8_T)3U)
#define consegnaT_IN_SensoreNonAttivato ((uint8_T)5U)
#define consegnaTe_IN_DisattivaFornello ((uint8_T)2U)
#define consegnaTes_IN_Pentola_Presente ((uint8_T)1U)
#define consegnaTest1_IN_Acceso        ((uint8_T)1U)
#define consegnaTest1_IN_Allarme       ((uint8_T)1U)
#define consegnaTest1_IN_Appoggio      ((uint8_T)1U)
#define consegnaTest1_IN_InPressione   ((uint8_T)1U)
#define consegnaTest1_IN_Led_Acceso    ((uint8_T)1U)
#define consegnaTest1_IN_Led_spento    ((uint8_T)2U)
#define consegnaTest1_IN_NonPremuto    ((uint8_T)2U)
#define consegnaTest1_IN_Potenza_1000  ((uint8_T)2U)
#define consegnaTest1_IN_Potenza_1500  ((uint8_T)3U)
#define consegnaTest1_IN_Potenza_300   ((uint8_T)4U)
#define consegnaTest1_IN_Potenza_500   ((uint8_T)5U)
#define consegnaTest1_IN_Premuto       ((uint8_T)3U)
#define consegnaTest1_IN_PremutoAumento ((uint8_T)3U)
#define consegnaTest1_IN_Spento        ((uint8_T)2U)
#define consegnaTest1_IN_led_acceso    ((uint8_T)2U)
#define consegnaTest1_IN_led_acceso_i  ((uint8_T)1U)
#define consegnaTest1_IN_led_spento    ((uint8_T)3U)
#define consegnaTest1_IN_led_spento_f  ((uint8_T)2U)
#define consegnaTest_IN_Pentola_assente ((uint8_T)2U)
#define consegnaTest_IN_SensoreAttivato ((uint8_T)4U)
#define consegna_IN_Premuto_Diminuzione ((uint8_T)3U)

/* Block signals (default storage) */
B_consegnaTest1_T consegnaTest1_B;

/* Block states (default storage) */
DW_consegnaTest1_T consegnaTest1_DW;

/* Real-time model */
static RT_MODEL_consegnaTest1_T consegnaTest1_M_;
RT_MODEL_consegnaTest1_T *const consegnaTest1_M = &consegnaTest1_M_;

/* Forward declaration for local functions */
static void consegnaTest1_Gestione_Potenza(void);
static void co_Cambiamento_Potenza_Fornello(real_T *led_potenza, const boolean_T
  *NOT2, const boolean_T *NOT1);
static void consegnaTest_Fornello_induzione(real_T *led_potenza, real_T
  *led_anomalia, real_T *led_acceso, const boolean_T *NOT3, const boolean_T
  *NOT2, const boolean_T *NOT1);

/* Function for Chart: '<Root>/Chart' */
static void consegnaTest1_Gestione_Potenza(void)
{
  switch (consegnaTest1_DW.is_Gestione_Potenza) {
   case consegnaTest1_IN_Appoggio:
    if ((consegnaTest1_DW.temporalCounter_i2 >= 25U) &&
        (consegnaTest1_DW.contatore == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaT_IN_Potenza_Attivabile;
      consegnaTest1_DW.attivo = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else if ((consegnaTest1_DW.temporalCounter_i2 >= 25U) &&
               (consegnaTest1_DW.contatore == 1.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Potenza_300;
      consegnaTest1_DW.frequenza = 2.0;
      consegnaTest1_DW.attivo = 1.0;
    } else if (consegnaTest1_DW.app != consegnaTest1_DW.contatore) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else if ((consegnaTest1_DW.temporalCounter_i2 >= 25U) &&
               (consegnaTest1_DW.contatore == 2.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Potenza_500;
      consegnaTest1_DW.frequenza = 1.0;
      consegnaTest1_DW.attivo = 1.0;
    } else if ((consegnaTest1_DW.temporalCounter_i2 >= 25U) &&
               (consegnaTest1_DW.contatore == 3.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Potenza_1000;
      consegnaTest1_DW.frequenza = 0.5;
      consegnaTest1_DW.attivo = 1.0;
    } else if ((consegnaTest1_DW.temporalCounter_i2 >= 25U) &&
               (consegnaTest1_DW.contatore == 4.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Potenza_1500;
      consegnaTest1_DW.frequenza = 0.25;
      consegnaTest1_DW.attivo = 1.0;
    } else if ((consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    }
    break;

   case consegnaTest1_IN_Potenza_1000:
    if (consegnaTest1_DW.contatore != 3.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else if ((consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else {
      consegnaTest1_DW.frequenza = 0.5;
      consegnaTest1_DW.attivo = 1.0;
    }
    break;

   case consegnaTest1_IN_Potenza_1500:
    if (consegnaTest1_DW.contatore != 4.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else if ((consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else {
      consegnaTest1_DW.frequenza = 0.25;
      consegnaTest1_DW.attivo = 1.0;
    }
    break;

   case consegnaTest1_IN_Potenza_300:
    if (consegnaTest1_DW.contatore != 1.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else if ((consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else {
      consegnaTest1_DW.frequenza = 2.0;
      consegnaTest1_DW.attivo = 1.0;
    }
    break;

   case consegnaTest1_IN_Potenza_500:
    if (consegnaTest1_DW.contatore != 2.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else if ((consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else {
      consegnaTest1_DW.frequenza = 1.0;
      consegnaTest1_DW.attivo = 1.0;
    }
    break;

   case consegnaT_IN_Potenza_Attivabile:
    if (consegnaTest1_DW.pentola == 0.0) {
      consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else if (consegnaTest1_DW.contatore != 0.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaTest1_IN_Appoggio;
      consegnaTest1_DW.temporalCounter_i2 = 0U;
      consegnaTest1_DW.app = consegnaTest1_DW.contatore;
    } else {
      consegnaTest1_DW.attivo = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    }
    break;

   default:
    /* case IN_Potenza_Non_Attivabile: */
    if (consegnaTest1_DW.pentola == 1.0) {
      consegnaTest1_DW.is_Gestione_Potenza = consegnaT_IN_Potenza_Attivabile;
      consegnaTest1_DW.attivo = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    } else {
      consegnaTest1_DW.contatore = 0.0;
      consegnaTest1_DW.frequenza = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void co_Cambiamento_Potenza_Fornello(real_T *led_potenza, const boolean_T
  *NOT2, const boolean_T *NOT1)
{
  consegnaTest1_Gestione_Potenza();
  switch (consegnaTest1_DW.is_Bottone_Aumento) {
   case consegn_IN_In_Pressione_Aumento:
    if ((!*NOT1) || (consegnaTest1_DW.contatore == 4.0) ||
        (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Bottone_Aumento = IN_Non_Premuto_Aumento_Potenza;
    } else if (consegnaTest1_DW.temporalCounter_i3 >= 5U) {
      consegnaTest1_DW.is_Bottone_Aumento = consegnaTest1_IN_PremutoAumento;
      consegnaTest1_DW.contatore++;
    }
    break;

   case IN_Non_Premuto_Aumento_Potenza:
    if ((*NOT1) && (!*NOT2)) {
      consegnaTest1_DW.is_Bottone_Aumento = consegn_IN_In_Pressione_Aumento;
      consegnaTest1_DW.temporalCounter_i3 = 0U;
    }
    break;

   default:
    /* case IN_PremutoAumento: */
    if ((!*NOT1) || (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Bottone_Aumento = IN_Non_Premuto_Aumento_Potenza;
    }
    break;
  }

  switch (consegnaTest1_DW.is_Bottone_Diminuzione) {
   case conse_IN_In_Pressione_Dimuzione:
    if ((!*NOT2) || (consegnaTest1_DW.contatore == 0.0) ||
        (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Bottone_Diminuzione = IN_Non_Premuto_Diminuzione_Pote;
    } else if (consegnaTest1_DW.temporalCounter_i4 >= 5U) {
      consegnaTest1_DW.is_Bottone_Diminuzione = consegna_IN_Premuto_Diminuzione;
      consegnaTest1_DW.contatore--;
    }
    break;

   case IN_Non_Premuto_Diminuzione_Pote:
    if ((*NOT2) && (!*NOT1)) {
      consegnaTest1_DW.is_Bottone_Diminuzione = conse_IN_In_Pressione_Dimuzione;
      consegnaTest1_DW.temporalCounter_i4 = 0U;
    }
    break;

   default:
    /* case IN_Premuto_Diminuzione: */
    if ((!*NOT2) || (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Bottone_Diminuzione = IN_Non_Premuto_Diminuzione_Pote;
    }
    break;
  }

  switch (consegnaTest1_DW.is_Toggling_Led) {
   case consegnaT_IN_Led_Non_Attivabile:
    if ((consegnaTest1_DW.acceso == 1.0) && (consegnaTest1_DW.frequenza != 0.0))
    {
      consegnaTest1_DW.is_Toggling_Led = consegnaTest1_IN_led_spento;
      consegnaTest1_DW.temporalCounter_i5 = 0U;
      *led_potenza = 0.0;
    } else {
      *led_potenza = 0.0;
    }
    break;

   case consegnaTest1_IN_led_acceso:
    if ((consegnaTest1_DW.temporalCounter_i5 >= (uint32_T)ceil
         (consegnaTest1_DW.frequenza * 5.0)) && (consegnaTest1_DW.frequenza !=
         0.0)) {
      consegnaTest1_DW.is_Toggling_Led = consegnaTest1_IN_led_spento;
      consegnaTest1_DW.temporalCounter_i5 = 0U;
      *led_potenza = 0.0;
    } else if ((consegnaTest1_DW.acceso == 0.0) ||
               (consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.frequenza == 0.0)) {
      consegnaTest1_DW.is_Toggling_Led = consegnaT_IN_Led_Non_Attivabile;
      *led_potenza = 0.0;
    } else {
      *led_potenza = 1.0;
    }
    break;

   default:
    /* case IN_led_spento: */
    if ((consegnaTest1_DW.temporalCounter_i5 >= (uint32_T)ceil
         (consegnaTest1_DW.frequenza * 5.0)) && (consegnaTest1_DW.frequenza !=
         0.0)) {
      consegnaTest1_DW.is_Toggling_Led = consegnaTest1_IN_led_acceso;
      consegnaTest1_DW.temporalCounter_i5 = 0U;
      *led_potenza = 1.0;
    } else if ((consegnaTest1_DW.acceso == 0.0) ||
               (consegnaTest1_DW.disattivaFornello == 1.0) ||
               (consegnaTest1_DW.frequenza == 0.0)) {
      consegnaTest1_DW.is_Toggling_Led = consegnaT_IN_Led_Non_Attivabile;
      *led_potenza = 0.0;
    } else {
      *led_potenza = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void consegnaTest_Fornello_induzione(real_T *led_potenza, real_T
  *led_anomalia, real_T *led_acceso, const boolean_T *NOT3, const boolean_T
  *NOT2, const boolean_T *NOT1)
{
  co_Cambiamento_Potenza_Fornello(led_potenza, NOT2, NOT1);
  if (consegnaTest1_DW.is_Logica_Accensione_Spegniment ==
      consegnaTest1_IN_Acceso) {
    if (consegnaTest1_DW.evento_spegnimento == 1.0) {
      consegnaTest1_DW.is_Logica_Accensione_Spegniment = consegnaTest1_IN_Spento;
      consegnaTest1_DW.acceso = 0.0;
    } else {
      consegnaTest1_DW.acceso = 1.0;
    }

    /* case IN_Spento: */
  } else if (consegnaTest1_B.NOT && (consegnaTest1_DW.evento_spegnimento == 0.0))
  {
    consegnaTest1_DW.is_Logica_Accensione_Spegniment = consegnaTest1_IN_Acceso;
    consegnaTest1_DW.acceso = 1.0;
  } else {
    consegnaTest1_DW.acceso = 0.0;
  }

  switch (consegnaTest1_DW.is_Bottone_Accensione) {
   case consegnaTest1_IN_InPressione:
    if (!consegnaTest1_B.NOT) {
      consegnaTest1_DW.is_Bottone_Accensione = consegnaTest1_IN_NonPremuto;
      consegnaTest1_DW.evento_spegnimento = 0.0;
    } else if (consegnaTest1_DW.temporalCounter_i1 >= 5U) {
      consegnaTest1_DW.is_Bottone_Accensione = consegnaTest1_IN_Premuto;
      consegnaTest1_DW.evento_spegnimento = 1.0;
    }
    break;

   case consegnaTest1_IN_NonPremuto:
    if (consegnaTest1_B.NOT && (consegnaTest1_DW.acceso == 1.0)) {
      consegnaTest1_DW.is_Bottone_Accensione = consegnaTest1_IN_InPressione;
      consegnaTest1_DW.temporalCounter_i1 = 0U;
    } else {
      consegnaTest1_DW.evento_spegnimento = 0.0;
    }
    break;

   default:
    /* case IN_Premuto: */
    if (!consegnaTest1_B.NOT) {
      consegnaTest1_DW.is_Bottone_Accensione = consegnaTest1_IN_NonPremuto;
      consegnaTest1_DW.evento_spegnimento = 0.0;
    } else {
      consegnaTest1_DW.evento_spegnimento = 1.0;
    }
    break;
  }

  if (consegnaTest1_DW.is_led_accensione == consegnaTest1_IN_led_acceso_i) {
    if (consegnaTest1_DW.evento_spegnimento == 1.0) {
      consegnaTest1_DW.is_led_accensione = consegnaTest1_IN_led_spento_f;
      *led_acceso = 0.0;
    } else {
      *led_acceso = 1.0;
    }

    /* case IN_led_spento: */
  } else if (consegnaTest1_B.NOT && (consegnaTest1_DW.evento_spegnimento == 0.0))
  {
    consegnaTest1_DW.is_led_accensione = consegnaTest1_IN_led_acceso_i;
    *led_acceso = 1.0;
  } else {
    *led_acceso = 0.0;
  }

  switch (consegnaTest1_DW.is_Logica_Sensore_Pentola) {
   case consegnaTest1_IN_Allarme:
    if (consegnaTest1_DW.pentola == 1.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_RilevamentoPentola;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
      consegnaTest1_DW.disattivaFornello = 0.0;
    } else if (consegnaTest1_DW.acceso == 0.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_SensoreNonAttivato;
      consegnaTest1_DW.disattivaFornello = 0.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    } else if ((consegnaTest1_DW.temporalCounter_i6 >= 50U) &&
               (consegnaTest1_DW.pentola == 0.0)) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaTe_IN_DisattivaFornello;
      consegnaTest1_DW.disattivaFornello = 1.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    } else {
      consegnaTest1_DW.accendi_led_anomalia = 1.0;
    }
    break;

   case consegnaTe_IN_DisattivaFornello:
    if (consegnaTest1_DW.pentola == 1.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_RilevamentoPentola;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
      consegnaTest1_DW.disattivaFornello = 0.0;
    } else if (consegnaTest1_DW.acceso == 0.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_SensoreNonAttivato;
      consegnaTest1_DW.disattivaFornello = 0.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    } else {
      consegnaTest1_DW.disattivaFornello = 1.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    }
    break;

   case consegnaT_IN_RilevamentoPentola:
    if ((consegnaTest1_DW.pentola == 0.0) && (consegnaTest1_DW.attivo == 0.0)) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaTest_IN_SensoreAttivato;
    } else if ((consegnaTest1_DW.pentola == 0.0) && (consegnaTest1_DW.attivo ==
                1.0)) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola = consegnaTest1_IN_Allarme;
      consegnaTest1_DW.temporalCounter_i6 = 0U;
      consegnaTest1_DW.accendi_led_anomalia = 1.0;
    } else if (consegnaTest1_DW.acceso == 0.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_SensoreNonAttivato;
      consegnaTest1_DW.disattivaFornello = 0.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    } else {
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
      consegnaTest1_DW.disattivaFornello = 0.0;
    }
    break;

   case consegnaTest_IN_SensoreAttivato:
    if (consegnaTest1_DW.acceso == 0.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_SensoreNonAttivato;
      consegnaTest1_DW.disattivaFornello = 0.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    } else if (consegnaTest1_DW.pentola == 1.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaT_IN_RilevamentoPentola;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
      consegnaTest1_DW.disattivaFornello = 0.0;
    }
    break;

   default:
    /* case IN_SensoreNonAttivato: */
    if (consegnaTest1_DW.acceso == 1.0) {
      consegnaTest1_DW.is_Logica_Sensore_Pentola =
        consegnaTest_IN_SensoreAttivato;
    } else {
      consegnaTest1_DW.disattivaFornello = 0.0;
      consegnaTest1_DW.accendi_led_anomalia = 0.0;
    }
    break;
  }

  if (consegnaTest1_DW.is_Sensore_Prossimita == consegnaTes_IN_Pentola_Presente)
  {
    if ((!*NOT3) || (consegnaTest1_DW.acceso == 0.0)) {
      consegnaTest1_DW.is_Sensore_Prossimita = consegnaTest_IN_Pentola_assente;
      consegnaTest1_DW.pentola = 0.0;
    } else {
      consegnaTest1_DW.pentola = 1.0;
    }

    /* case IN_Pentola_assente: */
  } else if ((*NOT3) && (consegnaTest1_DW.acceso == 1.0)) {
    consegnaTest1_DW.is_Sensore_Prossimita = consegnaTes_IN_Pentola_Presente;
    consegnaTest1_DW.pentola = 1.0;
  } else {
    consegnaTest1_DW.pentola = 0.0;
  }

  if (consegnaTest1_DW.is_Led_Anomalia == consegnaTest1_IN_Led_Acceso) {
    if (consegnaTest1_DW.accendi_led_anomalia == 0.0) {
      consegnaTest1_DW.is_Led_Anomalia = consegnaTest1_IN_Led_spento;
      *led_anomalia = 0.0;
    } else {
      *led_anomalia = 1.0;
    }

    /* case IN_Led_spento: */
  } else if (consegnaTest1_DW.accendi_led_anomalia == 1.0) {
    consegnaTest1_DW.is_Led_Anomalia = consegnaTest1_IN_Led_Acceso;
    *led_anomalia = 1.0;
  } else {
    *led_anomalia = 0.0;
  }
}

/* Model step function */
void consegnaTest1_step(void)
{
  real_T led_acceso;
  real_T led_anomalia;
  real_T led_potenza;
  boolean_T NOT1;
  boolean_T NOT2;
  boolean_T NOT3;

  /* MATLABSystem: '<Root>/Digital Read' */
  if (consegnaTest1_DW.obj_n.SampleTime !=
      consegnaTest1_P.DigitalRead_SampleTime) {
    consegnaTest1_DW.obj_n.SampleTime = consegnaTest1_P.DigitalRead_SampleTime;
  }

  NOT1 = MW_digitalIO_read(consegnaTest1_DW.obj_n.MW_DIGITALIO_HANDLE);

  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<Root>/Digital Read'
   */
  consegnaTest1_B.NOT = !NOT1;

  /* MATLABSystem: '<Root>/Digital Read1' */
  if (consegnaTest1_DW.obj_j.SampleTime !=
      consegnaTest1_P.DigitalRead1_SampleTime) {
    consegnaTest1_DW.obj_j.SampleTime = consegnaTest1_P.DigitalRead1_SampleTime;
  }

  NOT1 = MW_digitalIO_read(consegnaTest1_DW.obj_j.MW_DIGITALIO_HANDLE);

  /* Logic: '<Root>/NOT1' incorporates:
   *  MATLABSystem: '<Root>/Digital Read1'
   */
  NOT1 = !NOT1;

  /* MATLABSystem: '<Root>/Digital Read2' */
  if (consegnaTest1_DW.obj_l.SampleTime !=
      consegnaTest1_P.DigitalRead2_SampleTime) {
    consegnaTest1_DW.obj_l.SampleTime = consegnaTest1_P.DigitalRead2_SampleTime;
  }

  NOT2 = MW_digitalIO_read(consegnaTest1_DW.obj_l.MW_DIGITALIO_HANDLE);

  /* Logic: '<Root>/NOT2' incorporates:
   *  MATLABSystem: '<Root>/Digital Read2'
   */
  NOT2 = !NOT2;

  /* MATLABSystem: '<Root>/Digital Read3' */
  if (consegnaTest1_DW.obj.SampleTime != consegnaTest1_P.DigitalRead3_SampleTime)
  {
    consegnaTest1_DW.obj.SampleTime = consegnaTest1_P.DigitalRead3_SampleTime;
  }

  NOT3 = MW_digitalIO_read(consegnaTest1_DW.obj.MW_DIGITALIO_HANDLE);

  /* Logic: '<Root>/NOT3' incorporates:
   *  MATLABSystem: '<Root>/Digital Read3'
   */
  NOT3 = !NOT3;

  /* Chart: '<Root>/Chart' */
  if (consegnaTest1_DW.temporalCounter_i1 < 7U) {
    consegnaTest1_DW.temporalCounter_i1++;
  }

  if (consegnaTest1_DW.temporalCounter_i2 < 31U) {
    consegnaTest1_DW.temporalCounter_i2++;
  }

  if (consegnaTest1_DW.temporalCounter_i3 < 7U) {
    consegnaTest1_DW.temporalCounter_i3++;
  }

  if (consegnaTest1_DW.temporalCounter_i4 < 7U) {
    consegnaTest1_DW.temporalCounter_i4++;
  }

  if (consegnaTest1_DW.temporalCounter_i5 < MAX_uint32_T) {
    consegnaTest1_DW.temporalCounter_i5++;
  }

  if (consegnaTest1_DW.temporalCounter_i6 < 63U) {
    consegnaTest1_DW.temporalCounter_i6++;
  }

  if (consegnaTest1_DW.is_active_c2_consegnaTest1 == 0U) {
    consegnaTest1_DW.is_active_c2_consegnaTest1 = 1U;
    consegnaTest1_DW.is_Gestione_Potenza = conse_IN_Potenza_Non_Attivabile;
    consegnaTest1_DW.contatore = 0.0;
    consegnaTest1_DW.frequenza = 0.0;
    consegnaTest1_DW.is_Bottone_Aumento = IN_Non_Premuto_Aumento_Potenza;
    consegnaTest1_DW.is_Bottone_Diminuzione = IN_Non_Premuto_Diminuzione_Pote;
    consegnaTest1_DW.is_Toggling_Led = consegnaT_IN_Led_Non_Attivabile;
    led_potenza = 0.0;
    consegnaTest1_DW.is_Logica_Accensione_Spegniment = consegnaTest1_IN_Spento;
    consegnaTest1_DW.acceso = 0.0;
    consegnaTest1_DW.is_Bottone_Accensione = consegnaTest1_IN_NonPremuto;
    consegnaTest1_DW.evento_spegnimento = 0.0;
    consegnaTest1_DW.is_led_accensione = consegnaTest1_IN_led_spento_f;
    led_acceso = 0.0;
    consegnaTest1_DW.is_Logica_Sensore_Pentola = consegnaT_IN_SensoreNonAttivato;
    consegnaTest1_DW.disattivaFornello = 0.0;
    consegnaTest1_DW.accendi_led_anomalia = 0.0;
    consegnaTest1_DW.is_Sensore_Prossimita = consegnaTest_IN_Pentola_assente;
    consegnaTest1_DW.pentola = 0.0;
    consegnaTest1_DW.is_Led_Anomalia = consegnaTest1_IN_Led_spento;
    led_anomalia = 0.0;
  } else {
    consegnaTest_Fornello_induzione(&led_potenza, &led_anomalia, &led_acceso,
      &NOT3, &NOT2, &NOT1);
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(consegnaTest1_DW.obj_o.MW_DIGITALIO_HANDLE, led_acceso !=
                     0.0);

  /* MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(consegnaTest1_DW.obj_h.MW_DIGITALIO_HANDLE, led_anomalia !=
                     0.0);

  /* MATLABSystem: '<Root>/Digital Write2' */
  MW_digitalIO_write(consegnaTest1_DW.obj_g.MW_DIGITALIO_HANDLE, led_potenza !=
                     0.0);
}

/* Model initialize function */
void consegnaTest1_initialize(void)
{
  {
    uint32_T pinname;
    mbed_DigitalRead_consegnaTest_T *obj;
    mbed_DigitalWrite_consegnaTes_T *obj_0;

    /* Start for MATLABSystem: '<Root>/Digital Read' */
    consegnaTest1_DW.obj_n.matlabCodegenIsDeleted = false;
    consegnaTest1_DW.obj_n.SampleTime = consegnaTest1_P.DigitalRead_SampleTime;
    obj = &consegnaTest1_DW.obj_n;
    consegnaTest1_DW.obj_n.isInitialized = 1;
    pinname = PC_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    consegnaTest1_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read1' */
    consegnaTest1_DW.obj_j.matlabCodegenIsDeleted = false;
    consegnaTest1_DW.obj_j.SampleTime = consegnaTest1_P.DigitalRead1_SampleTime;
    obj = &consegnaTest1_DW.obj_j;
    consegnaTest1_DW.obj_j.isInitialized = 1;
    pinname = PC_2;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    consegnaTest1_DW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read2' */
    consegnaTest1_DW.obj_l.matlabCodegenIsDeleted = false;
    consegnaTest1_DW.obj_l.SampleTime = consegnaTest1_P.DigitalRead2_SampleTime;
    obj = &consegnaTest1_DW.obj_l;
    consegnaTest1_DW.obj_l.isInitialized = 1;
    pinname = PC_3;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    consegnaTest1_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read3' */
    consegnaTest1_DW.obj.matlabCodegenIsDeleted = false;
    consegnaTest1_DW.obj.SampleTime = consegnaTest1_P.DigitalRead3_SampleTime;
    obj = &consegnaTest1_DW.obj;
    consegnaTest1_DW.obj.isInitialized = 1;
    pinname = PC_10;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    consegnaTest1_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    consegnaTest1_DW.obj_o.matlabCodegenIsDeleted = false;
    obj_0 = &consegnaTest1_DW.obj_o;
    consegnaTest1_DW.obj_o.isInitialized = 1;
    pinname = PA_5;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    consegnaTest1_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    consegnaTest1_DW.obj_h.matlabCodegenIsDeleted = false;
    obj_0 = &consegnaTest1_DW.obj_h;
    consegnaTest1_DW.obj_h.isInitialized = 1;
    pinname = PA_7;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    consegnaTest1_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write2' */
    consegnaTest1_DW.obj_g.matlabCodegenIsDeleted = false;
    obj_0 = &consegnaTest1_DW.obj_g;
    consegnaTest1_DW.obj_g.isInitialized = 1;
    pinname = PA_6;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    consegnaTest1_DW.obj_g.isSetupComplete = true;
  }
}

/* Model terminate function */
void consegnaTest1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Read' */
  if (!consegnaTest1_DW.obj_n.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_n.isInitialized == 1) &&
        consegnaTest1_DW.obj_n.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_n.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read1' */
  if (!consegnaTest1_DW.obj_j.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_j.isInitialized == 1) &&
        consegnaTest1_DW.obj_j.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_j.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read2' */
  if (!consegnaTest1_DW.obj_l.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_l.isInitialized == 1) &&
        consegnaTest1_DW.obj_l.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_l.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read2' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read3' */
  if (!consegnaTest1_DW.obj.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj.isInitialized == 1) &&
        consegnaTest1_DW.obj.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read3' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  if (!consegnaTest1_DW.obj_o.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_o.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_o.isInitialized == 1) &&
        consegnaTest1_DW.obj_o.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_o.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  if (!consegnaTest1_DW.obj_h.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_h.isInitialized == 1) &&
        consegnaTest1_DW.obj_h.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_h.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write2' */
  if (!consegnaTest1_DW.obj_g.matlabCodegenIsDeleted) {
    consegnaTest1_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((consegnaTest1_DW.obj_g.isInitialized == 1) &&
        consegnaTest1_DW.obj_g.isSetupComplete) {
      MW_digitalIO_close(consegnaTest1_DW.obj_g.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

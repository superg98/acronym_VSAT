/*
 * firststateflow2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "firststateflow2".
 *
 * Model version              : 1.21
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sat Feb 12 17:18:57 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "firststateflow2.h"
#include "firststateflow2_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define firststatefl_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define firststatefl_IN_arm_select_mode ((uint8_T)1U)
#define firststateflo_IN_automatic_mode ((uint8_T)2U)
#define firststateflow2_IN_done        ((uint8_T)3U)
#define firststateflow2_IN_kill_state  ((uint8_T)4U)
#define firststateflow2_IN_manual_mode ((uint8_T)5U)
#define firststateflow2_IN_no_operate  ((uint8_T)6U)
#define firststateflow2_IN_nyaw_npitch ((uint8_T)7U)
#define firststateflow2_IN_nyaw_ppitch ((uint8_T)8U)
#define firststateflow2_IN_power_on    ((uint8_T)9U)
#define firststateflow2_IN_pyaw_npitch ((uint8_T)10U)
#define firststateflow2_IN_pyaw_ppitch ((uint8_T)11U)

/* Block signals (default storage) */
B_firststateflow2_T firststateflow2_B;

/* Block states (default storage) */
DW_firststateflow2_T firststateflow2_DW;

/* Real-time model */
static RT_MODEL_firststateflow2_T firststateflow2_M_;
RT_MODEL_firststateflow2_T *const firststateflow2_M = &firststateflow2_M_;

/* Forward declaration for local functions */
static void firststateflow2_pyaw_ppitch(void);
static void firststateflow2_automatic_mode(void);
static void firststateflow2_nyaw_ppitch(void);
static void firststateflow2_pyaw_npitch(void);

/* Function for Chart: '<Root>/Chart' */
static void firststateflow2_pyaw_ppitch(void)
{
  /* During 'pyaw_ppitch': '<S1>:68' */
  if ((firststateflow2_B.SineWave1 < -2.0) && (firststateflow2_B.SineWave8 <
       -2.0)) {
    /* Transition: '<S1>:86' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_npitch;

    /* Entry 'nyaw_npitch': '<S1>:42' */
    firststateflow2_B.motor1_drive = -2.0;
    firststateflow2_B.motor2_drive = 9.0;
    firststateflow2_B.motor3_drive = 9.0;
  } else if ((firststateflow2_B.SineWave1 == 0.0) &&
             (firststateflow2_B.SineWave8 == 0.0)) {
    /* Transition: '<S1>:72' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflo_IN_automatic_mode;

    /* Entry 'automatic_mode': '<S1>:20' */
  } else if ((firststateflow2_B.motor1_drive == 0.0) &&
             (firststateflow2_B.motor2_drive == 0.0) &&
             (firststateflow2_B.motor3_drive == 0.0)) {
    /* Transition: '<S1>:96' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_done;

    /* Entry 'done': '<S1>:69' */
    firststateflow2_B.motor1_drive = 0.0;
    firststateflow2_B.motor2_drive = 0.0;
    firststateflow2_B.motor3_drive = 0.0;
  } else if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8
              < -2.0)) {
    /* Transition: '<S1>:90' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_ppitch;

    /* Entry 'nyaw_ppitch': '<S1>:66' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else if ((firststateflow2_B.SineWave1 < -2.0) &&
             (firststateflow2_B.SineWave8 > 2.0)) {
    /* Transition: '<S1>:78' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_npitch;

    /* Entry 'pyaw_npitch': '<S1>:67' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else {
    firststateflow2_B.LED1 = 1.0;
    firststateflow2_B.LED2 = 0.0;
    firststateflow2_B.LED3 = 1.0;
    firststateflow2_B.LED4 = 0.0;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void firststateflow2_automatic_mode(void)
{
  /* During 'automatic_mode': '<S1>:20' */
  if ((firststateflow2_B.SineWave1 < -2.0) && (firststateflow2_B.SineWave8 <
       -2.0)) {
    /* Transition: '<S1>:43' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_npitch;

    /* Entry 'nyaw_npitch': '<S1>:42' */
    firststateflow2_B.motor1_drive = -2.0;
    firststateflow2_B.motor2_drive = 9.0;
    firststateflow2_B.motor3_drive = 9.0;
  } else if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8
              < -2.0)) {
    /* Transition: '<S1>:83' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_ppitch;

    /* Entry 'nyaw_ppitch': '<S1>:66' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else if ((firststateflow2_B.motor1_drive == 0.0) &&
             (firststateflow2_B.motor2_drive == 0.0) &&
             (firststateflow2_B.motor3_drive == 0.0)) {
    /* Transition: '<S1>:92' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_done;

    /* Entry 'done': '<S1>:69' */
    firststateflow2_B.motor1_drive = 0.0;
    firststateflow2_B.motor2_drive = 0.0;
    firststateflow2_B.motor3_drive = 0.0;
  } else if ((firststateflow2_B.SineWave1 < -2.0) &&
             (firststateflow2_B.SineWave8 > 2.0)) {
    /* Transition: '<S1>:76' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_npitch;

    /* Entry 'pyaw_npitch': '<S1>:67' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8
              > 2.0)) {
    /* Transition: '<S1>:70' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_ppitch;

    /* Entry 'pyaw_ppitch': '<S1>:68' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = -2.0;
  } else {
    firststateflow2_B.LED1 = 1.0;
    firststateflow2_B.LED2 = 0.0;
    firststateflow2_B.LED3 = 1.0;
    firststateflow2_B.LED4 = 0.0;
    firststateflow2_B.motor1_drive = 5.0;
    firststateflow2_B.motor2_drive = 5.0;
    firststateflow2_B.motor3_drive = 5.0;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void firststateflow2_nyaw_ppitch(void)
{
  /* During 'nyaw_ppitch': '<S1>:66' */
  if ((firststateflow2_B.motor1_drive == 0.0) && (firststateflow2_B.motor2_drive
       == 0.0) && (firststateflow2_B.motor3_drive == 0.0)) {
    /* Transition: '<S1>:81' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_ppitch;

    /* Entry 'pyaw_ppitch': '<S1>:68' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = -2.0;
  } else if ((firststateflow2_B.SineWave1 < -2.0) &&
             (firststateflow2_B.SineWave8 < -2.0)) {
    /* Transition: '<S1>:88' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_npitch;

    /* Entry 'nyaw_npitch': '<S1>:42' */
    firststateflow2_B.motor1_drive = -2.0;
    firststateflow2_B.motor2_drive = 9.0;
    firststateflow2_B.motor3_drive = 9.0;
  } else if ((firststateflow2_B.motor1_drive == 0.0) &&
             (firststateflow2_B.motor2_drive == 0.0) &&
             (firststateflow2_B.motor3_drive == 0.0)) {
    /* Transition: '<S1>:94' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_done;

    /* Entry 'done': '<S1>:69' */
    firststateflow2_B.motor1_drive = 0.0;
    firststateflow2_B.motor2_drive = 0.0;
    firststateflow2_B.motor3_drive = 0.0;
  } else if ((firststateflow2_B.SineWave1 < -2.0) &&
             (firststateflow2_B.SineWave8 > 2.0)) {
    /* Transition: '<S1>:85' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_npitch;

    /* Entry 'pyaw_npitch': '<S1>:67' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else if ((firststateflow2_B.SineWave1 == 0.0) &&
             (firststateflow2_B.SineWave8 == 0.0)) {
    /* Transition: '<S1>:84' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflo_IN_automatic_mode;

    /* Entry 'automatic_mode': '<S1>:20' */
  } else {
    firststateflow2_B.LED1 = 1.0;
    firststateflow2_B.LED2 = 0.0;
    firststateflow2_B.LED3 = 1.0;
    firststateflow2_B.LED4 = 0.0;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void firststateflow2_pyaw_npitch(void)
{
  /* During 'pyaw_npitch': '<S1>:67' */
  if ((firststateflow2_B.SineWave1 < -2.0) && (firststateflow2_B.SineWave8 <
       -2.0)) {
    /* Transition: '<S1>:87' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_npitch;

    /* Entry 'nyaw_npitch': '<S1>:42' */
    firststateflow2_B.motor1_drive = -2.0;
    firststateflow2_B.motor2_drive = 9.0;
    firststateflow2_B.motor3_drive = 9.0;
  } else if ((firststateflow2_B.SineWave1 == 0.0) &&
             (firststateflow2_B.SineWave8 == 0.0)) {
    /* Transition: '<S1>:75' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflo_IN_automatic_mode;

    /* Entry 'automatic_mode': '<S1>:20' */
  } else if ((firststateflow2_B.motor1_drive == 0.0) &&
             (firststateflow2_B.motor2_drive == 0.0) &&
             (firststateflow2_B.motor3_drive == 0.0)) {
    /* Transition: '<S1>:95' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_done;

    /* Entry 'done': '<S1>:69' */
    firststateflow2_B.motor1_drive = 0.0;
    firststateflow2_B.motor2_drive = 0.0;
    firststateflow2_B.motor3_drive = 0.0;
  } else if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8
              < -2.0)) {
    /* Transition: '<S1>:91' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_nyaw_ppitch;

    /* Entry 'nyaw_ppitch': '<S1>:66' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = 4.0;
  } else if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8
              > 2.0)) {
    /* Transition: '<S1>:79' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_pyaw_ppitch;

    /* Entry 'pyaw_ppitch': '<S1>:68' */
    firststateflow2_B.motor1_drive = 9.0;
    firststateflow2_B.motor2_drive = -2.0;
    firststateflow2_B.motor3_drive = -2.0;
  } else {
    firststateflow2_B.LED1 = 1.0;
    firststateflow2_B.LED2 = 0.0;
    firststateflow2_B.LED3 = 1.0;
    firststateflow2_B.LED4 = 0.0;
  }
}

/* Model step function */
void firststateflow2_step(void)
{
  real_T SineWave_tmp;

  /* Sin: '<Root>/Sine Wave' incorporates:
   *  Sin: '<Root>/Sine Wave1'
   *  Sin: '<Root>/Sine Wave2'
   *  Sin: '<Root>/Sine Wave3'
   *  Sin: '<Root>/Sine Wave4'
   *  Sin: '<Root>/Sine Wave5'
   *  Sin: '<Root>/Sine Wave6'
   *  Sin: '<Root>/Sine Wave7'
   *  Sin: '<Root>/Sine Wave8'
   */
  SineWave_tmp = firststateflow2_M->Timing.t[0];

  /* Sin: '<Root>/Sine Wave' */
  firststateflow2_B.SineWave = sin(firststateflow2_P.SineWave_Freq *
    SineWave_tmp + firststateflow2_P.SineWave_Phase) *
    firststateflow2_P.SineWave_Amp + firststateflow2_P.SineWave_Bias;

  /* Sin: '<Root>/Sine Wave2' */
  firststateflow2_B.SineWave2 = sin(firststateflow2_P.SineWave2_Freq *
    SineWave_tmp + firststateflow2_P.SineWave2_Phase) *
    firststateflow2_P.SineWave2_Amp + firststateflow2_P.SineWave2_Bias;

  /* Sin: '<Root>/Sine Wave3' */
  firststateflow2_B.SineWave3 = sin(firststateflow2_P.SineWave3_Freq *
    SineWave_tmp + firststateflow2_P.SineWave3_Phase) *
    firststateflow2_P.SineWave3_Amp + firststateflow2_P.SineWave3_Bias;

  /* Sin: '<Root>/Sine Wave4' */
  firststateflow2_B.SineWave4 = sin(firststateflow2_P.SineWave4_Freq *
    SineWave_tmp + firststateflow2_P.SineWave4_Phase) *
    firststateflow2_P.SineWave4_Amp + firststateflow2_P.SineWave4_Bias;

  /* Sin: '<Root>/Sine Wave6' */
  firststateflow2_B.SineWave6 = sin(firststateflow2_P.SineWave6_Freq *
    SineWave_tmp + firststateflow2_P.SineWave6_Phase) *
    firststateflow2_P.SineWave6_Amp + firststateflow2_P.SineWave6_Bias;

  /* Sin: '<Root>/Sine Wave5' */
  firststateflow2_B.SineWave5 = sin(firststateflow2_P.SineWave5_Freq *
    SineWave_tmp + firststateflow2_P.SineWave5_Phase) *
    firststateflow2_P.SineWave5_Amp + firststateflow2_P.SineWave5_Bias;

  /* Sin: '<Root>/Sine Wave7' */
  firststateflow2_B.SineWave7 = sin(firststateflow2_P.SineWave7_Freq *
    SineWave_tmp + firststateflow2_P.SineWave7_Phase) *
    firststateflow2_P.SineWave7_Amp + firststateflow2_P.SineWave7_Bias;

  /* Sin: '<Root>/Sine Wave1' */
  firststateflow2_B.SineWave1 = sin(firststateflow2_P.SineWave1_Freq *
    SineWave_tmp + firststateflow2_P.SineWave1_Phase) *
    firststateflow2_P.SineWave1_Amp + firststateflow2_P.SineWave1_Bias;

  /* Sin: '<Root>/Sine Wave8' */
  firststateflow2_B.SineWave8 = sin(firststateflow2_P.SineWave8_Freq *
    SineWave_tmp + firststateflow2_P.SineWave8_Phase) *
    firststateflow2_P.SineWave8_Amp + firststateflow2_P.SineWave8_Bias;

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (firststateflow2_DW.is_active_c3_firststateflow2 == 0U) {
    /* Entry: Chart */
    firststateflow2_DW.is_active_c3_firststateflow2 = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:120' */
    firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_power_on;

    /* Entry 'power_on': '<S1>:2' */
  } else {
    switch (firststateflow2_DW.is_c3_firststateflow2) {
     case firststatefl_IN_arm_select_mode:
      firststateflow2_B.display_mode_option = 1.0;

      /* During 'arm_select_mode': '<S1>:3' */
      if ((firststateflow2_B.SineWave7 > 1.0) && (firststateflow2_B.SineWave7 <
           2.0) && (firststateflow2_DW.initial_angle_store_pitch < 15.0) &&
          (firststateflow2_DW.initial_angle_store_yaw < 15.0)) {
        /* Transition: '<S1>:21' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflo_IN_automatic_mode;

        /* Entry 'automatic_mode': '<S1>:20' */
      } else if ((firststateflow2_B.SineWave > 15.0) ||
                 (firststateflow2_DW.initial_angle_store_yaw > 15.0)) {
        /* Transition: '<S1>:23' */
        firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_no_operate;

        /* Entry 'no_operate': '<S1>:22' */
      } else if ((firststateflow2_B.SineWave7 > 2.0) &&
                 (firststateflow2_B.SineWave < 15.0) &&
                 (firststateflow2_DW.initial_angle_store_yaw < 15.0)) {
        /* Transition: '<S1>:19' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflow2_IN_manual_mode;

        /* Entry 'manual_mode': '<S1>:14' */
      }
      break;

     case firststateflo_IN_automatic_mode:
      firststateflow2_automatic_mode();
      break;

     case firststateflow2_IN_done:
      /* During 'done': '<S1>:69' */
      firststateflow2_B.LED1 = 1.0;
      firststateflow2_B.LED2 = 0.0;
      firststateflow2_B.LED3 = 1.0;
      firststateflow2_B.LED4 = 1.0;
      break;

     case firststateflow2_IN_kill_state:
      /* During 'kill_state': '<S1>:15' */
      firststateflow2_B.LED1 = 0.0;
      firststateflow2_B.LED2 = 0.0;
      firststateflow2_B.LED3 = 0.0;
      firststateflow2_B.LED4 = 1.0;
      firststateflow2_B.motor1_drive = 0.0;
      firststateflow2_B.motor2_drive = 0.0;
      firststateflow2_B.motor3_drive = 0.0;
      break;

     case firststateflow2_IN_manual_mode:
      /* During 'manual_mode': '<S1>:14' */
      if (firststateflow2_B.SineWave3 > 1.0) {
        /* Transition: '<S1>:16' */
        firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_kill_state;

        /* Entry 'kill_state': '<S1>:15' */
      } else {
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 1.0;
        firststateflow2_B.LED3 = 0.0;
        firststateflow2_B.LED4 = 0.0;
      }
      break;

     case firststateflow2_IN_no_operate:
      /* During 'no_operate': '<S1>:22' */
      if ((firststateflow2_B.SineWave < 15.0) &&
          (firststateflow2_DW.initial_angle_store_yaw < 15.0)) {
        /* Transition: '<S1>:24' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststatefl_IN_arm_select_mode;

        /* Entry 'arm_select_mode': '<S1>:3' */
        firststateflow2_B.display_mode_option = 1.0;
        firststateflow2_DW.initial_angle_store_pitch =
          firststateflow2_B.SineWave1;
        firststateflow2_DW.initial_angle_store_yaw = firststateflow2_B.SineWave8;
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 0.0;
        firststateflow2_B.LED3 = 0.0;
        firststateflow2_B.LED4 = 0.0;
        firststateflow2_B.motor1_drive = 0.0;
        firststateflow2_B.motor2_drive = 0.0;
        firststateflow2_B.motor3_drive = 0.0;
      } else {
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 0.0;
        firststateflow2_B.LED3 = 0.0;
        firststateflow2_B.LED4 = 0.0;
        firststateflow2_B.motor1_drive = 0.0;
        firststateflow2_B.motor2_drive = 0.0;
        firststateflow2_B.motor3_drive = 0.0;
      }
      break;

     case firststateflow2_IN_nyaw_npitch:
      /* During 'nyaw_npitch': '<S1>:42' */
      if ((firststateflow2_B.SineWave1 > 2.0) && (firststateflow2_B.SineWave8 <
           -2.0)) {
        /* Transition: '<S1>:89' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflow2_IN_nyaw_ppitch;

        /* Entry 'nyaw_ppitch': '<S1>:66' */
        firststateflow2_B.motor1_drive = 9.0;
        firststateflow2_B.motor2_drive = -2.0;
        firststateflow2_B.motor3_drive = 4.0;
      } else if ((firststateflow2_B.SineWave1 == 0.0) &&
                 (firststateflow2_B.SineWave8 == 0.0)) {
        /* Transition: '<S1>:44' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflo_IN_automatic_mode;

        /* Entry 'automatic_mode': '<S1>:20' */
      } else if ((firststateflow2_B.motor1_drive == 0.0) &&
                 (firststateflow2_B.motor2_drive == 0.0) &&
                 (firststateflow2_B.motor3_drive == 0.0)) {
        /* Transition: '<S1>:93' */
        firststateflow2_DW.is_c3_firststateflow2 = firststateflow2_IN_done;

        /* Entry 'done': '<S1>:69' */
        firststateflow2_B.motor1_drive = 0.0;
        firststateflow2_B.motor2_drive = 0.0;
        firststateflow2_B.motor3_drive = 0.0;
      } else if ((firststateflow2_B.SineWave1 < -2.0) &&
                 (firststateflow2_B.SineWave8 > 2.0)) {
        /* Transition: '<S1>:82' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflow2_IN_pyaw_npitch;

        /* Entry 'pyaw_npitch': '<S1>:67' */
        firststateflow2_B.motor1_drive = 9.0;
        firststateflow2_B.motor2_drive = -2.0;
        firststateflow2_B.motor3_drive = 4.0;
      } else if ((firststateflow2_B.SineWave1 > 2.0) &&
                 (firststateflow2_B.SineWave8 > 2.0)) {
        /* Transition: '<S1>:80' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststateflow2_IN_pyaw_ppitch;

        /* Entry 'pyaw_ppitch': '<S1>:68' */
        firststateflow2_B.motor1_drive = 9.0;
        firststateflow2_B.motor2_drive = -2.0;
        firststateflow2_B.motor3_drive = -2.0;
      } else {
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 0.0;
        firststateflow2_B.LED3 = 1.0;
        firststateflow2_B.LED4 = 0.0;
      }
      break;

     case firststateflow2_IN_nyaw_ppitch:
      firststateflow2_nyaw_ppitch();
      break;

     case firststateflow2_IN_power_on:
      /* During 'power_on': '<S1>:2' */
      if (firststateflow2_B.SineWave2 > 1.0) {
        /* Transition: '<S1>:5' */
        firststateflow2_DW.is_c3_firststateflow2 =
          firststatefl_IN_arm_select_mode;

        /* Entry 'arm_select_mode': '<S1>:3' */
        firststateflow2_B.display_mode_option = 1.0;
        firststateflow2_DW.initial_angle_store_pitch =
          firststateflow2_B.SineWave1;
        firststateflow2_DW.initial_angle_store_yaw = firststateflow2_B.SineWave8;
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 0.0;
        firststateflow2_B.LED3 = 0.0;
        firststateflow2_B.LED4 = 0.0;
        firststateflow2_B.motor1_drive = 0.0;
        firststateflow2_B.motor2_drive = 0.0;
        firststateflow2_B.motor3_drive = 0.0;
      } else {
        firststateflow2_B.LED1 = 1.0;
        firststateflow2_B.LED2 = 0.0;
        firststateflow2_B.LED3 = 0.0;
        firststateflow2_B.LED4 = 0.0;
        firststateflow2_B.motor1_drive = 0.0;
        firststateflow2_B.motor2_drive = 0.0;
        firststateflow2_B.motor3_drive = 0.0;
      }
      break;

     case firststateflow2_IN_pyaw_npitch:
      firststateflow2_pyaw_npitch();
      break;

     default:
      firststateflow2_pyaw_ppitch();
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(firststateflow2_M->rtwLogInfo,
                      (firststateflow2_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(firststateflow2_M)!=-1) &&
        !((rtmGetTFinal(firststateflow2_M)-firststateflow2_M->Timing.t[0]) >
          firststateflow2_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(firststateflow2_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++firststateflow2_M->Timing.clockTick0)) {
    ++firststateflow2_M->Timing.clockTickH0;
  }

  firststateflow2_M->Timing.t[0] = firststateflow2_M->Timing.clockTick0 *
    firststateflow2_M->Timing.stepSize0 + firststateflow2_M->Timing.clockTickH0 *
    firststateflow2_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    firststateflow2_M->Timing.clockTick1++;
    if (!firststateflow2_M->Timing.clockTick1) {
      firststateflow2_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void firststateflow2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)firststateflow2_M, 0,
                sizeof(RT_MODEL_firststateflow2_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&firststateflow2_M->solverInfo,
                          &firststateflow2_M->Timing.simTimeStep);
    rtsiSetTPtr(&firststateflow2_M->solverInfo, &rtmGetTPtr(firststateflow2_M));
    rtsiSetStepSizePtr(&firststateflow2_M->solverInfo,
                       &firststateflow2_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&firststateflow2_M->solverInfo, (&rtmGetErrorStatus
      (firststateflow2_M)));
    rtsiSetRTModelPtr(&firststateflow2_M->solverInfo, firststateflow2_M);
  }

  rtsiSetSimTimeStep(&firststateflow2_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&firststateflow2_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(firststateflow2_M, &firststateflow2_M->Timing.tArray[0]);
  rtmSetTFinal(firststateflow2_M, 10.0);
  firststateflow2_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    firststateflow2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(firststateflow2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(firststateflow2_M->rtwLogInfo, (NULL));
    rtliSetLogT(firststateflow2_M->rtwLogInfo, "tout");
    rtliSetLogX(firststateflow2_M->rtwLogInfo, "");
    rtliSetLogXFinal(firststateflow2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(firststateflow2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(firststateflow2_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(firststateflow2_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(firststateflow2_M->rtwLogInfo, 1);
    rtliSetLogY(firststateflow2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(firststateflow2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(firststateflow2_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &firststateflow2_B), 0,
                sizeof(B_firststateflow2_T));

  /* states (dwork) */
  (void) memset((void *)&firststateflow2_DW, 0,
                sizeof(DW_firststateflow2_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(firststateflow2_M->rtwLogInfo, 0.0,
    rtmGetTFinal(firststateflow2_M), firststateflow2_M->Timing.stepSize0,
    (&rtmGetErrorStatus(firststateflow2_M)));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  firststateflow2_DW.gimbal = firststateflow2_P.DataStoreMemory_InitialValue;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  firststateflow2_DW.is_active_c3_firststateflow2 = 0U;
  firststateflow2_DW.is_c3_firststateflow2 = firststatefl_IN_NO_ACTIVE_CHILD;
  firststateflow2_DW.initial_angle_store_yaw = 0.0;
  firststateflow2_DW.initial_angle_store_pitch = 0.0;
  firststateflow2_B.LED1 = 0.0;
  firststateflow2_B.LED2 = 0.0;
  firststateflow2_B.LED3 = 0.0;
  firststateflow2_B.motor1_drive = 0.0;
  firststateflow2_B.motor3_drive = 0.0;
  firststateflow2_B.motor2_drive = 0.0;
  firststateflow2_B.display_mode_option = 0.0;
  firststateflow2_B.LED4 = 0.0;
}

/* Model terminate function */
void firststateflow2_terminate(void)
{
  /* (no terminate code required) */
}

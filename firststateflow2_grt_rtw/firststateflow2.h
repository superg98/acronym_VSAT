/*
 * firststateflow2.h
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

#ifndef RTW_HEADER_firststateflow2_h_
#define RTW_HEADER_firststateflow2_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef firststateflow2_COMMON_INCLUDES_
#define firststateflow2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* firststateflow2_COMMON_INCLUDES_ */

#include "firststateflow2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  real_T SineWave2;                    /* '<Root>/Sine Wave2' */
  real_T SineWave3;                    /* '<Root>/Sine Wave3' */
  real_T SineWave4;                    /* '<Root>/Sine Wave4' */
  real_T SineWave6;                    /* '<Root>/Sine Wave6' */
  real_T SineWave5;                    /* '<Root>/Sine Wave5' */
  real_T SineWave7;                    /* '<Root>/Sine Wave7' */
  real_T SineWave1;                    /* '<Root>/Sine Wave1' */
  real_T SineWave8;                    /* '<Root>/Sine Wave8' */
  real_T LED1;                         /* '<Root>/Chart' */
  real_T LED2;                         /* '<Root>/Chart' */
  real_T LED3;                         /* '<Root>/Chart' */
  real_T motor1_drive;                 /* '<Root>/Chart' */
  real_T motor3_drive;                 /* '<Root>/Chart' */
  real_T motor2_drive;                 /* '<Root>/Chart' */
  real_T display_mode_option;          /* '<Root>/Chart' */
  real_T LED4;                         /* '<Root>/Chart' */
} B_firststateflow2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T gimbal;                       /* '<Root>/Data Store Memory' */
  real_T initial_angle_store_yaw;      /* '<Root>/Chart' */
  real_T initial_angle_store_pitch;    /* '<Root>/Chart' */
  uint8_T is_active_c3_firststateflow2;/* '<Root>/Chart' */
  uint8_T is_c3_firststateflow2;       /* '<Root>/Chart' */
} DW_firststateflow2_T;

/* Parameters (default storage) */
struct P_firststateflow2_T_ {
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T SineWave_Amp;                 /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave2_Amp;                /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave3_Amp;                /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: 0.1
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave3_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave3'
                                        */
  real_T SineWave4_Amp;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Freq;               /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave4_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave4'
                                        */
  real_T SineWave6_Amp;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave6'
                                        */
  real_T SineWave6_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave6'
                                        */
  real_T SineWave6_Freq;               /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave6'
                                        */
  real_T SineWave6_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave6'
                                        */
  real_T SineWave5_Amp;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Freq;               /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave5_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave5'
                                        */
  real_T SineWave7_Amp;                /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Freq;               /* Expression: 0.5
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave7_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave7'
                                        */
  real_T SineWave1_Amp;                /* Expression: 15
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave8_Amp;                /* Expression: 15
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Freq;               /* Expression: 5
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
  real_T SineWave8_Phase;              /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave8'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_firststateflow2_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_firststateflow2_T firststateflow2_P;

/* Block signals (default storage) */
extern B_firststateflow2_T firststateflow2_B;

/* Block states (default storage) */
extern DW_firststateflow2_T firststateflow2_DW;

/* Model entry point functions */
extern void firststateflow2_initialize(void);
extern void firststateflow2_step(void);
extern void firststateflow2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_firststateflow2_T *const firststateflow2_M;

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
 * '<Root>' : 'firststateflow2'
 * '<S1>'   : 'firststateflow2/Chart'
 */
#endif                                 /* RTW_HEADER_firststateflow2_h_ */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DBCResolver3.h
 *
 * Code generated for Simulink model 'DBCResolver3'.
 *
 * Model version                  : 2.208
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Dec  6 14:17:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DBCResolver3_h_
#define RTW_HEADER_DBCResolver3_h_
#ifndef DBCResolver3_COMMON_INCLUDES_
#define DBCResolver3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* DBCResolver3_COMMON_INCLUDES_ */

#include "DBCResolver3_types.h"
#include "CAN3.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS BusCreator;          /* '<S1>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_o;        /* '<S2>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_c;        /* '<S3>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_j;        /* '<S4>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_b;        /* '<S5>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_b2;       /* '<S6>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_d;        /* '<S14>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_p;        /* '<S16>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_ps;       /* '<S15>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_g;        /* '<S17>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_e;        /* '<S18>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_oj;       /* '<S19>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_oy;       /* '<S7>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_k;        /* '<S8>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_gh;       /* '<S11>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_a;        /* '<S10>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_ji;       /* '<S12>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_ed;       /* '<S13>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_f;        /* '<S20>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_o1;       /* '<S21>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_l;        /* '<S22>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_au;       /* '<S23>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_cs;       /* '<S9>/Bus Creator' */
  real_T CAN3Unpack_o1;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o2;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o3;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o4;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o5;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o6;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o7;                /* '<S13>/CAN3 Unpack' */
  real_T CAN3Unpack_o31;               /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_b;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_j;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_a;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_n;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_c;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_e;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_p;             /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8;               /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9;               /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16;              /* '<S1>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_j;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_o;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_g;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_f;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_f;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_a;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_d;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_l;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_p;             /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_h;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_j;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_n;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_j;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_h;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_d;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_o;            /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22;              /* '<S2>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_f;             /* '<S3>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_a;             /* '<S3>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_j;             /* '<S3>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_l;             /* '<S3>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_p;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_g;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_h;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_k;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_n;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_ax;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_l;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_b;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_g;             /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_c;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_i;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_c;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_l;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_m;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_h;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_p;            /* '<S4>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_l;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_m;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_a5;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_fb;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_j;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_m;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_c;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_h;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_f;             /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_f;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_k;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_cg;           /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_g;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_g;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_e;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_k;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_m;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_f;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_d;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_n;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_f;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22_l;            /* '<S5>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_o;             /* '<S6>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_d;             /* '<S6>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_j2;            /* '<S6>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_lx;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_oy;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_p;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_p;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_g;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_o;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_g;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_f;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_c;             /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_b;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_kz;           /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_f;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_gz;           /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_d;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_dw;           /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_d;            /* '<S14>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_e;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_ov;            /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_k;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_i;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_gc;            /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_l;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_m;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_a;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_j;             /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_a;            /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_h;            /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_a;            /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_ji;           /* '<S16>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_g;             /* '<S15>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_e;             /* '<S15>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_f;             /* '<S15>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_nm;            /* '<S15>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_c;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_eq;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_b;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_a;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_h;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_j;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_b;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_g;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_a;             /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_n;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_a;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_h;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_p;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_mq;           /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_k;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_b;            /* '<S17>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_i;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_d5;            /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_m;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_b;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_b;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_b;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_a;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_m;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_h;             /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_e;            /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_b;            /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_i;            /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_pt;           /* '<S18>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_p0;            /* '<S19>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_l;             /* '<S19>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_e;             /* '<S19>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_e;             /* '<S19>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_cq;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_er;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_g0;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_kt;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_e;             /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_c;             /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_k;             /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_p;             /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_k;             /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_l;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_f;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_l;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_jw;           /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_hm;           /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_i;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_f;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_n;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_a;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_n;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_b;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_e;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22_d;            /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o23;              /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o24;              /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o25;              /* '<S7>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_ba;            /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_mv;            /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_ar;            /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_b0;            /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_nq;            /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_g;             /* '<S8>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_lb;            /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_o4;            /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_k0;            /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_d;             /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_cv;            /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_f;             /* '<S11>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_lu;            /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_n;             /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_l;             /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_j;             /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_jl;            /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_ll;            /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_f;             /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_i;             /* '<S10>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_n;             /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_p;             /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_er;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_ks;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_eg;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_l2;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_pj;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_bn;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_m;             /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_by;           /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_a5;           /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_d;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_e;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_e;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_ef;           /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_kj;           /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_h;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_an;           /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_i;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_p;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_b;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22_i;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o23_o;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o24_i;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o25_a;            /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o26;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o27;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o28;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o29;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o30;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o32;              /* '<S12>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_c5;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_i;             /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_kr;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_kc;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_fk;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_er;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_e;             /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_k;             /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_kd;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_aw;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_jb;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_ca;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_d;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_dp;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_dk;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_fu;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_me;           /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_h;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_m;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_k;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_j;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22_j;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o23_a;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o24_d;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o25_k;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o26_n;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o27_a;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o28_c;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o29_f;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o30_m;            /* '<S20>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_o0;            /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_n2;            /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_ka;            /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_fn;            /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_p;             /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_av;            /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_h;             /* '<S21>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_a;             /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_b;             /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_bx;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_ps;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_hh;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_bs;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_ct;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_d;             /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_d;             /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_j;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_e;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_k;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_o;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_gj;           /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_k1;           /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_n;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_p;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_e;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_c;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_pn;           /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_g;            /* '<S22>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_ll;            /* '<S23>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_k;             /* '<S23>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_lr;            /* '<S23>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_ln;            /* '<S23>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_a;             /* '<S23>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o1_au;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o2_ej;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o3_ee;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o4_bc;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o5_m;             /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o6_mt;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o7_ar;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o8_c;             /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o9_df;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o10_lw;           /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o11_g;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o12_o;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o13_h;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o14_mk;           /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o15_l;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o16_fr;           /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o17_o;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o18_b;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o19_l;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o20_j;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o21_p;            /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o22_d0;           /* '<S9>/CAN3 Unpack' */
  uint8_T CAN3Unpack_o23_g;            /* '<S9>/CAN3 Unpack' */
  int8_T CAN3Unpack_o31_b;             /* '<S12>/CAN3 Unpack' */
} B_DBCResolver3_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T CAN3Unpack_ModeSignalID;       /* '<S1>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID;       /* '<S1>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_e;     /* '<S2>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_e;     /* '<S2>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_n;     /* '<S3>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_k;     /* '<S3>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_d;     /* '<S4>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_i;     /* '<S4>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_dl;    /* '<S5>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_f;     /* '<S5>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_p;     /* '<S6>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_m;     /* '<S6>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_f;     /* '<S14>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_b;     /* '<S14>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_g;     /* '<S16>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_mz;    /* '<S16>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_k;     /* '<S15>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_d;     /* '<S15>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_l;     /* '<S17>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_h;     /* '<S17>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_gj;    /* '<S18>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_fe;    /* '<S18>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_h;     /* '<S19>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_d5;    /* '<S19>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_hk;    /* '<S7>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_c;     /* '<S7>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_nr;    /* '<S8>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_ij;    /* '<S8>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_j;     /* '<S11>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_eq;    /* '<S11>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_i;     /* '<S10>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_h5;    /* '<S10>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_gi;    /* '<S12>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_g;     /* '<S12>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_d4;    /* '<S13>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_hp;    /* '<S13>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_o;     /* '<S20>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_dn;    /* '<S20>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_ec;    /* '<S21>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_n;     /* '<S21>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_py;    /* '<S22>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_du;    /* '<S22>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_j2;    /* '<S23>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_mx;    /* '<S23>/CAN3 Unpack' */
  int_T CAN3Unpack_ModeSignalID_c;     /* '<S9>/CAN3 Unpack' */
  int_T CAN3Unpack_StatusPortID_dd;    /* '<S9>/CAN3 Unpack' */
} DW_DBCResolver3_T;

/* Real-time Model Data Structure */
struct tag_RTM_DBCResolver3_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_DBCResolver3_T DBCResolver3_B;

/* Block states (default storage) */
extern DW_DBCResolver3_T DBCResolver3_DW;

/* Model entry point functions */
extern void PC2DLL_Interface3_initialize(void);

/* Customized model step function */
extern void PC2DLL_Interface3_step(CAN_MESSAGE_BUS *arg_Msg,
  DSArmrestscreen1_ONE *arg_DSArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg1,
  DSArmrestscreen1_TWO *arg_DSArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg2,
  DSArmrestscreen1_THREE *arg_DSArmrestscreen1_THREE, CAN_MESSAGE_BUS *arg_Msg3,
  DSArmrestscreen2_ONE *arg_DSArmrestscreen2_One, CAN_MESSAGE_BUS *arg_Msg4,
  DSArmrestscreen2_TWO *arg_DSArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg5,
  DSArmrestscreen2_THREE *arg_DSArmrestscreen2_THREE, CAN_MESSAGE_BUS *arg_Msg6,
  PMArmrestscreen1_ONE *arg_PMArmrestscreen1_ONE, CAN_MESSAGE_BUS *arg_Msg7,
  PMArmrestscreen1_TWO *arg_PMArmrestscreen1_TOW, CAN_MESSAGE_BUS *arg_Msg8,
  PMArmrestscreen2_ONE *arg_PMArmrestscreen2_ONE, CAN_MESSAGE_BUS *arg_Msg9,
  DSCU1_ONE *arg_DSCU1_ONE, CAN_MESSAGE_BUS *arg_Msg10, PMArmrestscreen2_TWO
  *arg_PMArmrestscreen2_TOW, CAN_MESSAGE_BUS *arg_Msg11, DSCU1_TWO
  *arg_DSCU1_TOW, CAN_MESSAGE_BUS *arg_Msg12, DSCU1_THREE *arg_DSCU1_THREE,
  CAN_MESSAGE_BUS *arg_Msg13, DSCU1_FOUR *arg_Output, CAN_MESSAGE_BUS
  *arg_DSCU1_THREE_Msg1, DSCU2_ONE *arg_DSCU1_THREE1, CAN_MESSAGE_BUS
  *arg_Inport, CAN_MESSAGE_BUS *arg_Inport1, CAN_MESSAGE_BUS *arg_Inport2,
  CAN_MESSAGE_BUS *arg_Inport3, CAN_MESSAGE_BUS *arg_Inport4, DSCU1_FIVE
  *arg_DSCU1_FOUR1, DSCU2_TWO *arg_DSCU1_FOUR2, PSCU1_ONE *arg_DSCU1_FOUR3,
  PSCU1_TWO *arg_DSCU1_FOUR4, PSCU2_ONE *arg_DSCU1_FOUR5, PSCU2_TWO
  *arg_DSCU1_FOUR6, CAN_MESSAGE_BUS *arg_Inport5, PMArmrestscreen1_THREE
  *arg_PMArmrestscreen1_TOW1, CAN_MESSAGE_BUS *arg_PMArmrestscreen1_TOW_Msg1,
  PMArmrestscreen2_THREE *arg_PMArmrestscreen2_TOW1, CAN_MESSAGE_BUS
  *arg_PMArmrestscreen2_TOW_Msg1);

/* Real-time Model object */
extern RT_MODEL_DBCResolver3_T *const DBCResolver3_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S2>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S8>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S9>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S11>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S13>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S16>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S19>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S20>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S22>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion1' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'DBCResolver3'
 * '<S1>'   : 'DBCResolver3/DSArmrestscreen1One_ID_0X100'
 * '<S2>'   : 'DBCResolver3/DSArmrestscreen1Tow_ID_0X101'
 * '<S3>'   : 'DBCResolver3/DSArmrestscreen1_THREE_ID_0X1'
 * '<S4>'   : 'DBCResolver3/DSArmrestscreen2OneID_0X1'
 * '<S5>'   : 'DBCResolver3/DSArmrestscreen2TowID_0X1'
 * '<S6>'   : 'DBCResolver3/DSArmrestscreen2_THREE_ID_0X1'
 * '<S7>'   : 'DBCResolver3/DSCU1One_ID_0X1'
 * '<S8>'   : 'DBCResolver3/DSCU1Three_ID_1'
 * '<S9>'   : 'DBCResolver3/DSCU1Tow_ID_0X1'
 * '<S10>'  : 'DBCResolver3/DSCU1_FIVE_ID_117'
 * '<S11>'  : 'DBCResolver3/DSCU1_FOUR_ID_0X50'
 * '<S12>'  : 'DBCResolver3/DSCU2ONE_ID_11A'
 * '<S13>'  : 'DBCResolver3/DSCU2_TOW_ID_11B'
 * '<S14>'  : 'DBCResolver3/PMArmrestscreen1One_ID_0X10A'
 * '<S15>'  : 'DBCResolver3/PMArmrestscreen1THREE_ID_0X10C'
 * '<S16>'  : 'DBCResolver3/PMArmrestscreen1Tow_ID_0X10B'
 * '<S17>'  : 'DBCResolver3/PMArmrestscreen2One_ID_0X10D'
 * '<S18>'  : 'DBCResolver3/PMArmrestscreen2Tow_ID_0X10E'
 * '<S19>'  : 'DBCResolver3/PMArmrestscreen2Tow_ID_0X10F'
 * '<S20>'  : 'DBCResolver3/PSCU1_ONE_ID_11C'
 * '<S21>'  : 'DBCResolver3/PSCU1_TOW_ID_11D'
 * '<S22>'  : 'DBCResolver3/PSCU2_ONE_ID_11E'
 * '<S23>'  : 'DBCResolver3/PSCU2_TOW_ID_11F'
 */
#endif                                 /* RTW_HEADER_DBCResolver3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

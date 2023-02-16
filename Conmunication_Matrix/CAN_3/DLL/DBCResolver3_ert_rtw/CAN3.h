/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CAN3.h
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

#ifndef RTW_HEADER_CAN3_h_
#define RTW_HEADER_CAN3_h_
#include "rtwtypes.h"

typedef struct {
  /* 喇叭音量（座椅+整舱） */
  uint8_T DSSpeakerVolumeCmd2;

  /* 副驾氛围灯模式控制 */
  uint8_T DSFCabinAtmosphereMCmd2;

  /* 副驾氛围灯亮度控制 */
  uint8_T DSFCabinAtmosphereBCmd2;
} DSArmrestscreen2_THREE;

typedef struct {
  uint8_T DSCabinAtmosphereMCmd1;
  uint8_T DSCabinAtmosphereBCmd1;
  uint8_T DSAtmosphereLampCmd1;
  uint8_T DSDAmbianceLightB1;
  uint8_T DSDAmbianceLightM1;
  uint8_T DSDAmbianceLight1;
  uint8_T DSSweetAtmosphereCmd1;

  /* 通风 */
  uint8_T DSVentilateCmd1;
  uint8_T DSHeatingCmd1;
  uint8_T DSBackrestBolsterCmd1;
  uint8_T DSCushionBolsterCmd1;
  uint8_T DSHeadPillowCmd1;
  uint8_T DSZeroGravityCushionCmd1;
  uint8_T DSZeroGravityUpliftCmd1;
  uint8_T DSZeroGravityHighProCmd1;

  /* 坐垫软硬调节 */
  uint8_T DSCushionSoftHardC1;
} DSArmrestscreen1_ONE;

typedef struct {
  uint8_T DSMassageModeCmd1;
  uint8_T DSLumbarLoinCmd1;
  uint8_T DSLumbarVertebraCmd1;
  uint8_T DSMassageSpeedCmd1;
  uint8_T DSLumbarLoinPressureCmd1;
  uint8_T DSLumbarVertebraPressureCmd1;
  uint8_T DSArmrestTurnoverLMotorCmd1;
  uint8_T DSArmrestTurnoverRMotorCmd1;
  uint8_T DSZeroGravitySlideRailCmd1;
  uint8_T DSZeroGravityCalfDragCmd1;
  uint8_T DSShoulderRestCmd1;
  uint8_T DSZeroGravityPedalCmd1;
  uint8_T DSElectricHandrailLCmd1;
  uint8_T DSElectricHandrailRCmd1;
  uint8_T DSZeroGravityTurntableCmd1;
  uint8_T DSZeroGravityCmd1;
  uint8_T DSResetCmd1;
  uint8_T DSMemoryLocation1Cmd1;
  uint8_T DSMemoryLocation2Cmd1;
  uint8_T DSCabinToledSCmd1;
  uint8_T DSCabinToledRCmd1;
  uint8_T DSSSceneSwitchReq1;
} DSArmrestscreen1_TWO;

typedef struct {
  /* 喇叭音量（座椅+整舱） */
  uint8_T DSSpeakerVolumeCmd1;
  uint8_T DSPAmbianceLightM1;
  uint8_T DSPAmbianceLightB1;
  uint8_T DSPAmbianceLight1;
} DSArmrestscreen1_THREE;

typedef struct {
  /* 副驾氛围灯模式控制 */
  uint8_T DSCU1PAmbianceLightM;

  /* 副驾氛围灯亮度控制 */
  uint8_T DSCU1PAmbianceLightB;

  /* 副驾氛围灯 */
  uint8_T DSCU1PAmbianceLight;

  /* 主驾氛围灯模式控制 */
  uint8_T DSCU1DAmbianceLightM;

  /* 主驾氛围灯亮度控制 */
  uint8_T DSCU1DAmbianceLightB;

  /* 主驾氛围灯 */
  uint8_T DSCU1DAmbianceLight;

  /* 主驾氛围灯 */
  uint8_T DSCU1ExeSts;
} DSCU1_THREE;

typedef struct {
  uint8_T DSCabinAtmosphereMCmd2;
  uint8_T DSCabinAtmosphereBCmd2;
  uint8_T DSAtmosphereLampCmd2;
  uint8_T DSPAmbianceLightB2;
  uint8_T DSPAmbianceLight2;
  uint8_T DSDAmbianceLightM2;
  uint8_T DSDAmbianceLightB2;
  uint8_T DSVentilateCmd2;
  uint8_T DSHeatingCmd2;
  uint8_T DSBackrestBolsterCmd2;
  uint8_T DSCushionBolsterCmd2;
  uint8_T DSHeadPillowCmd2;
  uint8_T DSZeroGravityCushionCmd2;

  /* 零重力骨架-抬升 */
  uint8_T DSZeroGravityUpliftCmd2;
  uint8_T DSZeroGravityHighProCmd2;

  /* 坐垫如软硬调节 */
  uint8_T DSCushionSoftHardC2;
} DSArmrestscreen2_ONE;

typedef struct {
  uint8_T DSDAmbianceLight2;
  uint8_T DSLumbarLoinCmd2;
  uint8_T DSLumbarVertebraCmd2;
  uint8_T DSMassageSpeedCmd2;
  uint8_T DSLumbarLoinPressureCmd2;
  uint8_T DSLumbarVertebraPressureCmd2;
  uint8_T DSArmrestTurnoverLMotorCmd2;
  uint8_T DSArmrestTurnoverRMotorCmd2;
  uint8_T DSZeroGravitySlideRailCmd2;
  uint8_T DSZeroGravityCalfDragCmd2;
  uint8_T DSShoulderRestCmd2;
  uint8_T DSZeroGravityPedalCmd2;
  uint8_T DSElectricHandrailLCmd2;
  uint8_T DSElectricHandrailRCmd2;
  uint8_T DSZeroGravityTurntableCmd2;
  uint8_T DSZeroGravityCmd2;
  uint8_T DSResetCmd2;
  uint8_T DSMemoryLocation1Cmd2;
  uint8_T DSMemoryLocation2Cmd2;
  uint8_T DSCabinToledSCmd2;
  uint8_T DSCabinToledRCmd2;
  uint8_T DSSSceneSwitchReq2;
} DSArmrestscreen2_TWO;

/*
   温度
   小腿托倾角电机位置
   小腿托倾角电机学习完成状态
   小腿托伸缩位置
   小腿托伸缩电机学习完成状态
   小腿托脚踏电机位置
   小腿托脚踏电机学习完成状态
   转盘电机位置
   转盘电机学习完成状态
   肩部电机位置
   肩部电机学习完成状态
   左侧扶手旋转电机位置
   左侧扶手旋转电机学习完成状态
   右侧扶手旋转电机位置
   右侧扶手旋转电机学习完成状态
   屏幕亮灭控制
   小腿托旋转电机故障
   小腿托旋转电机霍尔故障
   小腿托伸长电机故障
   小腿托伸长电机霍尔故障
   小腿托脚踏电机故障
   小腿托脚踏电机霍尔故障
   转盘电机故障
   转盘电机霍尔故障
   肩部电机故障
   肩部电机霍尔故障
   左侧扶手旋转电机故障
   左侧扶手旋转电机霍尔故障
   右侧扶手旋转电机故障
   右侧扶手旋转电机霍尔故障
   NTC传感器故障状态
 */
typedef struct {
  /* 温度 */
  int8_T DSTemperatureSts2;

  /* 小腿托倾角电机位置 */
  uint8_T DSCalfSupportAngleMotorPSts2;

  /* 小腿托倾角电机学习完成状态 */
  uint8_T DSCalfSupportAngleMotorLCSts2;

  /* 小腿托伸缩位置 */
  uint8_T DSCalfSupportTelescopicPSts2;

  /* 小腿托伸缩电机学习完成状态 */
  uint8_T DSCalfSupTelescopicMotLCSts2;

  /* 小腿托脚踏电机位置 */
  uint8_T DSCalfPedalMotorPositionSts2;

  /* 小腿托脚踏电机学习完成状态 */
  uint8_T DSCalfPedalMotorLCSts2;

  /* 转盘电机位置 */
  uint8_T DSRotaryTableMotorPositionSts2;

  /* 转盘电机学习完成状态 */
  uint8_T DSRotaryTableMotorLCSts2;
  uint8_T DSShoulderMotorPositionSts2;
  uint8_T DSShoulderMotorLCSts2;
  uint8_T DSArmrestRotationLMotorPSts2;
  uint8_T DSArmrestRotationLMotorLCSts2;
  uint8_T DSArmrestRotationRMotorPSts2;
  uint8_T DSArmrestRotationRMotorLCSts2;
  uint8_T DSScreenOnOffSts;
  uint8_T DSCalfSupportRotatingMotorFault2;
  uint8_T DSCalfSupRotatingMotHallFault2;
  uint8_T DSCalfSupExtensionMotFault2;
  uint8_T DSCalfSupExtMotHallFault2;
  uint8_T DSCalfPedalMotorFault2;
  uint8_T DSCalfPedalMotorHallFault2;
  uint8_T DSRotaryTableMotorFault2;
  uint8_T DSRotaryTableMotorHallFault2;
  uint8_T DSShoulderMotorFault2;
  uint8_T DSShoulderMotorHallFault2;
  uint8_T DSArmrestRotationLMotorFault2;
  uint8_T DSArmrestRotaLMotHallFault2;
  uint8_T DSArmrestRotationRMotorFault2;
  uint8_T DSArmrestRotaRMotHallFault2;
  uint8_T NTCSensorFault;
  uint8_T DSCU2ExeSts;
} DSCU2_ONE;

typedef struct {
  /* 坐垫井中硬度控制动作反馈 */
  uint8_T DSCushionCervicaSpineSts1;

  /* 坐垫腿垫硬度控制动作反馈 */
  uint8_T DSCushionHardnessSts1;

  /* 坐垫井中气压力值 */
  uint8_T DSCushionCervicaSpinePV1;

  /* 坐垫腿垫气压力值 */
  uint8_T DSCushionHardnessPV1;

  /* 滑轨调节（左右滑轨同步） */
  uint8_T DSSlideAdjustmentSts1;

  /* 滑轨电机1学习完成状态 */
  uint8_T DSSlideRailMotor1LCSts1;

  /* 滑轨电机2学习完成状态 */
  uint8_T DSSlideRailMotor2LCSts1;

  /* 高度调节 */
  uint8_T DSHeightMotorPSts1;

  /* 高度电机学习完成状态 */
  uint8_T DSHeightMotorLCSts1;

  /* 主驾驶靠背调节 */
  uint8_T DSBackrestMotorPSts1;

  /* 主驾驶靠背电机学习完成状态 */
  uint8_T DSBackrestMotorLCSts1;

  /* 主驾驶抬升电机 */
  uint8_T DSZeroGravityDipAngleAdjustSts1;

  /* 主驾驶抬升电机位置 */
  uint8_T DSZeroGravityPositionSts1;

  /* 主驾驶抬升电机学习完成状态 */
  uint8_T DSZeroGravityMotorLCSts1;

  /* 头枕电机位置 */
  uint8_T DSHeadrestMotorPositionSts1;

  /* 头枕电机学习完成状态 */
  uint8_T DSHeadrestMotorLCSts1;

  /* 左侧扶手翻转电机位置 */
  uint8_T DSArmrestTurnoverLMotorPSts1;

  /* 左侧扶手翻转电机学习完成状态 */
  uint8_T DSArmrestTurnoverLMotorLCSts1;

  /* 右侧扶手翻转电机位置 */
  uint8_T DSArmrestTurnoverRMotorPSts1;

  /* 右侧扶手翻转电机学习完成状态 */
  uint8_T DSArmrestTurnoverRMotorLCSts1;

  /* 记忆位置（滑轨，高度，靠背倾角，（滑轨，高度，靠背倾角、小腿托位置、坐垫软硬调节、坐垫、靠背侧翼硬度、扶手角度） */
  uint8_T DSMemoryLocationSts1;

  /* 推荐场景 */
  uint8_T DSRecommendedScenariosSts1;

  /* 加热状态 */
  uint8_T DSAutomaticHeatingSts1;

  /* 通风状态 */
  uint8_T DSAutomaticVentilationSts1;

  /* 香氛状态 */
  uint8_T DSSweetAtmosphereAdaptiveSts1;
} DSCU1_ONE;

typedef struct {
  /* 高调电机百分比反馈 */
  uint8_T HeightMotorPercent;

  /* 主驾驶靠背电机百分比反馈 */
  uint8_T DSBackrestMotorPercent;

  /* 抬升电机百分比反馈 */
  uint8_T DSZeroGravityMotorPercent;

  /* 左侧扶手翻转电机百分比反馈 */
  uint8_T DSArmrestTurnoverLMotorPercent;

  /* 右侧扶手翻转电机百分比反馈 */
  uint8_T DSArmrestTurnoverRMotorPercent;

  /* 左侧滑轨电机百分比反馈 */
  uint8_T DSSlideRailMotor1LPercent;

  /* 右侧滑轨电机百分比反馈 */
  uint8_T DSSlideRailMotor1RPercent;

  /* 头枕电机百分比反馈 */
  uint8_T DSHeadMotorPosiPercent;
} DSCU1_FIVE;

typedef struct {
  /* 坐垫压力值 */
  uint8_T CushionPressureSts1;

  /* 腿垫压力值 */
  uint8_T LegPadPressureSts1;

  /* 坐垫侧翼动作 */
  uint8_T DSCushionFlankActionSts1;

  /* 靠背侧翼动作 */
  uint8_T DSBackrestFlankActionSts1;

  /* 屏幕亮灭控制 */
  uint8_T DSScreenOnOffSts;

  /* 坐垫侧翼气袋气压 */
  uint8_T DSCushionFlankAirbagPreSts1;

  /* 靠背侧翼气袋气压 */
  uint8_T DSBackrestFlankAirbagPreSts1;

  /* 滑轨电机1故障 */
  uint8_T DSSlideRailMotor1Fault;

  /* 滑轨电机1霍尔故障 */
  uint8_T DSSlideRailMotor1HallFault;

  /* 滑轨电机2故障 */
  uint8_T DSSlideRailMotor2Fault;

  /* 滑轨电机2霍尔故障 */
  uint8_T DSSlideRailMotor2HallFault;

  /* 高调电机故障 */
  uint8_T DSHighProfileMotorFault;

  /* 高调电机霍尔故障 */
  uint8_T DSHighProfileMotorHallFault;

  /* 主驾驶靠背电机故障 */
  uint8_T DSBackrestMotorFault;

  /* 主驾驶靠背电机霍尔故障 */
  uint8_T DSBackrestMotorHallFault;

  /* 抬升电机故障 */
  uint8_T DSZeroGravityMotorFault;

  /* 抬升电机霍尔故障 */
  uint8_T DSZeroGravityMotorHallFault;

  /* 头枕电机故障 */
  uint8_T DSHeadrestMotorFault;

  /* 头枕电机霍尔故障 */
  uint8_T DSHeadrestMotorHallFault;

  /* 左侧扶手翻转电机故障 */
  uint8_T DSArmrestTurnoverLMotorFault;

  /* 左侧扶手翻转电机霍尔故障 */
  uint8_T DSArmrestTurnoverLMotorHallFault;

  /* 右侧扶手翻转电机故障 */
  uint8_T DSArmrestTurnoverRMotorFault;

  /* 右侧扶手翻转电机霍尔故障 */
  uint8_T DSArmrestTurnoverRMotorHallFault;
} DSCU1_TWO;

/*
   按摩模式
   腰椎腰部调节
   腰椎椎部调节
   按摩速度
   腰托充气
   尾椎托充气
 */
typedef struct {
  uint8_T DSMassageMode1;
  uint8_T DSLumbarLoin1;
  uint8_T DSLumbarVertebra1;
  uint8_T DSMassageSpeed1;
  uint8_T DSLumbarLoinPressure1;
  uint8_T DSLumbarVertebraPressure1;
} DSCU1_FOUR;

typedef struct {
  /* 律动（副驾） */
  uint8_T PMRhythmicMovementCmd2;

  /* RGB三色R（副驾） */
  uint8_T PMARGBR2;

  /* RGB三色G（副驾） */
  uint8_T PMARGBG2;

  /* RGB三色B（副驾） */
  uint8_T PMARGBB2;
} PMArmrestscreen2_THREE;

typedef struct {
  /* 转盘电机 */
  uint8_T DSRotaryTableMotorPercent;

  /* 小腿托伸缩电机 */
  uint8_T DSCalfSupTeMotorPercent;

  /* 脚踏电机 */
  uint8_T DSCalfPedalMotorPercent;

  /* 右侧扶手旋转电机 */
  uint8_T DSArmrestRotRMotorPercent;

  /* 小腿托旋转电机 */
  uint8_T DSCalfSupRotMotorPercent;

  /* 左侧扶手旋转电机 */
  uint8_T DSArmrestRotLMotorPercent;

  /* 肩部调节电机 */
  uint8_T DSShoulderMotorPercent;
} DSCU2_TWO;

typedef struct {
  /* 舱体氛围灯模式控制 */
  uint8_T PMCabinAtmosphereMCmd1;
  uint8_T PMCabinAtmosphereBCmd1;
  uint8_T PMAtmosphereLampCmd1;
  uint8_T PMFCabinAtmosphereMCmd1;
  uint8_T PMFCabinAtmosphereBCmd1;
  uint8_T PMFAtmosphereLampCmd1;
  uint8_T PMZAtmosphereLampCmd1;
  uint8_T PMLumbarSupportCmd1;
  uint8_T PMBackrestBolsterLCmd1;
  uint8_T PMBackrestBolsterRCmd1;
  uint8_T PMZeroGravityCushionCmd1;
  uint8_T PMZeroGravityHighProCmd1;
  uint8_T PMZeroGravitySlideRailCmd1;
  uint8_T PMZeroGravityCalfDragCmd1;
  uint8_T PMTailUDCmd1;
  uint8_T PMElectricHandrailLCmd1;
} PMArmrestscreen1_ONE;

typedef struct {
  /* 律动（副驾） */
  uint8_T PMRhythmicMovementCmd1;

  /* RGB三色R（副驾） */
  uint8_T PMARGBR1;

  /* RGB三色G（副驾） */
  uint8_T PMARGBG1;

  /* RGB三色B（副驾） */
  uint8_T PMARGBB1;
} PMArmrestscreen1_THREE;

typedef struct {
  /* 右侧电动扶手升降 */
  uint8_T PMElectricHandrailRCmd1;

  /* 一键成床 */
  uint8_T PMZeroGravityCmd1;

  /* 一键复位 */
  uint8_T PMResetCmd1;

  /* 记忆位置1 */
  uint8_T PMMemoryLocation1Cmd1;

  /* 记忆位置2 */
  uint8_T PMMemoryLocation2Cmd1;

  /* 舱体透明屏幕（前后） */
  uint8_T PMCabinToledSCmd1;

  /* 舱体透明屏幕（旋转） */
  uint8_T PMCabinToledRCmd1;

  /* 场景切换请求 */
  uint8_T PMSSceneSwitchReq1;

  /* 副驾座椅腰托上下调节 */
  uint8_T PMSCU1_UpAndDownCmd;

  /* 副驾座椅腰托垂直前后调节 */
  uint8_T PMSCU1_FrontAndBackCmd;
  uint8_T PMSpeakerVolumeCmd1;
  uint8_T PMZCabinAtmosphereMCmd1;
  uint8_T PMZCabinAtmosphereBCmd1;
} PMArmrestscreen1_TWO;

typedef struct {
  /* 舱体氛围灯模式控制 */
  uint8_T PMCabinAtmosphereMCmd2;

  /* 舱体氛围灯亮度控制 */
  uint8_T PMCabinAtmosphereBCmd2;

  /* 舱体氛围灯 */
  uint8_T PMAtmosphereLampCmd2;

  /* 副驾氛围灯模式控制 */
  uint8_T PMFCabinAtmosphereMCmd2;

  /* 副驾氛围灯亮度控制 */
  uint8_T PMFCabinAtmosphereBCmd2;

  /* 副驾氛围灯 */
  uint8_T PMFAtmosphereLampCmd2;

  /* 主驾氛围灯 */
  uint8_T PMZAtmosphereLampCmd2;

  /* 腰部支撑 */
  uint8_T PMLumbarSupportCmd2;

  /* 靠背bolster左 */
  uint8_T PMBackrestBolsterLCmd2;

  /* 靠背bolster右 */
  uint8_T PMBackrestBolsterRCmd2;

  /* 靠背电机 */
  uint8_T PMZeroGravityCushionCmd2;

  /* 高调电机 */
  uint8_T PMZeroGravityHighProCmd2;

  /* 滑轨电机 */
  uint8_T PMZeroGravitySlideRailCmd2;

  /* 小腿拖伸缩电机 */
  uint8_T PMZeroGravityCalfDragCmd2;

  /* 尾部抬升 */
  uint8_T PMTailUDCmd2;

  /* 左侧电动扶手升降 */
  uint8_T PMElectricHandrailLCmd2;
} PMArmrestscreen2_ONE;

typedef struct {
  uint8_T PMElectricHandrailRCmd2;

  /* 一键成床 */
  uint8_T PMZeroGravityCmd2;

  /* 一键复位 */
  uint8_T PMResetCmd2;

  /* 记忆位置1 */
  uint8_T PMMemoryLocation1Cmd2;

  /* 记忆位置2 */
  uint8_T PMMemoryLocation2Cmd2;

  /* 舱体透明屏幕（前后） */
  uint8_T PMCabinToledSCmd2;

  /* 舱体透明屏幕（旋转） */
  uint8_T PMCabinToledRCmd2;

  /* 场景切换请求 */
  uint8_T PMSSceneSwitchReq2;

  /* 副驾座椅腰托上下调节 */
  uint8_T PMSCU1_UpAndDownCmd2;

  /* 副驾座椅腰托垂直前后调节 */
  uint8_T PMSCU1_FrontAndBackCmd2;
  uint8_T PMSpeakerVolumeCmd2;
  uint8_T PMZCabinAtmosphereMCmd2;
  uint8_T PMZCabinAtmosphereBCmd2;
} PMArmrestscreen2_TWO;

typedef struct {
  uint8_T PMSlideRailMotorPSts1;
  uint8_T PMSlideRailMotor1LCSts1;
  uint8_T PMHeightMotorPSts1;
  uint8_T PMHeightMotorLCSts1;
  uint8_T PMBackrestMotorPSts1;
  uint8_T PMBackrestMotorLCSts1;
  uint8_T PMArmrestUDLMotorPSts1;
  uint8_T PMArmrestUDLMotorLCSts1;
  uint8_T PMArmrestUDRMotorPSts1;
  uint8_T PMArmrestUDRMotorLCSts1;
  uint8_T PMMotor4PSts1;
  uint8_T PMMotor4LCSts1;
  uint8_T PMMotor6PSts1;
  uint8_T PMMotor6LCSts1;
  uint8_T PMMemoryPositionSts1;
  uint8_T PMOneKeyBedFormingPSts1;
  uint8_T PMRecommendedScenariosSts1;
  uint8_T PMSlideRailMotorPSts1Fault;
  uint8_T PMSlideRailMotor1HallFault;
  uint8_T PMHighProfileMotorFault;
  uint8_T PMHighProfileMotorHallFault;
  uint8_T PMBackrestMotorFault;
  uint8_T PMBackrestMotorHallFault;
  uint8_T PMElectricArmrestLMFault;
  uint8_T PMElectricArmrestRMFault;
  uint8_T PMMotor4Fault;
  uint8_T PMMotor4HallFault;
  uint8_T PMMotor6Fault;
  uint8_T PMMotor6HallFault;
  uint8_T PSCU1ExeSts;
} PSCU1_ONE;

typedef struct {
  /* 滑轨电机 */
  uint8_T PMSlideRailMotorPercent;

  /* 高调电机 */
  uint8_T PMHighProfileMotorPercent;

  /* Motor 6 */
  uint8_T PMMotor6Percent;

  /* 副驾靠背电机 */
  uint8_T PMBackrestMotorPercent;

  /* Motor 4 */
  uint8_T PMMotor4Percent;

  /* 左侧扶手升降 */
  uint8_T PMEleArmrestLMPercent;

  /* 右侧扶手升降 */
  uint8_T PMEleArmrestRMPercent;
} PSCU1_TWO;

typedef struct {
  uint8_T PMCalfSupportAngleMPSts2;
  uint8_T PMCalfSupportAngleMLCSts2;
  uint8_T PMCalfSupportTelescoPSts2;
  uint8_T PMCalfSupportTelescopicMLCSts2;
  uint8_T PMBackSupportLPSts2;
  uint8_T PMBackSupportLLCSts2;
  uint8_T PMBackSupportRPSts2;
  uint8_T PMBackSupportRLCSts2;
  uint8_T TailUDMotorPSts2;
  uint8_T TailUDMotorLCSts2;
  uint8_T PMCalfSupportRotatingMFault2;
  uint8_T PMCalfSupportRotatingMHFault2;
  uint8_T PMCalfSupportExtensionMFault2;
  uint8_T PMCalfSupportExtensionMHFault2;
  uint8_T PMBackSupportLMFault2;
  uint8_T PMBackSupportLMHFault2;
  uint8_T PMBackSupportRMFault2;
  uint8_T PMBackSupportRMHFault2;
  uint8_T TailUDMotorFault;
  uint8_T TailUDMotorHFault;
  uint8_T PSCU2ExeSts;
} PSCU2_ONE;

typedef struct {
  /* 小腿托伸缩电机 */
  uint8_T PMCalfSupportExtensionMHPercent;

  /* 靠背左侧翼 */
  uint8_T PMBackSupportLMHPercent;

  /* 靠背右侧翼 */
  uint8_T PMBackSupportRMPercent;

  /* 小腿托抬升电机 */
  uint8_T PMCalfUDPercent;

  /* 尾部抬升电机 */
  uint8_T TailUDMotorPPercent;
} PSCU2_TWO;

#endif                                 /* RTW_HEADER_CAN3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

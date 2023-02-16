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
  /* ��������������+���գ� */
  uint8_T DSSpeakerVolumeCmd2;

  /* ���ݷ�Χ��ģʽ���� */
  uint8_T DSFCabinAtmosphereMCmd2;

  /* ���ݷ�Χ�����ȿ��� */
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

  /* ͨ�� */
  uint8_T DSVentilateCmd1;
  uint8_T DSHeatingCmd1;
  uint8_T DSBackrestBolsterCmd1;
  uint8_T DSCushionBolsterCmd1;
  uint8_T DSHeadPillowCmd1;
  uint8_T DSZeroGravityCushionCmd1;
  uint8_T DSZeroGravityUpliftCmd1;
  uint8_T DSZeroGravityHighProCmd1;

  /* ������Ӳ���� */
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
  /* ��������������+���գ� */
  uint8_T DSSpeakerVolumeCmd1;
  uint8_T DSPAmbianceLightM1;
  uint8_T DSPAmbianceLightB1;
  uint8_T DSPAmbianceLight1;
} DSArmrestscreen1_THREE;

typedef struct {
  /* ���ݷ�Χ��ģʽ���� */
  uint8_T DSCU1PAmbianceLightM;

  /* ���ݷ�Χ�����ȿ��� */
  uint8_T DSCU1PAmbianceLightB;

  /* ���ݷ�Χ�� */
  uint8_T DSCU1PAmbianceLight;

  /* ���ݷ�Χ��ģʽ���� */
  uint8_T DSCU1DAmbianceLightM;

  /* ���ݷ�Χ�����ȿ��� */
  uint8_T DSCU1DAmbianceLightB;

  /* ���ݷ�Χ�� */
  uint8_T DSCU1DAmbianceLight;

  /* ���ݷ�Χ�� */
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

  /* �������Ǽ�-̧�� */
  uint8_T DSZeroGravityUpliftCmd2;
  uint8_T DSZeroGravityHighProCmd2;

  /* ��������Ӳ���� */
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
   �¶�
   С������ǵ��λ��
   С������ǵ��ѧϰ���״̬
   С��������λ��
   С�����������ѧϰ���״̬
   С���н�̤���λ��
   С���н�̤���ѧϰ���״̬
   ת�̵��λ��
   ת�̵��ѧϰ���״̬
   �粿���λ��
   �粿���ѧϰ���״̬
   ��������ת���λ��
   ��������ת���ѧϰ���״̬
   �Ҳ������ת���λ��
   �Ҳ������ת���ѧϰ���״̬
   ��Ļ�������
   С������ת�������
   С������ת�����������
   С�����쳤�������
   С�����쳤�����������
   С���н�̤�������
   С���н�̤�����������
   ת�̵������
   ת�̵����������
   �粿�������
   �粿�����������
   ��������ת�������
   ��������ת�����������
   �Ҳ������ת�������
   �Ҳ������ת�����������
   NTC����������״̬
 */
typedef struct {
  /* �¶� */
  int8_T DSTemperatureSts2;

  /* С������ǵ��λ�� */
  uint8_T DSCalfSupportAngleMotorPSts2;

  /* С������ǵ��ѧϰ���״̬ */
  uint8_T DSCalfSupportAngleMotorLCSts2;

  /* С��������λ�� */
  uint8_T DSCalfSupportTelescopicPSts2;

  /* С�����������ѧϰ���״̬ */
  uint8_T DSCalfSupTelescopicMotLCSts2;

  /* С���н�̤���λ�� */
  uint8_T DSCalfPedalMotorPositionSts2;

  /* С���н�̤���ѧϰ���״̬ */
  uint8_T DSCalfPedalMotorLCSts2;

  /* ת�̵��λ�� */
  uint8_T DSRotaryTableMotorPositionSts2;

  /* ת�̵��ѧϰ���״̬ */
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
  /* ���澮��Ӳ�ȿ��ƶ������� */
  uint8_T DSCushionCervicaSpineSts1;

  /* �����ȵ�Ӳ�ȿ��ƶ������� */
  uint8_T DSCushionHardnessSts1;

  /* ���澮����ѹ��ֵ */
  uint8_T DSCushionCervicaSpinePV1;

  /* �����ȵ���ѹ��ֵ */
  uint8_T DSCushionHardnessPV1;

  /* ������ڣ����һ���ͬ���� */
  uint8_T DSSlideAdjustmentSts1;

  /* ������1ѧϰ���״̬ */
  uint8_T DSSlideRailMotor1LCSts1;

  /* ������2ѧϰ���״̬ */
  uint8_T DSSlideRailMotor2LCSts1;

  /* �߶ȵ��� */
  uint8_T DSHeightMotorPSts1;

  /* �߶ȵ��ѧϰ���״̬ */
  uint8_T DSHeightMotorLCSts1;

  /* ����ʻ�������� */
  uint8_T DSBackrestMotorPSts1;

  /* ����ʻ�������ѧϰ���״̬ */
  uint8_T DSBackrestMotorLCSts1;

  /* ����ʻ̧����� */
  uint8_T DSZeroGravityDipAngleAdjustSts1;

  /* ����ʻ̧�����λ�� */
  uint8_T DSZeroGravityPositionSts1;

  /* ����ʻ̧�����ѧϰ���״̬ */
  uint8_T DSZeroGravityMotorLCSts1;

  /* ͷ����λ�� */
  uint8_T DSHeadrestMotorPositionSts1;

  /* ͷ����ѧϰ���״̬ */
  uint8_T DSHeadrestMotorLCSts1;

  /* �����ַ�ת���λ�� */
  uint8_T DSArmrestTurnoverLMotorPSts1;

  /* �����ַ�ת���ѧϰ���״̬ */
  uint8_T DSArmrestTurnoverLMotorLCSts1;

  /* �Ҳ���ַ�ת���λ�� */
  uint8_T DSArmrestTurnoverRMotorPSts1;

  /* �Ҳ���ַ�ת���ѧϰ���״̬ */
  uint8_T DSArmrestTurnoverRMotorLCSts1;

  /* ����λ�ã����죬�߶ȣ�������ǣ������죬�߶ȣ�������ǡ�С����λ�á�������Ӳ���ڡ����桢��������Ӳ�ȡ����ֽǶȣ� */
  uint8_T DSMemoryLocationSts1;

  /* �Ƽ����� */
  uint8_T DSRecommendedScenariosSts1;

  /* ����״̬ */
  uint8_T DSAutomaticHeatingSts1;

  /* ͨ��״̬ */
  uint8_T DSAutomaticVentilationSts1;

  /* ���״̬ */
  uint8_T DSSweetAtmosphereAdaptiveSts1;
} DSCU1_ONE;

typedef struct {
  /* �ߵ�����ٷֱȷ��� */
  uint8_T HeightMotorPercent;

  /* ����ʻ��������ٷֱȷ��� */
  uint8_T DSBackrestMotorPercent;

  /* ̧������ٷֱȷ��� */
  uint8_T DSZeroGravityMotorPercent;

  /* �����ַ�ת����ٷֱȷ��� */
  uint8_T DSArmrestTurnoverLMotorPercent;

  /* �Ҳ���ַ�ת����ٷֱȷ��� */
  uint8_T DSArmrestTurnoverRMotorPercent;

  /* ��໬�����ٷֱȷ��� */
  uint8_T DSSlideRailMotor1LPercent;

  /* �Ҳ໬�����ٷֱȷ��� */
  uint8_T DSSlideRailMotor1RPercent;

  /* ͷ�����ٷֱȷ��� */
  uint8_T DSHeadMotorPosiPercent;
} DSCU1_FIVE;

typedef struct {
  /* ����ѹ��ֵ */
  uint8_T CushionPressureSts1;

  /* �ȵ�ѹ��ֵ */
  uint8_T LegPadPressureSts1;

  /* ��������� */
  uint8_T DSCushionFlankActionSts1;

  /* ���������� */
  uint8_T DSBackrestFlankActionSts1;

  /* ��Ļ������� */
  uint8_T DSScreenOnOffSts;

  /* �������������ѹ */
  uint8_T DSCushionFlankAirbagPreSts1;

  /* ��������������ѹ */
  uint8_T DSBackrestFlankAirbagPreSts1;

  /* ������1���� */
  uint8_T DSSlideRailMotor1Fault;

  /* ������1�������� */
  uint8_T DSSlideRailMotor1HallFault;

  /* ������2���� */
  uint8_T DSSlideRailMotor2Fault;

  /* ������2�������� */
  uint8_T DSSlideRailMotor2HallFault;

  /* �ߵ�������� */
  uint8_T DSHighProfileMotorFault;

  /* �ߵ������������ */
  uint8_T DSHighProfileMotorHallFault;

  /* ����ʻ����������� */
  uint8_T DSBackrestMotorFault;

  /* ����ʻ��������������� */
  uint8_T DSBackrestMotorHallFault;

  /* ̧��������� */
  uint8_T DSZeroGravityMotorFault;

  /* ̧������������� */
  uint8_T DSZeroGravityMotorHallFault;

  /* ͷ�������� */
  uint8_T DSHeadrestMotorFault;

  /* ͷ������������ */
  uint8_T DSHeadrestMotorHallFault;

  /* �����ַ�ת������� */
  uint8_T DSArmrestTurnoverLMotorFault;

  /* �����ַ�ת����������� */
  uint8_T DSArmrestTurnoverLMotorHallFault;

  /* �Ҳ���ַ�ת������� */
  uint8_T DSArmrestTurnoverRMotorFault;

  /* �Ҳ���ַ�ת����������� */
  uint8_T DSArmrestTurnoverRMotorHallFault;
} DSCU1_TWO;

/*
   ��Ħģʽ
   ��׵��������
   ��׵׵������
   ��Ħ�ٶ�
   ���г���
   β׵�г���
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
  /* �ɶ������ݣ� */
  uint8_T PMRhythmicMovementCmd2;

  /* RGB��ɫR�����ݣ� */
  uint8_T PMARGBR2;

  /* RGB��ɫG�����ݣ� */
  uint8_T PMARGBG2;

  /* RGB��ɫB�����ݣ� */
  uint8_T PMARGBB2;
} PMArmrestscreen2_THREE;

typedef struct {
  /* ת�̵�� */
  uint8_T DSRotaryTableMotorPercent;

  /* С����������� */
  uint8_T DSCalfSupTeMotorPercent;

  /* ��̤��� */
  uint8_T DSCalfPedalMotorPercent;

  /* �Ҳ������ת��� */
  uint8_T DSArmrestRotRMotorPercent;

  /* С������ת��� */
  uint8_T DSCalfSupRotMotorPercent;

  /* ��������ת��� */
  uint8_T DSArmrestRotLMotorPercent;

  /* �粿���ڵ�� */
  uint8_T DSShoulderMotorPercent;
} DSCU2_TWO;

typedef struct {
  /* �����Χ��ģʽ���� */
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
  /* �ɶ������ݣ� */
  uint8_T PMRhythmicMovementCmd1;

  /* RGB��ɫR�����ݣ� */
  uint8_T PMARGBR1;

  /* RGB��ɫG�����ݣ� */
  uint8_T PMARGBG1;

  /* RGB��ɫB�����ݣ� */
  uint8_T PMARGBB1;
} PMArmrestscreen1_THREE;

typedef struct {
  /* �Ҳ�綯�������� */
  uint8_T PMElectricHandrailRCmd1;

  /* һ���ɴ� */
  uint8_T PMZeroGravityCmd1;

  /* һ����λ */
  uint8_T PMResetCmd1;

  /* ����λ��1 */
  uint8_T PMMemoryLocation1Cmd1;

  /* ����λ��2 */
  uint8_T PMMemoryLocation2Cmd1;

  /* ����͸����Ļ��ǰ�� */
  uint8_T PMCabinToledSCmd1;

  /* ����͸����Ļ����ת�� */
  uint8_T PMCabinToledRCmd1;

  /* �����л����� */
  uint8_T PMSSceneSwitchReq1;

  /* ���������������µ��� */
  uint8_T PMSCU1_UpAndDownCmd;

  /* �����������д�ֱǰ����� */
  uint8_T PMSCU1_FrontAndBackCmd;
  uint8_T PMSpeakerVolumeCmd1;
  uint8_T PMZCabinAtmosphereMCmd1;
  uint8_T PMZCabinAtmosphereBCmd1;
} PMArmrestscreen1_TWO;

typedef struct {
  /* �����Χ��ģʽ���� */
  uint8_T PMCabinAtmosphereMCmd2;

  /* �����Χ�����ȿ��� */
  uint8_T PMCabinAtmosphereBCmd2;

  /* �����Χ�� */
  uint8_T PMAtmosphereLampCmd2;

  /* ���ݷ�Χ��ģʽ���� */
  uint8_T PMFCabinAtmosphereMCmd2;

  /* ���ݷ�Χ�����ȿ��� */
  uint8_T PMFCabinAtmosphereBCmd2;

  /* ���ݷ�Χ�� */
  uint8_T PMFAtmosphereLampCmd2;

  /* ���ݷ�Χ�� */
  uint8_T PMZAtmosphereLampCmd2;

  /* ����֧�� */
  uint8_T PMLumbarSupportCmd2;

  /* ����bolster�� */
  uint8_T PMBackrestBolsterLCmd2;

  /* ����bolster�� */
  uint8_T PMBackrestBolsterRCmd2;

  /* ������� */
  uint8_T PMZeroGravityCushionCmd2;

  /* �ߵ���� */
  uint8_T PMZeroGravityHighProCmd2;

  /* ������ */
  uint8_T PMZeroGravitySlideRailCmd2;

  /* С����������� */
  uint8_T PMZeroGravityCalfDragCmd2;

  /* β��̧�� */
  uint8_T PMTailUDCmd2;

  /* ���綯�������� */
  uint8_T PMElectricHandrailLCmd2;
} PMArmrestscreen2_ONE;

typedef struct {
  uint8_T PMElectricHandrailRCmd2;

  /* һ���ɴ� */
  uint8_T PMZeroGravityCmd2;

  /* һ����λ */
  uint8_T PMResetCmd2;

  /* ����λ��1 */
  uint8_T PMMemoryLocation1Cmd2;

  /* ����λ��2 */
  uint8_T PMMemoryLocation2Cmd2;

  /* ����͸����Ļ��ǰ�� */
  uint8_T PMCabinToledSCmd2;

  /* ����͸����Ļ����ת�� */
  uint8_T PMCabinToledRCmd2;

  /* �����л����� */
  uint8_T PMSSceneSwitchReq2;

  /* ���������������µ��� */
  uint8_T PMSCU1_UpAndDownCmd2;

  /* �����������д�ֱǰ����� */
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
  /* ������ */
  uint8_T PMSlideRailMotorPercent;

  /* �ߵ���� */
  uint8_T PMHighProfileMotorPercent;

  /* Motor 6 */
  uint8_T PMMotor6Percent;

  /* ���ݿ������ */
  uint8_T PMBackrestMotorPercent;

  /* Motor 4 */
  uint8_T PMMotor4Percent;

  /* ���������� */
  uint8_T PMEleArmrestLMPercent;

  /* �Ҳ�������� */
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
  /* С����������� */
  uint8_T PMCalfSupportExtensionMHPercent;

  /* ��������� */
  uint8_T PMBackSupportLMHPercent;

  /* �����Ҳ��� */
  uint8_T PMBackSupportRMPercent;

  /* С����̧����� */
  uint8_T PMCalfUDPercent;

  /* β��̧����� */
  uint8_T TailUDMotorPPercent;
} PSCU2_TWO;

#endif                                 /* RTW_HEADER_CAN3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

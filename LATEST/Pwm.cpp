/*****************************************************/
/* File   : Pwm.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Pwm.h"

#include "Pwm_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Pwm Pwm;
class_Pwm_EcuM Pwm_EcuM;
class_Pwm_EcuM *Pwm_EcuM_ptr = &Pwm_EcuM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PWM_CODE) class_Pwm_EcuM::InitFunction(void){
}

FUNC(void, PWM_CODE) class_Pwm_EcuM::DeInitFunction(void){
}

FUNC(void, PWM_CODE) class_Pwm::SetDutyCycle(void){
}

FUNC(void, PWM_CODE) class_Pwm::SetPeriodAndDuty(void){
}

FUNC(void, PWM_CODE) class_Pwm::SetOutputToIdle(void){
}

FUNC(void, PWM_CODE) class_Pwm::SetOutputState(void){
}

FUNC(void, PWM_CODE) class_Pwm::DisableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm::EnableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm::SetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm::GetCurrentPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm::GetTargetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm::PreparePowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm::GetVersionInfo(void){
}

FUNC(void, PWM_CODE) class_Pwm::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/


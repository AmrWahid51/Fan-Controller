/*
 * DC_motor.c
 *
 *  Created on: May 11, 2023
 *      Author: dabou
 */
#include "gpio.h"
#include "common_macros.h"
#include "std_types.h"
#include "DC_motor.h"

void DcMotor_Init(void)
{

	GPIO_setupPinDirection(DC_MOTOR_PORT_ID, DC_MOTOR_PINA_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT_ID, DC_MOTOR_PINB_ID, PIN_OUTPUT);


}

void DcMotor_Rotate(DcMotor_State state,uint8 speed)
{
	PWM_Timer0_Start(speed);

	if (state == STOP)
	{
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINA_ID, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINB_ID, LOGIC_LOW);

	}
	else if(state == ANTICLOCKWISE)
	{
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINA_ID, LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINB_ID, LOGIC_HIGH);

	}
	else if(state == CLOCKWISE)
	{
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINA_ID, LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT_ID, DC_MOTOR_PINB_ID, LOGIC_LOW);

	}

}

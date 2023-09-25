/*
 * try_mainn.c
 *
 *  Created on: May 13, 2023
 *      Author: dabou
 */
#include "DC_motor.h"
#include "lm35_sensor.h"
#include "lcd.h"
#include <util/delay.h>
#include "pwm.h"
#include "adc.h"

int main(void)
{
	ADC_ConfigType ADC_Configurations = {ADC_REF_VOLT_BIT_VALUE,ADC_PRESCALAR_BIT_VALUE};
	uint8 temp=0;
	LCD_init();
	ADC_init(&ADC_Configurations);
	DcMotor_Init();
	while(1)
	{


		temp= LM35_getTemperature();


		if(temp >= 120 )
		{
			DcMotor_Rotate(CLOCKWISE,100);
			LCD_moveCursor(0, 3);
			LCD_displayString("FAN is ON ");
			LCD_moveCursor(1, 3);
			LCD_displayString("TEMP = ");
			LCD_intgerToString(temp);
			LCD_displayString("  C");
		}
		else if(temp >= 90 )
		{
			DcMotor_Rotate(CLOCKWISE,75);
			LCD_moveCursor(0, 3);
			LCD_displayString("FAN is ON ");
			LCD_moveCursor(1, 3);
			LCD_displayString("TEMP = ");
			LCD_intgerToString(temp);
			LCD_displayString("  C");
		}
		else if(temp >= 60 )
		{
			DcMotor_Rotate(CLOCKWISE,50);
			LCD_moveCursor(0, 3);
			LCD_displayString("FAN is ON ");
			LCD_moveCursor(1, 3);
			LCD_displayString("TEMP = ");
			LCD_intgerToString(temp);
			LCD_displayString("  C");
		}
		else if(temp >= 30 )
		{
			DcMotor_Rotate(CLOCKWISE,25);
			LCD_moveCursor(0, 3);
			LCD_displayString("FAN is ON ");
			LCD_moveCursor(1, 3);
			LCD_displayString("TEMP = ");
			LCD_intgerToString(temp);
			LCD_displayString("  C");
		}
		else if(temp < 30 )
		{
			DcMotor_Rotate(STOP,0);
			LCD_moveCursor(0, 3);
			LCD_displayString("FAN is OFF");
			LCD_moveCursor(1, 3);
			LCD_displayString("TEMP = ");
			LCD_intgerToString(temp);
			LCD_displayString("  C");

		}

	}
}

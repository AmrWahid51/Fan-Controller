# Fan-Controller
Developing a system that controls the speed of a fan depending on the temperature.
# Hardware Used:
* ATmega32 Microcontroller
* DC Motor
* H Bridge
* LM35 Temprature Sensor
* LCD
# Project on Proteus:
![image](https://github.com/AmrWahid51/Fan-Controller/assets/145209640/68aa2b5e-2694-4692-a75d-304871c2aed0)
# Drivers Used:
* GPIO
* LCD
* PWM
* ADC
* DC Motor
* LM35-Sensor
# Project Functionalities
we are changing the Temprature using the Sensor and according to it:
* If the temperature is less than 30C turn off the fan.
* If the temperature is greater than or equal 30C turn on the fan with 25% of its 
maximum speed
* If the temperature is greater than or equal 60C turn on the fan with 50% of its 
maximum speed
* If the temperature is greater than or equal 90C turn on the fan with 75% of its 
maximum speed.
* If the temperature is greater than or equal 120C turn on the fan with 100% of its 
maximum speed.

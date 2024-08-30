/*
 * motorcontrol.c
 *
 *  Created on: 22 août 2024
 *      Author: taghl
 */
#include <picontrol.h>
#include "main.h"
float PI_Controller(float error) {
    static float integral = 0.0f;
    float Kp = 0.1f;
    float Ki = 0.01f;
    integral += error;
    return (Kp * error + Ki * integral);
}
float Speed_PI_Controller(float speedError)
{
	static float Spi=0.0f;
	float Ki_sp=0.01f;
	float Kp_sp=0.1f;
	float Max=0.0f;
	 Spi+= speedError * Ki_sp;
	float output = Kp_sp * speedError + Spi;


	    if (output > Max) {
	        output = Max;
	        Spi-= speedError * Ki_sp;
	    } else if (output < -Max) {
	        output = -Max;
	       Spi-= speedError * Ki_sp;
	    }

	    return output;
}


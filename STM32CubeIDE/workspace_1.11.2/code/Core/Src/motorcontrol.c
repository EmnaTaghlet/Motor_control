/*
 * motorcontrol.c
 *
 *  Created on: Aug 26, 2024
 *      Author: taghl
 */
#include "transfo.h"
#include "picontrol.h"
#include "tim.h"
#include "adc.h"
#include "main.h"


void motorcontrol()
{
	theta=gettheta();
	sp=motor_speed;
	Iqref=Speed_PI_Controller(sp_ref-sp);
	Ia=GetPhaseACurrent();
	Ib=GetPhaseBCurrent();
	Ic=GetPhaseCCurrent();
	ClarkeParkTransform( Ia,Ib,theta, &Id,&Iq);
	Vd=PI_Controller(Idref-Id);
	Vq=PI_Controller(Iqref-Iq);
	InverseParkTransform( Vd, Vq, theta, &Valpha, &Vbeta);
	SVM( Va, Vb, Vc);
}


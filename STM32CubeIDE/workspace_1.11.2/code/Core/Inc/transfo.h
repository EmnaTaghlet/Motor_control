// transformations.h
#ifndef TRANSFORMATIONS_H
#define TRANSFORMATIONS_H

#include <math.h>

// Prototypes des fonctions de transformation
void ClarkeParkTransform(float I_a, float I_b,float theta,float *I_d, float *I_q);
void InverseParkTransform(float V_d, float V_q, float theta, float *V_alpha, float *V_beta);
void InverseClarkeTransform(float Valpha, float Vbeta, float *Va, float *Vb, float *Vc);
#endif // TRANSFORMATIONS_H

// transformations.c
#include "transfo.h"
#include "main.h"
void ClarkeParkTransform(float I_a, float I_b, float theta, float *I_d,float * I_q) {
    // Transformation de Clarke
    float I_alpha = I_a;
    float I_beta = (I_a + 2 * I_b) / sqrtf(3.0f);
    // Transformation de Park
    *I_d = I_alpha * cosf(theta) + I_beta * sinf(theta);
    *I_q = -I_alpha * sinf(theta) + I_beta * cosf(theta);
}

void InverseParkTransform(float V_d, float V_q, float theta, float *V_alpha, float *V_beta) {
    // Transformation de Park Inverse
    *V_alpha = V_d * cosf(theta) - V_q * sinf(theta);
    *V_beta = V_d * sinf(theta) + V_q * cosf(theta);
}

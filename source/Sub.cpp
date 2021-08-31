#include "Sub.h"

Sub::Sub(float A, float B)
{
    this->A = A;
    this->B = B;
}

float Sub::calculate()
{
    return A - B;
}


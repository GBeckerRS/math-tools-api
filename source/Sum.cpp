#include "Sum.h"

Sum::Sum(float value1, float value2)
{
    this->A = value1;
    this->B = value2;
}

float Sum::calculate()
{
    return A + B;
}


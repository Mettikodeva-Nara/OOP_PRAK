#include "rumus.h"

PeriodeBandul::PeriodeBandul(double Ke, double a)
{
    periode = 2 * pi * pow(((pow(Ke, 2) + pow(a, 2)) / (g + a)), 0.5);
}

double PeriodeBandul::getResult()
{
    return periode;
}
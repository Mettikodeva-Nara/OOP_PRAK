#ifndef RUMUS_H
#define RUMUS_H
//===========================================================================
#include <cmath>

#define pi 3.14159265358979323846
#define g 9.86

class PeriodeBandul {
    private:
        double periode;
    public:
        PeriodeBandul(double Ke,double a);
        double getResult();
};
//===========================================================================
#endif
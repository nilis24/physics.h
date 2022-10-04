#include "../constants.h"
#include <cmath>

double photoelectric_effect(double phi, double v)
{
    int eK = (planck*v) - phi;
    return eK;
}  

/*  E = hx(v-v0)
    E   = Energy of ejected electron
    phi = Threshold Frequency
    v   = Initial velocity */ 


double wiens_law(double t)
{
    double lambdaM = 0.0029/t;
    return lambdaM;
}

/* Wavelength of maximum blackbody emission = b/T
   b = 2.9 mmK = 0.29 cmK = 0.0029 mK
   T = Temperature of the blackbody */



double stefan_boltzmann_law(double a, double t)
{
    double M = stefan_boltzmann*a*(pow(t,4));
    return M;
} 

/* m = Power radiated by the blackbody
   a = Area 
   t = Temperature of the blackbody */



double heisenberg_principle(double x)
{
    double minUncertainty = planck/(4*M_PI*x);
    return minUncertainty; 
}

/* delH * delP >= h/(4*pi)
   delH = uncertainty in position
   delP = uncertainty in momentum
   h    = Planck's constant */


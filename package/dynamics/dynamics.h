#include <math.h>
#include <stdio.h>

double NewtonsSecondLaw(double m, double a) {
    return m * a;
}

double NewtonsThirdLaw(double m2, double a1, double a2) {
    double m1 = m2 * a2 / a1;
    return -m1;
}
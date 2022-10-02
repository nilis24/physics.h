#include <math.h>
#include <stdio.h>
#include "../constants.h"

double NonRelativisticMomentum(double m, double v) {
    return m*v;
}
double NonRelativisticKineticEnergy(double m, double v) {
    return 0.5 * m * pow(v, 2);
}
double NewtonsSecondForceRule(double m, double a) {
    return m*a;
}
double FinalVelocity(double v, double a, double t) {
    return v + a*t;
}
double DisplacementWithVelocities(double v1, double v2, double t) {
    return (v1 + v2) / 2 * t;
}
double DisplacementWithAcceleration(double v, double a, double t) {
    return v*t + 0.5*a*pow(t, 2);
}
double FinalVelocitySquared(double v1, double a, double d) {
    return pow(pow(v1, 2) + 2*a*d, 2);
}

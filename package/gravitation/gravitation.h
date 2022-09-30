#include <math.h>
#include <stdio.h>
#include "../constants.h"

double UniversalGravitationLaw(double m1, double m2, double r) {
    return G * (m1*m2) / pow(r, 2);
}
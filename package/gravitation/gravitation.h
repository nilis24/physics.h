#include <math.h>
#include <stdio.h>
#include "../constants.h"

double UniversalGravitationLaw(double m1, double m2, double r) {
    return G * (m1*m2) / pow(r, 2);
}

double AccelarationDuetoGravity(double m, double r, double) {
    return G * m / pow(r, 2);
}

double GravitationalPotentialPointCharge(double m, double r) {
    return -1 * G * m / r;
}

double GravitationalPotentialCircularRing(double m, double r, double x) {
    double t = pow(r, 2) + pow(x, 2);
    return -1 * G * m / pow(t, 0.5);
}

double GravitationalPotentialCircularDisc(double m, double r, double x, double xx) {
    double t = pow(r, 2) + pow(xx, 2) - x;
    return -2 * G * m / (pow(t. 0.5) * pow(r, 2));
}

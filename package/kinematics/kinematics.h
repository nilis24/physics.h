#include <math.h>
#include <stdio.h>
#include "../constants.h"

double DisplacementTimeAcceleration(double a, double v, double t)
{
    return (v * t + (0.5 * a * t * t));
}

double FinVelocityUsingInitialandDisplacement(double u, double a, double s)
{
    return (u * u + 2 * a * s);
}

double FinVelocityUsingInitialandTime(double u, double a, double t)
{
    return (u + a * t);
}

double DisplacementUsingVelocities(double u, double v, double a)
{
    return ((pow(v, 2) - pow(u, 2)) / (2 * a));
}

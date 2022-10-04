#include <math.h>
#include <stdio.h>

double NewtonsSecondLaw(double m, double a) {
    return m * a;
}

double NewtonsThirdLaw(double m2, double a1, double a2) {
    double m1 = m2 * a2 / a1;
    return -m1;
}


// Gas Laws of physics

// checking conditions of laws
bool BoylesLaw(double p1,double v1,double p2,double v2) {
    if (p1 * v1 == p2 * v2) {
        return true;
    }
    else {
        return false;
    }
}

bool CharlesLaw(double v1,double t1,double v2,double t2) {
    if (v1 / t1 == v2 / t2) {
        return true;
    }
    else {
        return false;
    }
}

bool GayLussacLaw(double p1,double t1,double p2,double t2) {
    if (p1 / t1 == p2 / t2) {
        return true;
    }
    else {
        return false;
    }
}

bool AvagadroLaw(double v1,double n1,double v2,double n2) {
    if (v1 / n1 == v2 / n2) {
        return true;
    }
    else {
        return false;
    }
}

// returning constants for laws defined
double BoylesLaw(double p,double v)
{
    return p * v;
}

double CharlesLaw(double v,double t)
{
    return v / t;
}

double GayLussacLaw(double p,double t)
{
    return p / t;
}

double AvagadroLaw(double v,double n)
{
    return v / n;
}
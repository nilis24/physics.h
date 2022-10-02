#include <math.h>
#include <stdio.h>
#include "../constants.h"

// signed values are calculated by taking the center as origin and draing a cordinate axis
//mirrors
//f =signed focal length, u= signed object distance, v= signed image distacne
double MirrorImagePosition(double f, double u)
{
    return  (f * u)/(u-f);
}

double MirrorObjectPosition(double f, double v)
{
    return MirrorImagePosition(f,v);
}

double FocalLengthMirror(double v,double u)
{
    return (v*u)/(v+u);
}
//magnification fator, negative value means image flip occours withrespect to object
double MirrorMagnification(double v,double u)
{
    return -v/u;
}

//thin lenses
double LensImagePosition(double f, double u)
{
    return  (f * u)/(u+f);
}

double LensObjectPosition(double f, double v)
{
    return MirrorImagePosition(f,-v);
}

double FocalLengthLens(double v,double u)
{ 
    return (v*u)/(u-v);
}

double MirrorMagnification(double v,double u)
{
    return v/u;
}

//refraction
//d= actual depth of the pool, u= refractive index of the pool
double ApparentDepth(double u,double d)
{
    return d/u;
    // d/(refractive index)
}

double ShiftInDepth(double u, double d)
{
    return d*(1-1/u);
}

//combination of thin lenses(net focal length)
//f1- signed focal length of first lens, f2 - signed focal length of second lens
double FocallengthTwoThinLenses(double f1, double f2)
{
    return f1*f2/(f1+ f2);
}

    //if lens is separated by distance D

double FocalLengthTwoThinLensesAtDist(double f1, double f2,double D)
{
    return f1*f2/(f1+f2-D);
}
        // distance x is F*d/f1
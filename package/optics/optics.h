#include <math.h>
#include <stdio.h>
#include "../constants.h"

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

double MirrorMagnification(double v,double u)
{
    return -v/u;
}

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
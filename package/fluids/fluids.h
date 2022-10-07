#include <math.h>

// ρ=m/V, where m is the mass
// V the volume of object
// returns density of sample at constant density
double density(double m, double V)
{
    return m / V;
}

// P=F/A
// F is perpendicular force applied
// A is the area on which its distributed
// returns pressure generated due to a force applied on area
double pressure(double F, double A)
{
    return F / A;
}

// p=p0+ρgh
// p0 is pressure at zero height
// d is density of fluid,
// g is acceleration due to gravity
// h is depth at which obj is submerged
// returns pressure at a depth in a fluid at constant density
double pressure_depth(double p0, double d, double g, double h)
{
    return p0 + d * g * h;
}

// Pabs=Patm+Pg
// Patm is atmospheric pressure
// Pg is gauge pressure
// returns absolute pressure (excess pressure detected above absolute zero of pressure)
double absolute_pressure(double Patm, double Pg)
{
    return Patm + Pg;
}

// η=FL/vA
// F is magnitude of force
// L is distance between the plates
// v is constant velocity
// A is area of the plate
// returns the viscosity of a fluid
double viscosity(double F, double L, double v, double A)
{
    return (F * L) / (v * A);
}

// d=(V1d1 + V2d2)/(V1+V2)
// V1 and V2 are volumes of two different fluids
// d1 and d2 are densities of the two fluids
// returns combined density of two fluids mixed together
double combined_volume_density(double V1, double V2, double d1, double d2)
{
    return (V1 * d1 + V2 * d2) / (V1 + V2);
}

// d=(m1 + m2)/(m1/d1+m2/d2)
// m1 and m2 are masses of two different fluids
// d1 and d2 are densities of the two fluids
// returns combined density of two fluids mixed together
double combined_mass_density(double m1, double m2, double d1, double d2)
{
    return (m1 + m2) / (m1 / d1 + m2 / d2);
}

// F = Vd(g-a)
// V is immersed volume of liquid
// d is density of liquid
// g is acceleration due to gravity
// a is acceleration of body dipped inside liquid
// returns the buoyant force generated by fluid on object
double buoyant_force(double V, double d, double g, double a)
{
    return V * d * (g - a);
}

// Wapp = Vg(d1-d2)
// V is volume of body
// g is acceleration due to gravity
// d1 is density of body
// d2 is density of fluid
// returns apparent weight of a body inside a fluid
double weight_in_fluid(double V, double g, double db, double df)
{
    return V * g * (db - df);
}

// Q = Aν
// A is area of cross section
// v is velocity
// returns volumetric flow / flow rate
double flow_rate(double A, double v)
{
    return A * v;
}

// T = F/L
// F is total force acting on either side
// L is length
double surface_tension(double F, double L)
{
    return F / L;
}

// h = 2Tcos(θ)/rdg
// T is surface tension of liquid
// θ is angle of contact in radian
// r is radius of capillary
// d is density of fluid
// g is acceleration due to gravity
// returns capillary rise
double capillary_rise(double T, double theta, double r, double d, double g)
{
    return 2 * T * cos(theta) / r * d * g;
}

// Re = ρuL/μ
// ρ is density
// u is velocity
// L is chararecteristic length
// μ is dynamic viscosity
// returns reynolds number
double reynolds_number(double d, double v, double l, double vis)
{
    return (d * v * l) / vis;
}

// returns the fluid flow type based on reynolds number
// -1(Laminar) | 1(Turbulent) | 0(Indefinite)
int flow_type(double d, double v, double l, double vis)
{
    double Re = reynolds_number(d, v, l, vis);
    if (Re < 2000)
        return -1;
    else if (Re > 3000)
        return 1;
    else
        return 0;
}

// Stoke's Law : F = 6πrηv
// F is drag force
// r is radius of the sphere
// η is the fluid viscosity (vis)
// v is velocity of the sphere
// returns r the viscous force on a sphere
double stokes_law(double r, double vis, double v)
{
    return 6 * M_PI * r * vis * v;
}

// Poiseuille’s law for resistance : R = 8ηl/πr^4
// η is viscosity(vis) of fluid
// l is legth of tube
// r is radius of tube
// returns resistance to laminar flow of an incompressible fluid in a tube
double poiseuille_resistance_law(double vis, double l, double r)
{
    return (8 * vis * l) / (M_PI * pow(r, 4));
}

// Poiseuille’s law : Q=(p2−p1)πr^4/8ηl
// p2, p1 are the pressures at the two ends of tube
// η is viscosity(vis) of fluid
// l is legth of tube
// r is radius of tube
// returns the flow rate
double poiseuille_law(double p1, double p2, double r, double vis, double l)
{
    return (p2 - p1) / poiseuille_resistance_law(vis, l, r);
}

#include <math.h>
#include <stdio.h>
#include "../constants.h"

#define pi 3.14
#define u 1e-6*1.257
double B;

double Field_due_to_straight_wire(double i, double d){
	//d - distance from the wire
	//i - current in the wire
	//u - permittivity in the space
	//B - Magnetic field strength

	B = (u*i)/(2*pi*d);

}

double radius_particle_under_magneticfield(double m, double v, double q, double B){
	//m - mass of particle
	//v - velocity of particle
	//q - charge on the particle
	//B - magnetic field strength

	//r = radius of circular path obtained
	r = (m*v)/(q*B);
}

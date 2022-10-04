#include <math.h>
#include <stdio.h>
#include "../constants.h"

#define pi 3.14
#define u 1e-6*1.257
double B,emf;

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
	double r = (m*v)/(q*B);
}

double emf_faraday_law(double diff_phi, double t )
{//emf - electromotive force induced in closed circuit
	//diff_phi - change in magnetic flux
	//t -change in  time
	
	emf=(-diff_phi)/t;
}

double emf_lenz_law(double diff_phi, double t, double N )
{//emf - electromotive force induced in closed circuit
	//diff_phi - change in magnetic flux
	//t -change in time
	//N- closely wound coil of N turns

	emf=N*(diff_phi)/t;
}

double emf_for_moving_conductor(double B, double l, double v,double rad )
{//emf - electromotive force for a moving conductor
	//B -  Magnetic field strength
	//l - length of the conductor
	//v- velocity of the conductor 
    //rad- angle between the magnetic field and the direction of motion (in radians)
	emf=B*l*v*(sin(rad));
}

double emf_by_self_inductance(double L, double i ,double t )
{//emf - electromotive force for moving conductor
	//L -  coefficient of self inductance
	//i - change in current of the conductor
	//t- change in time
   
   emf=(-L*(i/t));
}

double self_inductance_of_solenoid(double N, double A,double l,double mu)
{	//N - number of turns on coil of the conductor
	//A- area of cross-section
	//l- length of conductor
  //mu- magnetic material of permeability
 double L=(mu*N*N*A)/l;
}

double mechanical_equivalent_of_self_inductance(double L, double I)
{	//L -  coefficient of self inductance
	//I - current of the conductor
	//W- work done
   
   double W=(0.5*L*I*I);
}
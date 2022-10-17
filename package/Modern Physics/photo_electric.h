#include<math.h>
#include<stdio.h>
using namespace std;

//global variables 
const double h = 6.626070040e-34;//Planck's constant (Joule-seconds)
const double c = 299800000; //Speed of light in vacume (meters per second)
const double e= 1.6E-19; //charge of an electron (Coulomb)

void photons_energy(double wavelength){
    int E; // Photons Energy 
    E = (h*c)/wavelength;
}

void photons_momentum(double wavelength){

    int P; // photons momentum
    P = h/wavelength;
}

void debroglie_wavelength(int mass, int velocity){
    int W,p; // debroglie wavelength
    p = mass*velocity; // momentum
    W = h/(mass*velocity);
}

void stopping_potential(double wavelength,double work_function){
    int V; // stoppping potential
    V = ((h*c)/(e*wavelength)-(work_function/e));
}

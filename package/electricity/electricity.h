#include "../constants.h"
#include <cstdarg>

// Coulomb’s Law
// Electrostatic force between two charged particles according to Coulomb’s Law is given by:
// F = k*q1*q2/r^2  , where k is Coulomb's constant
// returns the Force (in Newton) between charges q1 (in coulomb) and q2 (in Coulomb) separated by a distance of r (in metre)
double two_particles_electrostatic_force(double q1, double q2, double r){
    return k*q1*q2/(r*r);
}

// Electrostatic potential due a single point charge:
// V = k*q/r  , where k is Coulomb's constant
// returns the Electrostatic Potential (in Volt) at a distance of r (in metre) due to point charge q (in Coulomb) 
double electrostatic_potential(double q, double r){
    return k*q/r;
}

// returns the work done(in Joule) used to carry charge q (in Coulomb) through a potential difference of v(in Volt)
// V = W/q (work done per unit charge) by definition => W = q*V
double workdone(double q, double v){
    return q*v;
}

// returns the electric current (in Ampere) when charge q (in Coulomb) flows in time t (in second)
double current_flow(double q, double t){
    return q/t; //Since, I = q/t (charge flown per unit time) by definition
}

// Ohm's law: V=I*R
// returns the voltage (in Volt) developed due to current i(in Ampere) flowing through resistance of r(in Ohm) 
double ohms_voltage(double i, double r){
    return i*r;
}

// returns the resistance (in Ohm) due to voltage v (in Volt) and current i (in Ampere)
double ohms_resistance(double v, double i){
    return v/i;
}

// returns the electric current (in Ampere) flowing through a voltage drop v(in Volt) across resistance r(in Ohm)
double ohms_current(double v, double r){
    return v/r;
}

// Energy, Power:
// returns the electrical power(in Watt) due to voltage v(in Volt) and current i(in Ampere)
double electrical_power(double v, double i){
    return v*i;
}

// returns the electrical energy(in Joule) dissipated due to current i(in Ampere) flowing through a potential difference of v(in Volt) for time t(in seconds)
double electrical_energy(double v, double i, double t){
    return v*i*t;
}

// Equivalent resistance:
// Requiv = R1 + R2 + R3...
// takes in a variable number of arguments denoting variable number of resistors connected in series 
// and returns the equivalent resistance(in Ohm) 
double series_resistors (int r, ...){
    va_list arguments;                     // A place to store the list of arguments
    double Requiv=0;

    va_start (arguments, r);           // Initializing arguments to store all values after num
    for (int i = 0; i<r; i++)        // Loop until all numbers are added
        Requiv += va_arg (arguments, double); // Adds the next value in argument list to sum.
    va_end (arguments);                  // Cleans up the list

    return Requiv;                   // Returns the sum
}

// 1/Requiv = 1/R1 + 1/R2 + 1/R3...
// takes in a variable number of arguments denoting variable number of resistors connected in parallel 
// and returns the equivalent resistance(in Ohm) 
double parallel_resistors (int r, ...){
    va_list arguments;                     // A place to store the list of arguments
    double Requiv=0;

    va_start (arguments, r);           // Initializing arguments to store all values after num
    for (int i = 0; i<r; i++)        // Loop until all numbers are added
        Requiv += 1.0 / va_arg(arguments, double); // Adds the next value in argument list to sum.
    va_end (arguments);                  // Cleans up the list

    return 1.0 / Requiv;                   // Returns the equivalent resistance
}

//Capacitance equation:
//q = C*V
//returns the charge(in Coulomb) stored in a capacitor of capacitance c(in Farad) across a potential difference v(in Volt)
double charge_stored(double c, double v){
    return c*v;
} 

//returns the capacitance(in Farad) of a capacitor storing q charge(in Coulomb) across a potential difference v(in Volt)
double capacitance(double q, double v){
    return q/v;
}

//returns the potential difference(in Volt) developed across a capacitor of capacitance c(in Farad) storing q charge(in Coulomb) 
double capacitor_potential(double c, double q){
    return q/c;
}

// Equivalent Capacitance:
// 1/Cequiv = 1/C1 + 1/C2 + 1/C3...
// takes in a variable number of arguments denoting variable number of capacitors connected in series 
// and returns the equivalent capacitance(in Farad)
double series_capacitors (int c, ...){
    va_list arguments;                     // A place to store the list of arguments
    double Cequiv=0;

    va_start (arguments, c);           // Initializing arguments to store all values after num
    for (int i = 0; i<c; i++)        // Loop until all numbers are added
        Cequiv += 1.0 / va_arg(arguments, double); // Adds the next value in argument list to sum.
    va_end (arguments);                  // Cleans up the list

    return 1.0 / Cequiv;                   // Returns the equivalent capacitance
}

// Cequiv = C1 + C2 + C3...
// takes in a variable number of arguments denoting variable number of capacitors connected in parallel 
// and returns the equivalent capacitance(in Farad)
double parallel_capacitors (int c, ...){
    va_list arguments;                     // A place to store the list of arguments
    double Cequiv=0;

    va_start (arguments, c);           // Initializing arguments to store all values after num
    for (int i = 0; i<c; i++)        // Loop until all numbers are added
        Cequiv += va_arg (arguments, double); // Adds the next value in argument list to sum.
    va_end (arguments);                  // Cleans up the list

    return Cequiv;                   // Returns the sum
}

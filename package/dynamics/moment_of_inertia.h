#include<math.h>
#include<stdio.h>

//Parallel axis theorem
//inertia about any axis parallel to the axis passing through COM and at a distance h is given as:
//         I = I_COM + M(h^2)
double parallel_axis_theorem(double MOI_about_COM, double m, double h){
    return MOI_about_COM + m*h*h;
}

//Perpendicular axis theorem
//MOI of a body about an axis perpendicular to it is the sum of 
//MOI of the body about 2 mutually perpendicular axes lying in the plane of the object
double perpendicular_axis_theorem(double MOI_1, double MOI_2){
    return MOI_1 + MOI_2;
}

//MOI of a ring about a axis passing through its centre and perpendicular to its plane
double MOI_ring(double m,double r){
    //m=mass of ring
    //r=radius of ring
    return m*r*r;     
}

//MOI of a rod about its centre
double MOI_rod(double m, double l){
    //m=mass of rod
    //l=length of rod
    return (m*l*l)/12;
}

//MOI of a solid cylinder
double MOI_solid_cylinder(double m,double r){
    //m=mass of cylinder
    //r=radius of cylinder
    return (m*r*r)/2;
}

//MOI of solid sphere
double MOI_solid_sphere(double m, double r){
    //m=mass of solid sphere
    //r=radius of solid sphere
    return (2*m*r*r)/5;
}

//MOI of hollow sphere
double MOI_hollow_sphere(double m,double r){
    //m=mass of hollow sphere
    //r=radius of hollow sphere
    return (2*m*r*r)/3;
}

//MOI of rectangle
double MOI_rectangle(double m, double a, double b){
    //m=mass of the rectangular object
    //a=length
    //b=breadth
    return m*((a*a)+(b*b))/12;
}

//MOI of square
double MOI_square(double m, double a){
    //m=mass of square object
    //a=sides
    return (m*a*a)/6;
}

//MOI of solid cone
double MOI_solid_cone(double m, double r){
    //m=mass of solid cone
    //r=radius of solid cone
    return (3*m*r*r)/10;
}

//MOI of hollow cone
double MOI_hollow_cone(double m,double r){
    //m=mass of hollow cone
    //r=radius of hollow cone
    return (m*r*r)/2;
}

//MOI of plane disc
double MOI_plane_disc(double m, double r){
    //m=mass of plane disc
    //r=radius of plane disc
    return (m*r*r)/2;
}

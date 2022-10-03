#include<math.h>
#include<stdio.h>
using namespace std;

void energy_bohr_atom(int atomic_no, int shell_no){
    int E;
    
    E = ((-13.6)*(atomic_no*atomic_no))/(shell_no*shell_no);
}   

void radius_bohrs_orbit(int atomic_no, int shell_no){
    int R;
    R = ((shell_no*shell_no)*0.529)/atomic_no;
}
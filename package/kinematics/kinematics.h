#include<stdio.h>
//function to convert unit in si from kmh
// v is for velocity and a is for acceleration
float  unit_si(float value , char ch)
{
    if(ch == 'v')
        return value*10/36;
    if(ch == 'a')
        return value/(36*360);
}

//function to convert unit in kmh from si
// v is for velocity and a is for acceleration
float unit_kmph(float value , char ch)
{
    if(ch == 'v')
        return value*3.6;
    if(ch == 'a')
        return value*(36*360);
        
}

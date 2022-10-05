//Program for unit conversion 

#include<stdio.h>
#include<math.h>

//function to convert velocity or speed from m/s to km/h
void mps_to_kmph(float sp)
{
    float res;
    printf("The speed or velocity in m/s is:%f m/s\n",sp);
    res=sp*3.6;
    printf("The speed or velocity in km/h is:%f km/h\n",res);
}

//function to convert velocity or speed from km/h to m/s
void kmph_to_mps(float sp)
{
    float res;
    printf("The speed or velocity in km/h is:%f km/h\n",sp);
    res=sp/3.6;
    printf("The speed or velocity in m/s is:%f m/s\n",res);
}

//function to convert acceleration from m/s^2 to km/h^2
void mps2_to_kmph2(float acc)
{
    float res;
    printf("The acceleration in m/s^2 is:%f m/s^2\n",acc);
    res=acc*12959.99997097;
    printf("The acceleration in km/h^2 is:%f km/h^2\n",res);
}

//function to convert acceleration from km/h^2 to m/s^2
void kmph2_to_mps2(float acc)
{
    float res;
    printf("The acceleration in km/h^2 is:%f km/h^2\n",acc);
    res=acc/12960;
    printf("The acceleration in m/s^2 is:%f m/s^2\n",res);
}


//Driver Code
int main()
{
    int n,k,h;
    float sp,acc;
    printf("Enter the choice:\n");
    printf("1: Velocity or Speed\n");
    printf("2: Acceleration\n");
    scanf("%d",&n);
    
    
    switch(n){
        //for velocity or speed
        case(1):
        printf("Select to change the velocity or speed from:\n");
        printf("1: m/s to km/h\n");
        printf("2: km/h to m/s\n");
        scanf("%d",&k);
        
        
        switch(k){
            
            case(1):
            printf("Enter the speed or velocity in m/s:\n");
            scanf("%f",&sp);
            mps_to_kmph(sp);
            break;

            case(2):
            printf("Enter the speed or velocity in km/h:\n");
            scanf("%f",&sp);
            kmph_to_mps(sp);
            break;


            default:
            printf("You have entered wrong input\n");
            break;
        }
        break;

        //for acceleration
        case(2):
        printf("Select to change the acceleration from:\n");
        printf("1: m/s^2 to km/h^2\n");
        printf("2: km/h^2 to m/s^2\n");
        scanf("%d",&h);
        
        
        switch(h){
            
            case(1):
            printf("Enter the acceleration in m/s^2:\n");
            scanf("%f",&acc);
            mps2_to_kmph2(acc);
            break;

            case(2):
            printf("Enter the acceleration in km/h^2:\n");
            scanf("%f",&acc);
            kmph2_to_mps2(acc);
            break;


            default:
            printf("You have entered wrong input\n");
            break;
        }
        break;



        default:
            printf("You have entered wrong input\n");
            break;
    }
    

}

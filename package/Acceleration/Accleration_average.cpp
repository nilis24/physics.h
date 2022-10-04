#include <codecogs/physics/kinematics/acceleration.h>
#include <iostream>
 
int main()
{
  // final velocity and time
  double v = 200, t = 15.7;
 
  std::cout << std::endl;
  std::cout << "      Final velocity = " << v << " m/s" << std::endl;
  std::cout << "          Time spent = " << t << " s" << std::endl;
  std::cout << std::endl;
 
  // assuming initial velocity and initial time are null,
  // display the average acceleration of the object
 
  std::cout << "Average acceleration = " << 
  Physics::Kinematics::acceleration_avg(v, t);
  std::cout << " m/s^2" << std::endl;
 
  return 0;
}
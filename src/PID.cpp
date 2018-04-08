#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
}

void PID::UpdateError(double cte) {


   /*
    * Calculate steering value here, remember the steering value is
    * [-1, 1].
   */

   if (counter == 0)
   {
      prev_cte = cte;
      counter++; 
   }

   

   if ( abs(cte) <= 0.5) 
   {   
      int_cte = 0.0; 
   }

   diff_cte = (cte - prev_cte); 

   prev_cte = cte; 
   int_cte += cte; 

   p_error = -Kp*cte;
   i_error = -Ki*int_cte;
   d_error = -Kd*diff_cte;


}

double PID::TotalError() {
   
   if (p_error+i_error+d_error > 1.0)
   {
      return 1.0;
   }
  
   else if (p_error+i_error+d_error < -1.0)
   {
      return -1.0; 
   }
  
   else
   {
      return p_error+i_error+d_error; 
   } 
 
}


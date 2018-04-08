#ifndef PID_H
#define PID_H

#include <stdlib.h>

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

   
  /*
  *  The following variables are used 
  *  in the derivative term. 
  */ 

  double prev_cte;
  double diff_cte; 
  int counter;


  /*
  *  The following variables are used 
  *  in the integral term. 
  */ 
  double int_cte; 

  
  /*


  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */

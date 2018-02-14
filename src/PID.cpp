#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    p_error = 0;
    i_error = 0;
    d_error = 0;
    prev_cte = 0;

}

void PID::UpdateError(double cte) {
    p_error = cte;
    i_error +=cte;
    d_error = cte-prev_cte;
    prev_cte =cte;
}

double PID::TotalError() {
    double total_err;
    total_err = p_error*Kp + i_error*Ki + d_error*Kd;
    return total_err;
}



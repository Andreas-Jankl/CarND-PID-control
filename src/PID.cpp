#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp=Kp;
    PID::Ki=Ki;
    PID::Kd=Kd;
    PID::cte_last=0.0f;
    PID::p_error=0.0f;
    PID::d_error=0.0f;
    PID::i_error=0.0f;
}

void PID::UpdateError(double cte) {
    PID::p_error=cte;
    PID::d_error=cte-PID::cte_last;
    PID::i_error+=cte;
    PID::cte_last=cte;
}

double PID::TotalError() {
    return PID::Kp * PID::p_error + PID::Kd * PID::d_error + PID::Ki * PID::i_error;
}


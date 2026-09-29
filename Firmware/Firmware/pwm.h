#include "pid.h"

void PID_Init(PID_t *pid, float kp, float ki, float kd, float max_output) {
    pid->kp = kp; pid->ki = ki; pid->kd = kd;
    pid->max_output = max_output;
    PID_Reset(pid);
}

void PID_Reset(PID_t *pid) {
    pid->integral = 0.0f;
    pid->prev_error = 0.0f;
}

float PID_Update(PID_t *pid, float setpoint, float measured, float dt) {
    float error = setpoint - measured;
    pid->integral += error * dt;

    if (pid->integral > pid->max_output) pid->integral = pid->max_output;
    if (pid->integral < -pid->max_output) pid->integral = -pid->max_output;

    float derivative = (error - pid->prev_error) / dt;
    pid->prev_error = error;

    float output = (pid->kp * error) + (pid->ki * pid->integral) + (pid->kd * derivative);

    if (output > pid->max_output) output = pid->max_output;
    if (output < -pid->max_output) output = -pid->max_output;

    return output;
}
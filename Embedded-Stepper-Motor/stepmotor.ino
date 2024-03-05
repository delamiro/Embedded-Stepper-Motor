#include <Stepper.h>

const int STEPSPERREVOLUTION = 2048;

const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

Stepper stepper = Stepper(STEPSPERREVOLUTION, IN1, IN3, IN2, IN4);

void stepMotorSetup() {
  stepper.setSpeed(5);
}

void stepMotorRun(const int rotations) {
  stepper.step(STEPSPERREVOLUTION * rotations);
}

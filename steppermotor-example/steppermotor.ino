#include <Stepper.h>

/*
https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/#gear-reduction-ratio
32 steps per revolution
32/9 * 22/11 * 27/9 * 24/8 = 63.99 ≈ 64
32 * 64 == 2048
*/
const int STEPSPERREVOLUTION = 2048;

const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

Stepper stepper = Stepper(STEPSPERREVOLUTION, IN1, IN3, IN2, IN4);

void stepperMotorSetup() {
  stepper.setSpeed(15);
}

void stepperMotorRun(const int rotations) {
  stepper.step(STEPSPERREVOLUTION * rotations);
}

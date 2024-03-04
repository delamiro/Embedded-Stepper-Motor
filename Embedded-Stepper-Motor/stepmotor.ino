#include <Stepper.h>

const int STEPSPERREVOLUTION = 2048;

const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

Stepper stepper = Stepper(STEPSPERREVOLUTION, IN1, IN3, IN2, IN4);

unsigned long previousMillis = 0;

void stepMotorSetup() {
  stepper.setSpeed(5);
}

void stepMotorRun() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= 1000) {
    previousMillis = currentMillis;
    stepper.step(STEPSPERREVOLUTION);
  }
}

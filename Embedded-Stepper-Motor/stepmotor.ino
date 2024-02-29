#include <Stepper.h>

const int STEPSPERREVOLUTION = 2038;

Stepper stepper = Stepper(STEPSPERREVOLUTION, 8, 10, 9, 11);

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

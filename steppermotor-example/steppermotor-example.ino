const int STALL = 0;
const int ROTATE = 1;

int stepMotorState = STALL;
int rotations = 0;

void setup() {
  serialSetup();
  stepperMotorSetup();
}

void loop() {
  switch (stepMotorState) {
    case STALL:
      rotations = serialRead();
      if (!isalpha(rotations))
        stepMotorState = ROTATE;
      break;
    case ROTATE:
      stepperMotorRun(rotations);
      stepMotorState = STALL;
      break;
  }
}

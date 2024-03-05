const int STALL = 0;
const int ROTATE = 1;

int stepMotorState = STALL;
int rotations = 0;

void setup() {
  serialSetup();
  stepMotorSetup();
}

void loop() {
  switch (stepMotorState) {
    case STALL:
      rotations = serialRead();
      if (rotations > 0 && rotations < 10)
        stepMotorState = ROTATE;
      break;
    case ROTATE:
      stepMotorRun(rotations);
      stepMotorState = STALL;
      break;
  }
}

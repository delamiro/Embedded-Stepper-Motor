void setup() {
  serialSetup();
  stepMotorSetup();
}

void loop() {
  stepMotorRun(serialRead() - '0');
}

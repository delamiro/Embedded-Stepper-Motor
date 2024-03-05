void serialSetup() {
  Serial.begin(9600);
}

char serialRead() {
  if (Serial.available() > 0) {
    return Serial.read();
  }
}

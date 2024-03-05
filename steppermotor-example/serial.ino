void serialSetup() {
  Serial.begin(9600);
}

int serialRead() {
  if (Serial.available() > 0) {
    return Serial.parseInt();
  }
}

#define busyled1 2

void busyState(bool state) {
  if (state) {
    digitalWrite(busyled1, HIGH);
  } else {
    digitalWrite(busyled1, LOW);
  }
}

void setup() {
  pinMode(busyled1, OUTPUT);
}

void loop() {
  busyState(true);
  delay(1000);

  busyState(false);
  delay(1000);
}

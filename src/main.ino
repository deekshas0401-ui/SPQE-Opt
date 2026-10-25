// SPQE-Opt: ESP32 firmware (prototype skeleton)
// Status: work in progress

void setup() {
  Serial.begin(115200);
  // TODO: initialise voltage/current sensors
  // TODO: initialise PWM output for MPPT converter
}

void loop() {
  // TODO: read solar voltage and current
  // TODO: run MPPT (perturb and observe) and update PWM duty cycle
  // TODO: measure power factor and adjust the PFC stage
  // TODO: print readings over Serial
  delay(100);
}

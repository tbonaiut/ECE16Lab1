const int pwmFrequency = 5000; //PWM frequncy
const int pwmChannel = 0; //PWM channel
const int pwmResolution = 8; //Bit resolution for our PWM channel
const int motorPin = 18; //Pin for our motor

void setupMotor() {
  //Configure our PWM to those specific to pwmChannel
  ledcSetup(pwmChannel, pwmFrequency, pwmResolution);
  //Attach our pwmChannel to our output GPIO
  ledcAttachPin(motorPin, pwmChannel);
}

void activateMotor(int motorPower) {
  ledcWrite(pwmChannel, motorPower);
}

void deactivateMotor() {
  ledcWrite(pwmChannel, 0);
}

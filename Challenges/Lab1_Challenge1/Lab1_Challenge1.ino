int ax = 0;
int ay = 0;
int az = 0;
int sampleTime = 0;
int prevState;
int currState;
unsigned long timePass = 0;
unsigned long timeTotal = 0;

void setup() {
  setupAccelSensor();
  prevState = detectGesture();
  Serial.begin(9600);

}
  

void loop() {
  sampleSensors();
  /*
  Serial.print("x:");
  Serial.print(ax);
  Serial.print(", y:");
  Serial.print(ay);
  Serial.print(", z:");
  Serial.println(az);
  */
  
  timeTotal = millis();
  currState = detectGesture();
  if((currState != prevState) && (timeTotal - timePass >= 1000)) {
    if(currState == 0) {
      timePass = timeTotal;
      Serial.write("Up\n");
      prevState = currState;
    }
    else if((currState == 1) && (timeTotal - timePass >= 1000)) {
      timePass = timeTotal;
      Serial.write("Down\n");
      prevState = currState;
    }
    else if(timeTotal - timePass >= 1000) {
      timePass = timeTotal;
      Serial.write("Shaking\n");
      prevState = currState;
    }
  }

}

int sampleRate = 100; // Sensor reading Frequency (Hz)
unsigned long sampleDelay = 1e6/sampleRate; //Time(μs) between samples
unsigned long timeStart = 0; //Start time timing variable
unsigned long timeEnd = 0; //End time timing variable

bool sampleSensors() {
  timeEnd = micros();
  if(timeEnd - timeStart >= sampleDelay) {
    timeStart = timeEnd;

    // Read the sensors and store their outputs in global variables
    sampleTime = millis();
    readAccelSensor();     // values stored in "ax", "ay", and "az"
    return true;
  }

  return false;
}

# Arduino-MPR-121-Setup
# Hookup Guide
https://learn.adafruit.com/adafruit-mpr121-12-key-capacitive-touch-sensor-breakout-tutorial/wiring



#Arduino Code Setup
1. First install the Adafruit MPR121 library. You can install this from the arduino IDE; Tools -> Managa Libraries -> type "Adafruit MPR121"


# Streaming the Data
The data is streamed at 200Hz (delay of 5ms). The arduino sketch streams teh cpaacitive data from all the 12 channels (0-11). To select a specific channel, just use comment the other channels. For e.g. if you want to stream the data for Electrode 0, then comment all lines in the loop function except:

  Serial.print(cap.filteredData(0));
  Serial.print("\t");

  Serial.print("\n");
  
  

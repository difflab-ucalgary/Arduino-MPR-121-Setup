#include <Adafruit_MPR121.h>

#include <Wire.h>
#include "Adafruit_MPR121.h"
int irqpin = 2;

Adafruit_MPR121 cap = Adafruit_MPR121();
void setup() {
  // put your setup code here, to run once:
  while (!Serial);        // needed to keep leonardo/micro from starting too fast!
  Serial.begin(115200);
  Serial.println("Adafruit MPR121 Capacitive Touch sensor test");
  // Default address is 0x5A, if tied to 3.3V its 0x5B
  // If tied to SDA its 0x5C and if SCL then 0x5D
  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");

}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(cap.filteredData(11));
  Serial.print("\t");

  Serial.print(cap.filteredData(10));
  Serial.print("\t");

  Serial.print(cap.filteredData(9));
  Serial.print("\t");

  Serial.print(cap.filteredData(8));
  Serial.print("\t");

  Serial.print(cap.filteredData(7));
  Serial.print("\t");

  Serial.print(cap.filteredData(6));
  Serial.print("\t");

  Serial.print(cap.filteredData(5));
  Serial.print("\t");

  Serial.print(cap.filteredData(4));
  Serial.print("\t");

  Serial.print("\n");

  delay(10);
}

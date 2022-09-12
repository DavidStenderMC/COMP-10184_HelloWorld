#include <Arduino.h>

/*
  I, David Stender, 000828140 certify that this material is my original work.
  No other person's work has been used without due acknowledgement.
*/

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  Serial.println("\n\n");
  Serial.println("David Stender #000828140");
  Serial.print("ESP Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
  Serial.println("\n");
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Milliseconds since D1 Mini was started = ");
  Serial.println(millis());
  delay(2000);
}
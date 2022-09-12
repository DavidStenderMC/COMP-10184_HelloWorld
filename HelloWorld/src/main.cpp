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
  Serial.println(ESP.getChipId());
  Serial.println(ESP.getFlashChipId());
  Serial.println("\n");
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(millis());
  delay(2000);
}
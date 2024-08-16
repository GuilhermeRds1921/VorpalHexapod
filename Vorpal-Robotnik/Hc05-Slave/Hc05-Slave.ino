#include <SoftwareSerial.h>
#define LED_BUILTIN 8

SoftwareSerial BTSerial(10, 11); // RX, TX pins for HC-05

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // set LED pin as output
  BTSerial.begin(9600); // initialize HC-05 serial communication
}

void loop() {
  /*digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);*/
  if (BTSerial.available()) {
    char c = BTSerial.read(); // read data from HC-05
    if (c == '1') {
      digitalWrite(LED_BUILTIN, HIGH); // turn on LED
      
    } else if (c == '0') {
      digitalWrite(LED_BUILTIN, LOW); // turn off LED
      
    }
  }
}

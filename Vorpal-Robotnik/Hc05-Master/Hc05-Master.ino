#include <SoftwareSerial.h>
#define LED_BUILTIN 8

SoftwareSerial BTSerial(10, 11); // RX, TX pins for HC-05

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // set LED pin as output
  BTSerial.begin(9600); // initialize HC-05 serial communication
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn on LED
  BTSerial.write('1'); // send "1" to Arduino #2 via HC-05
  delay(1000); // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // turn off LED
  BTSerial.write('0'); // send "0" to Arduino #2 via HC-05
  delay(1000); // wait for 1 second
}

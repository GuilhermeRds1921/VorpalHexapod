int key_pin = A0;
int key_read;
int previousK = 1023;
String key_id;

void setup() {
  Serial.begin(9600);
}

void loop() {
  key_read = analogRead(key_pin);
  if(key_read > 400 and key_read <500 )key_id ="LEFT";
  if(key_read > 20 and key_read < 100 )key_id ="RIGHT";
  if(key_read > 290 and key_read < 350 )key_id = "UP";
  if(key_read > 110 and key_read < 200 )key_id = "DOWN";
  if(key_read > 700 and key_read < 800)key_id = "SELECT";

  if(key_read  != previousK and key_read < 900){
    Serial.print(key_read);
    Serial.println("  - " +key_id + " key pressed");
    previousK = key_read;
  }
}

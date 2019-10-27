int motorPin = 3;

void setup() {
 pinMode(motorPin, OUTPUT);
 pinMode(2, INPUT);
 Serial.begin(9600);
}

void loop() {
   digitalWrite(motorPin, HIGH);
   Serial.println(digitalRead(2));
}

int motorPin = 9;
int s;

void setup() {
   pinMode(motorPin, OUTPUT);
   Serial.begin(9600);
   while (! Serial);
   Serial.println("Speed 0 to 255");
}

void loop() {
   if (Serial.available()) {
      int speed = Serial.parseInt();
      if (speed >= 0 && speed <= 255) {
         //map(speed,0,10,0,255);
         analogWrite(motorPin,speed);
      }
   }
}

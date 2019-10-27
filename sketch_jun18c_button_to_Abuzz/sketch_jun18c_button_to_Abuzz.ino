const int buttpin = 2;
const int buzzpin = 9;

int buttstate;
int buzzstate = LOW;

void setup() {

  pinMode(buttpin, INPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  buttstate = digitalRead(buttpin);
  Serial.print("Button ");
  Serial.println(buttstate);
  Serial.print("Buzzer ");
  Serial.println(buzzstate);
  if(buttstate == HIGH)
  {
    buzzstate = HIGH;
    tone(buzzpin, 1000);
  }
  else
  {
    buzzstate = LOW;
    noTone(buzzpin);
  }

}

//const int led = 3;
//const int buzz = 4;
const int b1 = 5;
//const int b2 = 6;
//const int b3 = 7;

int but = 0;

void setup() {
//  pinMode(led, OUTPUT);
//  pinMode(buzz, OUTPUT);
  pinMode(b1, INPUT);
//  pinMode(b2, INPUT);
//  pinMode(b3, INPUT);
  Serial.begin(9600);
}

void loop() {
  but = digitalRead(b1);
  Serial.println(b1);
}



const int led1 = 13;
const int led2 = 11;
const int led3 = 12;
const int led4 = 2;
const int but1 = 5;
const int but2 = 6;
const int but3 = 7;
const int but4 = 9;
const int butc = 10;
const int buzz = 3;
const int debug = 4;
const int buzz2 = 8;

int buttonState =0;
int butcState =0;
int debugstate=0;
int analog;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
  pinMode(but3, INPUT);
  pinMode(but4, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(butc, INPUT);
  pinMode(debug, INPUT);
  pinMode(buzz2, OUTPUT);
  Serial.begin(9600);
  noTone(buzz);
}

void loop() {
//Find BUTCSTATE
butcState = digitalRead(butc);
debugstate = digitalRead(debug);
analog = analogRead(A0);

// Pot buzzer
tone(buzz2, analog/2.56, 3000);
//noTone(buzz2);

// Find Which Button is pressed
 if( digitalRead(but1) == 1)
 {
    buttonState = 1;
 }
 else if(digitalRead(but2) == 1)
 {
    buttonState = 2;
 }
 else if(digitalRead(but3) == 1)
 {
    buttonState = 3;
 }
 else if(digitalRead(but4) == 1)
 {
    buttonState = 4;
 }
 else
    buttonState = 0;

int arr[8] = {240,270,300,320,360,400,450,490};

// Play tones and light
 if( buttonState == 1)
 {
    if( butcState == 1)
        tone(buzz,arr[4],30);
    else
        tone(buzz,arr[0],30);
    digitalWrite(led1, HIGH);
    delay(20);
    digitalWrite(led1, LOW);
 }
 else if(buttonState == 2)
 {
    if( butcState == 1)
        tone(buzz,arr[5],30);
    else
        tone(buzz,arr[1],30);
    digitalWrite(led2, HIGH);
    delay(20);
    digitalWrite(led2, LOW);
 }
 else if(buttonState == 3)
 {
    if( butcState == 1)
        tone(buzz,arr[6],30);
    else
        tone(buzz,arr[2],30);
    digitalWrite(led3, HIGH);
    delay(20);
    digitalWrite(led3, LOW);
 }
 else if(buttonState == 4)
 {
    if( butcState == 1)
        tone(buzz,arr[7],30);
    else
        tone(buzz,arr[3],30);
    digitalWrite(led4, HIGH);
    delay(20);
    digitalWrite(led4, LOW);
 }
 else
    noTone(buzz);

 Serial.println(debugstate);
 

}

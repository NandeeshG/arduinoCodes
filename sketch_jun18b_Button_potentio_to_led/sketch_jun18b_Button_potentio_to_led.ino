



const int buttonPin = 2;
const int ledPin = 13;
const int ledPin2 = 12;
const int ledPin3 = 9;

int brightness = 0;
int fade = 25;
int buttonState = 0;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
Serial.begin(9600);
}

void loop() {
buttonState = digitalRead(buttonPin);
int potValue = analogRead(A0);

if (buttonState == LOW)
{
analogWrite(ledPin3, potValue/10);
Serial.println(potValue);
}

if (buttonState == HIGH)
{ 
  
  digitalWrite(ledPin2, HIGH);
 
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);


  analogWrite(ledPin3, brightness);
  brightness += fade;
  if( brightness <= 0 || brightness >=100 )
    {
       fade = -fade;
    }

}
else
{ 
  if(potValue == 0) { digitalWrite(ledPin3, LOW); }
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin, LOW);
  delay(1);
}

    delay(30);
}


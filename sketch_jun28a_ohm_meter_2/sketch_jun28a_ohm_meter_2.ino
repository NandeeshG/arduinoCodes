//#define V 3.3
const int ss = 2;

void setup() {
  pinMode(A0,INPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}


void loop() {
  float V = 3.3;
  if(digitalRead(ss) == 1)
  {
 // float r2 = 220,r1;
  float v1 = analogRead(A0), vnew;
  vnew = (v1/1024) * V;
 // r1 = (vnew*r2)/(V-vnew);
  Serial.print("v1= "); Serial.println(v1);
  Serial.print("Vnew= "); Serial.println(vnew);
 // Serial.print("R2= "); Serial.println(r2);
 // Serial.print("R1= "); Serial.println(r1);
  Serial.println("----------");
  delay(5000);
  }
  else
  {
    Serial.println("Paused");
    Serial.println("----------");
    delay(5000);
  }
}

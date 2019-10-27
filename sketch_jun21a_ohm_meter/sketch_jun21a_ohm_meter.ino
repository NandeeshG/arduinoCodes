int analogPin= A0;
int raw= 0;
int Vin= 5;
float Vout= 0;
float R1= 10000;
float R2= 0;
float buffer1= 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
raw= analogRead(analogPin);
if(raw) 
{
Vout= (raw/1024.0) * Vin;
buffer1= (Vin/Vout) -1;
R2= R1 * buffer1;
Serial.print("Vout: ");
Serial.println(Vout);
Serial.print("R2: ");
Serial.println(R2);
delay(1000);
}
}


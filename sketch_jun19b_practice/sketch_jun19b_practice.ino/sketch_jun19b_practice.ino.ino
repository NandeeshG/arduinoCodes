const int b1 = 7;
const int b2 = 8;


void setup() {


}

void loop() {

for( int i =1; i<=3; i++)
{
    tone(b1,300,200);
    noTone(b1);
    tone(b2,200,200);
    noTone(b2);
}

for(int j =1; j<=3; j++)
{
    tone(b2,400,200);
    noTone(b2);
}

}

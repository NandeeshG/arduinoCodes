#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13); 

const byte nR = 4, nC = 4;

char keymap[nR][nC] = 
{ 
  '1' , '2' , '3' , 'A' ,
  '4' , '5' , '6' , 'B' ,
  '7' , '8' , '9' , 'C' ,
  '*' , '0' , '#' , 'D'
};

byte pR[nR] = {7,6,5,4}, pC[nC] = {3,2,A4,A5};

Keypad pad = Keypad(makeKeymap(keymap),pR,pC,nR,nC);

char value;

void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  for(int i = 2; i<=8 ; i++)
  {
    pinMode(i, INPUT);
  }
}


void loop() {

  lcd.noDisplay();
  delay(2);
}



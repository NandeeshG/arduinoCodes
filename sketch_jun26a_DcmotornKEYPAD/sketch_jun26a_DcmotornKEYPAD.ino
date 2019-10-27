
#include <Keypad.h>
const byte numRows= 4; //number of rows on the keypad
const byte numCols= 4; //number of columns on the keypad
int motorPin = 10 ;
/*keymap defines the key pressed according to the row and columns just as appears on the keypad*/
char keymap[numRows][numCols]=
{
'1', '2', '3', 'A',
'4', '5', '6', 'B',
'7', '8', '9', 'C',
'*', '0', '#', 'D'
};
//Code that shows the the keypad connections to the arduino terminals
byte rowPins[numRows] = {9,8,7,6}; //Rows 0 to 3  
byte colPins[numCols]= {5,4,3,2}; //Columns 0 to 3
//initializes an instance of the Keypad class
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);
void setup()
{
Serial.begin(9600);
   pinMode(motorPin, OUTPUT);
}
//If key is pressed, this key is stored in ‘keypressed’ variable
void loop()
{
char keypressed = myKeypad.getKey();
if (keypressed == '1')
{
Serial.println(keypressed);
}
delay(1);  
   if (keypressed != NO_KEY) {
      int speed;
      switch(keypressed){
        case '1' : speed = 40;
                    break;
        case '2' : speed = 60;
                    break;
        case '3' : speed = 80;
                    break;
        case '4' : speed = 100;
                    break;
        case '5' : speed = 120;
                    break;
        case '6' : speed = 140;
                    break;
        case '7' : speed = 160;
                    break;
        case '8' : speed = 180;
                    break;
        case '9' : speed = 220;
                    break;
        case 'A' : speed = 0;
                    break;
               
      }
       analogWrite(motorPin,speed);
      }
   }



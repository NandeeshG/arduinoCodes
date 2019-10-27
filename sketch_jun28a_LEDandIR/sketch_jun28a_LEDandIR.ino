//Turn on all LEDs at once by pressing a key and then turn them off using another key 

int fade;

void setup() {
pinMode(9, OUTPUT);

}

void loop() {

 for(fade = 0; fade<=200; fade+=10)
 {
    analogWrite(9, fade); 
    delay(200);
 }
}

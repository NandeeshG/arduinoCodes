//WORKS. READS IR REMOTE CODES.


#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

const int rec_pin = 13;
IRrecv recvr(rec_pin);
decode_results result;

void setup() {
  Serial.begin(9600);
  recvr.enableIRIn();  

}

void loop() {
  if(recvr.decode(&result))
  {
      Serial.println(result.value, HEX);
      recvr.resume();
  }

}

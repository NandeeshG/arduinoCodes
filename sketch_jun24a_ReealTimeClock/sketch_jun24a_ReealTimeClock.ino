const int
  clk = 4,
  dat = 5,
  rst = 6,
  bug = 7;

int time1, date1;

void setup() {
 pinMode(6, OUTPUT);
 pinMode(4, INPUT);
 pinMode(5, INPUT);
 pinMode(7, INPUT);
// digitalWrite(6, LOW);
 Serial.begin(9600);
}

void loop() {
// digitalWrite(6, LOW);
 time1 = digitalRead(4);
 date1 = digitalRead(5);
 Serial.print("Time ");
 Serial.println(time1);
 Serial.print("Date ");
 Serial.println(date1);
 Serial.println(digitalRead(bug));
 delay(100);
}

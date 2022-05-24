
void setup() {
  pinMode(16, OUTPUT);
}

void loop(){
   digitalWrite(16,HIGH);//turning on the led
   delay(1000);
   digitalWrite(16,LOW); // turning off the led   
   delay(1000);
}

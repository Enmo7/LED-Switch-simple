void setup() {
  // put your setup code here, to run once:
  pinMode(53, OUTPUT);
  pinMode(A0, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(A0);
  if (val==HIGH)
  {
    digitalWrite(53, HIGH);
    delay(5000);
  }
  else{
    digitalWrite(53,LOW);
  }
}

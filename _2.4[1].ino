void setup() {
  // put your setup code here, to run once:
pinMode (A0, INPUT);
digitalWrite(A0,1);
pinMode (12, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(A0)==LOW){
      digitalWrite(12,1);
}
else {
        digitalWrite(12,LOW);
}
}

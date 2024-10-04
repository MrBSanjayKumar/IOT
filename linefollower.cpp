char data=0;
const int m1=13;
const int m2=12;
const int m3=11;
const int m4=10;
const int ir_1=7;
const int ir_2=6;
int irstatus1;
int irstatus2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir_1,INPUT);
  pinMode(ir_2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  irstatus1=digitalRead(ir_1);
  irstatus2=digitalRead(ir_2);
  Serial.print("ir1");
  Serial.println(irstatus1);
   Serial.print("ir2");
   Serial.println(irstatus2);
  
  if(irstatus1==HIGH && irstatus2==HIGH)
  {
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }
  else if (irstatus1==LOW && irstatus2==LOW)
  {
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
  }
  else if (irstatus1==LOW && irstatus2==HIGH)
  {
    //digitalWrite(m1,LOW);
    //digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }
  else if (irstatus1==HIGH && irstatus2==LOW)
  {
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    //digitalWrite(m3,LOW);
    //digitalWrite(m4,HIGH);
  }
}

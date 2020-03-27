#define s1 7
#define s2 9
#define s3 6

#define m11 12
#define m12 3
#define m21 10
#define m22 11




void setup()
{
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s1,INPUT);
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
  Serial.begin(9600);
}
 void rvrs()
     {digitalWrite(m11,HIGH);
     digitalWrite(m12,LOW);
     digitalWrite(m21,LOW);
     digitalWrite(m22,HIGH);
     }



 //fast straight turn
 void fstrn()
     {digitalWrite(m11,LOW);
     digitalWrite(m12,HIGH);
     digitalWrite(m21,HIGH);
     digitalWrite(m22,LOW);
     }

 void stp()
 {digitalWrite(m11,LOW);
digitalWrite(m12,LOW);
digitalWrite(m21,LOW);
digitalWrite(m22,LOW);
 }

void loop()
{
  if ((digitalRead(s2)==0 && digitalRead(s3)==0)||(digitalRead(s1)==0 && digitalRead(s3)==0)||(digitalRead(s2)==0 && digitalRead(s1)==0) )
  {
    delay(50);
    fstrn();
  Serial.print("full white");
  delay(2000);
  Serial.println("mata");
  rvrs();
  delay(50);
  Serial.println("rammu");
  stp();
  delay(2000);
  Serial.println("568545");
  }
   if (digitalRead(s2)==1 && digitalRead(s3)==1)
  stp();
  Serial.println("full ");
  


}

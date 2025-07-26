#include<Servo.h>

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;

int const Potpin1=A0;
int const Potpin2=A1;
int const Potpin3=A2;
int const Potpin4=A3;

int Pot1;
int Pot2;
int Pot3;
int Pot4;

int Ang1;
int Ang2;
int Ang3;
int Ang4;

void setup() {
  // put your setup code here, to run once:
  myServo1.attach(3);
  myServo2.attach(5);
  myServo3.attach(9);
  myServo4.attach(10);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Pot1=analogRead(Potpin1);
  Pot2=analogRead(Potpin2);
  Pot3=analogRead(Potpin3);
  Pot4=analogRead(Potpin4);
  Serial.print("Pot:");
  
  Ang1=map(Pot1,0,1023,0,179);
  Serial.print("   Angulo1= ");
  Serial.print(Ang1);
  myServo1.write(Ang1);
  Ang2=map(Pot2,0,1023,0,140);
  Serial.print("   Angulo2= ");
  Serial.print(Ang2);
  myServo2.write(Ang2);
  Ang3=map(Pot3,0,1023,60,170);
  Serial.print("   Angulo3= ");
  Serial.print(Ang3);
  myServo3.write(Ang3);
  Ang4=map(Pot4,0,1023,90,179);
  Serial.print("   Angulo4= ");
  Serial.println(Ang4);
  myServo4.write(Ang4);
  delay(20);
}

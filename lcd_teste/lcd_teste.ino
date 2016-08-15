#include <LiquidCrystal.h>
//#include <Ultrasonic.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  analogWrite(9,100);
  //triger -  8 | echo - 13
 // Ultrasonic ultrasonic(8,13);
  pinMode(8,OUTPUT);
  pinMode(13,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float duracao, distancia;
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);
  duracao=pulseIn(13,HIGH);
  distancia=(duracao/2.0)/29.1;
   
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.write("distancia");
  //delay(500);
  lcd.setCursor(4,1);
  lcd.print(distancia);
  delay(200);
  

}

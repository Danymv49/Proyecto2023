/* Proyecto tecnologico 2023 Parqueo inteligente 
    integrantes:
    Manfredy Daniel Mazariegos Villatoro 
    Jose Armando Morales Mejia 
    Fernando Jose Gonzalez Mejia */
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
#include <Servo.h>
Servo servo;
Servo servo1;
int ser1 = 10;
int ser = 9;
int sen1 = 8;
int sen2 = 7;
int sen3 = 6;
int sen4 = 5;
int sen5 = 4;
int sen6 = 3;
String m1 = " ";
String m2 = " ";
String m3 = " ";
String m4 = " ";
String m5 = " ";

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(sen1, INPUT);
  pinMode(sen2, INPUT);
  pinMode(sen3, INPUT);
  pinMode(sen4, INPUT);
  pinMode(sen5, INPUT);
  pinMode(sen6, INPUT);
  servo.attach(ser);
  servo.attach(ser1);


}

void loop() {

  int i = 0;
  i = digitalRead(sen1);
    if (i>0){
    servo.write(90);
    }else{ 
      servo.write(0);
    }
    int o = 0; 
    o = digitalRead(sen2);
    if(o>0){
      servo1.write(90);
      }else{ 
        servo1.write(0);
      }
   int p1 = 0;
   p1 = digitalRead(sen2);
   if (p1 == 1){
     m1 = "X";
   }else { 
     m1 = "O" ;  
   }
  int p2 = 0;
   p2 = digitalRead(sen3);
   if (p2 == 1){
    m2 = "X";
   }else { 
    m2 = "O";
   }
   
 int p3 = 0;
   p3 = digitalRead(sen4);
   if (p3 == 1){
    m3 = "X";
   }else { 
    m3 = "O";
    
   }
  int p4 = 0;
   p4 = digitalRead(sen5);
   if (p4 == 1){
    m4 = "X";
   }else { 
    m4 = "O";
   }
  

   {

  lcd.clear();
  lcd.setCursor(9,0);
  lcd.print("p1=" + m1);
  lcd.setCursor(7,0);
  lcd.print("p2_"+m2);
  lcd.setCursor(7,1);
  lcd.print("p3_"+m3);
  lcd.setCursor(9,1);
  lcd.print("p4_"+m4);


   }
    if(p1==1 & p2==1 & p3==1 & p4==1){
   servo.write(0);
   }else {
    servo.write(90);
   }
  
  delay(200);
 
 
    
 
}

/* Proyecto tecnologico 2023 Parqueo inteligente 
    integrantes:
    Manfredy Daniel Mazariegos Villatoro 
    Jose Armando Morales Mejia 
    Fernando Jose Gonzalez Mejia */
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
#include <Servo.h>
Servo servo;
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
 


}

void loop() {
  int i = 0;
  i = digitalRead(sen1);
  //Serial.println(i);
  if (i>0){
    servo.write(90);
    }else{ 
      servo.write(0);
    }
   int p1 = 0;
   p1 = digitalRead(sen2);
   if (p1 = 0){
     m1 = "O";
   }else { 
     m1 = "X" ;  
   }
  int p2 = 0;
   p2 = digitalRead(sen3);
   if (p2 = 0){
    m2 = "O";
   }else { 
    m2 = "X";
   }
   
 int p3 = 0;
   p3 = digitalRead(sen4);
   if (p3 = 0){
    m3 = "O";
   }else { 
    m3 = "x";
    
   }
  int p4 = 0;
   p4 = digitalRead(sen5);
   if (p4 = 0){
    m4 = "O";
   }else { 
    m4 = "x";
   }
  int p5 = 0;
   p5 = digitalRead(sen6);
   if (p5 = 0){
    m5 = "O";
   }else { 
    m5 = "X";
   }
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("p1=" + m1);
  lcd.setCursor(7,0);
  lcd.print("p2_"+m2);
  lcd.setCursor(13,0);
  lcd.print("p3_"+m3);
  lcd.setCursor(4,1);
  lcd.print("p4_"+m4);
  lcd.setCursor(10,1);
  lcd.print("p5_"+m5);
  delay(200);
 
 
    
 
}






 

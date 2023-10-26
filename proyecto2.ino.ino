/* Proyecto tecnologico 2023 parqueo inteligente 
Integrantes 
Manfredy Daniel Mazariegos Villatoro 
Jose Armando Morales Mejía 
Fernando Jose Gonzaléz Mejía
*/

// librerias 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4)
#include <Servo.h> 

//variables de la entrada y salida 
Servo servo1;
Servo servo2;
int sensorentrada = 13;
int sensorsalida = 12;
int serentrada = 11;
int sersalida= 10; 

//variables para los sensores de parqueo 
int sensor1 = 9;
int sensor2 = 8;
int sensor3 = 7;
int sensor4 = 6;

//variables para mostrar parqueos ocupados en lcd 
String m1= "";
String m2= "";
String m3= "";
String m4= "";

void setup() {
lcd.init();
lcd.backlight();
pinMode(sensorentrada, INPUT);
pinMode(sensorsalida, INPUT);
servo1.attach(serentrada);
servo2.attach(sersalida);

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);
/*declarando las funciones que solo
  se ejecutaran una vez */

}

void loop() {

  //proceso de entrada 
  int entrada = 0;
  entrada = digitalRead(sensorentrada);
  if(entrada>0){
    servo1.write(90);
  }else{
    servo1.write(0);
  }

  //proceso de salida 
  int salida = 0;
  salida = digitalRead(sensorsalida);
  if(salida>0){
    servo2.write(90);
  }else{ 
    servo2.write(0);
  }

//Sistema de parqueos
  int p1 = 0;
  p1 = digitalRead(sensor1);
  if(p1 == 1){
    m1 = "X";
  }else {
    m1 = "O";
  }

  int p2 = 0;
  p2 = digitalRead(sensor2);
  if(p2 == 1){
    m2 = "O";
  }else {
    m2 = "X";
  }

  int p3 = 0;
  p3 = digitalRead(sensor3);
  if(p3 == 1){
    m3 = "O";
  }else {
    m3 = "X";
  }

  int p4 = 0;
  p4 = digitalRead(sensor4);
  if(p4 == 1){
    m4 = "O";
  }else {
    m4 = "X";
  }

//Funcion en pantalla lcd 
lcd.clear();
lcd.setCursor(3,0);
lcd.print("p1=" + m1);
lcd.setCursor(11,0);
lcd.print("p2=" + m2);
lcd.setCursor(4,1);
lcd.print("p3=" + m3);
lcd.setCursor(10,1);
lcd.print("p4=" + m4);
delay(200);

//No dejar pasar mas carros cuando todos esten ocupados 
//variables 
int se1 = 0;
int se2 = 0;
int se3 = 0;
int se4 = 0; 

//leer pines digitales 
se1 = digitalRead(p1);
se2 = digitalRead(p2);
se3 = digitalRead(p3);
se4 = digitalRead(p4);

//condicional 
if( se1 == 1 & se2 == 1 & se3 == 1 & se4 == 1 ){
  servo1.write(0);
}else{ 
  servo1.write(90);
}
}/* Proyecto tecnologico 2023 parqueo inteligente 
Integrantes 
Manfredy Daniel Mazariegos Villatoro 
Jose Armando Morales Mejía 
Fernando Jose Gonzaléz Mejía
*/

// librerias 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4)
#include <Servo.h> 

//variables de la entrada y salida 
Servo servo1;
Servo servo2;
int sensorentrada = 13;
int sensorsalida = 12;
int serentrada = 11;
int sersalida= 10; 

//variables para los sensores de parqueo 
int sensor1 = 9;
int sensor2 = 8;
int sensor3 = 7;
int sensor4 = 6;

//variables para mostrar parqueos ocupados en lcd 
String m1= "";
String m2= "";
String m3= "";
String m4= "";

void setup() {
lcd.init();
lcd.backlight();
pinMode(sensorentrada, INPUT);
pinMode(sensorsalida, INPUT);
servo1.attach(serentrada);
servo2.attach(sersalida);

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);
/*declarando las funciones que solo
  se ejecutaran una vez */

}

void loop() {

  //proceso de entrada 
  int entrada = 0;
  entrada = digitalRead(sensorentrada);
  if(entrada>0){
    servo1.write(90);
  }else{
    servo1.write(0);
  }

  //proceso de salida 
  int salida = 0;
  salida = digitalRead(sensorsalida);
  if(salida>0){
    servo2.write(90);
  }else{ 
    servo2.write(0);
  }

//Sistema de parqueos
  int p1 = 0;
  p1 = digitalRead(sensor1);
  if(p1 == 1){
    m1 = "X";
  }else {
    m1 = "O";
  }

  int p2 = 0;
  p2 = digitalRead(sensor2);
  if(p2 == 1){
    m2 = "O";
  }else {
    m2 = "X";
  }

  int p3 = 0;
  p3 = digitalRead(sensor3);
  if(p3 == 1){
    m3 = "O";
  }else {
    m3 = "X";
  }

  int p4 = 0;
  p4 = digitalRead(sensor4);
  if(p4 == 1){
    m4 = "O";
  }else {
    m4 = "X";
  }

//Funcion en pantalla lcd 
lcd.clear();
lcd.setCursor(3,0);
lcd.print("p1=" + m1);
lcd.setCursor(11,0);
lcd.print("p2=" + m2);
lcd.setCursor(4,1);
lcd.print("p3=" + m3);
lcd.setCursor(10,1);
lcd.print("p4=" + m4);
delay(200);

//No dejar pasar mas carros cuando todos esten ocupados 
//variables 
int se1 = 0;
int se2 = 0;
int se3 = 0;
int se4 = 0; 

//leer pines digitales 
se1 = digitalRead(p1);
se2 = digitalRead(p2);
se3 = digitalRead(p3);
se4 = digitalRead(p4);

//condicional 
if( se1 == 1 & se2 == 1 & se3 == 1 & se4 == 1 ){
  servo1.write(0);
}else{ 
  servo1.write(90);
}
}

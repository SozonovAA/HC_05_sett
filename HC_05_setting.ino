#include <SoftwareSerial.h>
#include "GyverButton.h"
#include <Time.h>

int gLedPin = 13;
int gRxPin = 12;
int gTxPin = 10;
//GButton butt1(2);  
SoftwareSerial BTSerial(gRxPin, gTxPin);
char q;
void setup() {
//  # 38400 - для метода №1, 9600 - для метода №2
pinMode(gRxPin, INPUT);
pinMode(gTxPin, OUTPUT);

pinMode(2, INPUT);

 //butt1.setDebounce(0);
  BTSerial.begin(38400);
  
  Serial.begin(9600);
  delay(500);
}
int a=0;
void loop() {

//  butt1.tick();  // обязательная функция отработки. Должна постоянно опрашиваться
//  if (butt1.isClick()) Serial.println("Click");         // проверка на один клик
//  if (butt1.isSingle()) Serial.println("Single");       // проверка на один клик
//  if (butt1.isDouble()) Serial.println("Double");       // проверка на двойной клик
//  if (butt1.isTriple()) Serial.println("Triple");       // проверка на тройной клик
//  if (butt1.hasClicks())                                // проверка на наличие нажатий
//    Serial.println(butt1.getClicks());                  // получить (и вывести) число нажатий
 
//  
//  if(digitalWrite(2)){
//    a++
//
//  }
//  else {
//    Serial.println(a);
//    a=0;
//  }
//  
  
  
  if (BTSerial.available()) {
    Serial.write(BTSerial.read());
    //Serial.write(BTSerial.read());
    
  }
  if (Serial.available()) {
    BTSerial.write(Serial.read());
  }
}

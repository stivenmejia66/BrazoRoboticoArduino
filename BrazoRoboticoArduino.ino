#include <Servo.h> 
#define motorbase 12 // declaro el pin de la base 


Servo Base;//declaro el servomotor de la base 

void setup() {
  // put your setup code here, to run once:
  
Base.attach(motorbase);//Inicializamos el servo
Base.write(90);

}

void loop() {
  // put your main code here, to run repeatedly:

}

#include <Servo.h>9

Servo x;
Servo base;
Servo z;
Servo garra;

int pos = 180;
void setup() {
  base.attach(9);
  x.attach(10);
  z.attach(11);
  garra.attach(12);
}


void loop() {
//  para base----------------------
  for (pos = 0; pos <= 180; pos++)
  {
    base.write(pos);
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1)
  {
    base.write(pos);
    delay(10); //fin base-----------
  }
  //servo izquierdo-----------------
  for (pos = 90; pos <= 180; pos++)
  {
    x.write(pos);
    delay(10);
  }
  for (pos = 180; pos >= 90; pos -= 1)
  {
    x.write(pos);
    delay(10); //fin servo izquierdo--
  }
// servo derecho----------------------
for (pos = 0; pos <= 180; pos++)
  {
    z.write(pos);
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1)
  {
    z.write(pos);
    delay(10); // fin servo derecho--- 
  }
  //servo garra-----------------------
  for (pos =-50; pos <= 25; pos++)
  {
    garra.write(pos);
    delay(10);
  }
  for (pos = 25; pos >=-50; pos -= 1)
  {
    garra.write(pos);
    delay(10); // fin servo garra--- 
  }
}

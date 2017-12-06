#include <Motor.h>

Motor motor1(2,3,9); // put the pins of the motor 1 (L293d) (OUTPUT1,OUTPUT2,PWM)
Motor motor2(4,5,11); // put the pins of the motor 2 (L293d) (OUTPUT1,OUTPUT2,PWM)

void setup() {
  motor1.begin(); // initialize the motor 1
  motor2.begin(); // initialize the motor 2

}


void loop() {

  for (int i=0;i<=100;i+=10)
  {
    motor1.forward(i); //run the motor 1 forward direction
    motor2.forward(i); //run the motor 2 forward direction
    delay(1000);
  }
  for (int i=0;i<=100; i +=10)
  {
    motor1.rearward(i); //drive the motor 1 to the rearward direction
    motor2.rearward(i); //drive the motor 2 to the rearward direction
    delay(1000);
    
  }

}

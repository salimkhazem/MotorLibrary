/*
* Library to control a Motor with L293D
* Developed by Salim Khazem
*/

#include "Motor.h"
#include <Arduino.h>


/*
* Constructor
* it has 3 pins
* (pin_1_OUTPUT,pin_2_OUTPUT,pin_PWM )
 */
Motor::Motor(int pin1,int pin2,int pinP): m_pin1(pin1),m_pin2(pin2),m_pinP(pinP)
{
 // Constructor
}

void Motor::begin()
/*
In this method we put the pins of motor in OUTPUT
so we have 3 pins,
*/
{
pinMode(m_pin1,OUTPUT);
pinMode(m_pin2,OUTPUT);
pinMode(m_pinP,OUTPUT);
    }

  void Motor::forward(int vit) // "vit" take value in the range(0-100 )
  /*
  *  This method allows the motor to be driven in the forward direction
    according to the speed defined
  *  The parameter "vit" is defined in percentage and mapped into pwm range(0-255)
  */
{
  m_speed = map(vit,0,100,0,255);  // Set the speed as a percentage and map it as 0 to 255
  digitalWrite(m_pin1,LOW);
  digitalWrite(m_pin2,HIGH);
  analogWrite(m_pinP,m_speed);
}
void Motor::rearward(int vit)
  /*
  *  This method allows the motor to be driven in the rearward direction
    according to the speed defined
  *  The parameter "vit" is defined in percentage and mapped into pwm range(0-255)
  */
{
  m_speed= map(vit,0,100,0,255);
  digitalWrite(m_pin1,HIGH);
  digitalWrite(m_pin2,LOW);
  analogWrite(m_pinP,m_speed);
}
void Motor::turnOff()
/*
* This method turns off the motor
*/
{
  digitalWrite(m_pin1,LOW);
  digitalWrite(m_pin2,LOW);
  analogWrite(m_pinP,0); 

}

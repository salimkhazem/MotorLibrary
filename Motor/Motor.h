/*
* Library to control a Motor with L293D
* Developed by Salim Khazem
*/

/*
    Public methods :

    * Motor (pin1,pin2,pinP) // constructor , it is used to instantiate the class  and pin1, pin2 are pins OUTPUT of motor, and pinP is the PWM pin to control motor 

    * begin()    // To assign the pins to OUTPUT

    * forward(int vit)  // This method allows the motor to be driven in the forward direction according to the speed defined 
        The parameter "vit" is defined in percentage(0-100) and mapped into pwm range(0-255)

    * rearward(int vit)  // This method allows the motor to be driven in the rearward direction according to the speed defined 
        The parameter "vit" is defined in percentage(0-100) and mapped into pwm range(0-255)

    * turnOff()  // This method turns off the motor 

*/



#ifndef Motor_h
#define Motor_h
#include <Arduino.h> // must include Arduino library to use arduino command (syntax) 
class Motor
{
public:
  Motor(int pin1, int pin2, int pinP); // Constructor
  void begin(); // Affectation method (turn on OUTPUT the pins )
  void forward(int vit); //Method to run the motor forward direction
  void rearward(int vit);  // Method to drive the motor to the rearward direction
  void turnOff();         // method to turn off the motor

private:
  /*
  * Private attributs
  */
  int m_pin1;
  int m_pin2;
  int m_pinP;
  int m_dir;
  int m_speed;

};


#endif

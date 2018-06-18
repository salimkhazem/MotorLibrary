/*===========================================
Motor library is placed under the MIT license 
Copyright (c) 2017 Salim Khazem

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
=========================================
*/

/*
* Library to control a Motor with L293D
* Developed by Salim Khazem
****************************************

    Public methods :
    **************

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

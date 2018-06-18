# MotorLibrary


* Library to control a Motor with L293D or L298 
* Developed by Salim Khazem



It is a library that allows you to control an Motor using an L293D or L298N



Installation:
1. Download the library: https://github.com/salimkhazem/MotorLibrary/archive/master.zip
2. (In the Arduino IDE) Sketch > Include Library > Add .ZIP Library > select the downloaded file > Open
3. You will find examples under File > Examples > MotorLibrary



Operation:

* To include the library you have to include the Motor library and this is done with this formula ( #include <Motor.h> )

* To create an instance: Motor object (pin1, pin2, pinPWM);

* For the assignment it is necessary to introduce: object.begin ();

* To run the motor in the forward direction: object.forward (speed_with_percentage);

* To run the motor in the reverse direction: object.rearward (speed_with_percentage);

* To stop the motor: object.turnOff ();


Contribution:

If you want contribute: 
* Fork the project 
* Add your branch 
* add your commits 
* Finally push your pull request



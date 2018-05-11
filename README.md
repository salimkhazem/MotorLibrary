# MotorLibrary


* Library to control a Motor with L293D or L298 
* Developed by Salim Khazem



It is a library that allows you to control an Motor using an L293D or L298N

You must add the libraries to the Arduino libraries folder. 

To do this : you must copy the folder "Motor" paste them in the arduino libraries folder.



I used an example with the inertial unit MPU6050, I put it in the folder ../Motor/examples



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



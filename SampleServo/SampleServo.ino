/**
 * This sketch introduces the Servo.h library with its Servo object.
 *
 * It takes the servo from its minimum to its maximum angle and back again.
 *
 * @author Dave Kimber <https://github.com/Kimbsy>
 */

// Import the Servo library.
#include <Servo.h>

// Create a Servo object.
Servo myServo;

// This variable will represent the angle of the servo arm.
int pos = 0;

void setup()
{ 
    // Attach the servo object to pin 9.
    myServo.attach(9);
} 

void loop() 
{ 
    // From 0 to 180...
    for (pos = 0; pos < 180; pos++) {
        // Tell the servo to go to this angle.
        myServo.write(pos);
        // Pause for 15 milliseconds.
        delay(15);
    }

    // From 180 back down to 0...
    for (pos = 180; pos > 0; pos--) {
        // Tell the servo to go to this angle.
        myServo.write(pos);
        // Pause for 15 milliseconds.
        delay(15);
    } 
}

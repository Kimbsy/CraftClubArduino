/**
 * This sketch demonstrates how to use an HC-SR04 Ultrasonic distance sensor.
 *
 * We will be trying to measure the distance (in cm) of an object in fornt of
 *   the sensor. This sensor creates a 'ping' (a short ultrasonic beep) which
 *   travels forward and bounces off any object which is in range. If the ping
 *   reaches back to the sensor we can detect it and calculate how far away the
 *   object is.
 *
 * @author Dave Kimber <https://github.com/Kimbsy>
 */

// This is the pin we will be attaching the sensor to.
int pingPin = 12;

/**
 * Setup function.
 */
void setup() {
    // Set up a connection to the USB serial port.
    Serial.begin(9600);
}

/**
 * Main loop function.
 */
void loop()
{
    /**
     * First we need to send out a ping.
     */
    
    // Set our sensor pin as an OUTPUT.
    pinMode(pingPin, OUTPUT);
    // Make sure it is not sending a signal.
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    // Send out a HIGH signal for 2 microseconds.
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(2);
    // Shut off the signal
    digitalWrite(pingPin, LOW);


    /**
     * Then we need to listen for the rebound.
     *
     * We use the same pin (that's where the sensor is after all) but in a
     *   different mode.
     */

    // Set our sensor pin as an INPUT
    pinMode(pingPin, INPUT);
    // Measure the time in microseconds until we detect a rebounded HIGH signal.
    long pingDuration = pulseIn(pingPin, HIGH);

    // Calculate the distance based on the pingDuration.
    long distance = microsecondsToCentimeters(pingDuration);

    // Output the distance to the opbject.
    Serial.print(distance);
    Serial.println(" cm");
}

/**
 * This function calculates the distance (in cm) sound travels in a given amount
 *   of time throuhg air at room temperature.
 *
 * Taking the speed of sound in air to be 340 m/s, we can see that it will
 *   travel 1 cm in 29 microseconds (1 / 340 = 0.00294117647).
 *
 * The sound wave needs to travel to the object and back so we halve the time.
 */
long microsecondsToCentimeters(long pingDuration)
{
    long roundTrip = pingDuration / 29;
    long distance  = roundTrip / 2;

    return distance;
}

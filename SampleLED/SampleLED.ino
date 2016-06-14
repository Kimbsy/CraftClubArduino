/**
 * This sketch demonstrates controlling the Arduino's built in LED.
 *
 * @author Dave Kimber <https://github.com/Kimbsy>
 */

// Pin 13 has a built in LED attached to it.
int ledPin = 13;

/**
 * Setup function.
 */
void setup()
{
    // We need to set the led pin to OUTPUT mode.
    pinMode(ledPin, OUTPUT);
}

/**
 * Main loop function.
 */
void loop()
{
    // Turn the LED on by sending a HIGH signal to the LED pin.
    digitalWrite(ledPin, HIGH);

    // Wait for 1 second (1000 milliseconds).
    delay(1000);

    // Turn the LED off by sending a LOW signal to the LED pin.
    digitalWrite(ledPin, LOW);

    // Wait for 1 second.
    delay(1000);
}

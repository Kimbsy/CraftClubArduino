/**
 * This sketch introduces the dht.h library for use with a DHT11
 *   temperature/humidity sensor.
 *
 * @author Dave Kimber <https://github.com/Kimbsy>
 */

// Import the dht library.
#include <dht.h>

// Create a dht object which knows how to talk to the sensor.
dht dhtObj;

// We will be connecting the sensor on this pin.
int dhtPin = 7;

void setup()
{
    // Set up a connection to the USB serial port.
    Serial.begin(9600);
}

void loop()
{
    // Tell the dht object to take a reading from the sensor.
    int check = dhtObj.read11(dhtPin);

    // Get the temperature and humidity from this reading.
    float temperature = dhtObj.temperature;
    float humidity    = dhtObj.humidity;

    // Output the values of the temperature and humidity.
    Serial.print("Temperature = ");
    Serial.println(temperature);
    Serial.print("Humidity = ");
    Serial.println(humidity);

    // Wait for 1 second.
    delay(1000);
}

/**
 * This sketch introduces the basic structure of Arduino programming.
 *
 * @author Dave Kimber <https://github.com/Kimbsy>
 */

/**
 * You can declare variables here at the top of your program.
 *
 * These variables are called 'global variables' and are available anywhere in
 *   your program.
 *
 * There are two common ways of naming your variables. Regardles of which you
 *   choose, try to use it consistently, and make sure your variable names are
 *   nice and descriptive.
 */
int some_number = 1; // snake_case_separates_words_with_underscores
int someNumber  = 2; // camelCaseCapitalisesEveryFirstLetter

/**
 * This is the setup function.
 *
 * This function is executed once when the program starts. It is a useful place
 *   to get things done before the main program starts.
 */
void setup()
{
    // Here we will connect to the USB serial port to talk to the computer.
    Serial.begin(9600);

    /**
     * We can define more vairables too. These variables a 'local' to the
     *   function in which they were declared. i.e. they will not be available
     *   in the loop() function.
     */
    float decimalNumber = 0.4555;
    char thisLetter = 'S';
    bool aBooleanVariable = true;
}

/**
 * This is the main program loop function.
 *
 * This function is executed repeatedly forever. It is where the majority of our
 *   programming will take place. In this simple example we will try out some
 *   control structures and output messages over the USB serial port.
 */
void loop()
{
    // Send a message.
    Serial.println("This will always happen.");

    /**
     * Lets try some control structures.
     */
    
    /**
     * The if/else statement lets us execute code based on boolean conditions.
     *
     * Boolean comparison operators:
     *   == (is equal to)
     *   != (is not equal to)
     *   >  (is gretaer than)
     *   <  (is less than)
     *   >= (is greater than or equal to)
     *   <= (is less than or equal to)
     */
    int a = 0;
    int b = 4;
    if (a == b) {
        Serial.println("This shouldn't happen because 0 doesn not equal 4");
    } else {
        Serial.println("This will happen instead.");
    }

    /**
     * The for loop is useful for doing something multiple times.
     *
     * In this example we create a variable 'i' which starts at 0, if it is less
     *   than 10 we execute the code in the block, then add 1 to 'i' and repeat.
     */
    for (int i = 0; i < 10; i++) {
        // Print the value of 'i'.
        Serial.println(i)
    }
}

#include <LiquidCrystal.h> // Include the LiquidCrystal library for LCD support.

LiquidCrystal LCD(8, 9, 4, 5, 6, 7); // Initialize the LCD object with specific pins.

// Variables used in the menu
int AR_Button = 0; // Variable to store analog button readings.
byte AC_Button = 0; // Variable used in the main loop to hold button input.
byte col[4]; // An array to navigate the menu and control LED brightness.
byte colVal = 0; // Variable to keep track of the current menu item.
bool SelStat = 0; // A boolean variable for the select status.

// Define button values for better readability:
#define Right  0
#define Left   1
#define Up     2
#define Down   3
#define Select 4
#define NONE   5

// Function to read button presses
byte ButtonRead() {
  AR_Button = analogRead(0); // Read the analog value from a pin to detect button presses.
delay(5);
  // Determine which button is pressed based on the analog reading.
  if (AR_Button > 950) return NONE;
  if (AR_Button < 70) return Right;
  if (AR_Button < 250) return Up;
  if (AR_Button < 400) return Down;
  if (AR_Button < 650) return Left;
  if (AR_Button < 850) return Select;
  return NONE; // Return NONE if no button is pressed.
}

// Function to display the menu
byte Menu(byte button) {
  if (button == Up) {
    colVal += 1; // Increment the menu item when the Up button is pressed.
    delay(300); // Add a delay for button debouncing.
  }
  if (button == Down) {
    colVal -= 1; // Decrement the menu item when the Down button is pressed.
    delay(300); // Add a delay for button debouncing.
  }
  // Ensure the menu item stays within valid bounds.
  if (colVal > 3 && colVal < 230) {
    colVal = 0;
  }
  if (colVal > 240) {
    colVal = 3;
  }
  if (button == Right) {
    col[colVal] += 1; // Increase the brightness of an LED when the Right button is pressed.
    delay(300); // Add a delay for button debouncing.
  }
  if (button == Left) {
    col[colVal] -= 1; // Decrease the brightness of an LED when the Left button is pressed.
    delay(300); // Add a delay for button debouncing.
  }
  Serial.println(colVal); // Print the current menu item to the serial monitor.
  if (colVal < 3)
  {
    LCD.setCursor(0, 0);
    LCD.print("LED");
    if (colVal < 10) {
      LCD.print(" "); // Format the menu item for display.
    }

    LCD.print(colVal);
    LCD.print(" brightness:");
    LCD.setCursor(0, 1);
    if (col[colVal] < 10)
      LCD.print(" ");
    if (col[colVal] < 100)
      LCD.print(" ");
    LCD.print(col[colVal]);
  } else {
    LCD.setCursor(0, 0);
    LCD.print("LED Works              ");
    LCD.setCursor(0, 1);
    LCD.print("                 ");
  }
}

byte LED(byte led0, byte led1, byte led2)
{

  for (int i = 0; i < 256; i += 1) {
    analogWrite(11, led0);
    if (i < led1)
    {
      digitalWrite(12, HIGH);
    }
    else {
      digitalWrite(12, LOW);
    }
    if (i < led2)
    {
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(13, LOW);
    }
    delay(1);
  }
  return 1;
}

void setup() {
  LCD.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows.
  LCD.setCursor(0, 0);
  LCD.print("Arduino menu"); // Display a title on the LCD.
  LCD.setCursor(0, 1);
  LCD.print("Ver0.0"); // Display the version.
  delay(2000); // Wait for 2 seconds.
  LCD.clear(); // Clear the LCD.
  Menu(AC_Button); // Call the menu function to start the menu.
  for (int i = 11; i < 14; i += 1) {
    pinMode(i, OUTPUT); // Set pins 11, 12, and 13 as OUTPUT to control LEDs.
  }
}

void loop() {
  AC_Button = ButtonRead(); // Read the button input.
  if (AC_Button != NONE) {
    Menu(AC_Button); // Call the menu function with the detected button press.
  }
  if (colVal == 3) {
    LED(col[0], col[1], col[2]);
  } else {
    analogWrite(11, 0);
  }
}

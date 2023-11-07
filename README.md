# Arduino_UNO_R3_KeypadShield_menu
Simple menu using Arduino uno and keypad shield

Overview
This Arduino project provides a simple menu system for controlling the brightness of LEDs using button inputs. It utilizes the popular Arduino Uno and a keypad shield to create an interactive menu on a Liquid Crystal Display (LCD). The project code is well-commented for easy understanding.

Components Used
Arduino Uno or compatible board
Keypad Shield (with navigation buttons)
Three LEDs (connected to pins 11, 12, and 13)
Functionality
This project enables you to interact with a menu on the LCD and adjust the brightness of three LEDs. The following buttons are used for navigation:

"Up": Move up in the menu
"Down": Move down in the menu
"Right": Increase the brightness of the selected LED
"Left": Decrease the brightness of the selected LED
"Select": Not used in this code
How It Works
The menu starts with a default selection, and the LCD displays information about the brightness of the currently selected LED. You can navigate through the menu items using the "Up" and "Down" buttons. The code incorporates button debouncing to ensure precise menu navigation.

Once you've chosen an LED (0, 1, or 2), you can adjust its brightness using the "Right" and "Left" buttons. The code smoothly adjusts the brightness of the chosen LED and updates the LCD to reflect the new brightness level. When the last menu item is selected, the LCD displays "LED Works" as the LEDs are not adjustable.

Circuit Connections
Here are the connections for your Arduino board and components:

Connect the Keypad Shield to the Arduino Uno.
Connect the three LEDs to pins 11, 12, and 13.
Usage
Follow these steps to use the Arduino Menu Control:

Upload the provided code to your Arduino board using the Arduino IDE.

Power up the circuit by connecting the Arduino board to a power source or computer.

Use the "Up" and "Down" buttons on the Keypad Shield to navigate the menu.

Select an LED by moving to the desired menu item and use the "Right" and "Left" buttons to adjust its brightness.

Enjoy experimenting with this Arduino menu control project! Use it to explore menu systems and user interactions in your Arduino-based projects.

Additional Notes
The code incorporates debouncing delays for the buttons to prevent unintended multiple button presses.

The menu wraps around, allowing you to continuously navigate through the items.

The LCD displays the selected LED and its current brightness level.

The LEDs smoothly change their brightness, creating a visual effect.

Feel free to customize and extend this project for your own needs. Happy experimenting with Arduino!

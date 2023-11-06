# Arduino_UNO_R3_KeypadShield_menu
Simple menu using Arduino uno and keypad shield

This Arduino project provides a simple menu system to control the brightness of LEDs using button inputs. It also displays 
relevant information on a Liquid Crystal Display (LCD). The code is well-commented for better understanding.

Components Used

Arduino board (compatible with LiquidCrystal library)
Liquid Crystal Display (16x2)
Buttons for navigation
Three LEDs (connected to pins 11, 12, and 13)

Functionality

The code allows you to navigate through a menu and control the brightness of three LEDs using the following buttons:

Up: Increment the menu item.
Down: Decrement the menu item.
Right: Increase the brightness of the selected LED.
Left: Decrease the brightness of the selected LED.
Select: Not used in this code.

How It Works

The menu starts with a default selection, and the LCD displays information about the selected LED's brightness.
You can navigate through the menu items using the "Up" and "Down" buttons. The code also handles button debouncing to
ensure accurate menu navigation.
Once you've selected an LED (0, 1, or 2), you can adjust its brightness using the "Right" and "Left" buttons.
The code gradually changes the brightness of the selected LED and also updates the LCD to show the new brightness level.
When the last menu item is selected, the LCD displays "LED Works" as the LEDs are not adjustable.

Circuit Connections

Connect the LCD to the specified pins (8, 9, 4, 5, 6, 7).
Connect the buttons to the analog input pin (A0).
Connect three LEDs to pins 11, 12, and 13.

Usage

Upload the code to your Arduino board.
Power up the circuit.
Use the "Up" and "Down" buttons to navigate the menu.
Select an LED and adjust its brightness using the "Right" and "Left" buttons.

Additional Notes

The code includes debouncing delays for the buttons to prevent unintended multiple button presses.
The menu wraps around, so you can continuously navigate through the items.
The LCD displays the selected LED and its brightness level.
The LEDs gradually change their brightness, creating a visual effect.
Enjoy experimenting with this Arduino menu control project!

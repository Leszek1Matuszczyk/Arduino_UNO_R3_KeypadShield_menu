# Arduino_UNO_R3_KeypadShield_menu
Simple menu using Arduino uno and keypad shield

# Arduino Menu Control Project

![Arduino Menu Control](arduino_menu.jpg)

## Overview

This Arduino project provides a simple menu system for controlling the brightness of LEDs using button inputs. It utilizes an Arduino Uno and a keypad shield for user interaction. Relevant information is displayed on a Liquid Crystal Display (LCD). The code is extensively commented for easy comprehension.

### Components Used

- Arduino Uno or compatible board
- Keypad Shield (with navigation buttons)
- Three LEDs (connected to pins 11, 12, and 13)

## Functionality

The code allows users to navigate through a menu and control the brightness of three LEDs using the following buttons:

- **Up:** Increment the menu item.
- **Down:** Decrement the menu item.
- **Right:** Increase the brightness of the selected LED.
- **Left:** Decrease the brightness of the selected LED.
- **Select:** Not utilized in this code.

## How It Works

The menu initiates with a default selection, displaying information about the currently selected LED's brightness on the LCD. Users can navigate through the menu items using the "Up" and "Down" buttons. The code incorporates button debouncing to ensure precise menu navigation.

Upon selecting an LED (0, 1, or 2), users can adjust its brightness using the "Right" and "Left" buttons. The code gradually changes the brightness of the selected LED and also updates the LCD to show the new brightness level. When the last menu item is selected, the LCD displays "LED Works" as the LEDs are not adjustable.

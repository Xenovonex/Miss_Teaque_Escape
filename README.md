# Miss_Teaque_Escape
Code to programme the Arduino and convert Paint images to 8x8 LED light configurations for the Miss Teaque Escape game by LiliDee. There is Gcode available in /prints for a 3D-print to cover the LED lights with. 

## The png2led conversion code
The png2led.py code imports the images from /pngs and creates a code file in C with the corresponding LED configuration code to project the image using the LEDs. These codes are saved in /codes.

## Arduino code for Miss Teaque
The generated code files (from the png images) can be pasted in the LiliDee_Miss_Teaque/LiliDee_Miss_Teaque.ino file to add it to the projections the LEDs have to make.

## Hardware
- Arduino Uno
- Three buttons
- 8x8 RGB 64 LED Matrix 5V WS2812b


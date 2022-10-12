# Miss_Teaque_Escape
Code to programme the Arduino and convert Paint images to 8x8 LED light configurations for the Miss Teaque Escape game by LiliDee. There is Gcode available in png_2_fastLED/prints for a 3D-print to cover the LED lights with. 

## The png2led conversion code
The png2led.py code imports the images from png_2_fastLED/pngs and creates a code file in C with the corresponding LED configuration code to project the image using the LEDs. These codes are saved in png_2_fastLED/codes.

## Arduino code for Miss Teaque
The generated code files (from the png images) can be pasted in the LiliDee_Miss_Teaque/LiliDee_Miss_Teaque

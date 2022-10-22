Contains the graphical asset for the oled screen. It's 128x32 SSD1306.

I authored the bmp with aseprite. 

https://javl.github.io/image2cpp/ is used to convert the bmp to raw bytes.

Be sure to select Arduino code for the code output format and vertical 1 bit per pixel for the draw mode. 

layer graphics goes into lib/layer_status/layer_status.c

Boot logo goes into lib/logo.c
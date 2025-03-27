# PhysicalPendulum
My Pendulum apparatus for PHY324's Pendulum Project:

<img width="526" alt="Screenshot 2025-03-26 at 19 32 58" src="https://github.com/user-attachments/assets/2317d2ae-17eb-4f89-a0ac-dcca59504d93" />


The 3D models were printed at the Center for Entrepreneurship located at the Schwartz Reisman Innovation Campus at the University of Toronto. The 3MF parts were printed with Bambu Labs PLA basic, and the printer was the Bambu Lab X1 Carbon. 



BOM: 

 * Structural
   - 2x 608 Ball Bearings (In our case, we used Bronson Speed Raw Bearings, which are designed to operate without lubricant).
   - 1x 8mm x 100mm Linear Motion Steel Rod
   - 1x 200mm 2020 Aluminum Extrusion
   - 4x 12mm M5 Screws
   - 4x M5 T Slot Nuts
   - 3x 12mm M3 Screws
   - 3x M3 Nuts
   - 1/4 in x 6 in Zinc Plated Threaded Rod
   - 1/4 in Nut
   - C Clamp
 * Electronics
   - 1x Raspberry Pi Pico 2 (the original Pico suffices, but the refresh rate is limited).
   - 1x Seeed Studio AMS5600 (https://github.com/Seeed-Studio/Seeed_Arduino_AS5600)
   - 1x Female Surface Mount DP9 connector (WARNING: THIS IS NOT WIRED AS A SERIAL PORT)
   - 1x Male DP9 connector
   - 2x 20-pin Header (for Mounting Pico)
  




The project uses Rob Tillaart's AS5600 library, which was modified to work with the Coolterm application. It captures the serial data coming from the pico and allows us to convert it to .csv files for analysis in Python. 



NOTE: Some of the sample data do not include sufficient error bars, as repeated runs are required to quantify the uncertainty of the sample measurements.

![427270126-35df8393-7bbd-4267-811a-d3e66f37b43e](https://github.com/user-attachments/assets/02f635be-ecdf-4b45-a772-7c40736b350e)

# PhysicalPendulum
My Pendulum apparatus for PHY324's Pendulum Project:

<img width="526" alt="Screenshot 2025-03-26 at 19 32 58" src="https://github.com/user-attachments/assets/2317d2ae-17eb-4f89-a0ac-dcca59504d93" />

![image](https://github.com/user-attachments/assets/62d13f2d-60bd-4d47-b6b1-0719ab746421)

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
   - 1x Seeed Studio AS5600 (https://github.com/Seeed-Studio/Seeed_Arduino_AS5600)
   - 1x Female Surface Mount DP9 connector (WARNING: THIS IS NOT WIRED AS A SERIAL PORT)
   - 1x Male DP9 connector
   - 2x 20-pin Header (for Mounting Pico)
  



Parts: 

   Part (A) : PivotPoint.stl
   Part (B) : Masstorod.stl
   Part (C) : AxleToMagnet.stl
   Part (D) : ThreadToPivot.stl

The project uses Rob Tillaart's AS5600 library, which was modified to work with the Coolterm application. It captures the serial data coming from the pico and allows us to convert it to .csv files for analysis in Python. 



NOTE: Some of the sample data do not include sufficient error bars, as repeated runs are required to quantify the uncertainty of the sample measurements.

The prototype board for the pendulum project:


![6F82B84D-5D8C-470F-9DA2-09985D97BB51_1_102_o](https://github.com/user-attachments/assets/2f0261b5-c05a-4d1f-b419-30fb91ddcb8e)

![32B6ADBF-5FC1-44E5-9E8D-EF83007C5942_1_102_o](https://github.com/user-attachments/assets/e0092940-0822-446a-91dc-420a0e831980)

The entire apparatus, will provide a better photo once I bring the pendulum back to campus.

![427270126-35df8393-7bbd-4267-811a-d3e66f37b43e](https://github.com/user-attachments/assets/02f635be-ecdf-4b45-a772-7c40736b350e)

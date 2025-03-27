//
//    FILE: AS5600_position_speed.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo compare performance with update flag
//     URL: https://github.com/RobTillaart/AS5600
//
//  Examples may use AS5600 or AS5600L devices.
//  Check if your sensor matches the one used in the example.
//  Optionally adjust the code.



// Modified by Andrew Lehmann For PHY324 Pendulum Project. 



#include "AS5600.h"

//  Uncomment the line according to your sensor type
// AS5600L as5600;   //  use default Wire
AS5600 as5600;   //  use default Wire

float angleOffset = 0.0;
uint32_t startTime = 0;

void setup()
{
  Serial.begin(115200);
  while (!Serial);
  Serial.println(__FILE__);
  Serial.print("AS5600_LIB_VERSION: ");
  Serial.println(AS5600_LIB_VERSION);
  Serial.println();

  Wire.begin();

  as5600.begin();  //  set direction pin.
  as5600.setDirection(AS5600_CLOCK_WISE);  //  default, just be explicit.

  Serial.println(as5600.getAddress());

  int b = as5600.isConnected();
  Serial.print("Connect: ");
  Serial.println(b);

  delay(1000);
  startTime = millis(); // Initialize start time
}

void loop()
{
  static uint32_t lastTime = 0;

  // Check for serial input
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();
    if (command.equalsIgnoreCase("reset position")) {
      angleOffset = as5600.getCumulativePosition() / 4096.0 * 360.0;
      Serial.println("Position reset.");
    } else if (command.equalsIgnoreCase("reset time")) {
      startTime = millis();
      Serial.println("Time reset.");
    }
  }

  // Update every 20 ms
  if (millis() - lastTime >= 20)
  {
    lastTime = millis();
    float currentAngle = as5600.getCumulativePosition() / 4096.0 * 360.0;
    uint32_t elapsedTime = (millis() - startTime); 
    Serial.print(currentAngle - angleOffset);
    Serial.print(";");
    Serial.print(as5600.getRevolutions());
    Serial.print(";");
    Serial.println(elapsedTime);
  }
}


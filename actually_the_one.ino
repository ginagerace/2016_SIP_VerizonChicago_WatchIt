// Demo program for testing library and board - flip the switch to turn on/off buzzer

#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

// we light one pixel at a time, this is our counter
uint8_t pixeln = 0;

void setup() {
  //while (!Serial);
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
}


 /* Display the results (acceleration is measured in m/s*s)
      Serial.print("X: "); Serial.print(CircuitPlayground.motionX());
      Serial.print(" \tY: "); Serial.print(CircuitPlayground.motionY());
      Serial.print(" \tZ: "); Serial.print(CircuitPlayground.motionZ());
      Serial.println(" m/s^2"); CircuitPlayground.motionY();
  }

  /******************************************************************************************************/

void loop() 
{
  while (CircuitPlayground.slideSwitch() == true)
  {
      if (CircuitPlayground.motionY()< 5)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 0, 0);
          CircuitPlayground.setPixelColor(2, 0, 0, 0);
          CircuitPlayground.setPixelColor(3, 0, 0, 0);
          CircuitPlayground.setPixelColor(4, 0, 0, 0);
          CircuitPlayground.setPixelColor(5, 0, 0, 0);
          CircuitPlayground.setPixelColor(6, 0, 0, 0);
          CircuitPlayground.setPixelColor(7, 0, 0, 0);
          CircuitPlayground.setPixelColor(8, 0, 0, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          delay(500);
         }
      if (CircuitPlayground.motionY()>= 5 && CircuitPlayground.motionY()< 10)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 0, 0);
          CircuitPlayground.setPixelColor(2, 0, 0, 0);
          CircuitPlayground.setPixelColor(3, 0, 0, 0);
          CircuitPlayground.setPixelColor(4, 0, 0, 0);
          CircuitPlayground.setPixelColor(5, 0, 0, 0);
          CircuitPlayground.setPixelColor(6, 0, 0, 0);
          CircuitPlayground.setPixelColor(7, 0, 0, 0);
          CircuitPlayground.setPixelColor(8, 0, 0, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          CircuitPlayground.playTone(262, 1000);
          delay(500);
          noTone(5);
          delay(2000);
        }
    if (CircuitPlayground.motionY()>= 10 && CircuitPlayground.motionY()< 15)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 255, 0);
          CircuitPlayground.setPixelColor(2, 0, 0, 0);
          CircuitPlayground.setPixelColor(3, 0, 0, 0);
          CircuitPlayground.setPixelColor(4, 0, 0, 0);
          CircuitPlayground.setPixelColor(5, 0, 0, 0);
          CircuitPlayground.setPixelColor(6, 0, 0, 0);
          CircuitPlayground.setPixelColor(7, 0, 0, 0);
          CircuitPlayground.setPixelColor(8, 0, 225, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          CircuitPlayground.playTone(294, 1000);
          delay(500);
          noTone(5);
          delay(2000);
        }
    if (CircuitPlayground.motionY()>= 15 && CircuitPlayground.motionY()< 20)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 255, 0);
          CircuitPlayground.setPixelColor(2, 128, 255, 0);
          CircuitPlayground.setPixelColor(3, 0, 0, 0);
          CircuitPlayground.setPixelColor(4, 0, 0, 0);
          CircuitPlayground.setPixelColor(5, 0, 0, 0);
          CircuitPlayground.setPixelColor(6, 0, 0, 0);
          CircuitPlayground.setPixelColor(7, 128, 255, 0);
          CircuitPlayground.setPixelColor(8, 0, 225, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          CircuitPlayground.playTone(330, 1000);
          delay(500);
          noTone(5);
          delay(2000);
        }
     if (CircuitPlayground.motionY()>=20 && CircuitPlayground.motionY()< 25)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 255, 0);
          CircuitPlayground.setPixelColor(2, 128, 255, 0);
          CircuitPlayground.setPixelColor(3, 255, 255, 0);
          CircuitPlayground.setPixelColor(4, 0, 0, 0);
          CircuitPlayground.setPixelColor(5, 0, 0, 0);
          CircuitPlayground.setPixelColor(6, 255, 255, 0);
          CircuitPlayground.setPixelColor(7, 128, 255, 0);
          CircuitPlayground.setPixelColor(8, 0, 225, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          CircuitPlayground.playTone(349, 1000);
          delay(500);
          noTone(5);
          delay(2000);
        }
    if (CircuitPlayground.motionY()>= 25 && CircuitPlayground.motionY()< 30)
         {
          CircuitPlayground.setPixelColor(0, 0, 255, 128);
          CircuitPlayground.setPixelColor(1, 0, 255, 0);
          CircuitPlayground.setPixelColor(2, 128, 255, 0);
          CircuitPlayground.setPixelColor(3, 255, 255, 0);
          CircuitPlayground.setPixelColor(4, 255, 128, 0);
          CircuitPlayground.setPixelColor(5, 255, 128, 0);
          CircuitPlayground.setPixelColor(6, 255, 255, 0);
          CircuitPlayground.setPixelColor(7, 128, 255, 0);
          CircuitPlayground.setPixelColor(8, 0, 225, 0);
          CircuitPlayground.setPixelColor(9, 0, 255, 128);
          CircuitPlayground.playTone(392, 1000);
          delay(500);
          noTone(5);
          delay(2000);
        }
    if (CircuitPlayground.motionY()> 30)
         {
          for (int i=0; i <= 5; i++)
          {
          CircuitPlayground.setPixelColor(0, 255, 0, 0);
          CircuitPlayground.setPixelColor(1, 255, 0, 0);
          CircuitPlayground.setPixelColor(2, 255, 0, 0);
          CircuitPlayground.setPixelColor(3, 255, 0, 0);
          CircuitPlayground.setPixelColor(4, 255, 0, 0);
          CircuitPlayground.setPixelColor(5, 255, 0, 0);
          CircuitPlayground.setPixelColor(6, 255, 0, 0);
          CircuitPlayground.setPixelColor(7, 255, 0, 0);
          CircuitPlayground.setPixelColor(8, 255, 0, 0);
          CircuitPlayground.setPixelColor(9, 255, 0, 0);
          CircuitPlayground.playTone(440, 1000);
          delay(500);
          noTone(5);
          delay(200);
          CircuitPlayground.clearPixels();
          delay(300);
          }
          delay(2000);
        }
  }
    while (CircuitPlayground.slideSwitch() == false)
      {
       CircuitPlayground.clearPixels();
      }
 }

  




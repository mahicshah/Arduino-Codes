Master:

#include <Wire.h>

void setup()
{
  Wire.begin();  //Join I2C bus
  Serial.begin(9600);
}

void loop()
{
  Wire.requestFrom(8, 6);  //Request 6 bytes from slave device 8
  
  while (Wire.available())  //slave may send less than requested
  {
    char c = Wire.read();  //receive a byte as character
    Serial.print(c);  //print
  } 
  delay(1000);
}



Slave:

#include <Wire.h>
void setup()
{
  Wire.begin(8);  //join I2C bus with address 8
  Wire.onRequest(requestEvent);  //register event
}

void loop()
{
  delay(100);
}

void requestEvent()  //This function executes whenever data is requested from master
{
  Wire.write("hello ");  //responding with a message of 6 bytes
}

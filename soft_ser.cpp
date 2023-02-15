#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  Serial.println("Good");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(115200);
}

void loop() // run over and over
{
  if (mySerial.available())
    Serial.write(mySerial.readString());
}

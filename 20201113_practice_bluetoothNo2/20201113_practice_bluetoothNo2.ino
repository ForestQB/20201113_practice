#include <BluetoothSerial.h>
BluetoothSerial BTYU;
void setup()
{
  Serial.begin(115200);
  BTYU.begin("20201113_YU");//記得改名
  pinMode(3, OUTPUT);
}
void loop()
{
//  if (Serial.available())
//  {
//    String data = Serial.readString();
//    BTYU.println(data);
//  }
  if (BTYU.available())
  {
    BTYU.println("ESP GET");
    char data2 = BTYU.read();
    if (data2 == '1')
    {
      digitalWrite(3, HIGH);
      BTYU.println("LED ON");
    }
    else if (data2 == '2')
    {
      digitalWrite(3, LOW);
      BTYU.println("LED OFF");
    }
  }
  delay(1000);
}

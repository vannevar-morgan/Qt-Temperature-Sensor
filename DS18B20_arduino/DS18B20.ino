#include <DallasTemperature.h>
#include <OneWire.h>

OneWire ow(9);
DallasTemperature temp_sensor(&ow);

void setup()
{
  temp_sensor.begin();
  Serial.begin(9600);
}

void loop()
{
  temp_sensor.requestTemperatures();
  double temp = temp_sensor.getTempCByIndex(0);
  Serial.print(temp);
  Serial.print(",");
  Serial.flush();
  delay(1000);
}



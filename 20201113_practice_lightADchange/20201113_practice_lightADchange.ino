#include <driver/dac.h>
void setup()
{
  dac_output_enable(DAC_CHANNEL_1);
}
int i;
void loop()
{
  for(i = 0 ; i <=255;i+=1)
  {
    dac_output_voltage(DAC_CHANNEL_1, i);
    delay(500);
  }
//  delay(500);
}

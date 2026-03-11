#include <Wire.h>
#include <Adafruit_ADS1X15.h>

// Crear objeto de la clase
Adafruit_ADS1115 ads;

// Factor de escala. Por defecto el valor de referencia es 6,144 V
// El factor de escala de esta referencia es de 0,1875 mV
float factorEscala = 0.1875F;

void setup(void)
{
  Serial.begin(9600);

  // Iniciar I2C (ESP32 usa estos pines por defecto)
  Wire.begin(); // SDA = 21, SCL = 22

  // Factor de escala
  ads.setGain(GAIN_TWOTHIRDS);

  // Iniciar el ADS1115
  ads.begin();
}

void loop(void)
{
  short diferencia_0_1 = ads.readADC_Differential_0_1();
  float voltios = (diferencia_0_1 * factorEscala) / 1000.0;

  Serial.println(voltios, 4);
  delay(1);
}

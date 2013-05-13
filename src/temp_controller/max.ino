#include <MAX31855.h>

int CS = 15;              // CS pin on MAX31855
int SO = 16;              // SO pin of MAX31855
int SCLK = 17;             // SCK pin of MAX31855
float temperature = 0.0;  // Temperature output variable
MAX31855 temp0(SCLK, CS, SO);

float updateMax() {
  int i, cd;
  double tmp = 0.0;
  
  for (i=0;i<5;i++) {
    cd = temp0.readFaultCode();
    if (cd != 0) {
      return -9990.0 - cd;
    }
     tmp += temp0.readCelsius();        // Read the temp 5 times and return the average value
  }
  return tmp/5.0;
}

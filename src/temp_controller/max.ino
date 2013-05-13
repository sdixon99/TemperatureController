#include <MAX6675.h>

int CS = 15;              // CS pin on MAX6675
int SO = 16;              // SO pin of MAX6675
int SCLK = 17;             // SCK pin of MAX6675
int units = 1;            // Units to readout temp (0 = ˚F, 1 = ˚C)
float error = 0.0;        // Temperature compensation error
float temperature = 0.0;  // Temperature output variable
MAX6675 temp0(CS,SO,SCLK,units);

float updateMax() {
    int i;
  double tmp = 0.0;
  for (i=0;i<2;i++) {
     tmp += temp0.read_temp();        // Read the temp 2 times and return the average value
  }
  return tmp/2.0;
}

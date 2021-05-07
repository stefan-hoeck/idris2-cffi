#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20
#define ADD    32.0
#define FACTOR (5.0 / 9.0)

float toCelsius (float fahr)
{
  return  (fahr - ADD) * FACTOR;
}

float toFahr (float celsius)
{
  return  celsius / FACTOR + ADD;
}

void printFahr ()
{
  float fahr, celsius;
  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = toCelsius (fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += STEP;
  }
}

void printCelsius ()
{
  float fahr, celsius;
  for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
    fahr = toFahr (celsius);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
  }
}

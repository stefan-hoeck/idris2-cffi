#include <stdio.h>

float toCelsius (float fahr)
{
  return  (5.0 / 9.0) * (fahr - 32.0);
}

float toFahr (float celsius)
{
  return  (9.0 / 5.0) * celsius + 32.0;
}

void printFahr ()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step  = 20;
  fahr = lower;
  while (fahr <= upper) {
    celsius = toCelsius (fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += step;
  }
}

void printCelsius ()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = -20;
  upper = 200;
  step  = 20;
  celsius = lower;
  while (celsius <= upper) {
    fahr = toFahr (celsius);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
}

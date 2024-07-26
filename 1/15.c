//1-15: Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>

int fahrToCels(int fahr) {
  int celsius;
  celsius = 5 * (fahr-32) / 9;
  return celsius;
}

int main(void) {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower; 
  
  while (fahr <= upper) {
    celsius = fahrToCels(fahr);
    printf("%d\t %d\n", fahr, celsius);
    fahr += step;
  }
}

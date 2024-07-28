//1-4: Write a program to print the corresponding Celsius to Fahrenheit table.
#include <stdio.h>

int main(void) {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower; 
  while (celsius <= upper) {
    //celsius = 5 * (fahr-32) / 9;
    fahr = ((9 * celsius) + 160) / 5;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step; 
  }
}

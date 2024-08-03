//2-1: Write a program to determine the ranges of char short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
// I don't know how to determine the range of a type.
#include <stdio.h>

int main(void) {
  int lenSshort = sizeof(signed short);
  int lenUshort = sizeof(unsigned short);
  int lenSint = sizeof(signed int);
  int lenUint = sizeof(unsigned int);
  int lenSlong = sizeof(signed int);
  int lenUlong = sizeof(unsigned long);

  printf("%d", (4*lenUshort));
}

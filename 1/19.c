//1-19: Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>

void reverse(char *s) {
  int i = 0;

  while(s[i] != '\0')
    i++;
  for (; i >= 0; i--) {
    putchar(s[i]);
  }
}

int main(void) {
  char *array = "twelve big dogs jump quickly\n";

  reverse(array);
}

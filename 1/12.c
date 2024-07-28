//1-12: Write a program that prints its input one word per line.
#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {  
    if (state == IN)
      putchar(c);
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      printf("\n");
      putchar(c);
    }
  }
} 

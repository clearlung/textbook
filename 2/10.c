//2-10: Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
#include <stdio.h>

int lower(int s) {
   s = (s >= 'A' && s <= 'Z') ? s+32: s;
   return s;
}

int main(void) {
  int c;
  while ((c = getchar()) != EOF)
    putchar(lower(c));
}

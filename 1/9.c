#include <stdio.h>

int main(void) {
  int c, v;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
    }
    else {
      v = c;
      while ((c = getchar()) == ' ') 
        ;
      putchar(v);
      putchar(c);
    }
  }
}

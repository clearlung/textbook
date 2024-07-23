#include <stdio.h>

int main(void) {
  int c;

  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\t' && c != '\\')
      putchar(c);
    else {
      if (c == '\n') {
        c = '\\';
        putchar(c);
        c = 'n';
        putchar(c);
        printf("\n");
      }
      else if (c == '\t') {
        c = '\\';
        putchar(c);
        c = 't';
        putchar(c);
      }
      else if (c == '\\') {
        c = '\\';
        putchar(c);
        putchar(c);
      }
    }
  }
}

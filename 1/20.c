//1-20: Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
//A:Preferably a static variable or a definition because the value of the width of a tab in spaces is static.
#include <stdio.h>
#define tabWidth 3
void detab(void) {
  int c;

  while ((c = getchar()) != EOF) {
    if (c != '\t') {
      putchar(c);
    }
    else if (c == '\t') {
      for (int j=0; j<tabWidth; j++) {
        printf(" ");
      }
      printf("|");
    }
  }
}

int main(void) {
  detab();
}

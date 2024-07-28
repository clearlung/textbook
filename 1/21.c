//1-21: Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or single blank would suffice to reach a tab stop, which would be given preference?
//A: Single blank as a tab would extend past the length of the tab stop.
#include <stdio.h>
#define IN 1
#define OUT 0
#define tabWidth 3

void stateIsOut(int c, int *state) {
  if (c != '\t' && c != ' ') {
    putchar(c);
  }
  else if (c == '\t' || c == ' ') {
    *state = IN;
  }
}

void stateIsIn(int c, int *state, int *spaceCount) {
  if (c != '\t' && c != ' ') {
    while (*spaceCount > 0) {
      if (*spaceCount >= tabWidth) {
        for (int i=0; i<tabWidth; i++) {
          printf(" ");
        } 
        printf("|");
        *spaceCount -= tabWidth;
      }
      else if (*spaceCount < tabWidth) {
        printf(" ");
        *spaceCount -= 1;
      }
    }
    putchar(c);
    *state = OUT;
  }
  else if (c == '\t') {
    *spaceCount += tabWidth;
  }
  else if (c == ' ') {
    *spaceCount += 1;
  }
}

void detab(int *spaceCount, int *state) {
  int c;

  while ((c = getchar()) != EOF) {
    if (*state == OUT) {
      stateIsOut(c, state);
    }
    if (*state == IN) {
      stateIsIn(c, state, spaceCount);
    }
  }
}

int main(void) {
  int spaceCount = 0;
  int state = OUT;
  detab(&spaceCount, &state);
}

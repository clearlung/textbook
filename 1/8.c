#include <stdio.h>

int main(void) {
  int c, newLine, blank, tab;

  newLine = 0, blank = 0, tab = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++newLine;
    }
    else if (c == '\t') {
      ++tab;
    }
    else if (c == ' ') {
      ++blank;
    }
  }
  printf("New Lines: %d\nTabs: %d\nBlanks: %d\n", newLine, tab, blank);
}

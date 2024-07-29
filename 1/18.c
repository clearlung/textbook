//1-18: Write a program to remove trailing blanks and tabs from each line of input and to delete entirely blank lines
#include <stdio.h>

void compareText(void) {
  int c, i;
  i = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ' && c != '\t') {
      putchar(c); 
      i++;
    }
    else if (c == '\n') { // I think this can be simplified, I'll fix it later if I feel like it
      if (i != 0) {
        putchar(c);
        i = 0;
      }
      /*else if (i == 0) { //this accomplishes nothing.
        i = 0;
      }*/
    }
  }
}

int main(void) {
  compareText();
}

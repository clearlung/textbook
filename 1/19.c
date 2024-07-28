//1-19: Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>
#define MAX 1000

void reverse(char *s) {
  int i = 0;

  while(s[i] != '\0')
    i++;
  for (; i >= 0; i--) {
    putchar(s[i]);
  }
}

int main(void) {
  int c, i;
  char array[MAX];
  i = 0;

  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      array[i] = c;
      i++;
    }
    if (c == '\n') {
      array[i] = '\0';
      reverse(array);
      printf("\n");
      i = 0;
    }
  }
}

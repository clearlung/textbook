//1-17: Write a program to print all input lines that are longer than 80 characters
#include <stdio.h>
#define MAX 1000

int returnLength(char *array) {
  int i = 1;
  while (*++array != '\0') // prone to error
    i++;
  return i;
}

void compareLength(char *array) {
  int c, i, j, length;
  i = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\0') {
      array[i] = c;
      i++;
    }
    else if (c == '\n') {
      array[i] = '\0';
      length = returnLength(array);
      j = 0;

      if (length > 80) {
        while (array[j] != '\0') {
          putchar(array[j]);
          j++;
        }
        printf("\n");
      }
      i = 0;
    }
  }
}

int main(void) {
  char array[MAX];
  compareLength(array); 
}

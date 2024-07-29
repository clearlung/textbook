//1-22: Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.
#include <stdio.h>
#define MAX 1000
#define IN 1
#define OUT 0

int returnLength(char *array) {
  int i = 1;
  while (*++array != '\0') 
    i++;
  return i;
}

void handleLongLine(char *array, int maxLen) {
  int i, j, state;
  i = 0;
  j = 0;
  state = OUT;
  while (array[i] != '\0') {
    if (state == OUT) {
      if (j < maxLen) {
        putchar(array[i++]);
        j++;
      }
      else if (j >= maxLen) {
        if (array[i - 1] >= 'a' && array[i - 1] <= 'z' || array[i - 1] >= 'A' && array[i - 1] <='Z') {
          if (array[i] >= 'a' && array[i] <= 'z' || array[i] >= 'A' && array[i] <='Z') {
            printf("-");
          }
        }
        else if (array[i] == ' ' || array[i] == '\t') {
          state = IN;
          i++;
        }
        state = IN;
      }
    }
    if (state == IN) {
      if (array[i] == ' '|| array[i] == '\t') 
        i++;
      printf("\n");
      j = 0;
      state = OUT;
    }
  }
  printf("\n");
}

void handleShortLine(char *array) {
  int i = 0;
  while ((putchar(array[i++])) != '\0')
    ;
  printf("\n");
}

void compareLength(char *array, int maxLen) {
  int c, i, j, lineLen;
  i = 0;

  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\0') {
      array[i] = c;
      i++;
    }
    if (c == '\n' || c == '\0') {
      array[i] = '\0';
      lineLen = returnLength(array);
      if (lineLen > maxLen) {
        handleLongLine(array, maxLen);
      }
      else if (lineLen <= maxLen) {
        handleShortLine(array);
      }
      i = 0;
    }
  }
}

int main(void) {
  char array[MAX];
  compareLength(array, 5); 
}

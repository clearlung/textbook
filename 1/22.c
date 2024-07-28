//1-22: Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very lng lines, and if there are no blanks or tabs before the specified column.
/*Store line input into array with terminating '\0'
if lineLength > maxLine
  handleLongLine()
else if lineLength < maxLine
  handleShortLine()
*/
//this is incomplete

#include <stdio.h>
#define MAX 1000

int returnLength(char *array) {
  int i = 1;
  while (*++array != '\0') 
    i++;
  return i;
}

void printString(char *array, int maxLen) {
  if (lineLen > maxLen) {
    while (j<maxLen) {
      putchar(array[j]);
      j++;
    }
    printf("\n");
    while(array[j++] != '\0') {
      putchar(array[j]);
    }
    i=0;
  }
}

void compareLength(char *array) {
  int c, i, j, lineLen;
  i = 0; j = 0;

  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\0') {
      array[i] = c;
      i++;
    }
    array[i] = '\0';
    lineLen = returnLength(array);
    
  }
}

int main(void) {
  char array[MAX];
  compareLength(array, 10); 
}

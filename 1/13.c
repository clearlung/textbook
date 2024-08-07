//1-13: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>
#define MAXWORDS 10

typedef struct {
  int *lengthArray;
} Length;

void initializeArray(Length *length) {
  for (int i=0; i<MAXWORDS; i++) {
    length->lengthArray[i] = 0;
  }
}

void returnLength(Length *length) {
  int c, i, wordLength;
  i = 0;
   
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++wordLength;
      length->lengthArray[i] = wordLength;
    }
    else if (c == ' ' || c == '\n' || c == '\t') {
      wordLength = 0;
      if (i < MAXWORDS)
        i++;
    }
  } 
}

int main(void) {
  Length length;
  length.lengthArray[MAXWORDS];

  initializeArray(&length);
  returnLength(&length);
  
  int i, j;
  for (i=0; i<MAXWORDS; i++) {
    j = 0;
    while (length.lengthArray[i] > 0 && length.lengthArray[i] > j) {
      printf("#");
      j++;
    }
    if (length.lengthArray[i] > 0) {
      printf("\n");
    }
  }
}

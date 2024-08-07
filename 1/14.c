//1-14: Write a program to print a histogram of the frequencies of different characters in its input. 
#include <stdio.h>
#define LENGTH 26

typedef struct { 
  int *array;
} Alphabet;

void initializeArray(Alphabet *alphabet) {
  for (int i=0; i<LENGTH; i++) {
    alphabet->array[i] = 0;
  }
}


void returnNumber(Alphabet *alphabet) {
  int c, i, wordLength;
  i = 0;
   
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      alphabet->array[c-97] += 1;
    }
  } 
}

int main(void) {
  Alphabet alphabet;
  alphabet.array[LENGTH];
  
  initializeArray(&alphabet);
  returnNumber(&alphabet);

  int i, j;
  for (i=0; i<LENGTH; i++) {
    j = 0;
    putchar(i+97);
    printf(" | ");
    while (alphabet.array[i] > j) {
      printf("#");
      j++;
    }
    if (alphabet.array[i] > 0) {
      printf("\n");
    }
  }
}

//1-23: Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
/*
notes: 
no functionality to handle excepsions like '"'.
this program is not intended read or modify a file
*/
#include <stdio.h>

void handleSingle(char *array, int *i) {
  while (array[(*i)++] != '\n')
    ;
}

void handleMulti(char *array, int *i) {
  while (array[++(*i)] != '*' && array[++(*i)] != '/') 
    ;
  *i += 3; //skips '*','/', ('\n'||' ')
}

//function instructions: if in quote, print characters to the terminal until the quote terminates.
void inQuote(char *array, int *i) {
  if (array[*i] == '"') {
    putchar(array[*i]);
    while (array[++(*i)] != '"') {
      putchar(array[*i]);
    }
  }
}

void detectComments(char *array) { 
  int i = 0;

  while (array[i] !=  '\0') {
    inQuote(array, &i);
    if (array[i] == '/') {
      if (array[++i] == '/') {
        handleSingle(array, &i);
      }
      else if (array[i] == '*') {
        handleMulti(array, &i);
      }
      else if (array[i] != '\0') {
        putchar(array[i++]);
      }
    }
    else if(array[i] != '\0') {
      putchar(array[i++]);
    }
  }
}

void inputToArray(char *array) {
  int c, i;
  i = 0;

  while ((c = getchar()) != EOF) 
    array[i++] = c;
  array[i] = '\0';
}

int main(void) {
  char array[1000];

  for (int i=0; i<1000; i++)
    array[i] = '\0';
  
  inputToArray(array);
  detectComments(array);
}

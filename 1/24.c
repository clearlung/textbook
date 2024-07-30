// 1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. 
//I don't know how to solve this right now and I don't want to remain stuck on this problem so I'm moving onto the next chapter, I'll come back when I get an idea of how to solve this problem.
#include <stdio.h>
#define MAX 1000

typedef struct {
  int single1, single2, double1, double2;
} Counter;

void inputToArray(char *array);
void detectState(char *array);
void inDoubleQuote(char *array, int *i);
void inSingleQuote(char *array, int *i);

int main(void) {
  char array[1000];
  
  inputToArray(array);
  detectState(array);
}

void detectState(char *array) { 
  int i = 0;

  while (array[i] !=  '\0') {
    if (array[i] == '"') {
      inDoubleQuote(array, &i);
    /*if (array[i] == '/') {
      if (array[++i] == '/') {
        handleSingle(array, &i);
      }
      else if (array[i] == '*') {
        handleMulti(array, &i);
      }
      else if (array[i] != '\0') {
        putchar(array[i++]);
      }
    }*/
    }
  }
}

void inDoubleQuote(char *array, int *i) {
  while (array[++(*i)] != '"') {
    if (array[*i] == '\'') {
      inSingleQuote(array, i);      
    }
    if (array[*i] == '\0') { 
      printf("enclosing double quote not found\n");
      return;
    }
  }
}

void inSingleQuote(char *array, int *i) {
  while (array[++(*i)] != '\'') {
    if (array[*i] == '"') {
      inDoubleQuote(array, i);
    }
    if (array[*i] == '\0') { 
      printf("enclosing single quote not found\n");
      return;
    }
  }
}

void inputToArray(char *array) {
  int c, i;
  i = 0;

  for (int i=0; i<1000; i++)
    array[i] = '0'; // initialize values to an arbitrary value

  while ((c = getchar()) != EOF) 
    array[i++] = c;
  array[i] = '\0';
}

// 1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. 
//detect whether closing bracket is present before opening bracket
//compare number of opening vs closing brackets
#include <stdio.h>
#define MAX 1000

typedef struct {
  int single1, single2, double1, double2;
} Counter;

void inputToArray(char *array);
void detectState(char *array);

int main(void) {
  char array[1000];
  
  inputToArray(array);
  detectState(array);
}

void detectState(char *array) { 
  int i = 0;

  while (array[i] !=  '\0') {
    if (array[i] == '"') {[
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


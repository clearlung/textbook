// 1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. 
/* CONCEPT 
 * compare the outermost inner bracket with the outer most closing bracket in order. 
 * If a non matching opening/closing bracket is found, return the offset of the character.
 * else return -1 (no error)
 */ 
#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

void inputToArray(char *array);
void detectState(char *array);
void handleBrackets(char *array);

int main(void) {
  char array[MAX];
  
  inputToArray(array);
  detectState(array);
}

void detectState(char *array) { 
  int i = 0;

  while (array[i] !=  '\0') {
    if (array[i] == '(')
      handleBrackets(array);
  }
}

void inputToArray(char *array) {
  int c, i;
  i = 0;
 
  while ((c = getchar()) != EOF) 
    array[i++] = c;
  array[i] = '\0';
}


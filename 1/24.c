// 1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. 
//I don't know how to solve this and I don't want to try to solve it.
#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

void inputToArray(ch ar *array);
void detectState(char *array);
void handleBrackets(char *array);

typedef struct {
  int para1, para2;
} Data;

int main(void) {
  char array[MAX];
  
  inputToArray(array);
  detectState(array);
}

void detectState(char *array) { 
  Data data;
  int i = 0;

  while (array[i] !=  '\0') {
    if (array[i] == '(')
      data->para1++;
    else if (array[i] == ')') 
      data->para2++;
  }
  bool equivalent = compareData(&data);
  if (equivalent)
    return;
  if (!equivalent)
    puts("Inequivalent number of opening and closing brackets");
}

bool compareData(Data *data) {
  if (data1 == data2) {
    return true;
  }
  else if (data1 != data2) {
    return false;
  }
}

void inputToArray(char *array) {
  int c, i;
  i = 0;
 
  while ((c = getchar()) != EOF) 
    array[i++] = c;
  array[i] = '\0';
}


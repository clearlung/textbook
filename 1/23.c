//1-23: Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants prooperly. C comments do not nest.
//this is incomplete
#include <stdio.h>

void handleSingleComment(char *array, int *i) {
  while (array[*(i++)] != '\n')
    ;
}

void handleMultiComment(char *array, int *i) {
  while (array[*(i++)] != '*' && array[*(i++)] != '/')
    ;
}

void lineToArray() {

}

void detectComments(char *array) { 
  int i;
  while (array[i++] !=  '\0') {
    if (array[i++] == '/')
      if (array[i] == '/')
        handleSingleComment(array, &i);
      else if (array[i] == '*')
        handleMultiComment(array, &i);
      else
        handleNoComment(array, &i);
    }
  }
}

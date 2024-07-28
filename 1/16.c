//1-16: Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.
#include <stdio.h>
#define MAXLINE 100000 //I don't understand what this problem is asking me to do.

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main(void) {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  
  if (max >= MAXLINE) {
    printf("String is longer or equal to maximum line length.\n");
    return 1;
  }

  if (max > 0) { // line exists
    printf("%s", longest);
  }
  return 0;
}

int getLine(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

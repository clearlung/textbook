//1-11: How would you test the word count program? What kinds of inputs are most likely to uncover bugs if there are any?
#include <stdio.h>
#define IN 1
#define OUT 0

const char *path="/home/clear/foo";

int main(void) {
  FILE *fptr;
  fptr = fopen(path, "r");
  if (fptr == NULL) {
    printf("File invalid.\n");
    return 1;
  }

  int c, n1, nw, nc, state;

  state = OUT;
  n1 = nw = nc = 0;
  while ((c = getc(fptr)) != EOF) {
    ++nc;
    if (c == '\n')
       ++n1;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", n1, nw, nc);
  return 0;
} 

/*
Q: How would you test the word count program?
A: I would modify the program to take a specified file as input instead of stdin.
NOTE: I could have just used stdin so I don't know why I modified the program.

Q: What kinds of inputs are most likely to uncover bugs if there are any?
A: Words that are separated with characters other than ' ', '\n', or '\t' (e.g. languages that don't separate words with characters).
*/

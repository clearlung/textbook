//2-5: Write the functiion any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
#include <stdio.h>
#define MAX 1000

int any(char *s1, char *s2) {
  int i, j, offset;
  i=0; j=0; offset=0;

  while (s1[i] != '\0') {
    while (s2[j] != '\0' && s1[i] != s2[j])
      j++;
    if (s1[i] == s2[j])
      return offset;
    i++;
    offset++;
    j=0;
  }
  return -1;
}

int main(void) {
  char array[MAX] = "xyzabcdefghijklmnopqrstuvwxyz";
  char target[MAX] = "aiueo";
  int offset = any(array, target);
  printf("offset: %d\n", offset);
}

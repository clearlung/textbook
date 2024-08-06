//2-4: Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2
#include <stdio.h>
#define MAX 1000

void squeeze(char *s1, char *s2);
void charToArray(char *s);

int main(void) {
  char array[MAX] = "the quick brown fox jumps over the lazy dog";
  char remove[MAX] = "aiueo";
  squeeze(array, remove); 
}

void squeeze(char *s1, char *s2) {
  int i, j;
  i=0; j=0;

  while (s1[i] != '\0') {
    while (s2[j] != '\0' && s1[i] != s2[j])
      j++;
    if (s1[i] != s2[j])
      putchar(s1[i]);
    i++;
    j=0;
  }
}

/* CONCEPT
 * [ A ] = Safe
 * [ B ] = Delete
 * [ A ][ B ][ A ][ B ]
 * if state = in
 * copy [ A ]
 * if state = out
 * skip past [ B ]
 */

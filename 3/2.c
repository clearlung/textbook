/*3-2: Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences 
 * like \n and \t as it copies the string t to s. use a switch. Write a function for the other direction as well, 
 * converting escape sequences into the real characters.
 */
#include <stdio.h>
#define MAX 1000

int escape(char *s, char *t) {
  int i, j;
  j = i = 0;

  while (t[i] != '\0') {
    switch (t[i]) {
      case '\n':
        s[j++] = '\\';
        s[j] = 'n';
        break;
      case '\t':
        s[j++] = '\\';
        s[j] = 't';
        break;
      default:
        s[j] = t[i];
        break;
    }
    i++; j++;
  }
}

int reverseEscape(char *s, char *t);

int main(void) {
  char s[MAX] = "Pack my box with ten dozen liquor jugs";
  char t[MAX];

  escape(t, s);  
  
  int i = 0;

  while (t[i] != '\0') 
    putchar(t[i++]);
}

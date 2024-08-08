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

int reverseEscape(char *s, char *t) {
  int i, j;
  j = i = 0;

  while (t[i] != '\0') {
    if (t[i] == '\\') {
      switch (t[++i]) {
        case 'n':
          s[j] = '\n';
          break;
        case 't':
          s[j] = '\t';
          break;
        default:
          i--;
          s[j] = t[i];
          break;
      }
    }
    else
      s[j] = t[i];
    i++; j++;
  }
}

int main(void) {
  char s[MAX] = "Pack my \nbox with ten\t dozen liquor jugs";
  char t[MAX];
  int i;
  
  escape(t, s);   
  i = 0;

  while (t[i] != '\0') 
    putchar(t[i++]);
  putchar('\n');

  char s2[MAX] = "Ten\\nboxing wizards\\tjump\\quickly";
  reverseEscape(t, s2);

  i = 0;
  while (t[i] != '\0') 
    putchar(t[i++]);
  putchar('\n');
}

//1-6: Verify that the expression getchar() != EOF is 0 or f.
#include <stdio.h>

int main(void) {
  int c;

  c = (getchar() != EOF);
  printf("%d", c);
}

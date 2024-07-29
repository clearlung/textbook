//1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. 
//check whether in comment or not
//check whether in quotes or not
//check brackets

typedef struct {
  int single1, single2, double1, double2;
  int paren1, paren2, bracket1, bracket2, brace1, brace2;
} Counter;

void inComment(char *array, int *i) {
  if (array[*i] == '/' && array[++(*i)] == '/')
    while (array[(*i)++] != '\n')
      ;
}

void inQuotes(char *array, int *i, Counter *counter) {
  if (array[*i] == '"') {
    counter->single1++;
    while (array[++(*i)] != '"')
      ;
    if (array[i]; == '"')
      counter->single2++;
  }
}

void updateCounter(char *array, Counter *counter) {
  while (array[i] != '\0') {
  }
}

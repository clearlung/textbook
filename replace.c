//this is from my cli.scripts dir but I think it's an assignment in my textbookso I might as well reuse my solution.
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#define IN 1
#define OUT 0
#define EXIT 2
#define MAXLEN 1000

char searchTerm[] = "berry";
char replaceTerm[] = "pineapple"; 
int searchTermLength = sizeof(searchTerm) / sizeof(searchTerm[0]);
int replaceTermLength = sizeof(replaceTerm) / sizeof(replaceTerm[0]);

typedef struct { // this struct is unnecessary
  char fileContents[MAXLEN];
  char fileContentsNew[MAXLEN];
} Text;

int find(char *array, char *search);
void replace(Text *text, char *search, char *replace);
void copy(char *array);

int main(void) {
  Text text;
  int i=0;
  
  copy(text.fileContents);
  replace(&text, searchTerm, replaceTerm);
  while (text.fileContentsNew[i] != '\0')
    putchar(text.fileContentsNew[i++]);
}

void replace(Text *text, char *search, char *replace) {
  int offset = find(text->fileContents, search);
  int i, j, k, state;
  state = OUT;
  k=0;

  while (state != EXIT) {
    if (state == OUT) { 
      if (offset != -1)
        state = IN;      
      else if (offset == -1) {
        i = 0;
        while (text->fileContents[i] != '\0') {
          text->fileContentsNew[k++] = text->fileContents[i++]; 
        }
        text->fileContentsNew[k] = '\0';
        state = EXIT;
      }
    }
    if (state == IN) {
      if (offset != -1) {
        for (i=0; i<offset; i++)
          text->fileContentsNew[k++] = text->fileContents[i];
        
        for (i=0; i<replaceTermLength-1; i++)
          text->fileContentsNew[k++] = replaceTerm[i]; 
        
        i = offset+searchTermLength-1; 
        j = 0;

        while (text->fileContents[i] != '\0')  
          text->fileContents[j++] = text->fileContents[i++];      
        text->fileContents[j] = '\0'; 
      }
      offset = find(text->fileContents, search);
      state = OUT;
    }
  }
}

int find(char *array, char *search) {
  int offset, i;
  i = 0;
  while (array[i] != '\0') {
    if (array[i] == search[0]) {
      offset = i;
      while (array[i] == search[i - offset] && array[i] != '\0')
        i++;
      if (i-offset == searchTermLength-1)
        return offset;
    }
    i++;
  }
  return -1;
}


void copy(char *array) {
  int i, c;  
  i = 0;

  while((c = getchar()) != EOF) { 
    *(array++) = c;    
  }
  *array = '\0';
}

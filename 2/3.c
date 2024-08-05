//2-3: Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
//only using "XXXXXX" format for clarity. I'll add more functionality afterwards.
//implemented "0xXXXXXX format but undid it all because of a typo
#include <stdio.h>
#include <math.h>
int htoi(char *s, int places);
int returnDecimalVal(char s);
int returnPlaces(char *s);

int main(int argc, char **argv) {
  int i;
  char s[50] = "7B3\0";

  int places = returnPlaces(s);
  int sum = htoi(s, places);

  printf("sum: %d\n",  sum);
  return 0;
}


int returnPlaces(char *s) {
  int i = 0;

  while (s[i] != '\0')
    i++;
  return i;
}

int htoi(char *s, int places) {
  int d[50], i, k;
  k = 0;
  //initialize d
  for (i=0; i<50; i++)
    d[i] = -1;
  //count number of digits.
  //int places = returnPlaces(s);
  //convert each number to corresponding 0-15 value;
  //place innermost *s value into outermost *d value

  i = 0;
  while (s[i] != '\0')
    d[places-i-1] = returnDecimalVal(s[i++]);
  
  printf("initial d: %d\n", d[k]);
   //x2 = x1 * (16 ^ placeValue)
  i = 0;
  while (d[i] != -1) 
    d[i] = d[i] * pow(16, i++);

  printf("post formula d: %d\n", d[k]);

  //while not terminate: returnValue += d[i++]
  int totalSum;
  i = 0; totalSum = 0;

  while (d[i] != -1)
    totalSum += d[i++];
  return totalSum;
}

int returnDecimalVal(char s) {
  int number;
  if (s >= '0' && s <= '9') {
    number = s - 48;
  }
  else if (s >= 'A' && s <= 'F') {
    switch (s) {
      case 'A':
        number = 10;
        break;
      case 'B':    
        number = 11;
        break;
      case 'C':
        number = 12;
        break;
      case 'D':
        number = 13;
        break;
      case 'E':
        number = 14;
        break;
      case 'F':
        number = 15;
        break;
      default:
        break;
    }
  }
  return number;
}

/* notes on hexadecimal
 * base-16 numbering system
 * 0-9, A-F
 * position of digit has weight of 16 to the power of its position
 * e.g 7B3 = 1971
 * 7*16^2 + 11*16^1 + 3*16^0 
 * 1792 + 176 + 3
 * 1971
 */

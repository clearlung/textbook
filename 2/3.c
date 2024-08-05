//2-3: Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
//only using "XXXXXX" format for clarity. I'll add more functionality afterwards.
//this is psuedocode right now.
int htoi(char *s, int *d);
int returnDecimalVal(char s);
int returnPlaces(char *s);

int htoi(char *s, int *d) {

  //count number of digits.
  int places = returnPlaces(s);

  
  //convert each number to corresponding 0-15 value;
  //place innermost *s value into outermost *d value
  int i = 0;
  d[places-i++] = returnDecimalVal(s[i]);
  
  //x2 = x1 * (16 ^ placeValue)
  i = 0;
  while (d[i] != -1)
    d[i] = d[i] * (16 ^ i);
  
  //while not terminate: returnValue += d[i++]
  int totalSum;
  i = 0; totalSum = 0;

  while (d[i] != -1)
    totalSum += d[i++];
  return totalSum;
}

int returnDecimalVal(char s) {
  int number;
  if ((s) >= 1 && s <=9) {
    number = s;
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

int returnPlaces(char *s) {
  int i = 2;

  while (s[i++] != '\0')
    ;
  return i;
}

int main(void) {
  int i;
  char s[50];
  int p[50];
  
  //initialize arrays
  //this method of initializing arrays is extremely inefficient, especially if there's only one hexadecimal digit being converted.
  for (i=0; i<50; i++) {
    s[i] = '\0';
  }
  for (i=0; i<50; i++) {
    p[i] = -1;
  }
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

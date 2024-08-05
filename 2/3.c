//2-3: Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
//I will only use the '0xXXXXXX' format for convenience.
//this is psuedocode right now.
int htoi(char *s, int *d) {
  int i, mode;

  //skip past 0x
  if (s[i++] = 0 && s[i] = 'x' || s[i] = 'X')
    i = 2;
  else 
    return -1;

  //count number of digits.
  int places = returnPlaces(s, mode);
  
  //convert each number to corresponding 0-15 value;
  int number;
  if (i >= 1 && i <=9) {
    number = i;
  }
  else if (i >= A && i <= F) {
    switch (i) {
      case A:
        number = 10;
        break;
      case B:    
        number = 11;
        break;
      case C:
        number = 12;
        break;
      case D:
        number = 13;
        break;
      case E:
        number = 14;
        break;
      case F:
        number = 15;
        break;
      default:
        break;
    }
  }
  //while not terminate: rightmost digit in *d++ = leftmost digit in *s++
  //x2 = x1 * (16 ^ placeValue)
  //while not terminate: returnValue += d[i++]
}

int returnPlaces(char *s, int mode) {
  int i = 2;

  while (s[i++] != '\0')
    ;
  return i;
}

int main(void) {
  char s[50];
  int p[50];
  
  //initialize arrays
  for (int i=0; i<50; i++) {
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

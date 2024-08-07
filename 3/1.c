//3-1: Our binary search makes two tests inside the loop, when one would suffice ( at the price of more tests outside). Write a version with only one test inside the loop an d measure the difference in run time.
#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low, high, mid;
  low = 0;
  high = n-1;

  while (low <= high) {
    mid = (low+high) / 2;
    if (x < v[mid])
      high = mid -1; 
    else
      low = mid + 1;
  }
  return mid;
}

int main(void) {
  int v[50];
  int x, n;
  x = 3;
  n = 50;

  int mid = binsearch(x, v, n);
  if (x == v[mid])
    printf("result: %d\n", mid);
  else
    printf("result not found\n", mid);
}

//2-6: Write a function setbits(x,p,n,y) that returns x with the n bits that begins at position p set to the rightmost n bits of y, leaving the other bits unchanged.
//example code
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p+1-n)) & -(-0 <<n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {

}

int main(void) {}

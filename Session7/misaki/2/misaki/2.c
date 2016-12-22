#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned short lo;
  unsigned short hi;
} Split;

typedef union {
  unsigned int num;
  Split bit;
} Input;

int main() {
  Input in;

  scanf("%u", &in.num);

  printf("%x\n", in.num); 
  printf("%04x\n", in.bit.hi);
  printf("%04x\n", in.bit.lo);

  return 0;
}

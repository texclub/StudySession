#include <stdio.h>

#define SIZE 1000000

int main() {
  int i, j;

  for (i = 2; i < SIZE; i++) {
    for (j = 2; j < i; j++) {
      if (i%j == 0) break;
    }
    //if (j == i) printf("%d\n", i);
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;

  srand((unsigned)time(NULL));
  for (i = 0; i < 5; i++) {
    printf("%d\n", rand()%10000+1);
  }

  return 0;
}

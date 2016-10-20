#include <stdio.h>

#define SIZE 5

void putnum(int b[]);

int main() {
  int i;
  int box[SIZE] = {1, 2, 3, 4, 5};

  putnum(box);
  for (i = 0; i < sizeof(box)/sizeof(int); i++) {
    printf("%d ", box[i]);
  }
  printf("\n");

  return 0;
}

void putnum(int b[]) {
  b[0] = 3;

  return;
}

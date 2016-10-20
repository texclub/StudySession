#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000

int main() {
  int *matrix;
  int i, j;

  matrix = malloc(sizeof(int) * SIZE * SIZE);
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      matrix[SIZE * i + j] = i*j;
    }
  }

  free(matrix);

  return 0;
}

#include <stdio.h>

#define SIZE 10000

int main() {
  int matrix[SIZE][SIZE];
  int i, j;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      matrix[i][j] = i*j;
    }
  }

  return 0;
}

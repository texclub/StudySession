#include <stdio.h>

#define SIZE 5

void sort(int array[]);

int main() {
  int i;
  int array[SIZE] = {};
  
  scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);
  sort(array);

  for (i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

void sort(int array[]) {
  int i, j, temp;

  for (i = 0; i < SIZE-1; i++) {
    for(j = SIZE-1; j > i; j--) {
      if (array[j-1] > array[j]) {
        temp = array[j-1];
        array[j-1] = array[j];
        array[j] = temp;
      }
    }
  }
}

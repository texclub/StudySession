#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *x, const void *y);

int main() {
  int size, i;
  int *array;

  scanf("%d", &size);
  array = (int *)malloc(sizeof(int) * size);

  srand((unsigned)time(NULL));
  for (i = 0; i < size; i++) {
    array[i] = rand() % size + 1;
  }

  qsort(array, size, sizeof(int), compare);
  for (i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }

  free(array);

  return 0;
}

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *, const void *);

int main() {
  int x, i;
  int *array;

  scanf("%d", &x);
  array = (int *)malloc(sizeof(int) * x);

  // 乱数生成
  srand((unsigned)time(NULL));
  for (i = 0; i < x; i++) {
    array[i] = rand() % x + 1;
  }

  qsort(array, x, sizeof(int), compare);

  for (i = 0; i < x; i++) {
    printf("%d\n", array[i]);
  }

  free(array);

  return 0;
}

int compare(const void *x, const void *y) {
  return *(int *)x - *(int *)y;
}

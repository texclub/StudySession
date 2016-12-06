#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int *array1, int size, int *max);
int count(int *array, int size);

int main() {
  int i, j, n;
  int *array;

  scanf("%d", &n);
  while(n != 0) {
    array = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
    }

    int max = 0;
    solve(array, n, &max);
    printf("%d\n", max);

    scanf("%d", &n);
  }

  free(array);
  return 0;
}

void solve(int *array1, int size, int *max) {
  int i, j;
  int *array2;

  int c = count(array1, size);
  if (c > *max) {
    *max = c;
  }

  for (i = 0; i < size-1; i++) {
    if (array1[i] == 0) {
      continue;
    }

    for (j = i+1; j < size; j++) {
      if (array1[j] == 0) {
        continue;
      } else if (abs(array1[i]-array1[j]) <= 1) {
        array2 = (int *)malloc(sizeof(int) * size);
        memcpy(array2, array1, sizeof(int) * size);

        array2[i] = 0;
        array2[j] = 0;

        solve(array2, size, max);
      }
    }
  }

}

int count(int *array, int size) {
  int i;
  int count = 0;

  for (i = 0; i < size; i++) {
    if (array[i] == 0) count++;
  }

  return count;
}

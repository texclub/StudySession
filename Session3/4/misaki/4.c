#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int conv(int a[], int n);

int main() {
  int n;

  while(1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }

    int a[n], i;
    for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }

    printf("%d\n", conv(a, n));
  }

  return 0;
}

int conv(int a[], int n) {
  int min = INT_MAX;
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      int tmp = abs(a[i] - a[j]);
      if (tmp < min) {
        min = tmp;
      }
    }
  }

  return min;
}

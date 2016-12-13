#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int *data, int size, int count, int *max);

/* debug */
void print(int *data, int size) {
  int i;

  printf("print\n");
  for (i = 0; i < size; i++) {
    printf("%d\t", data[i]);
  }
  printf("\n");
}

int main() {
  int n, i, ans;
  int *data;

  scanf("%d", &n);
  while(n) {
    data = (int *)realloc(data, sizeof(int) * n);
    for (i = 0; i < n; i++) {
      scanf("%d", &data[i]);
    }
    ans = 0;
    solve(data, n, 0, &ans);
    printf("%d\n", ans);

    scanf("%d", &n);
  }
  free(data);

  return 0;
}

void solve(int *data, int size, int count, int *max) {
  int i, j;
  int temp[size];

  for (i = 0; i < size-1; i++) {
    if (data[i] == 0) continue;

    // 配列の中身が0の間読み飛ばす
    j = i;
    while(data[++j] == 0 && j < size);

    if (abs(data[i] - data[j]) <= 1) {
      memcpy(temp, data, sizeof(int) * size);

      // だるまを2つ落として探索し直し
      temp[i] = 0;
      temp[j] = 0;
      solve(temp, size, count+2, max);
    }

  }

  if (count > *max) {
    *max = count;
  }

  return;
}

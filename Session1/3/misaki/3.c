#include <stdio.h>

int main() {
  int i, j, input1, input2;
  int table[9][9];

  for (i = 1; i <= 9; i++) {
    for (j = 1; j <= 9; j++) {
      table[i-1][j-1] = i*j;
    }
  }

  scanf("%d %d", &input1, &input2);
  if (!((input1 > 0 && input1 <= 9) 
          && (input2 > 0 && input2 <= 9))) {
    printf("1~9までの値を入力してください\n");
    return -1;
  }

  printf("%d\n", table[input1-1][input2-1]);
  return 0;
}

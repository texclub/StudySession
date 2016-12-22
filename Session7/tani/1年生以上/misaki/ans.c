#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, M, i, k;
  int *Ai;

  scanf("%d%d", &N, &M);
  Ai = (int *)malloc(N * sizeof(int));

  for (i = 0; i < N; i++) {
    scanf("%d", &Ai[i]);
  }

  for (k = 0; k < M; k++) {
    for (i = 0; i < N-1; i++) {
      if (Ai[i]%(k+1) > Ai[i+1]%(k+1)) {
        int temp = Ai[i];
        Ai[i] = Ai[i+1];
        Ai[i+1] = temp;
      }
    }
    print(Ai, N);
  }

  for (i = 0; i < N; i++) {
    printf("%d\n", Ai[i]);
  }

  free(Ai);

  return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  double f;

  scanf("%d%d", &a, &b);
  if (a > b) {
    f = sqrt(pow(a, 2) - pow(b, 2));
    printf("%lf, %lf\n", f, -1*f);
  } else if(a < b) {
    printf("0\n");
  }

  return 0;
}

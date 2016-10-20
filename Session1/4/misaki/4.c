#include <stdio.h>
#include <math.h>

typedef struct {
  int x;
  int y;
} POINT;

typedef struct {
  POINT a;
  POINT b;
  POINT c;
} TRIANGLE;

double calc_distance(POINT p1, POINT p2);

int main() {
  TRIANGLE input;
  scanf("%d%d%d%d%d%d", &input.a.x, &input.a.y, &input.b.x, &input.b.y, &input.c.x, &input.c.y);

  printf("%f\n", calc_distance(input.a, input.b));
  printf("%f\n", calc_distance(input.a, input.c));
  printf("%f\n", calc_distance(input.b, input.c));

  return 0;
}

// 2点の座標を入力に持ち, 距離を返す関数
double calc_distance(POINT p1, POINT p2) {
  double dist = sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) );

  return dist;
}

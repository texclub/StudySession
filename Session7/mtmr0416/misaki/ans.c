#include <stdio.h>

int main() {
  char *str;
  char c;

  scanf("%s", str);

  for (; *str != '\0'; str++) {
    printf("%c", (*str-32));
  }
  printf("\n");

  return 0;
}

#include <stdio.h>

int main() {
  char str[20];
  char *p;
  
  scanf("%s", str);
  for (p = str; *p != '\0'; p++) {
    printf("%c\n", *p);
  }

  return 0;
}

#include <stdio.h>

int main() {
  FILE *file;
  char str[256];

  file = fopen("./input.txt", "r");
  if (file == NULL) {
    return -1;
  }

  while(fscanf(file, "%s", str) != EOF) {
    printf("%s\n", str);
  }
  fclose(file);

  return 0;
}

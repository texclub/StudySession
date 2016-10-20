#include <stdio.h>

int main() {
  FILE *file;
  char str[256];

  file = fopen("./output.txt", "a");
  if (file == NULL) {
    return -1;
  }

  scanf("%s", str);

  fprintf(file, "%s\n", str);
  fclose(file);

  return 0;
}

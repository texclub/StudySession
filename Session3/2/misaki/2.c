#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char path[], char option[]);
void inputFile(FILE* file);
void outputFile(FILE* file, char str[]);

int main() {
  int input;

  scanf("%d", &input);

  FILE* file;
  switch (input) {
    case 1:
      file = openFile("./input.txt", "r");
      inputFile(file);
      break;
    case 2:
      file = openFile("./output.txt", "w");
      outputFile(file, "Hello, World!!");
      break;
    case 3:
      file = openFile("./output.txt", "a");
      outputFile(file, "Hello, World!!");
      break;
    default:
      break;
  }

  return 0;
}

FILE* openFile(char path[], char option[]) {
  FILE* file = fopen(path, option);
  if (file == NULL) {
    printf("ファイルが読み込めませんでした。\n");
    exit(1);
  }

  return file;
}

void inputFile(FILE* file) {
  char str[256];
  while (fscanf(file, "%s", str) != EOF) {
    printf("%s\n", str);
  }

  fclose(file);
}

void outputFile(FILE* file, char str[]) {
  fprintf(file, "%s\n", str);

  fclose(file);
}

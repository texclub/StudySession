#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct {
  int weight;
  int value;
} Object;

void quicksort(Object c[], int left, int right);
void swap(Object c[], int left, int right);

int main() {
  int i;
  Object container[SIZE];

  for (i = 0; i < SIZE; i++) {
    scanf("%d%d", &container[i].weight, &container[i].value);
  }
  quicksort(container, 0, SIZE-1);

  printf("\n");
  for (i = 0; i < SIZE; i++) {
    printf("%d %d\n", container[i].weight, container[i].value);
  }

  return 0;
}

void quicksort(Object c[], int left, int right) {
  if (left >= right) {
    return;
  }

  int l = left;
  int r = right;
  int pivot = c[left].weight;

  while(l <= r){
    while(l <= right && c[l].weight < pivot) {
      l++;
    }
    while(r >= left && c[r].weight > pivot) {
      r--;
    }

    if (l >= r) {
      break;
    }
    swap(c, l, r);
    l++;
    r--;
  }

  if (left < l-1)  quicksort(c, left, l-1);
  if (r+1 < right) quicksort(c, r+1, right);
}

void swap(Object c[], int left, int right) {
  Object temp = c[left];
  c[left] = c[right];
  c[right] = temp;
}

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int GetRandom(int min, int max);

int main(){

  printf("```\n");

  srand((unsigned int)time(NULL));
  
  int i;
  for(i = 0; i < 5; i++) {
    printf("%d\n",GetRandom(0,10000));
  }
  
  printf("```\n");
  return 0;
}

int GetRandom(int min, int max){
  return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

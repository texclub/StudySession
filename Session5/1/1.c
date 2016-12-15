#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int int main(int argc, char const *argv[]) {
  int a,i;
  int *ap;

  printf("どんくらいやる？\n");
  scanf("%d", &a);

  if((ap=(int *)malloc(a*sizeof(int)))==NULL){
    printf("ERROR\n");
    return 1;
  }

  srand((unsigned)time(NULL));

  for(i=0;i<a;i++){
    c=1+(rand()*(a-1+1)/(1+RAND_MAX));
    printf("%d\n",c);
  }
  free(ap);
  return 0;
}

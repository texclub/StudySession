#include<stdio.h>
#include <stdlib.h>

int main(){

  int a = 0;
  int b = 0;
  
  scanf("%d %d",&a,&b);
  
  if(abs(a) > 9 || a == 0) {
    printf("error\n");
  }
  
  else if(abs(b) > 9 || b == 0) {
    printf("error\n");
  }
  else {
    printf("%d\n",a*b);
  }
  
  return 0;
  
}

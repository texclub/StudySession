#include<stdio.h>
#include <stdlib.h>


int main(){

  int x;
  scanf("%d",&x);
  
  int i;
  int ans[x];
  for(i = 0; i < x; i++){
    int r = (int)rand()%x+1;
    ans[i]= r;
  }
  
  int flg = 1;
  while(flg != 0){
    flg = 0;
    for (i = 0; i < x-2; i++){    
      int t;
      if(ans[i] > ans[i+1]){
	t = ans[i];
	ans[i] = ans[i+1];                                      
	ans[i+1]= t;
	flg++;
      }
      
    }
  }
  for(i = 0; i < x; i++)
    printf("%d\n", ans[i]);
  
  return 0;
}

#include<stdio.h>

int main(){

  int i;
  int num[5];
  int input = 0;
  for(i = 0; i < 5; i++) {
    scanf("%d",&input);
    num[i] = input;
  }

  int count = 1;
  while(count != 0){
    count = 0;
    for(i = 0; i < 4; i++){
      if(num[i] > num[i+1]){
	int temp = num[i];
	num[i] =  num[i+1];
	num[i+1] = temp;
	count++;
      }
    }
  }
  for(i = 0; i < 5; i++) printf("%d\n",num[i]);
  
  return 0;
}

#include <stdio.h> 
#include <string.h> 

 int main(){ 
  int i; 

  char str[100]; 
  printf("\n");
  scanf("%s", str); 

  for(i = 0; i <= strlen(str); i++){ 
    if(str[i] >= 97 && str[i] <= 122) 
      str[i] = str[i] - 32; 
  } 

  printf("\n%s\n", str); 
  return 0; 
} 


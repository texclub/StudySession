#include<stdio.h>

int main()
{
 
 char str[1024];
 scanf("%s", str);
 
 for(int i = 0; str[i] != '\0'; i++) {
  if ('a' <= str[i] && str[i] <= 'z') {
    str[i] = str[i] + ('A' - 'a');
    }
   } 




	printf("%s\n",str);
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int a, b;

	scanf("%d%d", &a, &b);

	if ( 0 < a && a < 9 && 0 < b && b < 10 ) {
		printf("%d\n",a*b);
	}else {
		printf("Error!!");
	}

	return 0;
}
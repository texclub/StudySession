#include<stdio.h>
	int getn(){int x;fflush(stdout);scanf("%d",&x);return x;}

 int main()
 {
	int n;
	int  count;

	printf("素数判定する数字を入力してください");
	n = getn();

	if(n == 1) {
		printf("%d は素数ではありません。\n",n);
		} else {
		  count = 0;
		for ( int i = 2; i < n - 1; i++) {
			if ( n % 1){
			    count+= 1;
			 }
		   }
		if (count == 0) {
		    printf("%d は素数です。\n",n);
		} else {
			printf("%d は素数ではありません。\n",n);
		}
	   }
			
	return 0;
}



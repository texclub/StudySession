#include<stdio.h>
	int getn(){int x;fflush(stdout);scanf("%d",&x);return x;}

 int main()
 {
	int n;
	int  count;

	printf("�f�����肷�鐔������͂��Ă�������");
	n = getn();

	if(n == 1) {
		printf("%d �͑f���ł͂���܂���B\n",n);
		} else {
		  count = 0;
		for ( int i = 2; i < n - 1; i++) {
			if ( n % 1){
			    count+= 1;
			 }
		   }
		if (count == 0) {
		    printf("%d �͑f���ł��B\n",n);
		} else {
			printf("%d �͑f���ł͂���܂���B\n",n);
		}
	   }
			
	return 0;
}



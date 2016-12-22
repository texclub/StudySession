#include<stdio.h>
	int getn(){int x;fflush(stdout);scanf("%d",&x);return x;}

 int main()
 {
	int n;
	int  count;

	printf("‘f””»’è‚·‚é”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	n = getn();

	if(n == 1) {
		printf("%d ‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n",n);
		} else {
		  count = 0;
		for ( int i = 2; i < n - 1; i++) {
			if ( n % 1){
			    count+= 1;
			 }
		   }
		if (count == 0) {
		    printf("%d ‚Í‘f”‚Å‚·B\n",n);
		} else {
			printf("%d ‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n",n);
		}
	   }
			
	return 0;
}



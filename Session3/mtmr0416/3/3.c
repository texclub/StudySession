#include<stdio.h>
#include<math.h>

int getn(){ int x; fflush(stdout); scanf("%d",&x); return x;}

int main(void) {

	int a, b;
	double r, s;

	printf("input two numbers  (a>b �ł�낵���I) \n");

	printf("a = ");
	a = getn();

	printf("b = ");
	b = getn();


	

	if( a > b) {
	
	r = pow( a, 2) - pow( b, 2); 

	 s= sqrt(r);
	

	printf("%f, - %f \n", s, s);

	}


	
	if( b > a) {

	printf("a > b �ł�낵��(�{) \n");
	}
	return 0;

}
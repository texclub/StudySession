#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	double kotae;

	printf("syouten irete : ");

	scanf("%d%d", &a, &b);

	if (a > b && b > 0) {
		kotae = sqrt( pow(a, 2) - pow(b, 2) );

	}else if(b > a && a > 0) {
		kotae = sqrt( pow(b, 2) - pow(a, 2) );

	}else {
		kotae = 444;
	}

	printf("%f \t %f\n", kotae, kotae*-1);

	return 0;

}

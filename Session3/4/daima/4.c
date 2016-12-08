#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j, ninzu, sub, tikai = 0;
	int hito[998];

	printf("ninzu irete : ");
	scanf("%d", &ninzu);

	if ( ninzu < 2 && 1000 < ninzu ) {
		printf("bakadesuka?");
		return -1;
	}

	printf("de-ta irete : ");
	for (i = 0; i < ninzu; i++) {
		scanf("%d", &hito[i]);
	}

	for (i = 0; i < ninzu - 1; i++) {
		for (j = ninzu - 1; j > i; j--) {
			sub = abs(hito[j - 1] - hito[j]);
			if (tikai == 0 || tikai > sub) {
				tikai = sub;
			}
		}
	}

	printf("%d\n", tikai);

	return 0;


}
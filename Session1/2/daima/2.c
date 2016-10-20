#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        
        int i;

        srand( (unsigned int)time( NULL ) );

        /* 1～10の擬似乱数を100個発生 */
        for (i=0; i<5; i++) {
                printf("%d\n",rand()/10);
        }

        return 0;
}
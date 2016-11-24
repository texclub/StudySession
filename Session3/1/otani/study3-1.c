#include <stdio.h>
#define N 5

int main(){
    int data[N],i,j;
    int tmp;
    
    for (i=0; i<N; i++) {
        scanf("%d",&data[i]);
    }
    
    for (i=0; i<N-1; i++) {
        for (j=i+1; j<N; j++) {
            if (data[i]>data[j]) {
                tmp=data[i];
                data[i]=data[j];
                data[j]=tmp;
            }
        }
    }
    
    for (i=0;i<N; i++) {
        printf("%d",data[i]);
    }
    
    printf("\n");
    
    return 0;
}
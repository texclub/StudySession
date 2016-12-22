//
//  2015-2.c
//  JOi
//
//  Created by hakuturu1 on 2016/12/19.
//  Copyright © 2016年 白鶴. All rights reserved.
//

#include <stdio.h>
#define N 6

int main(){
    int A[N],i,sum=0,min;
    
    for (i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }
    min=A[0];
    
    for (i=0; i<N-2; i++) {
        if (min>A[i]) {
            min=A[i];
        }
        sum=sum+A[i];
    }
    
    sum=sum-min;
    
    if (A[4]<A[5]) {
        sum=sum+A[5];
    }else if (A[5]<A[4]) {
        sum=sum+A[4];
    }
    
    printf("%d\n",sum);
}
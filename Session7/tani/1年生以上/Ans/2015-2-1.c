//
//  2015-2-1.c
//  JOi
//
//  Created by hakuturu1 on 2016/12/20.
//  Copyright © 2016年 白鶴. All rights reserved.
//

#include <stdio.h>

int main(){
    int N,M,i,j,t,A[110];
    
    scanf("%d%d",&N,&M);
    
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    
    for(i=1;i<=M;i++){
        for(j=0;j<N-1;j++){
            if(A[j]%i>A[j+1]%i){
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    
    for(i=0;i<N;i++){
        printf("%d\n",A[i]);
    }
    
    return 0;
}
//
//  study3-4.c
//  TeX
//
//  Created by hakuturu1 on 2016/11/24.
//  Copyright © 2016年 hakuturu1. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,data[10000],size,min=10000,tmp;
    
    scanf("%d",&size);
    
    while (1){
        
        if (size==0) {
            break;
        }
        for (i=0; i<size; i++) {
            scanf("%d",&data[i]);
        }
        
        for (i=0; i<size-1; i++) {
            for (j=i+1; j<size; j++) {
                tmp=data[i]-data[j];
                tmp=abs(tmp);
                
                if (min>tmp) {
                    min=tmp;
                }
            }
        }
        printf("%d\n",min);
        min=10000;
        scanf("%d",&size);
    }
    
    
    return 0;
}
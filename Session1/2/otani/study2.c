//
//  study2.c
//  TeX
//
//  Created by hakuturu1 on 2016/11/10.
//  Copyright © 2016年 hakuturu1. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    
    srand((unsigned)time(NULL));
    
    for (i=0; i<5; i++) {
        printf("%d\n",rand()%10000);
    }
    
    return 0;
}
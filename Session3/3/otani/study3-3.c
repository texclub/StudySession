//
//  study3-3.c
//  TeX
//
//  Created by hakuturu1 on 2016/11/24.
//  Copyright © 2016年 hakuturu1. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(){
    double a,b;
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    
    a=a*a;
    b=b*b;
    
    printf("%f\n",sqrt(a-b));
    printf("%f\n",-1*sqrt(a-b));
    
    return 0;
}

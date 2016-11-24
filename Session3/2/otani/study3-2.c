//
//  study6.c
//  TeX
//
//  Created by hakuturu1 on 2016/11/16.
//  Copyright © 2016年 hakuturu1. All rights reserved.
//

#include <stdio.h>

int main(){
    FILE *fp1;
    char str[100];
    int mode;
    
    printf("What's mode?\n");
    scanf("%d",&mode);
    
    switch (mode) {
        case 1:
            fp1=fopen("/Users/letsnote/Desktop/TeX/TeX/input.txt", "r");
            
            fscanf(fp1, "%s",str);
            
            printf("%s\n",str);
            break;
        case 2:
            fp1=fopen("/Users/letsnote/Desktop/TeX/TeX/output.txt", "w");
            
            fprintf(fp1, "%s\n","Hello World!!\n");
            printf("Witing OK!\n");
            break;
        case 3:
            fp1=fopen("/Users/letsnote/Desktop/TeX/TeX/output.txt", "a");
            
            fprintf(fp1, "%s\n","Hello World!!\n");
            printf("Witing OK!\n");
            break;
        default:
            printf("ERROR\n");
            break;
    }
    return 0;
}
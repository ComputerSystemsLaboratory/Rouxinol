//
//  main.c
//  ITP1_6_A
//
//  Created by ??±??°?????? on 2015/10/11.
//  Copyright ?? 2015??´ HamadaShogo. All rights reserved.
//

#include <stdio.h>

void reverseNum(int *num, int size);

int main(int argc, const char * argv[]) {
    int size;
    int num[100];
    int i;
    
    scanf("%d", &size);
    for (i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }
    reverseNum(num, size);
    
    return 0;
}

void reverseNum(int *num, int size){
    int i;
    
    for (i=0; i<size; i++) {
        printf("%d", num[size-i-1]);
        if (!(i == size-1)) {
            printf(" ");
        }
    }
    puts("");
}
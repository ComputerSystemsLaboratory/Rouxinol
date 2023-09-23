//
//  main.c
//  ITP1_4_D
//
//  Created by ??±??°?????? on 2015/09/29.
//  Copyright ?? 2015??´ HamadaShogo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

long long intSum(int *num, int size);
int intMax(int *num, int size);
int intMin(int *num, int size);

int main(int argc, const char * argv[]) {
    int *num;
    int size;
    long long sum;
    int max;
    int min;
    int i;
    
    scanf("%d", &size);
    num = (int *)malloc(sizeof(int) * size);
    if (num == NULL) {
        printf("?????¢???????¢??????§????????????\n");
        exit(1);
    }
    
    for (i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }
    
    sum = intSum(num, size);
    max = intMax(num, size);
    min = intMin(num, size);
    
    printf("%d %d %lld\n", min, max, sum);
    
    free(num);
    
    return 0;
}

long long intSum(int *num, int size){
    int i;
    long long sum = 0;
    
    for(i=0; i<size; i++){
        sum += num[i];
    }
    
    return sum;
}

int intMax(int *num, int size){
    int i;
    int max = num[0];
    
    for (i=0; i<size; i++) {
        if (max < num[i]) {
            max = num[i];
        }
    }
    
    return max;
}

int intMin(int *num, int size){
    int i;
    int min = num[0];
    
    for (i=0; i<size; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    
    return min;
}
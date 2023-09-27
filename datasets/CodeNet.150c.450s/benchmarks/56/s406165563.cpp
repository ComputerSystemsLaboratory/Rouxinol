#include <stdio.h>
 
int main(void){
    int l,x,y,min,max;
    long long sum;
    sum = 0;
    scanf("%d", &x);
    for (l = 0;l<x;l++){
        scanf("%d", &y);
        if(l == 0){
            min = y;
            max = y;
        }
        if (min > y){
            min = y;
        }
        if (max < y){
            max = y;
        }
        sum += y;
    }
    printf("%d %d %lld\n",min,max,sum);
    return(0);
}
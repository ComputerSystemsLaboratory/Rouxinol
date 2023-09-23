#include <stdio.h>

int main(void){
    int n, x, max=-1000000, min=1000000;
    long sum=0;

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        max = x>max ? x : max;
        min = x<min ? x : min;
        sum += x;
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}
#include <stdio.h>
#define N 4

int main(void){
    int tmp, sumA=0, sumB=0;
    
    for (int i=0; i<N; i++){
        scanf("%d", &tmp);
        sumA += tmp;
    }
    for (int i=0; i<N; i++){
        scanf("%d", &tmp);
        sumB += tmp;
    }
    printf("%d\n", sumA>sumB?sumA:sumB);
    return 0;
}
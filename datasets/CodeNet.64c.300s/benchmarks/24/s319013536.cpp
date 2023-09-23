#include <stdio.h>
 
int main(void){
    int n;
    int a,b;
    int aSum, bSum;
    
    while (scanf("%d", &n), n!=0){
        aSum = bSum=0;
        for (int i=0; i<n; i++){
            scanf("%d %d", &a, &b);
            if (a>b) aSum += (a+b);
            else if (a<b) bSum += (a+b);
            else aSum += a, bSum += b;
        }
        printf("%d %d\n", aSum, bSum);
    }
    
    return 0;
}
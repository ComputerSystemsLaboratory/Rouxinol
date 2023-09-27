#include <stdio.h>

#define N 20
int main(void){
    int stk[N], sp=0;
    int n;
   
    while (scanf("%d", &n) != EOF){
        if (n==0 && sp!=0){
            printf("%d\n", stk[--sp]);
        } else {
            stk[sp++] = n;
        }
    }
    return 0;
}
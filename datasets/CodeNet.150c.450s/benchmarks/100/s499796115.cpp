#include <stdio.h>

int main(void){
    int n;
    long long int f=1;
    
    scanf("%d",&n);
    for (; n>0; n--){
        f *= n;
    }
    printf("%lld\n", f);
    return 0;
}
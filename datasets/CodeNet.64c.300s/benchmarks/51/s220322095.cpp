#include <stdio.h>

int main(){
    int i,n;
    unsigned long long f=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        f*=i;
    }
    printf("%lld\n",f);
}
#include <stdio.h>
long long fiboDP(int n){
    long long fibodp[200]={0};
    fibodp[1]=1;
    fibodp[2]=1;
    for(int i=3;i<=n;i++){
        fibodp[i]=fibodp[i-1]+fibodp[i-2];
    }
    return fibodp[n];
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%lld\n",fiboDP(n+1));
   return 0;
}

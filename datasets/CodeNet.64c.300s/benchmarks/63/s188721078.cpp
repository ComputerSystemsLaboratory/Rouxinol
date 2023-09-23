#include<stdio.h>
long long int x,y;
long long int m,n;
long long int ans1,ans2;

int GCD(long long int n,long long int m){
    if(n%m==0){
        return m;
    }
    return GCD(m,n%m);
}

int main(){
    while(1){
        if(scanf("%lld",&n)==-1)break;
        scanf("%lld",&m);
        if(n<=m){
            ans1=GCD(m,n);
        }
        else{
            ans1=GCD(n,m);
        }
        ans2=m*n/ans1;
        printf("%lld %lld\n",ans1,ans2);
    }
    return 0;
}
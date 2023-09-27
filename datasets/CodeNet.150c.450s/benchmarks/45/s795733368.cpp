#include <stdio.h>
long long int dp[100000]={0},m;
long long int pow(long long int n){
    if(n==1)return m;
    long long int mid=n/2;
    if(n>=100000)return pow(n-mid)*pow(mid)%1000000007;
    if(dp[n]!=0)return dp[n];
    return dp[n]=(pow(n-mid)*pow(mid))%1000000007;
}
int main(){
    int n;
    scanf("%lld%d",&m,&n);
    printf("%lld\n",pow(n));
}
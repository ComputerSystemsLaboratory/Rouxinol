#include <stdio.h>
  int main(){
   long long int dp[100][100]={},x[101],i,j,n;//dp[a][50+b]とはa個の数の式の結果がbであるものの数千代
scanf("%lld",&n);
for(i=1;i<=n;i++){
scanf("%lld",&x[i]);
}
dp[1][50+x[1]]=1;
for(i=2;i<n;i++){
for(j=0;j<=20;j++){
dp[i][50+j]=dp[i-1][50+j+x[i]]+dp[i-1][50+j-x[i]];
}}
printf("%lld\n",dp[n-1][50+x[n]]);
scanf("%d\n",&i);
return 0;
}
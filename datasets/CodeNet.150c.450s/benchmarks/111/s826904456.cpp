#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(){
  int n,a[100];
  ll dp[100][21];
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",a+i);
  for(int i=0;i<n-1;i++){
    if(i==0){
      fill(dp[0],dp[0]+21,0);
      dp[0][a[0]] = 1;
    }else{
      for(int j=0;j<=20;j++){
        dp[i][j] = 0;
        if(j+a[i]<=20) dp[i][j] += dp[i-1][j+a[i]];
        if(j-a[i]>=0) dp[i][j] += dp[i-1][j-a[i]];
      }
    }
  }
  printf("%lld\n",dp[n-2][a[n-1]]);
  return 0;
}
#include<cstdio>
#include<algorithm>
using namespace std;

int value[100000];
int dp[100000];

int main(){

  int n;
  int m;

  while(~scanf("%d%d",&n,&m)){
  for(int i=0;i<m;i++) scanf("%d",&value[i]);
  for(int i=0;i<=n;i++){
  dp[i]=i+1;
  }

  dp[0]=0;

  for(int i=0;i<=n;i++)
      for(int j=0;j<m;j++){
          if(i-value[j]>=0)
            dp[i] = min(dp[i],dp[i-value[j]]+1);
      }

   //for(int i=0;i<n;i++) printf("%d ",dp[i]);


  printf("%d\n",dp[n]);
  }
  return 0;
}
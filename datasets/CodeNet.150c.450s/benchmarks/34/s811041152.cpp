#include <cstdio>

using namespace std;

int n,dp[34];

int main(){
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    for(int i=0;i<34;i++) dp[i]=0;
    dp[0]=1;

    for(int i=0;i<n;i++){
      dp[i+1]+=dp[i];
      dp[i+2]+=dp[i];
      dp[i+3]+=dp[i];
    }

    //for(int i=0;i<n;i++) printf("%d_%d\n",i,dp[i]);

    int ans=(dp[n]/3650)+1;

    printf("%d\n",ans);

  }
  return 0;

}
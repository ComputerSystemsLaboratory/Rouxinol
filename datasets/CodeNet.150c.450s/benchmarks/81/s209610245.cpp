#include <cstdio>
#include <algorithm>
using namespace std;
const int INF=10000000;
int dp[10][10];
int main(){
  while(true){
    int n;
    scanf("%d",&n);
    if(n==0) break;

    for(int i=0;i<10;i++)
      for(int j=0;j<10;j++) dp[i][j]=INF;

    int a,b,c;
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&a,&b,&c);
      dp[a][b]=dp[b][a]=c;
    }
    for(int k=0;k<10;k++){
      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
        }
      }
    }
    int sum[10]={0};
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(i!=j && dp[i][j]!=INF){
          sum[i]+=dp[i][j];
        }
      }
    }
    int ans=INF,ans_i=0;
    for(int i=0;i<10;i++){
      if(ans>sum[i] && sum[i]!=0){
        ans=sum[i];
        ans_i=i;
      }
    }
    printf("%d %d\n",ans_i,ans);
  }
  return 0;
}
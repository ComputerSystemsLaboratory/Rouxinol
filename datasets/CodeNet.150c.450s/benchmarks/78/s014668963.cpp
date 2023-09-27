#include<cstdio>
#include<vector>
#include<algorithm>
#define N (int)1e6
using namespace std;

int main(){
  int n,tmp,dp[N+1],dp_odd[N+1];
  vector<int> plc;

  for(int i=0;i<=N;i++)dp[i] = dp_odd[i] = N+1;
  dp[0] = dp_odd[0] = 0;

  tmp = 1;
  for(int i=1;;i++){
    plc.push_back(tmp);
    tmp *= i+3; tmp /= i;
    if(tmp>N)break;
  }

  for(int i=(int)plc.size()-1;i>=0;i--){
    for(int j=0;j+plc[i]<=N;j++){
      if(dp[j]>N)continue;
      tmp = j+plc[i];
      dp[tmp] = min(dp[tmp],dp[j]+1);
    }
    if(plc[i]&1){
      for(int j=0;j+plc[i]<=N;j++){
	if(dp_odd[j]>N)continue;
	tmp = j+plc[i];
	dp_odd[tmp] = min(dp_odd[tmp],dp_odd[j]+1);
      }
    }
  }

  while(scanf("%d",&n) && n)printf("%d %d\n",dp[n],dp_odd[n]);
}
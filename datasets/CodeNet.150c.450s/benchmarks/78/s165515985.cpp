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
  
  for(int i=0;i<=N;i++){
    for(int j=0;j<(int)plc.size();j++){
      if(i<plc[j])break;
      dp[i] = min(dp[i],dp[i-plc[j]]+1);
      if(plc[j]&1)dp_odd[i] = min(dp_odd[i],dp_odd[i-plc[j]]+1);
    }
  }

  while(scanf("%d",&n) && n)printf("%d %d\n",dp[n],dp_odd[n]);
}
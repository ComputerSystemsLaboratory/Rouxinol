#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dp[1000001],dp2[1000001];

int main(void){

  vector<int>p;

  for(int i=1;i*(i+1)*(i+2)/6<1000001;i++){
    p.push_back(i*(i+1)*(i+2)/6);
  }

  fill(dp,dp+1000001,10000000);
  fill(dp2,dp2+1000001,10000000);
  dp[0]=dp2[0]=0;

  for(int i=0;i<1000001;i++){
    for(int j=0;j<p.size();j++){
      if(i-p[j]<0)break;
      dp[i]=min(dp[i],dp[i-p[j]]+1);
      if(p[j]%2==1)dp2[i]=min(dp2[i],dp2[i-p[j]]+1);
    }
  }

  int n;
  while(cin >> n,n){
    cout << dp[n] <<" "<<dp2[n]<< endl;
  }


  return 0;
}
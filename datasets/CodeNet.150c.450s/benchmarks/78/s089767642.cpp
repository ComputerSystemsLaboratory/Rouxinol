#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;
const int MOD=1e9+7;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  std::vector<int> v,odd;
  for(int i=1;i*(i+1)*(i+2)/6<=6*1e6;i++){
      int tmp=i*(i+1)*(i+2)/6;
      v.push_back(tmp);
      if(tmp%2) odd.push_back(tmp);
  }
  std::vector<int> dp(1e6+1),odddp(1e6+1);
  for(int i=1;i<=1e6;i++){
      dp[i]=i;odddp[i]=i;
  }
  for(int i=1;i<=1e6;i++){
      for(int j=0;j<(int)v.size();j++){
          if(i-v[j]>=0) dp[i]=min(dp[i],dp[i-v[j]]+1);
      }
      for(int j=0;j<(int)odd.size();j++){
          if(i-odd[j]>=0) odddp[i]=min(odddp[i],odddp[i-odd[j]]+1);
      }
  }
  while(cin>>n,n){
      cout<<dp[n]<<" "<<odddp[n]<<endl;
  }
  return 0;
}
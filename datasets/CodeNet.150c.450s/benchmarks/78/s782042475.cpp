#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define int long long
using namespace std;
const int MOD=1e9+7;
const int INF=1e10;
template<typename T> void cmin(T &a, T b) {a = min(a, b);}
template<typename T> void cmax(T &a, T b) {a = max(a, b);}
vector<int> dp(1e6+1,INF),DP(1e6+1,INF);
signed main(){
  vector<int> a,odd;
  loop(i,1,1e6+1){
    int tmp=i*(i+1)*(i+2)/6;
    if(1e6<tmp)break;
    a.push_back(tmp);
    if(tmp%2)odd.push_back(tmp);
  }
  dp[0]=DP[0]=0;
  rep(i,1e6+1){
    rep(j,a.size())if(i+a[j]<=1e6)cmin(dp[i+a[j]],dp[i]+1);
    rep(j,odd.size())if(i+odd[j]<=1e6)cmin(DP[i+odd[j]],DP[i]+1);
  }

  int n;
  while(cin>>n,n){
    cout<<dp[n]<<' '<<DP[n]<<endl;
  }
  return 0;
}


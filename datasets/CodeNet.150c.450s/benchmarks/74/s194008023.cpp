#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;



signed main(){
  int n,m;
  cin>>n>>m;
  vector<int> c(m);
  rep(i,m)cin>>c[i];
  vector<int> dp(n+1,INF);
  dp[0]=0;
  loop(i,1,n+1){
    rep(j,m){
      if(i-c[j]>=0){
        dp[i]=min(dp[i-c[j]]+1,dp[i]);
      }
    }
  }


  cout<<dp[n]<<endl;

  return 0;
}
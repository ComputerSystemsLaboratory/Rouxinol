#include "bits/stdc++.h"
#include "math.h"
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define drep(i,a,b) for(ll i=(a);i>=(b);--i)
#define SIZE(a) int((a).size())
#define out(a) cout<<(a)<<endl;
const int INF=INT_MAX;
const int MAX = 510000;
const ll MOD = 1000000007;
ll fac[MAX], finv[MAX], inv[MAX];

int main(){
  ll n;cin>>n;
  vll p(n+1);
  vvll dp(n,vll(n,MOD));
  rep(i,0,n){
    cin>>p[i]>>p[i+1];
  }
  rep(i,0,n){
    dp[i][i]=0;
  }
  rep(haba,0,n){
    rep(i,0,n-haba){
      int j=i+haba;
      rep(k,i,j){
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i]*p[k+1]*p[j+1]);
      }
    }
  }
  cout<<dp[0][n-1]<<endl;
}


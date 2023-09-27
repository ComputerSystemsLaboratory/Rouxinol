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
  vll a(n),dp(n,MOD);//長さがi+1であるような増加部分列における最終要素の最小値
  rep(i,0,n){
    cin>>a[i];
  }
  ll ans=0;
  rep(i,0,n){
    *lower_bound(dp.begin(),dp.end(),a[i])=a[i];
  }
  ll it=lower_bound(dp.begin(),dp.end(),MOD)-dp.begin();
  cout<<it<<endl;
}





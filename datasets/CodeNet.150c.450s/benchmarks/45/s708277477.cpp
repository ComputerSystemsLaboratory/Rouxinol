#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);

const ll MOD = 1000000007;

ll power(ll a, ll b, ll mod) {
  ll tmp=a;
  ll tmpp=1;
  ll ret=1;
  while(1){
    if(b%(tmpp*2)){
      ret=ret*tmp%mod;
      b-=tmpp;
    }
    if(b==0) break;
    tmp=tmp*tmp%mod;
    tmpp*=2;
  }
  return ret;
}

int main() {
  ll m,n;cin>>m>>n;
  cout<<power(m,n,MOD)<<endl;
}
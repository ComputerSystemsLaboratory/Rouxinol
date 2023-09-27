#include "bits/stdc++.h"
using namespace std;
using ll = long long; using ull = unsigned long long;
#define int ll
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
using pii = pair<int,int>; using pll = pair<ll,ll>;
#define FOR(i,a,b) for(ll i = (a); i < (ll)(b); ++i)
#define REP(i,n) FOR(i,0,n)
#define RFOR(i,a,b) for(ll i = (ll)(b)-1;i >= a;--i)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
#define eb(val) emplace_back(val)
const double PI = acos(-1);
const double EPS = 1e-10;
const ll MOD = 1e9+7;
void cioacc(){//accelerate cin/cout
  cin.tie(0);
  ios::sync_with_stdio(false);
}
pair<vl,vb> eratosthenes_sieve(ll n){
  vb is_prime(n+1,true);
  vl prime;
  is_prime[0] = false;
  is_prime[1] = false;
  FOR(i,2,sqrt(n)+1){
    if(!is_prime[i]) continue;
    for(ll j=2*i;j<=n;j+=i) is_prime[j] = false;
    prime.eb(i);
  }
  return {prime,is_prime};
}
signed main(){
  int n;
  int ans = 0;
  cin >> n;
  vi a(n);
  REP(i,n) cin >> a[i];
  REP(i,n-1)REP(j,n-i-1){
    if(a[j]>a[j+1]){
      ++ans;
      swap(a[j],a[j+1]);
    }
  }
  REP(i,n-1) cout << a[i] << " ";
  cout << a[n-1] << endl;
  cout << ans << endl;
}


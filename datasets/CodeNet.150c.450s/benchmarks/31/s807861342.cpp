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

signed main(){
  int n;
  cin >> n;
  vi a(n),mn(n),mx(n);
  REP(i,n) cin >> a[i];
  mn[0] = a[0];
  REP(i,n-1){
    mn[i+1] = min(mn[i],a[i+1]);
  }
  mx[n-1] = a[n-1];
  RREP(i,n-1){
    mx[i] = max(mx[i+1],a[i]);
  }
  int ans = -INT_MAX;
  RREP(i,n-1){
    ans = max(ans,mx[i+1]-mn[i]);
  }
  cout << ans << endl;
}


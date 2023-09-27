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
struct dice{
  int up,s,e,w,n,dn;
  void to(char dir){
    if(dir=='N'){
      int tmp = n;
      n = up;
      up = s;
      s = dn;
      dn = tmp;
    }else if(dir=='S'){
      int tmp = s;
      s = up;
      up = n;
      n = dn;
      dn = tmp;
    }else if(dir=='E'){
      int tmp = e;
      e = up;
      up = w;
      w = dn;
      dn = tmp;
    }else if(dir=='W'){
      int tmp = w;
      w = up;
      up = e;
      e = dn;
      dn = tmp;
    }
  }
  void to(string dirs){
    REP(i,dirs.size()) to(dirs[i]);
  }
};
signed main(){
  int a[6];
  REP(i,6) cin >> a[i];
  dice di = {a[0],a[1],a[2],a[3],a[4],a[5]};
  string s;
  cin >> s;
  di.to(s);
  cout << di.up << endl;
}


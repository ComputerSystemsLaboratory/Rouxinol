#include "bits/stdc++.h"
using namespace std;
using ll = long long; using ull = unsigned long long;
//#define int ll
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
int main(){
  int r,c;
  cin >> r >> c;
  vvi sh(r+1,vi(c+1,0));
  REP(i,r){
    int sum = 0;
    REP(j,c){
      int a;
      cin >> a;
      sh[i][j] = a;
      sum += a;
      cout << a << " ";
    }
    sh[i][c] = sum;
    cout << sum << endl;
  }
  REP(j,c+1)REP(i,r) sh[r][j] += sh[i][j];
  REP(i,c) cout << sh[r][i] << " ";
  cout << sh[r][c] << endl;
}

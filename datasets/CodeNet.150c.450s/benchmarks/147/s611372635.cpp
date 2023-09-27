#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
const ld eps = 1e-10;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; cin >> n;
  vector<ll> memo(10001);
  for(int x=1; x<=100; x++) {
    for(int y=1; y<=100; y++) {
      for(int z=1; z<=100; z++) {
        ll val = x*x+y*y+z*z+x*y+y*z+z*x;
        if(val<=10000) memo[val]++;
      }
    }
  }
  rep(i, n+1) if(i) cout << memo[i] << "\n";
  return 0;
}

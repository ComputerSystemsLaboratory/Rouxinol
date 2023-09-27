#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i,n) for(int i=0; i < (n); ++i)
#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
// #define INF 1e9
constexpr ll INF = 1LL << 60;
constexpr ll mod = 1e9+7;

int main(){
  ll m, n;
  cin >> m >> n;
  ll ans = 1;
  ll beki = m;
  REP(i, 32){
    if(n>>i & 1){
      ans *= beki;
      ans %= mod;
    }
    beki *= beki;
    beki %= mod;
  }
  cout << ans << endl;
  return 0;
}



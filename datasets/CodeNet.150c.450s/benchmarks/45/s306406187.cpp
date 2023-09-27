//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B&lang=ja
//べき乗
#include <bits/stdc++.h>
#if LOCAL
#include "dump.hpp"
#else
#define dump(...)
#endif
using namespace std;
using ll=long long;
const ll LINF = 0x1fffffffffffffff;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
template<class T>bool chmax(T &a, const T &b) {if (a<b) { a=b; return 1; } return 0;}
template<class T>bool chmin(T &a, const T &b) {if (b<a) { a=b; return 1; } return 0;}
constexpr ll MOD=1e9+7;
int main() {
  ll m, n; cin>>m>>n;

  ll ans=1;
  while(n){
    if(n&1){
      ans *= m;
      ans %= MOD;
    } 
    m *= m;
    m %= MOD;
    n>>=1;
  }
  cout<<ans<<endl;

  return 0;
}

#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

#define MOD 1000000007
using namespace std;
#define ll long long
inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

int main(){
  ll n;
  while(cin >> n && n){
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
      cin >> a[i];
    }
    vector<ll> b(n);
    b[0] = a[0];
    for(ll i = 1; i < n; i++){
      b[i] = max(b[i-1] + a[i], a[i]);
    }

    ll ans = -MOD;
    for(ll i = 0; i < n; i++){
      ans = max(ans, b[i]);
    }
    cout << ans << '\n';
    
  }

}
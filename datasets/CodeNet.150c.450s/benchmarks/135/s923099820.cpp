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
  ll n,m;
  while(cin >> n >> m && (n+m)){
    vector<ll> w (m);
    vector<ll> h (n);
    for(ll i = 0; i < n; i++){
      cin >> h[i];
    }
    for(ll i = 0; i < m; i++){
      cin >> w[i];
    }

    unordered_map<ll,ll> hmp, wmp;
    for(ll i = 0; i < n; i++){
      ll cur = h[i];
      hmp[cur]++;
      for(ll k = i + 1; k < n; k++){
	cur += h[k];
	hmp[cur]++;
      }
    }

    for(ll i = 0; i < m; i++){
      ll cur = w[i];
      wmp[cur]++;
      for(ll k = i + 1; k < m; k++){
	cur += w[k];
	wmp[cur]++;
      }
    }
    ll ans = 0;

    for(auto i : hmp){
      ans += i.second * wmp[i.first];
    }
    cout << ans << endl;
    

    
    
  }


  
}
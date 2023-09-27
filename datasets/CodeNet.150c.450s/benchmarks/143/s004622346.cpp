#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin >>n;
  map<ll,ll> mp;
  ll s = 0;
  for(int i=0;i<n;++i){
    ll t;cin >> t;
    if(mp.find(t) != mp.end()){
      ++mp[t];
    } else {
      mp[t] = 1;
    }
    s+=t;
  }
  int q;cin >> q;
  for(int j=0;j<q;++j){
    ll b,c;cin >> b >>c;
    if(mp.find(b) != mp.end()){
      s += (c-b)* mp[b];
      if(mp.find(c) != mp.end()){
        mp[c] += mp[b];
        mp[b] = 0;
      } else {
        mp[c] = mp[b];
        mp[b] = 0;
      }
    }
    cout << s << endl;
  }
  return 0;
}

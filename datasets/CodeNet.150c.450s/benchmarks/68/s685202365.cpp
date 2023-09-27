#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i,n) for(int i = 0; i < n ;++i)
#define all(v) v.begin(),v.end()


int main(){
  ll n;
  while(cin >> n,n){
    vector<ll> v(n);
    rep(i,n){
      cin >> v[i];
    }
    sort(all(v));
    ll ans = 10000000000;
    rep(i,n-1){
      ans = min(ans,v[i+1]-v[i]);
    }
    std::cout << ans << std::endl;
  }
  return 0;
}
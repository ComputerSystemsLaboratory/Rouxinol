#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n); for(ll i = 0; i < (ll)n; i++)

int main() {
  ll n; cin >> n;
  vector<ll> v(n+1,0);
    ll cnt = 0;
    ll x=1; 
    while(x*x < n){
      ll y=1;
      while(y*y < n-x*x){
        ll z=1;
        while(z*z < n-x*x-y*y){
         ll f = x*x + y*y + z*z + x*y + y*z + z*x;
         if( f <= n )
           v[f]++;
         z++;
        }
        y++;
      }
      x++;
    }
  for(ll i=1; i<n+1; i++){
    cout << v[i] << endl;
  }
}
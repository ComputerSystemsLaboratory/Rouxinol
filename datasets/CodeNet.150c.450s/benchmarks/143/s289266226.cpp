#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n); for(ll i = 0; i < (ll)n; i++)

int main() {
  ll n; cin >> n;
  vector<ll> Cnt(100100,0);
  rep(i,n){
    ll c; cin >> c;
    Cnt[c]++;
  }
  
  ll sum = 0;
  rep(i,100100){
    sum += i*Cnt[i];
  }
  
  ll q; cin >> q;
  rep(i,q){
    int a,b; cin >> a >> b;
    Cnt[b] += Cnt[a];
    sum += (b-a)*Cnt[a];
    Cnt[a] = 0;
    cout << sum << endl;
  }
  
}
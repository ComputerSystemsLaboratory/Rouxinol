#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n;
  cin >> n;
  vector<ll> an(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  string s;
  cin >> s;
  vector<ll> bases;
  for(int i=n-1; i>=0; --i){
    ll x = an[i];
    for(ll base: bases){
      x = min(x, x^base);
    }
    if(s[i] == '0') bases.push_back(x);
    else if(x){
        cout << 1 << endl;
        return;
    }
  }
  cout << 0 << endl;
  return;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}
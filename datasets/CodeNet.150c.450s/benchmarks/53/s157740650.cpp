#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

map<ll,ll> prime_factor(ll n) {
  map<ll,ll> res;
  for(int i=2;i*i<=n;i++) {
    while(n%i==0) {
      res[i]++;
      n/=i;
    }
  }
  if(n!=1) {
    res[n]++;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  cout << n << ":";
  map<ll,ll> ans=prime_factor(n);
  for(auto p:ans) {
    ll count=p.second;
    ll out=p.first;
    while(count) {
      cout << " " << out;
      count--;
    }
  }
  cout << endl;
}

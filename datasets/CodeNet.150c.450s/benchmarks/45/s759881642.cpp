#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD=1000000007;

ll modpow(ll x, ll n, ll mod) {
  if (n==0) return 1;
  ll res=modpow(x*x%mod, n/2, mod);
  if (n & 1) res=res*x%mod;
  return res;
}

int main() {
  ll n,m; cin>>n>>m;
  ll res=modpow(n,m,MOD);
  cout<<res<<endl;
}


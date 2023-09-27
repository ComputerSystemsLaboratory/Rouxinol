#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FOR(i,m,n) for(ll i=(m); (i)<(ll)(n); ++(i))
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin,(a).end

ll partition(vector<ll> &a, const ll p, const ll r){
  ll x = a[r];
  ll i = p-1;
  FOR(j,p,r){
    if(a[j] <= x) swap(a[++i], a[j]);
  }
  swap(a[i+1], a[r]);
  return i+1;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n; cin >> n;
  vector<ll> a(n);
  REP(i,n) cin >> a[i];
  ll border = partition(a, 0, n-1);
  REP(i,n){
    if(i) cout << " ";
    if(i == border) cout << "[" << a[i] << "]";
    else cout << a[i];
  }
  cout << "\n";
  
  return 0;
}

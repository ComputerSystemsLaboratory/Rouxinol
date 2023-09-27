#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  vector<int> a(n) , cnt(100010);
  ll sum = 0;
  rep(i,n){
    cin >> a[i];
    sum += a[i];
    ++cnt[a[i]];
  }
  int q;
  cin >> q;
  vector<ll> ans(q);
  rep(i,q){
    int b , c;
    cin >> b >> c;
    sum += (c - b) * cnt[b];
    cnt[c] += cnt[b];
    cnt[b] = 0;
    ans[i] = sum;
  }
  for(ll x : ans) cout << x << endl;
  return 0;
}
#include <bits/stdc++.h>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main() {
  ll N,Q,sum=0;
  vector<ll> cnt(100001,0);
  cin >> N;
  rep(i,N) {
    int a;
    cin >> a;
    cnt[a]++;
    sum += a;
  }
  cin >> Q;
  rep(i,Q){
    ll b,c;
    cin >> b >> c;
    sum += cnt[b]*(c-b);
    cnt[c] += cnt[b];
    cnt[b] = 0;
    cout << sum << endl;
  }
  
  return 0;
}
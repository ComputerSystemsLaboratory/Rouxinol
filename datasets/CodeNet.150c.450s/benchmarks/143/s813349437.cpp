#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<ll> cnt(100001, 0);
  rep(i,n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  ll tot = 0;
  rep(i,100001) tot += i*cnt[i];

  int q;
  cin >> q;
  rep(i,q) {
    int b, c;
    cin >> b >> c;
    tot -= b*cnt[b];
    tot -= c*cnt[c];
    cnt[c] += cnt[b]; 
    cnt[b] = 0;
    tot += b*cnt[b];
    tot += c*cnt[c];
    cout << tot << endl;
  }
  return 0;
}

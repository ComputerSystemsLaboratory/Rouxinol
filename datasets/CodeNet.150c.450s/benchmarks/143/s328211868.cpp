#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Q, A, B, C;
  map<int, int> mp;
  cin >> N;

  ll calc = 0;
  rep(i, N) {
    cin >> A;
    mp[A]++;
    calc += A;
  }

  cin >> Q;
  vector<ll> ans(Q);
  rep(i, Q) {
    cin >> B >> C;
    calc += (C - B) * mp[B];
    ans[i] = calc;
    mp[C] += mp[B];
    mp[B] = 0;
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}
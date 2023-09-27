#include<bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) \
  for (ll i = static_cast<int>(a); i < static_cast<int>(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, ) (__VA_ARGS__)  // NOLINT
#define chmax(x, a)  do { x = max(x, a); } while(0)
#define chmin(x, a)  do { x = min(x, a); } while(0)

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;


int main(void) {
  ll N, K;
  cin >> N >> K;
  vector<ll> a(N+1);
  for (int i = 1; i <= N; i++)
    cin >> a[i];

  for (int i = K + 1; i <= N; i++)
    cout << (a[i] > a[i-K] ? "Yes" : "No") << endl;
  return 0;
}

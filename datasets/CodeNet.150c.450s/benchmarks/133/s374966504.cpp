#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll D; cin >> D;
  vector<ll> C(26); for (ll i = 0; i < 26; i++) cin >> C[i];
  vector<vector<ll>> S(D, vector<ll>(26, 0));
  for (ll i = 0; i < D; i++) {
    for (ll j = 0; j < 26; j++) {
      cin >> S[i][j];
    }
  }
  vector<ll> T(D, 0);
  for (ll i = 0; i < D; i++) {
    cin >> T[i];
    T[i]--;
  }

  ll ans = 0;
  vector<ll> last(26, 0);
  for (ll i = 0; i < D; i++) {
    ans += S[i][T[i]];
    last[T[i]] = i + 1;
    ll temp = 0;
    for (ll j = 0; j < 26; j++) {
      temp += C[j] * (i + 1 - last[j]);
    }
    ans -= temp;
    cout << ans << '\n';
  }

  return 0;
}
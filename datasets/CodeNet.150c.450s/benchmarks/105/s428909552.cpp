#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll T;
ll N;
vector<ll> A;
string S;
vector<ll> M;

ll solve() {
  M.clear();
  for (ll i = N - 1; i >= 0; --i) {
    ll a = A[i];
    for (ll j = 0; j < M.size(); ++j) {
      a = min(a, M[j] ^ a);
    }
    if (a != 0) {
      if (S[i] == '0') {
        M.push_back(a);
        sort(M.begin(), M.end(), greater<ll>());
      } else {
        return 1;
      }
    }
  }
  return 0;
}
int main() {
  cin >> T;
  for (ll t = 0; t < T; ++t) {
    cin >> N;
    A.resize(N);
    for (ll i = 0; i < N; ++i) cin >> A[i];
    cin >> S;
    cout << solve() << endl;
  }
  return 0;
}

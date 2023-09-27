#include <bits/stdc++.h>
#define INF 5000000000000000000
#define ll long long
#define pll pair<ll, ll>
using namespace std;

vector<ll> evaluation(vector<ll>& C, vector<vector<ll>>& S, vector<ll>& T) {
  ll D = T.size();
  vector<ll> res(D, 0);
  vector<ll> last(26, 0);
  ll score = 0;
  for (ll i = 0; i < D; ++i) {
    ll contest = T.at(i) - 1;
    last.at(contest) = i + 1;
    score += S.at(i).at(contest);
    for (ll j = 0; j < 26; ++j) {
      score -= (i + 1 - last.at(j)) * C.at(j);
    }
    res.at(i) = score;
  }
  return res;
}

int main() {
  ll D;
  cin >> D;
  vector<ll> C(26), T(D);
  vector<vector<ll>> S(D, vector<ll>(26));
  for (ll i = 0; i < 26; ++i) {
    cin >> C.at(i);
  }
  for (ll i = 0; i < D; ++i) {
    for (ll j = 0; j < 26; ++j) {
      cin >> S.at(i).at(j);
    }
  }
  for (ll i = 0; i < D; ++i) {
    cin >> T.at(i);
  }
  vector<ll> ans = evaluation(C, S, T);
  for (ll i = 0; i < ans.size(); ++i) {
    cout << ans.at(i) << "\n";
  }
}

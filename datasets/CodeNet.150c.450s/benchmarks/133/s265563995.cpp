#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
#define rep(i, begin, n) for (int i = begin; i < n; i++)
#define repe(i, begin, n) for (int i = begin; i <= n; i++)
#define repr(i, begin, n) for (int i = begin; i > begin - n; i--)
#define repre(i, begin, end) for (int i = begin; i >= end; i--)

template <class T>
inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

template <class T>
inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

const int inf = INT_MAX;
const int MOD = 1000000007;
const long long INF = LLONG_MAX;

// -------------------------------------------------------

ll D;
ll c[30];
ll s[400][30];
ll t[400];
ll last[30];
ll score;

int main() {
  cin >> D;
  repe(i, 1, 26) { cin >> c[i]; }
  repe(i, 1, D) {
    repe(j, 1, 26) { cin >> s[i][j]; }
  }
  repe(i, 1, D) { cin >> t[i]; }

  repe(i, 1, D) {
    ll ct = t[i];

    score += s[i][ct];
    last[ct] = i;

    repe(j, 1, 26) { score -= c[j] * (i - last[j]); }

    cout << score << "\n";
  }
}

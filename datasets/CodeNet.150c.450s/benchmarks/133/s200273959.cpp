#pragma region

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define _rep3(i, begin, end) for (register int i = (begin), i##_end = (end); i < i##_end; i++)
#define _irep3(i, begin, end) for (register int i = (end)-1, i##_begin = (begin); i >= i##_begin; i--)
#define _rep2(i, n) _rep3(i, 0, n)
#define _irep2(i, n) _irep3(i, 0, n)
#define _overload3(_1, _2, _3, name, ...) name
#define rep(...) _overload3(__VA_ARGS__, _rep3, _rep2, )(__VA_ARGS__)
#define irep(...) _overload3(__VA_ARGS__, _irep3, _irep2, )(__VA_ARGS__)
#define out(x) cout << (x) << '\n';
#define debug(x) cerr << #x << " = " << (x) << " (line: " << __LINE__ << ") " << endl;

using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
using vb = vector<bool>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;
using vvb = vector<vector<bool>>;

template <typename T>
istream &operator>>(istream &is, vector<T> &vec) {
  for (auto &v : vec) is >> v;
  return is;
}
template <typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &pair) {
  cin >> pair.first >> pair.second;
  return is;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
  os << "[ ";
  rep(i, vec.size()) i == 0 ? os << vec[i] : os << ", " << vec[i];
  os << " ]";
  return os;
}

template <class T>
bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <class T>
bool chmin(T &a, const T &b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

void init() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(16);
}

#pragma endregion

#define MOD 1000000007
#define INF 2147483647

int main() {
  init();

  int D;
  cin >> D;
  vi c(26);
  cin >> c;
  vvi s(D, vi(26));
  cin >> s;
  vi t(D);
  cin >> t;

  vi last(26, 0);

  ll score = 0;
  rep(i, D) {
    score += s[i][t[i] - 1];
    last[t[i] - 1] = i + 1;
    rep(j, 26) {
      score -= c[j] * (i + 1 - last[j]);
    }
    out(score);
  }
}

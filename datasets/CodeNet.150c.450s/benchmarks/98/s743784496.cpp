#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// container util
#define all(x) (x).begin(), (x).end()

// debug
#define dump(x) cerr << #x << " = " << (x) << endl;
#define debug(x)                                         \
  cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
       << " " << __FILE__ << endl;

// typedef
typedef long long lint;
typedef unsigned long long ull;
typedef complex<long double> Complex;
typedef pair<int, int> P;
typedef tuple<int, int, int> TP;
typedef vector<int> vec;
typedef vector<vec> mat;

// constant
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const int ddx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ddy[] = {1, 1, 0, -1, -1, -1, 0, 1};

// conversion
inline int toInt(string s) {
  int v;
  istringstream sin(s);
  sin >> v;
  return v;
}
template <class T>
inline string toString(T x) {
  ostringstream sout;
  sout << x;
  return sout.str();
}

//
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
//

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  while (true) {
    cin >> n >> m;
    if (n == 0 && m == 0) break;
    vector<int> t(n), h(m);
    int tt = 0, th = 0;
    rep(i, n) cin >> t[i], tt += t[i];
    rep(i, m) cin >> h[i], th += h[i];

    int sum = 1e9, tans = -1, hans = -1;
    rep(i, n) {
      tt -= t[i];
      rep(j, m) {
        th -= h[j];
        if (tt + h[j] == th + t[i]) {
          if (t[i] + h[j] < sum) {
            tans = t[i];
            hans = h[j];
            chmin(sum, t[i] + h[j]);
          }
        }
        th += h[j];
      }
      tt += t[i];
    }
    if (tans == -1 && hans == -1)
      cout << -1 << "\n";
    else
      cout << tans << " " << hans << "\n";
  }

  return 0;
}

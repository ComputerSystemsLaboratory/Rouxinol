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

  int a, l;
  while (true) {
    cin >> a >> l;
    if (a == 0 && l == 0) break;
    map<int, pair<int, int>> mp;
    mp[a].first++;
    mp[a].second = 0;
    int cnt = 0, ans_i = 0, ans_j = 0, ans_a = 0;
    while (true) {
      cnt++;
      string s_a = to_string(a);
      for (int i = s_a.size(); i < l; i++) {
        s_a += "0";
      }
      sort(all(s_a));
      int amin = toInt(s_a);
      reverse(all(s_a));
      int amax = toInt(s_a);
      // cout << "amin = " << amin << "\n";
      // cout << "amax = " << amax << "\n";
      int diff = amax - amin;
      if (mp[diff].first > 0) {
        ans_j = mp[diff].second;
        ans_i = cnt;
        ans_a = diff;
        break;
      }
      mp[diff].first++;
      mp[diff].second = cnt;
      a = diff;
    }
    cout << ans_j << " " << ans_a << " " << ans_i - ans_j << "\n";
  }

  return 0;
}

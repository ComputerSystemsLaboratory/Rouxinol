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

  int H;
  while (cin >> H, H) {
    vector<vector<int>> board(H, vector<int>(5, 0));
    rep(i, H) rep(j, 5) cin >> board[i][j];
    bool end = false;
    int ans = 0;
    while (true) {
      //手順1
      int sum = 0;
      rep(i, H) {
        int pid = 0, cnt = 1;
        FOR(j, 1, 5) {
          if (board[i][pid] == board[i][j])
            cnt++;
          else {
            if (3 <= cnt) break;
            pid = j;
            cnt = 1;
          }
        }
        if (3 <= cnt) {
          sum += cnt * board[i][pid];
          FOR(j, pid, pid + cnt) board[i][j] = 0;
        }
      }

      if (sum == 0) break;
      ans += sum;
      //手順2
      bool end = true;
      while (end) {
        end = false;
        for (int i = H - 1; 0 <= i; i--) {
          rep(j, 5) {
            if (i == 0) continue;
            if (board[i][j] == 0) {
              if (board[i - 1][j] != 0) {
                board[i][j] = board[i - 1][j];
                board[i - 1][j] = 0;
                end = true;
              }
            }
          }
        }
      }
    }
    cout << ans << "\n";
  }

  return 0;
}

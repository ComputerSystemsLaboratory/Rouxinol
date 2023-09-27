#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,n) for (int i = (int)s; i < (int)n; i++)
#define ll long long
#define pb push_back
#define eb emplace_back
#define All(x) x.begin(), x.end()
#define Range(x, i, j) x.begin() + i, x.begin() + j
#define lbidx(x, y) lower_bound(x.begin(), x.end(), y) - x.begin()
#define ubidx(x, y) upper_bound(x.begin(), x.end(), y) - x.begin()
#define llbidx(x, y, z) lower_bound(x.begin(), x.end(), z) - lower_bound(x.begin(), x.end(), y) // 二要素間の距離
#define deg2rad(deg) ((((double)deg)/((double)360)*2*M_PI))
#define rad2deg(rad) ((((double)rad)/(double)2/M_PI)*(double)360)
#define Find(set, element) set.find(element) != set.end()

typedef pair<int, int> PI;
typedef pair<ll, ll> PLL;

template<class T>
inline bool chmax(T &a, T b) {
  if(a < b) {
    a = b;
    return true;
  }
  return false;
};

template<class T>
inline bool chmin(T &a, T b) {
  if(a > b) {
    a = b;
    return true;
  }
  return false;
};

vector<vector<int>> grid(11, vector<int> (10001));
int R, C;

int solve() {
  int ret = 0;
  rep(state, 0, 1 << R) {
    // 初期化
    vector<vector<int>> tmp_grid(R, vector<int> (C));
    rep(i, 0, R) {
      rep(j, 0, C) {
        tmp_grid[i][j] = grid[i][j];
      }
    }

    rep(r, 0, R) {
      if ((state & (1 << r)) == (1 << r)) { // r行目をひっくり返す
        rep(c, 0, C) {
          if (tmp_grid[r][c] == 0) {
            tmp_grid[r][c] = 1;
          } else {
            tmp_grid[r][c] = 0;
          }
        }
      }
    }

    int tmp = 0;
    rep(c, 0, C) {
      int tmp0 = 0;
      rep(r, 0, R) {
        if (tmp_grid[r][c] == 0) {
          tmp0++;
        }
      }

      tmp += max(tmp0, R - tmp0);
    }

    ret = max(ret, tmp);
  }

  return ret;
};

int main() {
  while (cin >> R >> C, R+C) {
    rep(i, 0, R) {
      rep(j, 0, C) {
        cin >> grid[i][j];
      }
    }

    cout << solve() << endl;
  }

  return 0;
};


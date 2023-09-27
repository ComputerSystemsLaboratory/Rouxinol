# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
int w, h, ans;

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << setfill('0') << setw(5) << t[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;
}


void dfs(vector<vector<int>> &c, int i, int j) {
  vector<int> next_i = {0, 1, 1, 1, 0, -1, -1, -1};
  vector<int> next_j = {1, 1, 0, -1, -1, -1, 0, 1};

  rep (k, 8) {
    int ii = i + next_i[k];
    int jj = j + next_j[k];

    if (0 <= ii && 0 <= jj && ii < c.size() && jj < c[0].size() && c[ii][jj] == 1) {
      c[ii][jj] = 1000;
      dfs(c, ii, jj);
    }
  }
}


int main() {

  while (cin >> w >> h && w && h) {
    vector<vector<int>> c;
    ans = 0;

    rep (i, h) c.push_back(vector<int>(w));
    rep (i, h) {
      rep (j, w) {
        cin >> c[i][j];
      }
    }

    rep (i, h) {
      rep (j, w) {
        if (c[i][j] == 1) {
          ans++;
          c[i][j] = 1000;
          dfs(c, i, j);
        }
      }
    }

    cout << ans << endl;
  }
}
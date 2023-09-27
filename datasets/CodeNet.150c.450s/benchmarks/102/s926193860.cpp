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

int ans;
int next_i[] = {0, 1, 0, -1};
int next_j[] = {1, 0, -1, 0};

template <typename T>
void show_all (T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j] << ' ';
    }
    cout << endl;
  }
}


void dfs (int i, int j, vector<vector<char>> &maze) {
  rep (k, 4) {
    int ii = i + next_i[k];
    int jj = j + next_j[k];

    if (0 <= ii && 0 <= jj && maze.size() > ii && maze[0].size() > jj && maze[ii][jj] == '.') {
      maze[ii][jj] = '#';
      ans++;
      dfs(ii, jj, maze);
    }
  }
}

int main() {
  int w, h;
  int init_i, init_j;

  while (cin >> w >> h && w && h) {
    vector<vector<char>> maze;
    ans = 1;

    rep (i, h) {
      vector<char> row(w);
      maze.push_back(row);

      rep (j, w) {
        cin >> maze[i][j];
        if (maze[i][j] == '@') {
          init_i = i;
          init_j = j;
        }
      }
    }

    // cout << "before" << endl;
    // show_all(maze);
    dfs(init_i, init_j, maze);
    // cout << "after" << endl;
    // show_all(maze);
    cout << ans << endl;
  }
}
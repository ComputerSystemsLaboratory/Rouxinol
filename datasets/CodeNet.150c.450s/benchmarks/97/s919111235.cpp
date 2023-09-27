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

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}

int main() {
  vector<int> next_x = {-1, 0, 1, 0};
  vector<int> next_y = {0, -1, 0, 1};
  int N;

  while (cin >> N && N) {
    int n, d;
    vector<pair<int, int>> c;
    c.push_back(make_pair(0, 0));

    rep (i, N-1) {
      cin >> n >> d;
      // cout << "n: " << n << ", d: " << d << endl;
      // cout << c[i].first << "," << c[i].second << endl;
      // cout << "next_x: " << next_x[d] << ", next_y: " << next_y[d] << endl;

      int x = c[n].first + next_x[d];
      int y = c[n].second + next_y[d];
      // cout << "new_x: " << x << ", new_y: " << y << endl;
      c.push_back(make_pair(x, y));
    }

    int max_x = 0;
    int max_y = 0;
    int min_x = 0;
    int min_y = 0;

    rep (i, c.size()) {
      max_x = max(max_x, c[i].first);
      max_y = max(max_y, c[i].second);
      min_x = min(min_x, c[i].first);
      min_y = min(min_y, c[i].second);
      // cout << c[i].first << "," << c[i].second << endl;
    }

    cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
  }
}
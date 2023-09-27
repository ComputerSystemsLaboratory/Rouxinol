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


vector<int> solve(vector<int> s_t, vector<int> s_h, int sum_t, int sum_h, int m, int n) {
    for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
        if (2 * (s_t[i] - s_h[j]) == sum_t - sum_h) {
          vector<int> res = {s_t[i], s_h[j]};
          return res;
        }
      }
    }
  return {0, 0};
}


void show_vector(vector<int> v) {
  for (int i=0; i<v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}


int main() {
  int n, m;

  while (cin >> m >> n && m && n) {
    int sum_t = 0;
    int sum_h = 0;
    int next_t_i = n;
    int next_h_i = m;

    vector<int> s_t(m);
    vector<int> s_h(n);

    for (int i=0; i<m; i++) {
      cin >> s_t[i];
      sum_t += s_t[i];
    }

    for (int i=0; i<n; i++) {
      cin >> s_h[i];
      sum_h += s_h[i];
    }

    // show_vector(s_t);
    // show_vector(s_h);

    vector<int> res = solve(s_t, s_h, sum_t, sum_h, m, n);
    if (res[0] && res[1]) {
      cout << res[0] << " " << res[1] << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
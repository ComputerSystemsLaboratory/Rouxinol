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

void show_all(vector<int> &d) {
  rep (i, d.size()) {
    cout << d[i] << ' ';
  }
  cout << endl;
}


bool convergence(vector<int> d) {
  int nonzero = 0;
  for (int _d : d) {
    if (_d != 0) nonzero++;
  }
  return nonzero == 1;
}

int main() {
  int n, p;

  while (cin >> n >> p && n && p) {
    int i = 0;

    vector<int> d(n+1);
    for (int j=0; j<n; j++) d[j] = 0;
    d[n] = p;

    while (true) {
      // cout << "wan: " << i << endl;
      // show_all(d);

      // ???????????´??°
      if (d[n] > 0) {
        d[n]--;
        d[i]++;
      } else if (d[n] == 0) {
        d[n] += d[i];
        d[i] = 0;
      }


      // ????????????
      if (convergence(d)) {
        cout << i << endl;
        // show_all(d);
        break;
      }

      // ???????????????????????´??°
      if (i == n-1) {
        i = 0;
      } else {
        i++;
      }
    }
  }
}
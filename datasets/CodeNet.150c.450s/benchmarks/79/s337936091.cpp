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


void show_tower(vector<int> &d) {
    cout << endl;
    for (int _d : d) {
      cout << _d << endl;
    }
    cout << endl;
}


int main() {
  int n, r;
  int s, f, w, k;

  while (cin >> n >> r && n && r) {

    // begin initialize vector
    vector<int> d(n);
    for (int i=0; i<n; i++) {
      d[i] = n-i;
    }
    // end initialize vector

    // begin r times operation
    for (int i=0; i<r; i++) {
      cin >> s >> f;
      s--;

      // begin initialize tmp vector
      vector<int> tmp(n);
      for (int j=0; j<n; j++) {
        tmp[j] = 0;
      }
      // end initialize tmp vector

      // begin copy selected elements
      for (int k=0; k<f; k++) {
        tmp[k] = d[s];
        d[s] = -1;
        s++;
      }
      // end copy selected elements

      // begin find non-zero index
      int k = 0;
      for (;k<n; k++) {
        if (tmp[k] == 0) break;
      }
      // end find non-zero index

      for (int _d : d) {
        if (_d > 0) tmp[k++] = _d;
      }

      d = tmp;
    }
    cout << d[0] << endl;
  }
}
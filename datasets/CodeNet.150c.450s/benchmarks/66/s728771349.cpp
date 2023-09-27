//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<string> u(n);
  rep (i, n) cin >> u[i];

  cin >> m;
  vector<string> t(m);
  rep (i, m) cin >> t[i];

  vector<bool> ut(m);
  bool opened = false;

  rep (i, m) {
    bool solved = false;

    rep (j, n) {
      if (t[i] == u[j]) {
        if (opened) {
          cout << "Closed by " << t[i] << endl;
          opened = false;
          solved = true;
        }
        else {
          cout << "Opened by " << t[i] << endl;
          opened = true;
          solved = true;
        }
        break;
      }
    }

    if (!solved) cout << "Unknown " << t[i] << endl;
  }

  return 0;
}
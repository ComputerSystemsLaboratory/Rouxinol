//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, left, right;
  vector<int> p;

  while (cin >> n >> left >> right, n) {
    p.resize(n);
    rep (i, n) cin >> p[i];

    // sort(p.begin(), p.end());
    // reverse(p.begin(), p.end());

    int n_passed = 0;
    int max_gap = 0;

    rep (i, n-1) {
      // cout << "i: " << i << endl;
      if (! (left <= i+1 && i+1 <= right) ) continue;
      // cout << "passed " << i+1 << " students (lowest: " << left << ", highest: " << right << ")" << endl;
      // cout << "current gap: " << p[i] - p[i+1] << endl;

      if (max_gap <= p[i] - p[i+1]) {
        // cout << "new gap: " << p[i] - p[i+1] << endl;
        // cout << left << ", " << i+1 << ", " << right << endl;
        // cout << "update" << endl;
        n_passed = i+1;
        max_gap = p[i] - p[i+1];
      }
    }
    cout << n_passed << endl;
  }
  return 0;
}
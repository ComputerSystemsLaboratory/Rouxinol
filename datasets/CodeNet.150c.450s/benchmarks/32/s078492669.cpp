#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int m, nmin, nmax;
  while (cin >> m, cin >> nmin, cin >> nmax, m && nmin && nmax) {
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }
    // sort(p.begin(), p.end());
    // reverse(p.begin(), p.end());
    int ans = 0;
    int diffmax = 0;
    for (int i = nmin - 1; i <= nmax - 1; i++) {
      //cerr << p[i] - p[i + 1] << " ";
      if (diffmax <= p[i] - p[i + 1]) {
        diffmax = p[i] - p[i + 1];
        ans = i+1;
      }
    }
   // cerr << endl;
    cout << ans << endl;
  }
  return 0;
}
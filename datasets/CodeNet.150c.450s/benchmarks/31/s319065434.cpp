#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
int main() {
  int n, m = INT_MAX, res = INT_MIN, r;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> r;
    if ((r - m) > res) res = r - m;
    if (r < m) m = r;
  };
  cout << res << endl;
  return 0;
}
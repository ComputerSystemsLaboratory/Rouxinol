#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m = 0;
  int d = INT_MIN;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (i == 0) {
      m = x;
      continue;
    }
    d = max(d, x - m);
    if (x < m) {
      m = x;
    }
  }

  cout << d << endl;
  return 0;
}
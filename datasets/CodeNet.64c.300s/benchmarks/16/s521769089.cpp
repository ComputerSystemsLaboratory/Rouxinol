#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m = 0;
  int d = INT_MIN;
  int x;
  cin >> m;
  for (int i = 0; i < n - 1; ++i) {
    cin >> x;
    d = max(d, x - m);
    m = min(m, x);
  }

  cout << d << endl;
  return 0;
}
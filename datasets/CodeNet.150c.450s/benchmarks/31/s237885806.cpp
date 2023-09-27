#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(int ac, char **av) {
  int n;
  while (cin >> n, n) {
    vector<int> a;
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      a.push_back(t);
    }
    auto mx = -1000000000;
    auto ms = a[0];
    for (auto it = ++begin(a); it != end(a); it++) {
      mx = max(mx, *it - ms);
      ms = min(ms, *it);
    }
    cout << mx << endl;
    n = 0;
  }
  return 0;
}
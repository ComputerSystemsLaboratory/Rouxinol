#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (!n) break;
    vector<int> a(n + 1); for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 1000000;
    for (int i = 1; i <= n; i++)
      for (int j = i + 1; j <= n; j++)
        if (abs(a[i] - a[j]) < ans) ans = abs(a[i] - a[j]);
    cout << ans << endl;
  }
  return 0;
}

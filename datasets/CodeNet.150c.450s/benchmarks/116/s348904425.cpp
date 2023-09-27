#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  while (true) {
    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0) {
      break;
    }
    vector<int> a(n);
    vector<int64_t> s(n + 1);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s[i + 1] = s[i] + a[i];
    }
    int64_t ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
      ans = max(ans, s[i + k] - s[i]);
    }
    cout << ans << endl;
  }
  return 0;
}


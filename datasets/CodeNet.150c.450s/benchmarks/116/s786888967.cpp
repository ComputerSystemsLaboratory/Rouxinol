#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n, k;
    cin >> n >> k;
    if (!n && !k) return 0;
    int a[n];
    long long result = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i < k)
        result += a[i];
    }
    long long sum = result;
    for (int i = k; i < n; i++) {
      sum = sum - a[i-k] + a[i];
      result = max(result, sum);
    }
    cout << result << endl;
  }
}
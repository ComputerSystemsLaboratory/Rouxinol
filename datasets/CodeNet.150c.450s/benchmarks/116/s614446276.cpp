#include <iostream>

using namespace std;

typedef long long ll;

const int MAX_N = 100000;
int a[MAX_N];

int main() {
  int n, k;
  while (cin >> n >> k) {
    if (n == 0 && k == 0) break;
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i < k) { sum += a[i]; ans = sum; }
      else { sum = sum + a[i] - a[i-k]; ans = max(ans, sum); }
    }
    cout << ans << endl;
  }

  return 0;
}
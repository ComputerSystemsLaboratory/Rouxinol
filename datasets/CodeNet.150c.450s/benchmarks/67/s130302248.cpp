#include <iostream>

#define REP(i, n) for (int i = 0; i < n; i++)
#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;

int main() {
  while (1) {
    int n, ans = 0;
    cin >> n;
		if (n<=0) return 0;
    for (int i = 2; i * (i + 1) <= 2 * n; i++) {
      if (i % 2 == 0 && (n - (i / 2)) % i == 0) {
        ans++;
        // debug(i);
      } else if (i % 2 == 1 && n % i == 0) {
        ans++;
        // debug(i);
      }
    }
    cout << ans << endl;
  }
  return 0;
}


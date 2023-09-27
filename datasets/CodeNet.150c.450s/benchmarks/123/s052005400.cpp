#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  const int m = 100000000;
  vector<bool> is_prime(m + 1, true);
  is_prime[0] = false;
  is_prime[1] = false;
  for (int i = 2; i * i <= m; i++) {
    if (!is_prime[i]) continue;
    for (int j = i * 2; j <= m; j += i) {
      is_prime[j] = false;
    }
  }
  int x;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (is_prime[x]) ++ans;
  }
  cout << ans << endl;
  return 0;
}


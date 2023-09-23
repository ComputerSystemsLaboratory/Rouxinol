#include <iostream>

using namespace std;

bool is_prime(int x) {
  if (x <= 1) return false;
  if (x == 2) return true;
  if (x % 2 == 0) return false;
  for (int d = 3; d * d <= x; d += 2) {
    if (x % d == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  int x;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (is_prime(x)) ++ans;
  }
  cout << ans << endl;
  return 0;
}


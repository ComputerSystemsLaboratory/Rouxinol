#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, i;
  cin >> n;
  int f[n];
  f[0] = 1, f[1] = 1;
  for (i = 2; i <= n; ++i) {
    f[i] = f[i - 1] + f[i - 2];
  }

  cout << f[n] << '\n';

  return 0;
}


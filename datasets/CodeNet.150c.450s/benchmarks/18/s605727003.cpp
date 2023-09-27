#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 100000;
  while (n--) {
    ans = ans + ceil(ans * 0.05 / 1000) * 1000;
  }
  cout << ans << endl;
  return 0;
}


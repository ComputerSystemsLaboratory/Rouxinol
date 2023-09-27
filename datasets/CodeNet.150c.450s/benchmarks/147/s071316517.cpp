#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> ans(N);

  for (int x = 1; x * x <= N; x++) {
    for (int y = 1; y * y <= N; y++) {
      for (int z = 1; z * z <= N; z++) {
        int calc = x * x + y * y + z * z + x * y + y * z + z * x;
        if (calc <= N) {
          ans[calc - 1]++;
        }
      }
    }
  }
  rep(i, N) cout << ans[i] << endl;
  return 0;
}
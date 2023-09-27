#include <iostream>
using namespace std;

int dfs(int now, int n, int s) {
  if (n == 0 && s == 0) return 1;
  if (now < 10) return dfs(now + 1, n, s) + dfs(now + 1, n - 1, s - now);
  return 0;
}

int main() {
  while (true) {
    int n, s;
    cin >> n >> s;
    if (n == 0 && s == 0) return 0;

    int ans = dfs(0, n, s);
    cout << ans << endl;
  }
}
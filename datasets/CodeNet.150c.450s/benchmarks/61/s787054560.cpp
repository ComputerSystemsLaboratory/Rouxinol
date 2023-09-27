#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int n, a, b, c, x;
  while (true) {
    cin >> n >> a >> b >> c >> x;
    if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;
    int res = 0;
    rep (iii, n) {
      int y;
      cin >> y;
      int x0 = x;
      while (x != y) {
	++res;
	x = (a * x + b) % c;
	if (x == x0 || res > 10000) {
	  for (++iii; iii < n; ++iii) cin >> y;
	  goto end;
	}
      }
      x = (a * x + b) % c;
      ++res;
    }
    cout << res - 1 << endl;
    continue;
  end:;;
    cout << -1 << endl;
  }
  return 0;
}
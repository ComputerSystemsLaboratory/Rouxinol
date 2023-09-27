#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;

const int MX = 10050;

int main() {
  int N;
  cin >> N;
  vector<int> a(MX);
  srep(x,1, 105) srep(y,1, 105) srep(z,1, 105) {
    int n = x * x + y * y + z * z + x * y + y * z + z * x;
    if (n < MX) a[n]++;
  }

  srep(i, 1, N + 1) cout << a[i] << endl;
  return 0;
}

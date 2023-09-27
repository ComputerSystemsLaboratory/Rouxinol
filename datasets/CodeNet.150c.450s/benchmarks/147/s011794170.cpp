#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, a, b;
  cin >> N;
  vector<int> ans(N);
  for (int x = 1; x < N; x++) {
    for (int y = 1; y < N; y++) {
      for (int z = 1; z < N; z++) {
        int q = x*(x+y)+y*(y+z)+z*(z+x);
        if (q > N) {
          a = y;
          b = z;
          break;
        }
        ans[q-1] += 1;
      }
      if (b == 1) break;
    }
    if (a == 1) break;
  }
  for (int &e : ans) cout << e << endl;
}

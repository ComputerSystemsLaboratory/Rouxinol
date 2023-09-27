# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}

int main() {
  int e;
  while (1) {
    cin >> e;
    if (!e) break;

    // greedy(O(3*N)?): WA
    // int i;
    // int x, y, z;
    // for (i=0; pow(i, 3) <= e; i++) {}
    // z = i-1;
    // e -= pow(z, 3);
    //
    // for (i=0; pow(i, 2) <= e; i++) {}
    // y = i-1;
    // e -= pow(y, 2);
    //
    // x = e;
    // cout << x+y+z << endl;
    //

    // O(N^2): TLE
    // int ans = 10000000 + 7;
    // for (int z=0; pow(z,3)<=e; z++) {
    //   for (int y=0; pow(z,3)+pow(y,2)<=e; y++) {
    //     int x = e - (pow(z,3)+pow(y,2));
    //     if (x + pow(y,2) + pow(z,3) != e) continue;
    //     ans = min(ans, x+y+z);
    //   }
    // }

    int ans = 10000000 + 7;
    for (int z=0; pow(z,3)<=e; z++) {
      int y = sqrt(e-pow(z,3));
      int x = e-pow(z,3)-pow(y,2);
      if (x + pow(y,2) + pow(z,3) != e) continue;
      ans = min(ans, x+y+z);
    }

    cout << ans << endl;
  }
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 1000000000;
using namespace std;
int main() {
  int n, s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a = 0, b = 0;
    bool key = 1;
    for (int j = 0; j < 10; j++) {
      cin >> s;
      if (s > a)
        a = s;
      else if (s > b)
        b = s;
      else
        key = 0;
    }
    cout << (key ? "YES" : "NO") << endl;
  }
  return 0;
}
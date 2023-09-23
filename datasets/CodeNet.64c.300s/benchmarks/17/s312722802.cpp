#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;

int main() {
  int x, y, s, i, j, k, l, a, b, extreambonbar;
  cin >> x >> y >> s;
  while (x != 0) {
    l = 0;
    for (i = 1; i < s / 2 + 1; i++) {
      a = i * (100 + x) / 100;
      b = (s - a) * 100 / (100 + x);
      while ((b + 1) * (100 + x) / 100 + a <= s)
        b++;
      extreambonbar = i * (100 + y) / 100 + b * (100 + y) / 100;
      if (b * (100 + x) / 100 + a == s && extreambonbar > l) {
        l = extreambonbar;
      }
    }
    cout << l << endl;
    cin >> x >> y >> s;
  }
  return 0;
}
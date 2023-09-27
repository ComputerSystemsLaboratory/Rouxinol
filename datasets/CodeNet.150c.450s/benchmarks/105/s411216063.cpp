#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> a;
string s;

bool solve();

int main() {
  int times;
  cin >> times;
  while (times--) {
    cin >> n;
    a.resize(n);
    for (auto& p : a) cin >> p;
    cin >> s;
    vector<long long> basis;
    int res = 0;
    for (int i = n - 1; i >= 0; --i) {
      for (auto b : basis) a[i] = min(a[i], a[i] ^ b);
      if (a[i]) {
        if (s[i] == '0')
          basis.push_back(a[i]);
        else
          res = 1;
      }
    }
    cout << res << endl;
  }
  return 0;
}

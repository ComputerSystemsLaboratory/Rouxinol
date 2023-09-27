#include <iostream>
#include <map>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, p, all;
  vector<int> r;
  while (cin >> n >> p && n && p) {
    bool flag = false;
    all = p;
    map<int, int> m;
    rep(i, n) m[i] = 0;
    while (!flag) {
      // cout << n << ' ' << p << endl;
      rep(i, m.size()) {
        if (p > 0) {
          p--;
          m[i]++;
        } else {
          p += m[i];
          m[i] = 0;
        }
      }
      rep(i, m.size()) {
        if (m[i] == all) {
          r.push_back(i);
          flag = true;
        }
      }
    }
  }
  rep(i, r.size()) { cout << r[i] << endl; }
  return 0;
}


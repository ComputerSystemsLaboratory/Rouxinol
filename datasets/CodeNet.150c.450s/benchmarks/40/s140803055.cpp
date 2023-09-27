#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n[6], m[6];
  rep(i, 6) cin >> n[i];
  string s;
  cin >> s;

  rep(i, s.size()) {
    rep(j, 6) m[j] = n[j];
    if (s[i] == 'N') {
      m[0] = n[1];
      m[1] = n[5];
      m[4] = n[0];
      m[5] = n[4];
      rep(j, 6) n[j] = m[j];
    } else if (s[i] == 'S') {
      m[0] = n[4];
      m[1] = n[0];
      m[4] = n[5];
      m[5] = n[1];
      rep(j, 6) n[j] = m[j];
    } else if (s[i] == 'W') {
      m[0] = n[2];
      m[2] = n[5];
      m[3] = n[0];
      m[5] = n[3];
      rep(j, 6) n[j] = m[j];
    } else {
      m[0] = n[3];
      m[2] = n[0];
      m[3] = n[5];
      m[5] = n[2];
      rep(j, 6) n[j] = m[j];
    }
  }

  cout << n[0] << endl;

  return 0;
}

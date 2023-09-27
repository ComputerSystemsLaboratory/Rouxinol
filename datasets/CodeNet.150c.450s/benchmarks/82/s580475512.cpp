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

class Dice {
 private:
  int m[6];

 public:
  void rotate(char c, int *n) {
    rep(j, 6) m[j] = n[j];
    if (c == 'N') {
      m[0] = n[1];
      m[1] = n[5];
      m[4] = n[0];
      m[5] = n[4];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'S') {
      m[0] = n[4];
      m[1] = n[0];
      m[4] = n[5];
      m[5] = n[1];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'W') {
      m[0] = n[2];
      m[2] = n[5];
      m[3] = n[0];
      m[5] = n[3];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'E') {
      m[0] = n[3];
      m[2] = n[0];
      m[3] = n[5];
      m[5] = n[2];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'R') {
      m[1] = n[3];
      m[2] = n[1];
      m[3] = n[4];
      m[4] = n[2];
      rep(j, 6) n[j] = m[j];
    } else {
      m[1] = n[2];
      m[2] = n[4];
      m[3] = n[1];
      m[4] = n[3];
      rep(j, 6) n[j] = m[j];
    }
  }

  void rotate_tf(int t, int f, int *n) {
    if (t == n[5]) {
      rep(i, 2) {
        rotate('N', n);
      }
    } else if (t != n[0]) {
      rep(i, 4) {
        rotate('R', n);
        if (t == n[1]) {
          break;
        }
        if (i == 3) {
          cout << "error" << endl;
        }
      }
      rotate('N', n);
    }
    rep(i, 4) {
      rotate('R', n);
      if (f == n[1]) {
        break;
      }
      if (i == 3) {
        cout << "error" << endl;
      }
    }
  }
};

int main() {
  int n[6];
  rep(i, 6) cin >> n[i];
  int num;
  cin >> num;
  vector<int> t(num), f(num);
  rep(i, num) cin >> t[i] >> f[i];

  Dice d;
  rep(i, num) {
    d.rotate_tf(t[i], f[i], n);
    cout << n[2] << endl;
  }

  return 0;
}

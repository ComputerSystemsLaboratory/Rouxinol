#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef long long ll;

int calc(ll x) {
  int res = -1;
  for (int i = 0; i <= 60; i++) {
    if ((1LL << i) & x) {
      res = i;
    }
  }
  return res;
}

int main() {
  int n, t, flag;
  string s;
  set<ll> s1, s0;
  ll a[200];
  cin >> t;
  while (t--) {
    cin >> n;
    s0.clear();
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cin >> s;
    flag = 0;
    for (int i = n - 1; i >= 0 && flag == 0; i--) {
      s1.clear();
      if (s[i] == '0') {
        set<ll>::reverse_iterator it = s0.rbegin();
        while (it != s0.rend()) {
          if (calc(*it) == calc(a[i])) {
            a[i] ^= *it;
          }
          it++;
        }
        if (a[i]) {
          set<ll>::reverse_iterator it = s0.rbegin();
          while (it != s0.rend()) {
            if (calc(*it) == calc(a[i])) {
              a[i] ^= *it;
            }
            it++;
          }
          s0.insert(a[i]);
        }
      } else {
        set<ll>::reverse_iterator it = s0.rbegin();
        while (it != s0.rend()) {
          if (calc(*it) == calc(a[i])) {
            a[i] ^= *it;
          }
          it++;
        }
        if (a[i]) {
          flag = 1;
        }
      }
    }
    cout << flag << endl;
  }
}
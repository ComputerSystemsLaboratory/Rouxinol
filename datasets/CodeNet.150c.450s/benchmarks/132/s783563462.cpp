#include <bits/stdc++.h>
using namespace std;

int n, p;
int cnt;
vector<int> v;

int solve() {
  while (true) {
    for (int i = 0; i < n; ++i) {
      if (cnt) {
        --cnt;
        ++v[i];
      } else {
        if (!v[i]) continue;
        cnt += v[i];
        v[i] = 0;
      }
      if (v[i] == p) return i;
    }
  }
}

int main() {
  while (cin >> n >> p, n) {
    cnt = p;
    v = vector<int>(n, 0);
    cout << solve() << endl;
  }
  return 0;
}


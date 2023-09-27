#include <bits/stdc++.h>
using namespace std;

const int maxn = 100005;
int bit[maxn];

void update(int i, int x) {
  while (i <= maxn)
    bit[i] += x, i += i & -i;
}

int query(int x) {
  int ans = 0;
  while (x)
    ans += bit[x], x -= x & -x;
  return ans;
}

int main() {
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < q; i++) {
    int c, x, y;
    cin >> c >> x >> y;
    if (c == 0) {
      update(x, y);
    } else {
      cout << (query(y) - query(x - 1)) << endl;
    }
  }
}

#include <iostream>
#include <vector>
using namespace std;

typedef long long int LLI;

int n;
vector<int> a;
vector<int> b;

void input() {
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    a.push_back(t);
  }
}

LLI sub2(int l, int m, int r) {
  for (int i = l; i < r; ++i) {
    b[i] = a[i];
  }
  int k = l;
  int p = l;
  int q = m;
  LLI t = 0;
  while (k < r) {
    if (p == m) {
      a[k++] = b[q++];
    } else if (q == r) {
      a[k++] = b[p++];
    } else if (b[q] < b[p]) {
      a[k++] = b[q++];
      t += m - p;
    } else {
      a[k++] = b[p++];
    }
  }
  return t;
}

LLI sub1(int l, int r) {
  if (r - l < 2) {
    return 0;
  }
  int m = (l + r) / 2;
  LLI t = 0;
  t += sub1(l, m);
  t += sub1(m, r);
  t += sub2(l, m, r);
  return t;
}

LLI solve() {
  b.resize(a.size());
  return sub1(0, n);
}

int main() {
  cin.tie(0);
  std::ios_base::sync_with_stdio(false);

  input();
  LLI ans = solve();
  cout << ans << endl;

  return 0;
}


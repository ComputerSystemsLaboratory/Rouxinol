#include <bits/stdc++.h>
using namespace std;

static const int INFTY = (1<<20);
static const int MAXm = 30;
static const int MAXn = 60000;

int n, m, C[MAXm], T[MAXn];

int main() {
  cin >> n >> m;
  T[0] = 0;
  for (int i = 1; i <= n; i++) T[i] = INFTY;
  for (int i = 1; i <= m; i++) cin >> C[i];

  for (int i = 0; i <= m; i++) {
    for (int j = C[i]; j <= n; j++) {
      T[j] = min(T[j], T[j - C[i]] + 1);
    }
  }

  cout << T[n] << endl;
}

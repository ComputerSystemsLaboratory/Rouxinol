#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
const int INF = 0x3f3f3f3f;
int n, m, x, a[N];
signed main(void) {
  memset(a, 0x3f, sizeof(a));
  for(cin >> n, m = n; m; m--)
    cin >> x, *lower_bound(a, a + n, x) = x;
  cout << lower_bound(a, a + n, INF) - a << endl;
}
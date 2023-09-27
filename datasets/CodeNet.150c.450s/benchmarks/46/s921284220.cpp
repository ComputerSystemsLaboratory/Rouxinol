#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;++i)
using namespace std;

int main()
{
  int n, x, ans;
  while (cin >> n >> x, n || x) {
    ans = 0;
    FOR(i, 1, n+1) FOR(j, i+1, n+1) FOR(k, j+1, n+1) {
      if (i + j + k == x) ++ans;
    }
    cout << ans << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  int c[21], t[50001];

  cin >> n >> m;
  for (int i = 0; i < m; i++){
    cin >> c[i];
  }

  fill(t, t + 50001, 1 << 29);
  t[0] = 0;
  for (int i = 0; i < m; i++){
    for (int j = 0; j + c[i] <= n; j++){
      t[j + c[i]] = min(t[j + c[i]], t[j] + 1);
    }
  }
  cout << t[n] << endl;
}
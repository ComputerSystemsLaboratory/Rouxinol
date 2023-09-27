#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
int main() {
  int n, t[86400 + 1];
  while (cin >> n, n) {
    memset(t, 0, sizeof(t));
    int H1, H2, M1, M2, S1, S2;
    for (int i = 0; i < n; i++) {
      scanf("%d:%d:%d %d:%d:%d", &H1, &M1, &S1, &H2, &M2, &S2);
      t[H1 * 3600 + M1 * 60 + S1]++;
      t[H2 * 3600 + M2 * 60 + S2]--;
    }
    int ans = 0;
    for (int i = 1; i <= 86400; i++)
      t[i] += t[i - 1];
    cout << *max_element(t, t + 86400) << endl;
  }
  return 0;
}
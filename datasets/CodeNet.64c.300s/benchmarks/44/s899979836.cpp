#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int n, v_max;
  int d[10][10];

  while (cin >> n, n){
    memset(d, 1e9 + 9, sizeof(d));
    v_max = 0;
    REP(i, n){
      int a, b, c;
      cin >> a >> b >> c;
      v_max = max(v_max, max(a, b));
      d[a][b] = c;
      d[b][a] = c;
    }

    v_max++;
    REP(i, v_max) d[i][i] = 0;
    REP(k, v_max) REP(i, v_max) REP(j, v_max) {
      d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }

    pair<int, int> mini;
    mini.second = 1e9 + 9;
    REP(i, v_max) {
      int sum = 0;
      REP(j, v_max) {
        if (d[i][j] == 1e9 + 9) continue;
        sum += d[i][j];
      }
      if (mini.second > sum){
        mini.first = i;
        mini.second = sum;
      }
    }

    cout << mini.first << " " << mini.second << endl;
  }
}
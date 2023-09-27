#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, N) for (int i = 0; i < (int)N; i++)

#define M 20
#define N 50001

int d[M];
int DP[M][N];

int main () {
  int n, m;

  cin >> n >> m;
  REP(i,M) cin >> d[i];

  for(int x = 0; x <= n; x++) {
    for(int i = 0; i < m; i++) DP[i][x] = N;
  }
  for(int k = 0, kMax = n / d[0]; k <= kMax; k++) DP[0][k*d[0]] = k;

  for(int i = 1; i < m; i++) {
    for(int x = 0; x <= n; x++) {
      DP[i][x] = DP[i-1][x];
      if(x - d[i] >= 0)DP[i][x] = min(DP[i][x], DP[i][x- d[i]] + 1);
    }
  }

  cout << DP[m-1][n] << endl;

  return 0;
}
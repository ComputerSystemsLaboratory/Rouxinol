#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, N) for (int i = 0; i < (int)N; i++)

#define M 20
#define N 50001

int d[M];
int DP[M][N];

int solve(int i, int x) {
  int res = N;
  if(DP[i][x] != N) return DP[i][x];
  res = solve(i-1, x);
  if(x - d[i] >= 0) res = min(res, solve(i, x - d[i]) + 1);
  DP[i][x] = res;
  return res;
}

int main () {
  int n, m;

  cin >> n >> m;
  REP(i,M) cin >> d[i];

  for(int x = 0; x <= n; x++) {
    for(int i = 0; i < m; i++) DP[i][x] = N;
  }
  for(int k = 0, kMax = n / d[0]; k <= kMax; k++) DP[0][k*d[0]] = k;

  cout << solve(m-1, n) << endl;

  return 0;
}
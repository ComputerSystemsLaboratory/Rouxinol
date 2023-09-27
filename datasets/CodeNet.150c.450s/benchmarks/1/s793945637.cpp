#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (int)N; i++)

#define N 100000
#define INF 1e9
int a[N];
int dp[N];

int main () {
  int n;
  cin >> n;
  REP(i,n) cin >> a[i];

  fill(dp, dp+n, INF);
  for(int i = 0; i < n; i++){
    *lower_bound(dp, dp+n, a[i]) = a[i];
  }

  cout << (lower_bound(dp, dp+n, INF) - dp) << endl;

  return 0;
}
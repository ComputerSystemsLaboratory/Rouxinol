#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

const int dr[4] = {-1, 0, 1, 0};
const int dc[4] = {0, 1, 0, -1};

int mat[110][2], dp[110][110];
const int INF = 1<<29;

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  REP(i, N) REP(j, 2) cin >> mat[i][j];
  REP(i, N) REP(j, N) dp[i][j] = INF;
  REP(i, N) dp[i][i] = 0;
  for (int w = 1; w < N; w++) {
    for (int L = 0; L + w < N; L++) {
      int R = L + w;
      for (int i = L; i < R; i++)
	dp[L][R] = min(dp[L][R], dp[L][i] + dp[i+1][R] + mat[L][0] * mat[i][1] * mat[R][1]);
    }
  }
  cout << dp[0][N-1] << endl;
  return 0;
}
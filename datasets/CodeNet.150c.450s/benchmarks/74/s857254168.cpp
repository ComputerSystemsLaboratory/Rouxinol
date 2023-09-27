#include<iostream>
#include<stack>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

const int NMAX = 65536, MMAX = 32, INF = 10000000;
int dp[NMAX];
int d[MMAX];

int main() {
  int M, N;
  cin >> N >> M;
  REP(i, M) {
    cin >> d[i];
  }

  REP(i, N+2) {
    dp[i] = INF;
  }
  dp[0] = 0;

  REP(m, M) {
    REP(n, N+1) {
      int cmp = (n - d[m] >= 0 ? dp[n - d[m]] + 1 : INF);
      dp[n] = min(dp[n], cmp);
    }
  }
  
  cout << dp[N] << endl;
}
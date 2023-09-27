#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10
#define MAX_N 50000
#define MAX_M 20

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int dp[MAX_M+1][MAX_N+1];
int n, m, d[MAX_M];

int main(){
  scanf("%d%d", &n, &m);
  rep(i, m) scanf("%d", d+i);

  rep(i, MAX_M+1) rep(j, MAX_N+1) dp[i][j] = INF;
  dp[0][0] = 0;
  rep(i, m){
    rep(j, n+1){
      dp[i+1][j] = min(dp[i][j], dp[i+1][j-d[i]] + 1);
    }
  }

  printf("%d\n", dp[m][n]);
  return 0;
}
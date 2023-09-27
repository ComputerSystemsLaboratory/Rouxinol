#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

const int MAX_N = 1000000, Inf = 1<<28;
int dp[2][MAX_N];

int main() {
  rep(i,MAX_N) rep(j,2) dp[j][i] = Inf;
  dp[0][0] = dp[1][0] = 0;

  for (int i = 1; i*(i+1)*(i+2)/6 < MAX_N; ++i) {
    const int v = i*(i+1)*(i+2)/6;
    for (int j = 1; j < MAX_N; ++j) {
      if (j-v < 0) continue;
      dp[0][j] = min(dp[0][j], dp[0][j-v]+1);
      if (v%2)
        dp[1][j] = min(dp[1][j], dp[1][j-v]+1);
    }
  }

  int in;
  while (scanf("%d",&in),in) {
    printf("%d %d\n",dp[0][in], dp[1][in]);
  }
  return 0;
}
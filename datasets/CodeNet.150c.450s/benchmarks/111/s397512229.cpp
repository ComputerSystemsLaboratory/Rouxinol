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
typedef unsigned long long ll;

const int INF = 1 << 28;
int N, a[102];

void solve() {
  ll dp[102][52];
  memset(dp, 0, sizeof(dp));
  //dp[0][0] = 1;
  dp[1][ a[0] ] = 1;
  for (int i = 1; i < N-1; ++i) {
    for (int j = 0; j < 21; ++j) {
      if (dp[i][j]) {
        if (j + a[i] <= 20)
          dp[i+1][ j + a[i] ] += dp[i][j];
        if (j - a[i] >= 0)
          dp[i+1][ j - a[i] ] += dp[i][j];
      }
    }
  }
  cout << dp[N-1][ a[N-1] ] << endl;  
}

int main() {
  while (cin >> N) {
    rep (i,N) cin >> a[i];
    solve();
  }  
  return 0;
}
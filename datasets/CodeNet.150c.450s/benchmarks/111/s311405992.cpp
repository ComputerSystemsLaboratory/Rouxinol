#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <typeinfo>
#include <vector>

using namespace std;

#define ALL(x) (x).begin(), (x).end()
#define EACH(itr,c) for(__typeof((c).begin()) itr=(c).begin(); itr!=(c).end(); itr++)  
#define FOR(i,b,e) for (int i=(int)(b); i<(int)(e); i++)
#define MP(x,y) make_pair(x,y)
#define REP(i,n) for(int i=0; i<(int)(n); i++)

int n;
int a[100];
long long dp[100+1][20+1];

long long solve() {
  memset(dp, 0, sizeof(dp));
  dp[1][a[0]] = 1;
  FOR (i, 1, n-1) REP (j, 21) {
    if (j + a[i] <= 20)
      dp[i+1][j+a[i]] += dp[i][j];
    if (j - a[i] >= 0)
      dp[i+1][j-a[i]] += dp[i][j];
  }
  return dp[n-1][a[n-1]];
}

int main(int argc, char *argv[])
{
  ios::sync_with_stdio(false);
  cin >> n;
  REP (i, n) cin >> a[i];
  cout << solve() << endl;
  return 0;
}
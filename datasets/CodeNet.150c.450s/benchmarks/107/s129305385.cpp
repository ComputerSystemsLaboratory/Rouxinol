#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;
const int INF = 1e9;

int LD(string &A, string &B){
  int al = A.length(), bl = B.length(), dp[al + 1][bl + 1];
  REP(i, al + 1) REP(j, bl + 1) dp[i][j] = (i == 0 || j == 0 ? max(i, j) : INF);
  FOR(i, 1, al + 1)
    FOR(j, 1, bl + 1)
      dp[i][j] = min(dp[i][j - 1] + 1, min(dp[i - 1][j] + 1, dp[i - 1][j - 1] + (A[i - 1] == B[j - 1] ? 0 : 1)));
  return dp[al][bl];
}

int main() {
  string a, b; cin >>a >>b;
  cout <<LD(a, b) <<endl;
  return 0;
}
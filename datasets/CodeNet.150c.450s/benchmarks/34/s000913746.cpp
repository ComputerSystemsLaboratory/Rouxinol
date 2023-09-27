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

long long dp[31];

void init() {
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= 30; i++)
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
}

int solve(int x) {
  int days = (dp[x] + 9) / 10;
  return (days + 364) / 365;
}

int main(int argc, char *argv[])
{
  ios::sync_with_stdio(false);
  init();
  int n;
  while (cin >> n) {
    if (!n) break;
    cout << solve(n) << endl;
  }
  
  return 0;
}
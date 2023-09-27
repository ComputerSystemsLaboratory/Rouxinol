/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 1000;

/* typedef */

/* global variables */

int dp[MAX_N + 1][MAX_N + 1];

/* subroutines */

/* main */

int main() {
  int qn;
  cin >> qn;

  while (qn--) {
    string x, y;
    cin >> x >> y;

    int xn = x.size(), yn = y.size();

    memset(dp, 0, sizeof(dp));

    for (int i = 0; i <= xn; i++)
      for (int j = 0; j <= yn; j++) {
	if (i < xn && j < yn && x[i] == y[j] &&
	    dp[i + 1][j + 1] < dp[i][j] + 1)
	  dp[i + 1][j + 1] = dp[i][j] + 1;

	if (i < xn && dp[i + 1][j] < dp[i][j])
	  dp[i + 1][j] = dp[i][j];

	if (j < yn && dp[i][j + 1] < dp[i][j])
	  dp[i][j + 1] = dp[i][j];
      }

    printf("%d\n", dp[xn][yn]);
  }

  return 0;
}
/*
 * b.cc: 
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

const int MAX_N = 100;
const int INF = 1 << 30;

/* typedef */

/* global variables */

int rs[MAX_N], cs[MAX_N];
int dp[MAX_N][MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> rs[i] >> cs[i];

  for (int i = 0; i < n; i++) dp[i][i] = 0;

  int sum = 0;

  for (int l = 1; l < n; l++)
    for (int i0 = 0, i1 = l; i1 < n; i0++, i1++) {
      dp[i0][i1] = INF;
      for (int j = i0; j < i1; j++) {
	int d = rs[i0] * cs[j] * cs[i1] + dp[i0][j] + dp[j + 1][i1];
	if (dp[i0][i1] > d) dp[i0][i1] = d;
      }
    }

  printf("%d\n", dp[0][n - 1]);
  return 0;
}
/*
 * d.cc: 
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
const int MAX_M = 100;

/* typedef */

/* global variables */

int as[MAX_N][MAX_M], bs[MAX_M];

/* subroutines */

/* main */

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> as[i][j];
  for (int i = 0; i < m; i++) cin >> bs[i];

  for (int i = 0; i < n; i++) {
    int ci = 0;
    for (int j = 0; j < m; j++) ci += as[i][j] * bs[j];
    printf("%d\n", ci);
  }
  return 0;
}
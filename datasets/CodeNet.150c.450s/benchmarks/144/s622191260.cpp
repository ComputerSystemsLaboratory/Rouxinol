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
const int MAX_L = 100;

/* typedef */

typedef long long ll;

/* global variables */

ll as[MAX_N][MAX_M], bs[MAX_M][MAX_L];

/* subroutines */

/* main */

int main() {
  int n, m, l;
  cin >> n >> m >> l;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> as[i][j];
  for (int i = 0; i < m; i++)
    for (int j = 0; j < l; j++) cin >> bs[i][j];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      ll ci = 0;
      for (int k = 0; k < m; k++) ci += as[i][k] * bs[k][j];

      if (j) putchar(' ');
      printf("%lld", ci);
    }
    putchar('\n');
  }
  
  return 0;
}
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

const int MAX_R = 100;
const int MAX_C = 100;

/* typedef */

/* global variables */

int as[MAX_R + 1][MAX_C + 1];

/* subroutines */

/* main */

int main() {
  int r, c;
  cin >> r >> c;

  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      cin >> as[i][j];
      as[i][c] += as[i][j];
    }

  for (int j = 0; j <= c; j++)
    for (int i = 0; i < r; i++) as[r][j] += as[i][j];
  
  for (int i = 0; i <= r; i++) {
    for (int j = 0; j <= c; j++) {
      if (j) putchar(' ');
      printf("%d", as[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
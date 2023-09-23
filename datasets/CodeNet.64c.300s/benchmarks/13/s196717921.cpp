/*
 * a.cc: 
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

const int MAX_N = 44;

/* typedef */

/* global variables */

int fs[MAX_N + 1];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  fs[0] = fs[1] = 1;

  for (int i = 2; i <= n; i++)
    fs[i] = fs[i - 1] + fs[i - 2];

  printf("%d\n", fs[n]);
  return 0;
}
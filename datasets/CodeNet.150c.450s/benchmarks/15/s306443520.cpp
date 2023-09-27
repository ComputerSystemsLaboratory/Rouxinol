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

const int MAX_N = 10000;
const int MAX_Q = 500;

/* typedef */

/* global variables */

int ss[MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> ss[i];

  int q;
  cin >> q;

  int cnt = 0;
  while (q--) {
    int ti;
    cin >> ti;

    for (int i = 0; i < n; i++)
      if (ti == ss[i]) {
	cnt++;
	break;
      }
  }

  printf("%d\n", cnt);
  return 0;
}
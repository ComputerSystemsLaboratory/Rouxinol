/*
 * 2582.cc: Step Aerobics
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

/* typedef */

/* global variables */

/* subroutines */

/* main */

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (n == 0) break;

    int x = 0, l = 0, r = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s == "lu") l++;
      else if (s == "ru") r++;
      else if (s == "ld") l--;
      else r--;

      if (l == r && l != x) cnt++, x = l;
    }
    printf("%d\n", cnt);
  }
  return 0;
}
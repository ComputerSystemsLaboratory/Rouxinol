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

const int MAX_N = 20;

/* typedef */

/* global variables */

int as[MAX_N];

/* subroutines */

bool check(int k, int n, int sum) {
  if (sum == 0) return true;
  if (k >= n) return false;

  if (as[k] <= sum && check(k + 1, n, sum - as[k])) return true;
  return check(k + 1, n, sum);
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> as[i];

  int q;
  cin >> q;
  while (q--) {
    int mi;
    cin >> mi;
    cout << (check(0, n, mi) ? "yes" : "no") << endl;
  }
  return 0;
}
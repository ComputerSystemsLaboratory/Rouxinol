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

const int INF = 1 << 30;

/* typedef */

typedef long long ll;

/* global variables */

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  int mina = INF, maxa = -INF;
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;

    if (mina > ai) mina = ai;
    if (maxa < ai) maxa = ai;
    sum += ai;
  }

  printf("%d %d %lld\n", mina, maxa, sum);
  return 0;
}
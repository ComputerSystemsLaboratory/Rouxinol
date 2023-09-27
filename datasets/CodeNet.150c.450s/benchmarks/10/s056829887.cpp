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

const int BN = 4;
const int FN = 3;
const int RN = 10;

/* typedef */

/* global variables */

int vs[BN][FN][RN];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    b--, f--, r--;
    vs[b][f][r] += v;
  }

  for (int b = 0; b < BN; b++) {
    if (b) {
      for (int r = 0; r < RN; r++) printf("##");
      putchar('\n');
    }

    for (int f = 0; f < FN; f++) {
      for (int r = 0; r < RN; r++) printf(" %d", vs[b][f][r]);
      putchar('\n');
    }
  }

  return 0;
}
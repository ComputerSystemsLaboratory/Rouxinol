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

const int MAX_H = 2000000;
const int MAX_E2 = 1 << 22;

/* typedef */

template <typename T, const int MAX_E2>
struct SegTreeMax {
  int n, e2;
  T nodes[MAX_E2], is[MAX_E2];

  SegTreeMax() {}
  SegTreeMax(int _n) { init(_n); }

  void init(int _n) {
    n = _n;
    for (e2 = 1; e2 < n; e2 <<= 1);
    memset(nodes, -1, sizeof(nodes));
    memset(is, 0, sizeof(is));
  }

  int maxi() { return is[0]; }
  T getmax() { return nodes[0]; }
  T get(int i) { return nodes[e2 - 1 + i]; }

  void set(int i, T v) {
    int j = e2 - 1 + i;
    nodes[j] = v;
    is[j] = i;
    j = (j - 1) / 2;

    for (;;) {
      int j0 = j * 2 + 1, j1 = j0 + 1;
      if (nodes[j0] > nodes[j1])
	nodes[j] = nodes[j0], is[j] = is[j0];
      else
	nodes[j] = nodes[j1], is[j] = is[j1];
      if (j == 0) break;
      j = (j - 1) / 2;
    }
  }
};

/* global variables */

SegTreeMax<int,MAX_E2> st(MAX_H);

/* subroutines */

/* main */

int main() {
  int h = 0;

  for (;;) {
    char op[16];
    int tmp = scanf("%s", op);

    if (op[0] == 'i') {
      int x;
      tmp = scanf("%d", &x);

      st.set(h++, x);
    }
    else if (op[1] == 'x') {
      int x = st.getmax();
      st.set(st.maxi(), -1);
      
      printf("%d\n", x);
    }
    else break;
  }

  return 0;
}
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

const int MAX_N = 100;

/* typedef */

struct Edge {
  int i, j, c;
  Edge() {}
  Edge(int _i, int _j, int _c): i(_i), j(_j), c(_c) {}
  bool operator<(const Edge &e) const { return c < e.c; }
};

typedef vector<Edge> ve;

struct UFT {
  int links[MAX_N], ranks[MAX_N], sizes[MAX_N];

  void clear(int n) {
    for (int i = 0; i < n; i++) links[i] = i, ranks[i] = sizes[i] = 1;
  }
  UFT() {}
  UFT(int n) { clear(n); }

  int root(int i) {
    int i0 = i;
    while (links[i0] != i0) i0 = links[i0];
    return (links[i] = i0);
  }

  int rank(int i) { return ranks[root(i)]; }
  int size(int i) { return sizes[root(i)]; }
  bool same(int i, int j) { return root(i) == root(j); }

  int merge(int i0, int i1) {
    int r0 = root(i0), r1 = root(i1), mr;
    if (r0 == r1) return r0;
    if (ranks[r0] == ranks[r1]) {
      links[r1] = r0;
      sizes[r0] += sizes[r1];
      ranks[r0]++;
      mr = r0;
    }
    else if (ranks[r0] > ranks[r1]) {
      links[r1] = r0;
      sizes[r0] += sizes[r1];
      mr = r0;
    }
    else {
      links[r0] = r1;
      sizes[r1] += sizes[r0];
      mr = r1;
    }
    return mr;
  }
};

/* global variables */

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  ve es;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      int ai;
      cin >> ai;
      if (ai >= 0) es.push_back(Edge(i, j, ai));
    }
  sort(es.begin(), es.end());

  UFT uft(n);
  int en = es.size(), sum = 0;

  for (int i = 0; i < en; i++) {
    Edge &ei = es[i];
    if (! uft.same(ei.i, ei.j)) {
      uft.merge(ei.i, ei.j);
      sum += ei.c;
    }
  }

  printf("%d\n", sum);
  return 0;
}
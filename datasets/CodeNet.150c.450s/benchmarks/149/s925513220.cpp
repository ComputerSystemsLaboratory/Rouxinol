#include <bits/stdc++.h>

namespace UnionFindTree {
  template<std::size_t N>
  void Init(int (&ps)[N]) {
    for(int i = 0; i < (int)N; ++i) ps[i] = i;
  }
  template<std::size_t N>
  int Find(int (&ps)[N], int x) {
    return ps[x] == x ? x : ps[x] = Find(ps, ps[x]);
  }
  template<std::size_t N>
  void Unite(int (&ps)[N], int x, int y) {
    x = Find(ps, x);
    y = Find(ps, y);
    if( x == y ) return;
    if( rand() & 0x01 ) std::swap(x, y);
    ps[x] = y;
  }
  template<std::size_t N>
  bool Same(int (&ps)[N], int x, int y) {
    return Find(ps, x) == Find(ps, y);
  }
};
using namespace UnionFindTree;

// http://atc001.contest.atcoder.jp/tasks/unionfind_a
void Verify_1() {
  int par[112345];
  int n, q;
  scanf("%d %d", &n, &q);
  Init(par);
  for(int i = 0; i < q; ++i) {
    int c, x, y;
    scanf("%d %d %d", &c, &x, &y);
    if( c == 0 ) {
      Unite(par, x, y);
    }
    else {
      puts(Same(par, x, y) ? "Yes" : "No");
    }
  }
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
void Verify_2() {
  int par[11234];
  int n, q;
  scanf("%d %d", &n, &q);
  Init(par);
  for(int i = 0; i < q; ++i) {
    int c, x, y;
    scanf("%d %d %d", &c, &x, &y);
    if( c == 0 ) {
      Unite(par, x, y);
    }
    else {
      puts(Same(par, x, y) ? "1" : "0");
    }
  }
}


int main() {
  Verify_2();
  return 0;
}
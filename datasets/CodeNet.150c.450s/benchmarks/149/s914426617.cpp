#include <bits/stdc++.h>

class UnionFindTree {
public:
  class Node {
  public:
    int parent, rank; 
  } node[16384];
  UnionFindTree(int n) {
    for(int i = 0; i < n; ++i) {
      node[i].parent = i;
      node[i].rank = 0;
    }
  }
};

template<typename T>
int find(T& uftree, int index) {
  int res = index;
  while( uftree.node[res].parent != res ) {
    res = uftree.node[res].parent;
  }
  int t = index;
  int t2;
  while( t != res ) {
    t2 = uftree.node[t].parent;
    uftree.node[t].parent = res;
    t = t2;
  }
  return res;
}

template<typename T>
void unite(T& uftree, int n1, int n2) {
  int p1 = find(uftree, n1);
  int p2 = find(uftree, n2);
  if( p1 == p2 ) return;
  if( uftree.node[p1].rank < uftree.node[p2].rank ) {
    uftree.node[p1].parent = p2;
  }
  else if( uftree.node[p1].rank == uftree.node[p2].rank ) {
    uftree.node[p1].parent = p2;
    uftree.node[p2].rank += 1;
  }
  else if( uftree.node[p1].rank > uftree.node[p2].rank ) {
    uftree.node[p2].parent = p1;
  }
  else {
    abort();
  }
}

template<typename T>
bool same(T& uftree, int n1, int n2) {
  int p1 = find(uftree, n1);
  int p2 = find(uftree, n2);
  return (p1 == p2);
}

int main() {
  int n, q;
  int com, x, y;
  scanf("%d %d", &n, &q);
  UnionFindTree uf(n);
  for(int i = 0; i < q; ++i) {
    scanf("%d %d %d", &com, &x, &y);
    if( com == 0 ) {
      unite(uf, x, y);
    }
    else if( com == 1 ) {
      printf("%d\n", same(uf, x, y));
    }
  }

  return 0;
}
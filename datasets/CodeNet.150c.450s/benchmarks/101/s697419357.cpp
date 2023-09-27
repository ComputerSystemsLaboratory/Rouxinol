#include <iostream>
#include <vector>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define IN(v) int v;cin>>v;
#define OUT(v) cout<<v<<endl

vector<int> parent;
int root(int x) {
  if (parent[x] == x)
    return x;
  return parent[x] = root(parent[x]);
}
bool same(int x, int y) {
  return root(x) == root(y);
}
void unite(int x, int y) {
  x = root(x);
  y = root(y);
  if (x == y)
    return;
  parent[x] = y;
}
int main() {
  IN(N); IN(M);
  parent.resize(N);
  REP(i, N)
    parent[i] = i;

  REP(i, M) {
    IN(s); IN(t);
    unite(s, t);
  }
  IN(Q);
  REP(i, Q) {
    IN(s); IN(t);
    OUT((same(s, t) ? "yes" : "no"));
  }
  return 0;
}


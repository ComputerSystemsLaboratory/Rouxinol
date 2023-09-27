#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

class edge{
public:
  int l, r, w;
  bool operator<(const edge &another) const{
    return w < another.w;
  }
};

class disjointset{
public:
  vector<int> rank, p;
  disjointset(){}
  disjointset(int size){
    rank.resize(size, 0);
    p.resize(size, 0);
    for(int i = 0; i < size; i++) makeset(i);
  }
  void makeset(int x){
    p[x] = x;
    rank[x] = 0;
  }
  bool same(int x, int y){
    return findset(x) == findset(y);
  }
  void unite(int x, int y){
    link(findset(x), findset(y));
  }
  void link(int x, int y){
    if(rank[x] > rank[y]){
      p[y] = x;
    }
    else{
      p[x] = y;
      if(rank[x] == rank[y]) rank[y]++;
    }
  }
  int findset(int x){
    if(x != p[x]){
      p[x] = findset(p[x]);
    }
    return p[x];
  }
};

void solve(){
  int v, e; cin >> v >> e;
  vector<edge> eg(e);
  vector<set<int> > st(v);
  for(int i = 0; i < e; i++){
    cin >> eg[i].l >> eg[i].r >> eg[i].w;
  }
  for(int i = 0; i < v; i++) st[i].insert(i);
  sort(eg.begin(), eg.end());
  long long ans = 0;
  disjointset dset = disjointset(v + 1);
  for(int i = 0; i < v; i++) dset.makeset(i);
  for(int i = 0; i < e; i++){
    if(dset.same(eg[i].l, eg[i].r) == false){
      ans += eg[i].w;
      dset.unite(eg[i].l, eg[i].r);
    }
  }

  cout << ans << endl;
  return;
}

int main(){
  solve();
  return 0;
}


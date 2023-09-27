#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

//unionfind tree
struct UnionFind {
  vector<int> par;
  vector<int> rnk;
  int n;
  UnionFind(int n):n(n){
    par.resize(n);rnk.resize(n);
    for(int i=0; i<n; i++){par[i] = i;rnk[i] = 0;}
  }
  int find(int x){
      if(par[x] == x) return x;
      else return par[x] = find(par[x]);
  }
  void unite(int x, int y){
      x = find(x);y = find(y);
      if(x == y) return;
      if(rnk[x] < rnk[y])par[x] = y;
      else {
        par[y] = x;
        if(rnk[x] == rnk[y]) rnk[x]++;
      }
      return;
  }
  bool isSame(int x, int y){return find(x) == find(y);}
};

// クラスカル法(最小全域木求めるやつ)
struct edge{ll u, v ; ll cost; };

bool comp(edge& e1, edge& e2){
  return e1.cost < e2.cost;
}

int main(){
    int V,E;
    cin>>V>>E;
    vector<edge> es(E);
    FOR(i,0,E){
        cin>>es[i].u>>es[i].v>>es[i].cost;
    }
    sort(es.begin(), es.end(), comp);
    UnionFind U(V);
    ll res = 0;
    FOR(i,0,E){
        edge e = es[i];
        if(!U.isSame(e.u, e.v)){
            U.unite(e.u, e.v);
            res += e.cost;
        }
    }
    cout<<res<<endl;
    return 0;
}


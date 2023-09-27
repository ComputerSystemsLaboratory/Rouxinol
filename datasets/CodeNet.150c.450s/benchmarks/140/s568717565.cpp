#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

using namespace std;
const int INF = 0x7fffffff;

int gcd(int x,int y){
  int mi,ma;
  ma = max(x,y);
  mi = min(x,y);
  if(ma % mi == 0){
    return mi;
  }
  else{
    return gcd(mi,ma % mi);
  }
}

struct Edge{
  int t;
  int w;
  Edge(int to,int weight){
    t = to;
    w = weight;
  }
  bool operator<(const Edge& another) const{
    return w < another.w ;
  }
};

struct Path{
  int from;
  int to;
  int weight;

  bool operator<(const Path& another) const{
    return weight < another.weight;
  }

};

struct UnionFind{
  vector<int> par;

  UnionFind(int n){
    par.resize(n);
    int ii;
    for(ii=0;ii<n;ii++){
      par[ii] = ii;
    }
    
  }

  int root(int x){
    if(par[x] == x) return x;
    return root(par[x]);
    //return par[x] = root(par[x]);
  }

  void unite(int x,int y){
    int root_x = root(x);
    int root_y = root(y);
    if(root_x == root_y) return;
    par[root_x] = root_y;
  }

  bool same(int x,int y){
    int root_x = root(x);
    int root_y = root(y);
    return root_x == root_y ;
  }
};

using Graph = vector<vector<Edge>>;

int main(){
  long ii,jj,kk;
  vector<int> a;
  int v,e;

  // 入力
  cin >> v >> e;

  Graph g;
  g.resize(v);

  int s,t,w;
  vector<Path> pathes;
  Path p;

  for(ii=0;ii<e;ii++){
    //s 開始位置
    //t TO位置
    //w 重み
    cin >> s >> t >> w;
    p.from = s;
    p.to   = t;
    p.weight = w;
    //g[s].push_back(Edge(t,w));

    pathes.push_back(p);
  }
  
  //sort(g.begin(),g.end());

  sort(pathes.begin(),pathes.end());
  
  set<int> tree[v];

  long long int sum = 0;

  int from,to,weight;
  set<int> tmp;
  UnionFind uf(v);
  //cout << "root(2)" << uf.root(2) << endl;

  //cout << "same" << uf.same(1,2) << endl;
  // Edege分回す
  for(ii=0;ii<e;ii++){

    from   = pathes[ii].from;
    to     = pathes[ii].to;
    weight = pathes[ii].weight;

    if(!uf.same(from,to)){
      sum += weight;
    }

    uf.unite(from,to);
//
//    tmp = tree[from];
//
//    //tmp.insert(to);
//    //cout << "from:" << pathes[ii].from << "to:" << pathes[ii].to << "weight:" << pathes[ii].weight << endl;
//
//    //tree上に両方の端点が無い場合sumを加算
//    if(tree[from].find(to) == tree[from].end() &&
//       tree[to].find(from) == tree[to].end()){
//      sum += weight;
//      //cout << "**from:" << pathes[ii].from << "to:" << pathes[ii].to << "weight:" << pathes[ii].weight << endl;
//    }
//
//    //treeにToをとfromを追加
//    tree[from].insert(to);
//    tree[to].insert(from);
//
//    for(auto ed : tree[from]){
//      tree[to].insert(ed);
//    }
//
//    for(auto ed : tree[to]){
//      tree[from].insert(ed);
//    }

  }

  cout << sum << endl;
  
  return 0;

}


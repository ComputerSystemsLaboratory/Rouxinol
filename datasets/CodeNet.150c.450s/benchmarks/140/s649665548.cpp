#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
template<class T>inline bool chmax(T &a, const T &b){if(a < b){a = b; return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if(a > b){a = b; return 1;}return 0;}
typedef long long ll;

// UnionFind tree(N);でUnion-Find木を生成
// tree.root(X);で親ノード番号を返す
// tree.unite(X, Y);でノードを結合する
// tree.same(X, Y);でXノード、Yノードが結合しているかどうか返す
// tree.size(X);でXノードが結合しているノード数を返す
struct UnionFind{
  vector<int> par;
  vector<int> sizes;

  UnionFind(int N) : par(N), sizes(N, 1){
    for(int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x){
  if(par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y){
    int rx = root(x);
    int ry = root(y);
    if(rx == ry) return;
    if(sizes[rx] < sizes[ry]) swap(rx, ry);
    par[ry] = rx;
    sizes[rx] += sizes[ry];
  }

  bool same(int x, int y){
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }

  int size(int x){
    return sizes[root(x)];
  }
};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int V, E; cin >> V >> E;
  UnionFind tree(V);
  priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int > > > > pq;
  REP(i, E){
    int s, t, w; cin >> s >> t >> w;
    pq.push({w, {s, t}});
  }
  int ans = 0;
  while(!pq.empty()){
    auto tmp = pq.top(); pq.pop();
    int x = tmp.second.first, y = tmp.second.second;
    if(!tree.same(x, y)){
      ans += tmp.first;
      tree.unite(x, y);
    }
  }
  cout << ans << endl;
}

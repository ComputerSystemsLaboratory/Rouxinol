#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int vector_finder(std::vector<ll> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}
bool compare_by_a(pair<int, pair<ll, ll>> a, pair<int, pair<ll, ll>> b) {
    if(a.second.first != b.second.first){
        return a.second.first < b.second.first;
    }else{
        return a.second.second < b.second.second;
    }
}
bool compare_by_b(pair<int, pair<ll, ll>> a, pair<int, pair<ll, ll>> b) {
    if(a.second.second != b.second.second){
        return a.second.second < b.second.second;
    }else{
        return a.second.first < b.second.first;
    }
}
template<typename T>
struct edge {
    int from, to; // クラスカル法に限って、fromもedgeに含めるといい
    T cost;
};
// UnionFindを示す構造体
struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};
template<typename T>
T kruskal(vector<edge<T>> &edges, int V) {
    sort(edges.begin(), edges.end(), [](const edge<T> &a, const edge<T> &b) {
        return a.cost < b.cost;
    });
    UnionFind unionFind(V);
    T res = 0;
    for (edge<T> &e: edges) {
        if (unionFind.merge(e.to, e.from)) {
            res += e.cost;
        }
    }
    return res;
}

const ll INF = 1e18;
int main() {
  int V, E; cin >> V >> E;
  vector<vector<ll>> D(V, vector<ll>(V, INF));
  REP(i, E) {
    int s, t, d; cin >> s >> t >> d;
    D[s][t] = d; // 有向グラフのため片方のみGに登録する
  }
  REP(i, V) {
    D[i][i] = 0;
  }
  for (int k = 0; k < V; k++){       // 経由する頂点
    for (int i = 0; i < V; i++) {    // 始点
      for (int j = 0; j < V; j++) {  // 終点
        D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
      }
    }
  }
  bool flag = false;
  for(int i = 0; i < V; ++i) {
    if(D[i][i] != 0) flag = true;
  }
  if(!flag) {
    REP(i, V) {
      REP(k, V) {
        if(D[i][k] >= 1e17) cout << "INF";
        else cout << D[i][k];
        if(k != V - 1) cout << " ";
      }
      cout << endl;
    }
  } else {
    cout << "NEGATIVE CYCLE" << endl;
  }
}

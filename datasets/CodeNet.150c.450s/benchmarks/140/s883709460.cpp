#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Ti = tuple<int, int, int>;
using Tl = tuple<ll, ll, ll>;

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define Get(t, i) get<(i)>((t))
#define all(v) (v).begin(), (v).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, f, n) for(int i = (int)(f); i < (int)(n); i++)
#define each(a, b) for(auto& a : b)

const int inf = 1 << 25;
const ll INF = 1LL << 55;

struct edge{
  int to, weight;
  edge(){}
  edge(int to, int weight):to(to), weight(weight){}
};

struct Prim
{
  vector< vector<edge> > graph;
  Prim(int sz):graph(sz){}
  void add_edge(int u, int v, int weight)
  {
    graph[u].push_back(edge(v, weight));
    graph[v].push_back(edge(u, weight));
  }
  int build()
  {
    int total = 0;
    vector<bool> used(graph.size(), false);
    priority_queue< Pi, vector<Pi>, greater<Pi> > que;
    que.push(Pi(0, 0));
    while(!que.empty()) {
      Pi p = que.top(); que.pop();
      int curr = p.second, weight = p.first;
      if(used[curr]) continue;
      used[curr] = true;
      total += weight;
      for(int i = 0; i < graph[curr].size(); i++){
	edge& e = graph[curr][i];
	que.push(Pi(e.weight, e.to));
      }
    }
    return total;
  }
};


int main()
{
  int V, E;
  cin >> V >> E;
  Prim msp(V);
  while(E--) {
    int s, t, w;
    cin >> s >> t >> w;
    msp.add_edge(s, t, w);
  }
  cout << msp.build() << endl;
  return 0;
}
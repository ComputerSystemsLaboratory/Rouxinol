#include <iostream>
#include <climits>
#include <queue>

using namespace std;

using pii = pair<int, int>;

struct Graph{
  int v_size;
  vector<vector<pii>> adj;
  
  Graph(const int v_size):v_size(v_size){
    this->adj.resize(v_size);
  }
  
  void add_edge(const int s, const int t, const int w){
    this->adj[s].emplace_back(pii(t, w));
  }
};

int mst(const Graph& g){
  constexpr int INF{INT_MAX};
  
  vector<int> d(g.v_size, INF);
  priority_queue<pii, vector<pii>, greater<pii>> pq;

  d[0] = 0;
  pq.push(pii(0, 0));

  int ans {0};
  
  while(!pq.empty()){
    auto cost {pq.top().first};
    auto v {pq.top().second};
    pq.pop();

    if(d[v] < cost) continue;

    ans += cost;
    d[v] = -INF;

    for(int i = 0; i < g.adj[v].size(); ++i){
      auto to {g.adj[v][i].first};
      auto next_cost {g.adj[v][i].second};

      if(d[to] > next_cost){
        d[to] = next_cost;
        pq.push(pii(next_cost, to));
      }
    }
  }

  return ans;
}

int main()
{
  int n;
  cin >> n;
  
  Graph g(n);

  int x;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      cin >> x;
      if(x != -1){
        g.add_edge(i, j, x);
      }
    }
  }

  cout << mst(g) << endl;
}


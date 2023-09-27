#include <algorithm>
#include <queue>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

constexpr long long INF64 = 1e18;

class Graph {

  struct Edge {
    int src, dst;
    long long weight;
    Edge(int src, int dst, long long weight)
        : src(src), dst(dst), weight(weight) {}

    bool operator<(const Edge &e) const {
        return weight > e.weight;
    }
  };

  std::vector<std::vector<Edge>> g;
  std::vector<long long> dist, prev;

  int flag = -1;

  void Dijkstra(int s) {
    std::priority_queue<Edge> q;
    dist[s] = 0;
    for (q.emplace(-2, s, 0); !q.empty();) {
      Edge e = q.top();
      q.pop();
      if (prev[e.dst] != -1) {
        continue;
      }
      prev[e.dst] = e.src;
      for (auto next_e : g[e.dst]) {
        if (dist[next_e.dst] > next_e.weight + e.weight) {
          dist[next_e.dst] = next_e.weight + e.weight;
          q.emplace(next_e.src, next_e.dst, dist[next_e.dst]);
        }
      }
    }
    flag = s;
  }

public:
  Graph(int n) : g(n), dist(n, INF64), prev(n, -1) {}

  void addEdge(int s, int t, long long cost) {
    g[s].emplace_back(s, t, cost);
    flag = -1;
  }

  long long getCost(int s, int t) {
    if (flag != s) {
      Dijkstra(s);
    }
    return dist[t];
  }

  std::vector<int> getPath(int s, int t) {
    if (flag != s) {
      Dijkstra(s);
    }
    std::vector<int> path;
    for (; t != -2; t = prev[t]) {
      path.push_back(t);
    }
    std::reverse(path.begin(), path.end());
    return path;
  }
};

int main(){
    int n,m,s;
    cin>>n>>m>>s;
    Graph g(n);
    for(int i=0;i<m;++i){
        int from,to;
        long long weight;
        cin>>from>>to;
        cin>>weight;
        g.addEdge(from,to,weight);
    }
    for(int i=0;i<n;++i){
        long long ans=g.getCost(s,i);
        if(ans==INF64)cout<<"INF"<<endl;
        else cout<<ans<<endl;
    }
}
        

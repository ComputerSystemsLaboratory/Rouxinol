#include <iostream>
#include <queue>
#include <utility>
#include <vector>

struct Edge {
  int from, to, weight;
  Edge(int from, int to, int weight) : from(from), to(to), weight(weight) {}
};

struct Node {
  std::vector<Edge> ongoingEdges;
  void addEdge(Edge edge) {
    ongoingEdges.push_back(edge);
  }
};

class Graph {
private:
  std::vector<Node> nodes;
  int size;
public:
  Graph(int size): size(size) {
    nodes.resize(size);
  }
  void addEdge(Edge edge) {
    nodes[edge.from].addEdge(edge);
  }

  std::vector<int> calculateDist(int source) {
    std::vector<int> dist(size, (1 << 30));
    std::priority_queue< std::pair<int, int>, std::vector< std::pair<int, int> >, std::greater< std::pair<int, int> > > pq;

    pq.push(std::make_pair(0, source));
    dist[source] = 0;

    while(!pq.empty()) {
      int from = pq.top().second;
      pq.pop();

      for(Edge edge: nodes[from].ongoingEdges) {
        if(dist[edge.to] > dist[from] + edge.weight) {
          dist[edge.to] = dist[from] + edge.weight;
          pq.push({dist[edge.to], edge.to});
        }
      }

    }

    return dist;
  }
};

int main() {
  int n;
  std::cin >> n;
  Graph graph(n);

  for(int i = 0; i < n; i++) {
    int u, k;
    std::cin >> u >> k;

    for(int i = 0; i < k; i++) {
      int v, c;
      std::cin >> v >> c;
      graph.addEdge(Edge(u, v, c));
    }

  }

  std::vector<int> dist = graph.calculateDist(0);

  for(int i = 0; i < n; i++) {
    std::cout << i << ' ' << dist[i] << std::endl;
  }

}
#include <iostream>
#include <vector>

struct Edge {
  int source, target;
  Edge(int source, int target): source(source), target(target) {}
};

struct Node {
  std::vector<Edge> edges;
  void addEdge(Edge edge) {
    edges.push_back(edge);
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
  void addEdge(int source, int target) {
    nodes[source].addEdge(Edge(source, target));
  }
  void printAdjacencyList() {
    for(Node node: nodes) {
      std::vector<int> hasEdgeTo(size);
      for(Edge edge: node.edges) {
        hasEdgeTo[edge.target] = 1;
      }
      for(int i = 0; i < size; i++) {
        if(i == size - 1) {
          std::cout << hasEdgeTo[i] << std::endl;
        }else {
          std::cout << hasEdgeTo[i] << ' ';
        }
      }

    }
  }
};

int main() {
  int n;
  std::cin >> n;
  Graph graph(n);
  for(int i = 0; i < n; i++) {
    int u, k;
    std::cin >> u >> k;
    for(int j = 0; j < k; j++) {
      int v;
      std::cin >> v;
      graph.addEdge(u - 1, v - 1);
    }
  }
  graph.printAdjacencyList();
}
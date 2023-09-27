#include <iostream>
#include <vector>
#include <utility>
#include <queue>

#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

typedef pair<int, int> Edge; // <weight, dest>

int main() {
  int nbr_vertices, nbr_edges;

  cin >> nbr_vertices >> nbr_edges;

  vector<bool> vertices_linked(nbr_vertices, false);
  vertices_linked[0] = true;
  vector<vector<Edge> > edges_list(nbr_vertices);
  int best_distance = 0;
  int src, dest, dist;

  FOR(i, nbr_edges) {
    cin >> src >> dest >> dist;
    edges_list[src].push_back(make_pair(dist, dest));
    edges_list[dest].push_back(make_pair(dist, src));
  }

  priority_queue<Edge, vector<Edge>, greater<Edge> > queue;

  FOR(i, edges_list[0].size()) {
    queue.push(edges_list[0][i]);
  }

  while (!queue.empty()) {
    Edge edge = queue.top();
    if (!vertices_linked[edge.second]) {
      vertices_linked[edge.second] = true;
      best_distance += edge.first;
      queue.pop();
      FOR(i, edges_list[edge.second].size()) {
        queue.push(edges_list[edge.second][i]);
      }
    } else {
      queue.pop();
    }
  }
  cout << best_distance << endl;
}

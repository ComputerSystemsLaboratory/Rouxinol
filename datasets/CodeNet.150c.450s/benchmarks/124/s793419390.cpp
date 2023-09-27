#include <iostream>
#include <vector>
#include <limits>

using namespace std;
using MatrixGraph = vector<vector<int>>;

const int infinity = numeric_limits<int>::max();
const int no_label = -1;

vector<int> calc_shortest_path(MatrixGraph matrix_graph, int started_label) {
  vector<int> min_costs(matrix_graph.size(), infinity);
  vector<bool> is_visits(matrix_graph.size(), false);

  min_costs[started_label] = 0;

  while(true) {
    int min_cost_adjacency_label = no_label;
    int min_cost_adjacency_weight = infinity;
    for(int i = 0; i < matrix_graph.size(); i++) {
      if(is_visits[i]) {
        continue;
      }

      if(min_costs[i] < min_cost_adjacency_weight) {
        min_cost_adjacency_label = i;
        min_cost_adjacency_weight = min_costs[i];
      }
    }
    if(min_cost_adjacency_label == no_label) {
      break;
    }

    is_visits[min_cost_adjacency_label] = true;

    for(int i = 0; i < matrix_graph.size(); i++) {
      if(matrix_graph[min_cost_adjacency_label][i] == infinity) {
        continue;
      }

      if(min_costs[min_cost_adjacency_label] + matrix_graph[min_cost_adjacency_label][i] < min_costs[i]) {
        min_costs[i] = min_costs[min_cost_adjacency_label] + matrix_graph[min_cost_adjacency_label][i];
      }
    }
  }

  return min_costs;
}

int main() {
  int vertex_num;
  cin >> vertex_num;
  MatrixGraph matrix_graph(vertex_num, vector<int>(vertex_num, infinity));

  for(int i = 0; i < vertex_num; i++) {
    int label, degree;
    cin >> label >> degree;
    for(int j = 0; j < degree; j++) {
      int adjacency_label;
      int adjacency_weight;
      cin >> adjacency_label >> adjacency_weight;
      matrix_graph[label][adjacency_label] = adjacency_weight;
    }
  }

  vector<int> min_consts = calc_shortest_path(matrix_graph, 0);

  for(int i = 0; i < min_consts.size(); i++) {
    cout << i << ' ' << min_consts[i] << endl;
  }
}


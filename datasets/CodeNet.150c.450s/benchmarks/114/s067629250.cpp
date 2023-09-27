#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using MatrixGraph = vector<vector<int>>;

const int no_edege = -1;
const int started_label = 1;
const int no_label = -1;
const int no_cost = -1;
const int max_weight = 2'000;

int total_weight(MatrixGraph matrix_graph, int started_label) {
  vector<int> min_weights(matrix_graph.size(), max_weight + 1);
  vector<int> visited(matrix_graph.size(), false);
  min_weights[started_label - 1] = 0;
  int weight_sum = 0;

  while(true) {
    int min_weight = max_weight + 1;
    int min_label = no_label;
    for(int i = 0; i < matrix_graph.size(); i++) {
      if(visited[i]) {
        continue;
      }
      if(min_weights[i] < min_weight) {
        min_weight = min_weights[i];
        min_label = i + 1;
      }
    }
    if(min_label == no_label) {
      break;
    }

    visited[min_label - 1] = true;
    weight_sum += min_weight;

    for(int i = 0; i < matrix_graph.size(); i++) {
      if(matrix_graph[min_label - 1][i] < min_weights[i]) {
        min_weights[i] = matrix_graph[min_label - 1][i];
      }
    }
  }

  return weight_sum;
}

int main() {
  int vertex_num;
  cin >> vertex_num;
  MatrixGraph matrix_graph(vertex_num, vector<int>(vertex_num, no_edege));

  // Init
  for(int i = 0; i < vertex_num; i++) {
    for(int j = 0 ;j < vertex_num; j++) {
      int weight;
      cin >> weight;
      if(weight == no_edege) {
        matrix_graph[i][j] = max_weight + 1;
        continue;
      }
      matrix_graph[i][j] = weight;
    }
  }

  cout << total_weight(matrix_graph, started_label) << endl;
}


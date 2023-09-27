#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
  int nbr_vertices, nbr_edges, source;

  cin >> nbr_vertices;
  cin >> nbr_edges;
  cin >> source;

  vector<vector<pair<bool, int> > > matrix(nbr_vertices, vector<pair<bool, int> >(nbr_vertices, make_pair(true, 0)));
  int src, dest, dist;

  // Fill the matrix for vector[i][i] to 0
  for (int i = 0; i < nbr_vertices; i++) {
    matrix[i][i] = make_pair(false, 0);
  }

  // Fill the matrix with distances get from input
  for (int i = 0; i < nbr_edges; i++) {
    cin >> src;
    cin >> dest;
    cin >> dist;
    matrix[src][dest] = make_pair(false, dist);
  }

  for (int k = 0; k < nbr_vertices; k++) {
    for (int i = 0; i < nbr_vertices; i++) {
      for (int j = 0; j < nbr_vertices; j++) {
        if (!matrix[i][k].first && !matrix[k][j].first) {
          if (matrix[i][j].first) {
            matrix[i][j].first = false;
            matrix[i][j].second = matrix[i][k].second + matrix[k][j].second;
          } else if (matrix[i][j].second > matrix[i][k].second + matrix[k][j].second) {
            matrix[i][j].second = matrix[i][k].second + matrix[k][j].second;
          }
        }
      }
    }
  }

  //check negative cycles
  for (int i = 0; i < nbr_vertices; i++) {
    if (!matrix[source][i].first && matrix[i][i].second < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for (int i = 0; i < nbr_vertices; i++) {
    if (matrix[source][i].first)
      cout << "INF" << endl;
    else
      cout << matrix[source][i].second << endl;
  }
}


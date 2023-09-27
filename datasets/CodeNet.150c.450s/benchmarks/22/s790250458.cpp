#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
  int nbr_vertices, nbr_edges, source;

  cin >> nbr_vertices >> nbr_edges >> source;

  vector<pair<bool, int> > distances(nbr_vertices);
  vector<pair<int, pair<int, int> > > edges_list;
  int src, dest, dist;

  distances[source] = make_pair(true, 0);

  // Fill the edges_list with distances get from input
  for (int i = 0; i < nbr_edges; i++) {
    cin >> src >> dest >> dist;
    edges_list.push_back(make_pair(src, make_pair(dest, dist)));
  }

  for (int i = 0; i < nbr_vertices; i++) {
    for (int j = 0; j < nbr_edges; j++) {
      if (distances[edges_list[j].first].first) {
        if (distances[edges_list[j].second.first].first) {
          if (distances[edges_list[j].second.first].second > distances[edges_list[j].first].second + edges_list[j].second.second) {
            distances[edges_list[j].second.first] = make_pair(true, distances[edges_list[j].first].second + edges_list[j].second.second);
          }
        } else {
          distances[edges_list[j].second.first] = make_pair(true, distances[edges_list[j].first].second + edges_list[j].second.second);
        }
      }
    }
  }

  for (int i = 0; i < nbr_edges; i++) {
    if (distances[edges_list[i].first].first) {
      if (distances[edges_list[i].second.first].first) {
        if (distances[edges_list[i].second.first].second > distances[edges_list[i].first].second + edges_list[i].second.second) {
          cout << "NEGATIVE CYCLE" << endl;
          return 0;
        }
      }
    }
  }

  for (int i = 0; i < nbr_vertices; i++) {
    if (distances[i].first)
      cout << distances[i].second << endl;
    else
      cout << "INF" << endl;
  }
}

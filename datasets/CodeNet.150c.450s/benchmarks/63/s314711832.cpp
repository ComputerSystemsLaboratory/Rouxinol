#include <iostream>
#include <vector>
#define MIN(a, b) ((a < b) ? a : b)
#define INF 1000000001
#define N 100000

using namespace std;

struct edge {
  int source;
  int target;
  int weight;
};

vector<edge> edges;

int distances[N];
int prev_distances[N] = {0};



int main() {
  int V, E, r;

  cin >> V >> E >> r;

  for (int i = 0; i < E; i++) {
    int source, target, distance;
    cin >> source >> target >> distance;
    edge new_edge = { source, target, distance};
    edges.push_back(new_edge);
    
  }

  //initialize distances array
 
  for (int i = 0; i < N; i++) {
    distances[i] = INF ; //max value
  }

  distances[r] = 0;

 
  for (int i = 1; i < V; i++) {
    for (int j=0; j< V; j++) {
      prev_distances[j] = distances[j];  
    }
    
    for (vector<edge>::iterator edgeptr = edges.begin(); edgeptr != edges.end(); edgeptr++) {
      distances[edgeptr->target] = MIN(distances[edgeptr->source] + edgeptr->weight, distances[edgeptr->target]);
    
    }

    bool same = true;
    for (int j=0; j< V; j++) {
      if (distances[j] != prev_distances[j]) {
	same = false;
	break;
      }
    }

    if (same) break;
  }

  for (int i = 0; i < V; i++) {
    if (distances[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << distances[i] << endl;
    }
  }
}
  

    
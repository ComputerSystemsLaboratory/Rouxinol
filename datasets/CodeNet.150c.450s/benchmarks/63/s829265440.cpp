#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

void displayGraph (vector<vector<pair<int, int> > > graph) {
    for(unsigned i=0; i<graph.size(); i++) {
        cout << i << ": ";
        for (unsigned j=0; j<graph[i].size(); j++) {
            cout << graph[i][j].second << "(" << graph[i][j].first << "), ";
        }
        cout << endl;
    }
}

typedef pair<int, int> P;

int main () {
    unsigned V, E, r;
    cin >> V >> E >> r;
    vector<vector<pair<int, int> > > graph;

    // Fill up Vertices
    for(unsigned i=0; i<V; i++) {
        graph.push_back(vector<pair<int, int> >());
    }

    // Fill up Edges
    for (unsigned i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(pair<int, int>(d, t));
        cin.ignore();
    }

    // Debug
    // displayGraph(graph);

    // Djikstra
    map<int, int> distances;
    priority_queue<P, vector<P>, greater<P> > q;
    q.push(pair<int, int>(0, r));
    while(distances.size() != V && q.size() != 0) {
        // Get smallest point/distance
        pair<int, int> p = q.top();
        q.pop();
        int prevDistance = p.first;
        int prevVertice = p.second;
        if (distances.find(prevVertice) == distances.end()) {
            // Insert shorttest distance for prevVertice
            distances[prevVertice] = prevDistance;

            vector<pair<int, int> > neighbour = graph[prevVertice];
            for(unsigned i=0; i<neighbour.size(); i++) {
                int totalDistance = prevDistance + neighbour[i].first;
                q.push(pair<int, int>(totalDistance, neighbour[i].second));
            }
        }
    }

    // Print distance
    for(unsigned i=0; i<V; i++) {
        if (distances.find(i) == distances.end()) {
            cout << "INF" << endl;
        } else {
            cout << distances[i] << endl;
        }
    }
}


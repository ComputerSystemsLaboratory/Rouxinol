#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, bool> Link;
typedef vector<vector<Link> > Graph;

int main () {
    int V, E, r;
    cin >> V >> E >> r;

    vector<pair<bool, int> > distances(V);
    vector<pair<pair<int, int>, int> > edges;

    // Init source to a distance of 0
    distances[r] = make_pair(true, 0);

    // Set known edges
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        edges.push_back(make_pair(make_pair(s, t), d));
    }

    // Run Ford-Bellman
    for(int _=0; _<V; _++)
        for(int i=0; i<E; i++){
            int v1 = edges[i].first.first;
            int v2 = edges[i].first.second;
            int d = edges[i].second;

            if (distances[v1].first) {
                // If distance to v1 is Inf, ignore
                if (distances[v2].first) {
                    // If distance is defined, then check
                    if (distances[v2].second > distances[v1].second + d)
                        distances[v2] = make_pair(true, distances[v1].second + d);
                } else {
                    // If distance to v2 is Inf, force set
                    distances[v2] = make_pair(true, distances[v1].second + d);
                }
            }
        }

    // Detect loop
    for(int i=0; i<E; i++){
        int v1 = edges[i].first.first;
        int v2 = edges[i].first.second;
        int d = edges[i].second;

        if (distances[v1].first)
            if (distances[v2].first)
                if (distances[v2].second > distances[v1].second + d) {
                    cout << "NEGATIVE CYCLE" << endl;
                    return 0;
                }
    }

    // Log
    for(int i=0; i<V; i++) {
        bool isDefined = distances[i].first;
        int d = distances[i].second;

        if (isDefined)
            cout << d << endl;
        else
            cout << "INF" << endl;
    }
}


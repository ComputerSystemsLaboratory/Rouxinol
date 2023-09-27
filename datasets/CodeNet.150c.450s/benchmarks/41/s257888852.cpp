#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, bool> Link;
typedef vector<vector<Link> > Graph;

int main () {
    int V, E;
    cin >> V >> E;
    Graph g(V, vector<Link>(V));

    // Set identity to 0
    for(int i=0; i<V; i++)
        g[i][i] = make_pair(0, true);

    // Set known edges
    for(int i=0; i<E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        g[s][t] = make_pair(d, true);
    }

    // Run Floyd-Warshall algorithm
    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++)
                if (
                        (g[i][k].second && g[k][j].second) &&
                        (!g[i][j].second || g[i][j].first > g[i][k].first + g[k][j].first))
                    g[i][j] = make_pair(g[i][k].first + g[k][j].first, true);

    // Check if any cycle
    for(int i=0; i<V; i++)
        if (g[i][i].first < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }

    // Print output
    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++)
            if (g[i][j].second)
                cout << (j ? " " : "") <<  g[i][j].first;
            else
                cout << (j ? " " : "") << "INF";
        cout << endl;
    }
}


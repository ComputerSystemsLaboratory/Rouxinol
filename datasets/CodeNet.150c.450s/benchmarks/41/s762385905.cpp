#include <bits/stdc++.h>
using namespace std;

struct edge {
    int from, to;
    int cost;
};

struct vert {
    vector<edge> edges;
};

bool warshallfloyd(
        vector<vector<long long>>& dist
        ) {
    for (int k = 0; k < dist.size(); ++k) {
        for (int i = 0; i < dist.size(); ++i) {
            for (int j = 0; j < dist.size(); ++j) {
                if (dist[i][k] == LONG_LONG_MAX || dist[k][j] == LONG_LONG_MAX) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i < dist.size(); ++i) {
        if (dist[i][i] < 0) return false;
    }
    return true;
}

template<class T>
void printVector(const vector<T> &a, string delimiter) {
    if (a.size() == 0) return;
    if (a[0] == LONG_LONG_MAX) cout << "INF";
    else cout << a[0];
    for (int i = 1; i < a.size(); ++i) {
        cout << delimiter;
        if (a[i] == LONG_LONG_MAX) cout << "INF";
        else cout << a[i];
    }
    cout << endl;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<vector<long long>> dist(V, vector<long long>(V, LONG_LONG_MAX));
    for (int i = 0; i < E; ++i) {
        int a, b, cost;
        cin >> a >> b >> cost;
        dist[a][b] = cost;
    }
    for (int i = 0; i < V; ++i) {
        dist[i][i] = 0;
    }
    bool negative_cycle = !warshallfloyd(dist);
    if (negative_cycle) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (const auto & v : dist) {
        printVector(v, " ");
    }
    return 0;
}


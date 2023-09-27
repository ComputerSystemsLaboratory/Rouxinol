#include <vector>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <climits>

using namespace std;

struct Node {
    int to;
    int weight;

    Node(int _to, int _weight) {
        to = _to;
        weight = _weight;
    }
};

vector<Node> adj[101];
int v;
int dis[101][101];

void floyd() {
    for (int k = 0; k < v; ++k) {
        for (int i = 0; i < v; ++i) {
            if (dis[i][k] == INT_MAX) {
                continue;
            }
            for (int j = 0; j < v; ++j) {
                if (dis[k][j] == INT_MAX) {
                    continue;
                }
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
}

int main() {
    int e;
    cin >> v >> e;
    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            dis[i][j] = i == j ? 0 : INT_MAX;
        }
    }

    for (int i = 0; i < e; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        adj[s].emplace_back(t, d);
        dis[s][t] = d;
    }

    floyd();
    for (int i = 0; i < v; ++i) {
        if (dis[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            if (j > 0) {
                cout << " ";
            }
            if (dis[i][j] == INT_MAX) {
                cout << "INF";
            } else {
                cout << dis[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

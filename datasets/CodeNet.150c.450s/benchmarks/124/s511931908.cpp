#include <iostream>
#include <vector>
#include<climits>

using namespace std;

int n;
vector<int> g[100];
vector<int> w[100];
int d[100];
char color[100];

void dijkstra() {
    d[0] = 0;
    color[0] = 'b';

    for (int k = 1; k < n; ++k) {
        int next;
        int mine = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (color[i] == 'b') {
                for (int j = 0; j < g[i].size(); ++j) {
                    if (d[i] + w[i].at(j) <= d[g[i].at(j)] && color[g[i].at(j)] == 'w') {
                        d[g[i].at(j)] = d[i] + w[i].at(j);
                        if (d[g[i].at(j)] <= mine) {
                            next = g[i].at(j);
                            mine = d[next];
                        }
                    }
                }
            }
        }
        color[next] = 'b';
        d[next] = mine;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int u;
        int k;
        cin >> u >> k;
        int v, c;
        for (int j = 0; j < k; ++j) {
            cin >> v >> c;
            g[u].push_back(v);
            w[u].push_back(c);
        }
    }
    for (int m = 0; m < n; ++m) {
        color[m] = 'w';
        d[m] = INT_MAX;
    }

    dijkstra();

    for (int l = 0; l < n; ++l) {
        cout << l << " " << d[l] << endl;
    }

    return 0;
}


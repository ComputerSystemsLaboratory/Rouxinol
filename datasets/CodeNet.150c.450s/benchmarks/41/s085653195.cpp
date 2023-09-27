#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

const int MAXV = 128;
const ll INF = 100000000000000;
ll d[MAXV][MAXV];

int main(void) {
    int V, E;
    cin >> V >> E;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            d[i][j] = INF;
        }
        d[i][i] = 0;
    }
    for (int i = 0; i < E; i++) {
        int s, t;
        ll D;
        cin >> s >> t >> D;
        d[s][t] = D;
    }
    // warshall
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (d[i][k] != INF && d[k][j] != INF) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    for (int i = 0; i < V; i++) {
        if (d[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (d[i][j] == INF) {
                cout << "INF" ;
            } else {
                cout << d[i][j] ;
            }
            if (j != V-1) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
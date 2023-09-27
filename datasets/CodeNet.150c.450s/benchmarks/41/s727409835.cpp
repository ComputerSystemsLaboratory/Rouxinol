#include <bits/stdc++.h>
using namespace std;
const long long int INF =  100000000000000000;
vector<vector<long long int>> d;
void warshall_floyd(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                if(d[j][i] != INF && d[i][k] != INF)
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
            }
        }
    }
}
int main() {
    int V, E;
    cin >> V >> E;
    d.assign(V, vector<long long int>(V, INF));
    for(int i = 0; i < V; i++) {
        d[i][i] = 0;
    }
    for(int i = 0; i < E; i++) {
        int s, t, cost;
        cin >> s >> t >> cost;
        d[s][t] = cost;
    }
    warshall_floyd(V);
    for(int i = 0; i < V; i++) {
        if(d[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        d[i][i] = 0;
    }
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            if(d[i][j] == INF) {
                cout << "INF";
            } else {
                cout << d[i][j];
            } 
            if(j != V - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

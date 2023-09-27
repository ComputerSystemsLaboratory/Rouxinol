#include<iostream>
#include<vector>
using namespace std;
#define INF 1980000001
int main(){
    int V, E;
    cin >> V >> E;
    vector<vector<int> > A(V, vector<int>(V, INF));
    for (int i = 0; i < V; i++) {
        A[i][i] = 0;
    }
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        A[s][t] = d;
    }
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (A[i][k] == INF || A[k][j] == INF) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
    for (int i = 0; i < V; i++) {
        if (A[i][i] != 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (A[i][j] == INF) {
                cout << "INF";
            } else {
                cout << A[i][j];
            }
            cout << (j < V - 1 ? " " : "\n");
        }
    }
    return 0;
}


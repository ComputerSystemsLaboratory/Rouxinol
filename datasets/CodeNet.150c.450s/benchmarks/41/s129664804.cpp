//All Pairs Shortest Path
#include <iostream>
#include <climits>

using namespace std;

static const int MAX = 100;
int V, E;
long long A[MAX][MAX];

void warshallFloyd() {
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            if(A[i][k] == LONG_LONG_MAX) continue;
            for(int j = 0; j < V; j++) {
                if(A[k][j] == LONG_LONG_MAX) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
}

int main() {
    int s, t;
    long long d;
    cin >> V >> E;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) A[i][j] = (i == j ? 0 : LONG_LONG_MAX);
    }
    for (int i = 0; i < E; i++) {
        cin >> s >> t >> d;
        A[s][t] = d;
    }

    warshallFloyd();

    bool negative = false;
    for (int i = 0; i < V; i++) {
        if(A[i][i] < 0) negative = true;
    }

    if(negative) cout << "NEGATIVE CYCLE" << endl;
    else {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if(j != 0) cout << " ";
                if(A[i][j] == LONG_LONG_MAX) cout << "INF";
                else cout << A[i][j];
            }
            cout << endl;
        }
    }
}

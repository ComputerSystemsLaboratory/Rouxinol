#include <iostream>
#include <algorithm>
using namespace std;

#define INF 10000000000000000
#define N 100
long long A[N][N];

void warshallfloyd(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (A[i][k] == INF) continue;
            for (int j = 0; j < n; j++) {
                if (A[k][j] == INF) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) A[i][j] = 0;
            else A[i][j] = INF;
        }
    }

    int node1, node2;
    long long w;
    for (int i = 0; i < e; i++) {
        cin >> node1 >> node2 >> w;
        A[node1][node2] = w;
    }

    warshallfloyd(n);

    bool negative = false;
    for (int i = 0; i < n; i++) {
        if (A[i][i] < 0) {
            negative = true;
            break;
        }
    }

    if (negative) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != 0) cout << " ";
                if(A[i][j] == INF) cout << "INF";
                else cout << A[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}


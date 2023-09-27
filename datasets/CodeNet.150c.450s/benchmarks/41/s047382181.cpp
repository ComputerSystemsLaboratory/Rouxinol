#include <iostream>
#include <climits>
using namespace std;

int N, E;
long a[101][101];

int INF = INT_MAX;
void warshalfloyd() {
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            if(a[i][k] == INF) continue;
            for (int j = 0; j < N; ++j) {
                if(a[k][j] == INF) continue;
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}

int main() {
    cin >> N >> E;

    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            a[k][i] = INF;
        }
    }
    for (int j = 0; j < N; ++j) {
        a[j][j] = 0;
    }
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        a[s][t] = d;
    }

    warshalfloyd();
    for (int m = 0; m < N; ++m) {
        if(a[m][m] < 0) {
            cout << "NEGATIVE CYCLE"<< endl;
            return 0;
        }
    }
    for (int l = 0; l < N; ++l) {
        for (int i = 0; i < N; ++i) {
            if(i) cout << " ";
            if(a[l][i] == INF) {
                cout << "INF" ;
            } else
            cout << a[l][i] ;
        }
        cout << endl;
    }


    return 0;
}


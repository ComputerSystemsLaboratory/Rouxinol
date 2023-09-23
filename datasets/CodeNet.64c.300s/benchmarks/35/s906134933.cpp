#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)n; ++i)

const int MAX_N = 100;
int G[MAX_N][MAX_N];

int main() {
    REP(i,MAX_N) REP(j,MAX_N) G[i][j] = 0;
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int u, k; cin >> u >> k; u--;
        while(k--) {
            int v; cin >> v; v--;
            G[u][v] = 1;
        }
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cout << G[i][j] << " \n"[j == N - 1];
}
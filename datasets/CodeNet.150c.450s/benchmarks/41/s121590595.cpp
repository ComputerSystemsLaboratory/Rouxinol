/*
    Problem 60
    https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_C
*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
/* function */
/* main */
int main(){
    int V, E;
    cin >> V >> E;
    vector<vector<ll>>G(V, vector<ll>(V, LINF));
    for (int i = 0; i < E; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        G[u][v] = w;
    }
    for (int i = 0; i < V; i++) G[i][i] = 0;

    // floyd
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            if (G[i][k] == LINF) continue;
            for (int j = 0; j < V; j++) {
                if (G[k][j] == LINF) continue;
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }
    bool negative = false;
    for (int i = 0; i < V; i++) if (G[i][i] < 0) negative = true;
    if (negative) cout << "NEGATIVE CYCLE" << '\n';
    else {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (j) cout << ' ';
                if (G[i][j] == LINF) cout << "INF";
                else cout << G[i][j];
            }
            cout << '\n';
        }
    }
}

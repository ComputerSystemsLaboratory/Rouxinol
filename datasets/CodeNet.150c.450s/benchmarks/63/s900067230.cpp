/*
    Problem 56
    https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A
*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const int INF = 1 << 30;
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
/* function */
/* main */
int main(){
    int V, E, st;
    cin >> V >> E >> st;

    vector<vector<pii>> G(V, vector<pii>());
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back(pii(v, w));
    }

    vector<int> p(V, -1), d(V, INF);
    d[st] = 0;
    // pq : pair<int, int> = first : -距離, second : 頂点
    priority_queue<pii> PQ;
    PQ.push(pii(0, st));
    while (!PQ.empty()) {
        pii f = PQ.top(); PQ.pop();
        int dist = (-1) * f.first;
        int v = f.second;

        if (d[v] < dist) continue;

        for (pii edge : G[v]) {
            int u = edge.first;
            int w = edge.second;
            if (d[u] > d[v] + w) {
                d[u] = d[v] + w;
                p[u] = v;
                PQ.push(pii((-1) * d[u], u));
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (d[i] == INF) cout << "INF";
        else cout << d[i];
        cout << '\n';
    }
}

/*
    Problem 28
    https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_C
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
const int MAX = 105;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
vector<vector<int>> G(MAX, vector<int>(MAX));
vector<int> dist(MAX, -1);
/* function */
void bfs() {
    queue<int> q;
    q.push(0);
    dist[0] = 0;  // distで訪れたかどうかcheck
    while (!q.empty()) {
        int from = q.front();
        q.pop();
        for (int to : G[from]) {
            if (dist[to] != -1) continue;
            dist[to] = dist[from] + 1;
            q.push(to);
        }
    }
}
/* main */
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int u, k;
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            v--;
            // 有効グラフ
            G[u].push_back(v);
        }
    }

    bfs();

    for (int i = 0; i < N; i++) cout << i+1 << ' ' << dist[i] << '\n';
}

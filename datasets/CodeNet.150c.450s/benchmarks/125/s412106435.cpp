/*
    Problem 24
    https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_B
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
const int MAX = 102;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
vector<vector<int>> G(MAX, vector<int>());
vector<int> d(MAX), f(MAX), deg(MAX), cur(MAX);
int t = 1;
/* function */
void dfs(int st) {
    stack<int> S;
    S.push(st);
    d[st] = t++;
    while (!S.empty()) {
        int from = S.top();
        if (cur[from] >= deg[from]) {
            f[from] = t++;
            S.pop();
            continue;
        }
        int to = G[from][cur[from]++];
        if (d[to] != 0) continue;
        d[to] = t++;
        S.push(to);
    }
}
/* main */
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k, v;
        cin >> u >> k;
        u--;
        deg[u] = k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            v--;
            G[u].push_back(v);
        }
    }

    // dfs
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) dfs(i);
    }

    for (int i = 0; i < n; i++)
        cout << i + 1 << ' ' << d[i] << ' ' << f[i] << '\n';
}

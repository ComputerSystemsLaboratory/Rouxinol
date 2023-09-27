#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <list>
#include <stack>

using namespace std;

/* constant */

const int INF = 1 << 30;
const int mod = 1000000007;
const int MAX_N = 100000;

/* typedef */

typedef long long ll;

/* global variables */

vector< vector<int> > Adj(MAX_N, vector<int>());
vector<int> link(MAX_N, -1);
int n;

/* function */
void bfs(int start);

/* main */
int main() {

    int m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        Adj[u].push_back(v);
        Adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        if (link[i] == -1) {
            bfs(i);
        }
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int u, v; cin >> u >> v;
        if (link[u] == link[v]) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
}

void bfs(int start) {
    
    link[start] = start;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {

        int cur = q.front(); q.pop();

        for (auto v : Adj[cur]) {

            if (link[v] == -1) {
                link[v] = start;
                q.push(v);
            }

        }

    }
}


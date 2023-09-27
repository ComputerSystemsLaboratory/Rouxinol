#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int N_MAX = 100;

int adj_matrix[N_MAX+1][N_MAX+1];
array<int,N_MAX+1> depth;

int n;

void bfs(queue<int>& q, const int d) {
    if (q.empty()) { return; }
    queue<int> next_q;
    while (!q.empty()) {
        int node = q.front();
        if (depth[node] < 0) {
            depth[node] = d;
            FOR(i,1,n+1) {
                if (adj_matrix[node][i] && depth[i] < 0) {
                    next_q.push(i);
                }
            }
        }
        q.pop();
    }
    bfs(next_q, d+1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    int id, k, v;
    FOR(i,0,n) {
        cin >> id;
        cin >> k;
        FOR(j,0,k) {
            cin >> v;
            adj_matrix[id][v] = 1;
        }
    }

    depth.fill(-1);

    queue<int> q;
    q.push(1);
    bfs(q, 0);

    FOR(i,1,n+1) {
        cout << i << " " << depth[i] << endl;
    }

    return 0;
}
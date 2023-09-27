#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int N_MAX = 100;

int adj_matrix[N_MAX+1][N_MAX+1];

int d[N_MAX+1];
int f[N_MAX+1];

int t;
int n;

void dfs_visit(int id) {
    d[id] = ++t;
    FOR(i,1,n+1) {
        if (adj_matrix[id][i] && !d[i]) {
            dfs_visit(i);
        }
    }
    f[id] = ++t;
}

void dfs() {
    FOR(i,1,n+1) {
        if (!d[i]) {
            dfs_visit(i);
        }
    }
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

    dfs();

    FOR(i,1,n+1) {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}
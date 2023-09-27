#include <iostream>
#include <stack>

using ll = long long;
using namespace std;

/* initialize */
int color[100], nt[100], d[100], f[100], tt;
int A[100][100];
int n;

int next(int u){
    for (int v = nt[u]; v < n; ++v) {
        nt[u] = v + 1;
        if( A[u][v]) return v;
    }
    return -1;
}

void dfs_visit(int r){
    for (int i = 0; i < n; ++i) nt[i] = 0;
    stack<int> S;
    S.push(r);
    color[r] = 1;
    d[r] += ++tt;

    while (!S.empty()){
        int u = S.top();
        int v = next(u);
        if (v != -1){
            if (color[v] == 0){
                color[v] = 1;
                d[v] = ++tt;
                S.push(v);
            }
        } else{
            S.pop();
            color[u] = 2;
            f[u] = ++tt;
        }
    }
}
void dfs(){
    for (int i = 0; i < n; ++i) {
        color[i] = 0;
    }
    tt = 0;

    for (int u = 0; u < n; ++u) {
        if (color[u] == 0) dfs_visit(u);
    }
    for (int i = 0; i < n; ++i) {
        cout << i+1 << " " << d[i] << " " << f[i] << "\n";
    }
}
/* main */
int main() {
    int u, k, v;
    cin >> n;
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) A[i][j] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            A[u-1][v-1] = 1;
        }
    }

    dfs();
    return 0;
}

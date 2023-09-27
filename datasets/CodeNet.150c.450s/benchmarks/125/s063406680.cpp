#include <iostream>
#include <stack>

using namespace std;

static const int N = 100;

static const int WHITE = 0;

static const int GRAY = 1;

static const int BLACK = 2;




//用递归的方式实现图深度优先搜索


/**
 * color 标记访问状态的数组，
 * M[N][N] 邻接矩阵 如果存在定点i到顶点j的边，则M[i][j]=trul
**/
int n, M[N][N];
int color[N], d[N], f[N], tt;

void dfs(int u) {
    int v;
    color[u] = GRAY;

    d[u] = ++tt;

    for (v = 0; v < n; v++) {
        if (M[u][v] == 0)
            continue;
        if (color[v] == WHITE) {
            dfs(v);
        }
    }
    color[u] = BLACK;
    f[u] = ++tt;
}

void dfs() {
    int u;
    for (u = 0; u < n; u++) {
        if (color[u] == WHITE) {
            dfs(u);
        }
    }

    for (u = 0; u < n; u++) {
        cout << u + 1 << " " << d[u] << " " << f[u] << endl;
    }
}

int main() {
    int u, k, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        u--;
        for (int i = 0; i < k; i++) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }
    dfs();
    return 0;
}

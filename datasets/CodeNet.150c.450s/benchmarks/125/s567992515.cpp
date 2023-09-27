#include <stdio.h>
#include <stack>

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

int n;
int M[N][N]; // ??£??\??????
int d[N]; // ????????????
int f[N]; // ????????????
int color[N]; // ?¨??????¶???
int nt[N];
int tt = 0; // ??????


int next(int u)
{
    int i;
    for (i = nt[u]; i < n; i++) {
        nt[u] = i + 1; 
        if (M[u][i]) return i;
    }
    return -1;
}


void dfs_visit(int r)
{
    int i;
    for (i = 0; i < n; i++) {
        nt[i] = 0;
    }
    
    stack<int> S;
    S.push(r);
    color[r] = GRAY;
    d[r] = ++tt;
    
    while (!S.empty()) {
        int u = S.top();
        int v = next(u);
        if (v != -1) {
            if (color[v] == WHITE) {
                color[v] = GRAY;
                d[v] = ++tt;
                S.push(v);
            }
        }
        else {
            S.pop();
            color[u] = BLACK;
            f[u] = ++tt;
        }        
    }
}

// ?????°ver
void dfs_visit_r(int r)
{
    int v;
    color[r] = GRAY;
    d[r] = ++tt;
    for (v = 0; v < n; v++) {
        if (M[r][v] == 0) continue;
        if (color[v] == WHITE) dfs_visit_r(v);
    }
    color[r] = BLACK;
    f[r] = ++tt;
}


void dfs()
{
    int i;
    for (i = 0; i < n; i++) {
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;
    
    for (i = 0; i < n; i++) {
        if (color[i] == WHITE) {
            //dfs_visit(i);
            dfs_visit_r(i);
        }
    }   
     
    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
}


int main()
{
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }
    
    // input graph
    int u, k, v;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            M[u-1][v-1] = 1;
        }
    }
    
    dfs();
    
    return 0;
}
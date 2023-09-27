#include <iostream>
#include<stdio.h>
#include<stack>
#include<queue>

#define MAX 100
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int color[MAX], d[MAX], f[MAX];
int n, A[MAX][MAX];
int nt[MAX];
int dis[MAX]; //?????¶???????????????????????????
int tt = 0;

void dfs_visit_1(int u) { //???????????°
    color[u] = GRAY;
    d[u] = ++tt;
    for(int v = 0; v < n; v++) {
        if(A[u][v] == 0) continue;
        if(color[v] == WHITE) dfs_visit_1(v);
    }
    color[u] = BLACK;
    f[u] = ++tt;
}

int next(int u) {
    for(int v = nt[u]; v < n; v++) {
        nt[u] = v+1;
        if(A[u][v] == 1) return v;
    }
    return -1;
}

void dfs_visit_2(int u) { //????????°
    for(int i = 0; i < n; i++) nt[i] = 0;
    color[u] = GRAY;
    d[u] = ++tt;
    stack<int> S;
    S.push(u);

    while(!S.empty()) {
        int u = S.top();
        int v = next(u);
        if(v != -1) {
            if(color[v] == WHITE) {
                color[v] = GRAY;
                d[v] = ++tt;
                S.push(v);
            }
        }else {
            S.pop();
            color[u] = BLACK;
            f[u] = ++tt;
        }
    }
}

void dfs() { // ?????????????????°
    for(int i = 0; i < n; i++) {
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;
    for(int i = 0; i < n; i++) {
        if(color[i] == WHITE) dfs_visit_2(i);
    }
    for(int i = 0; i < n; i++) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
}

void bfs(int u) {
    dis[0] = 0;
    for(int i = 1; i < n; i++) dis[i] = -1;
    queue<int> Q;
    Q.push(u);
    while(!Q.empty()) {
      int u = Q.front();
      Q.pop();
        for(int v = 0; v < n; v++) {
            if(A[u][v] == 1 && dis[v] == -1) {
                Q.push(v);
                dis[v] = dis[u] + 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d %d\n", i+1, dis[i]);
    }
}

int main()
{
    int u, k, v;
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {
        scanf("%d%d", &u, &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &v);
            A[u-1][v-1] = 1;
        }
    }

    /*
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d", A[i][j]);
            if(j != n-1) printf(" ");
        }
        printf("\n");
    }
    */
    //dfs();
    bfs(0);

    return 0;
}
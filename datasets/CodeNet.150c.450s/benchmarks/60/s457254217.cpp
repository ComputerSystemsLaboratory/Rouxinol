#include <iostream>
#include<stdio.h>
#include<stack>

#define MAX 100
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int color[MAX], d[MAX], f[MAX];
int n, A[MAX][MAX];
int tt;

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
    for(int v = 0; v < n; v++) {
        if(A[u][v] == 1) {
            /*
            if(color[v] == WHITE) return v;
            else if(color[v] == BLACK) return -1;
            else if(color[v] == GRAY) continue;
            */
            return v;
        }
    }
    return -1;
}

void dfs_visit_2(int u) {
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

void dfs_1() { // ???????????°
    for(int i = 0; i < n; i++) {
        color[i] = WHITE;
    }
    tt = 0;
    for(int i = 0; i < n; i++) {
        if(color[i] == WHITE) dfs_visit_2(i);
    }

    for(int i = 0; i < n; i++) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
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

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d", A[i][j]);
            if(j != n-1) printf(" ");
        }
        printf("\n");
    }
    
    //dfs_1();
    
    return 0;
}
//
// Created by 李青坪 on 2018/10/31.
//

#include <cstdio>
#include <algorithm>

#define MAXN 101
using namespace std;

int graph[MAXN][MAXN];

void init(){
    for (int i = 0; i < MAXN; ++i) {
        fill(graph[i], graph[i]+MAXN, 0);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int v, dgr;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &v, &dgr);
        int node;
        for (int j = 0; j < dgr; ++j) {
            scanf("%d", &node);
            graph[v][node] = 1;
        }
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            if (i-1) printf(" ");
            printf("%d", graph[k][i]);
        }
        printf("\n");
    }
}
/*
4
1 2 2 4
2 1 4
3 0
4 1 3

 */

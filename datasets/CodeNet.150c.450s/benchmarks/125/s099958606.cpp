//
// Created by 李青坪 on 2018/11/2.
//

#include <cstdio>
#define MAXN 101
using namespace std;

int graph[MAXN][MAXN];
int nodeTime[MAXN][2];
int countTime = 0;
int n;

void dfs(int i){
    if (nodeTime[i][0] != 0){
        return;
    }
    countTime++;
    nodeTime[i][0] = countTime;
    for (int j = 1; j <= n; ++j) {
        if (graph[i][j] != 0 && nodeTime[j][0] == 0){
            dfs(j);
        }
    }
    countTime++;
    nodeTime[i][1] = countTime;
}

int main(){
    scanf("%d", &n);
    int u, k;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &u, &k);
        int node;
        for (int j = 0; j < k; ++j) {
            scanf("%d", &node);
            graph[u][node] = 1;
        }
    }
    for (int m = 1; m <= n; ++m) {
        dfs(m);
    };
    for (int l = 1; l <= n; ++l) {
        printf("%d %d %d\n", l, nodeTime[l][0], nodeTime[l][1]);
    }
}
/*
6
1 2 2 3
2 2 3 4
3 1 5
4 1 6
5 1 6
6 0
 */

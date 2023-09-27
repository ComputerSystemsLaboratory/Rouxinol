#include <stdio.h>
#include <string.h>
#define N 110
int n;
int m[N][N];
int used[N];
int time = 1;
int start[N];
int end[N];
void dfs(int u){
    used[u] = 1;
    start[u] = time++;
    for(int v = 1; v <= n; v++){
        if(used[v] == 0 && m[u][v]){
            dfs(v);
        }
    }
    end[u] = time++;
}
int main(){
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) m[i][j] = 0;
    for(int i = 0; i < N; i++) used[i] = 0;
    scanf("%d", &n);
    for(int p = 0; p < n; p++){
        int node, k;
        scanf("%d %d", &node, &k);
        for(int i = 0; i < k; i++){
            int b;
            scanf("%d", &b);
            m[node][b] = 1;
        }
    }

    for(int i = 1; i<= n; i++) if(used[i] == 0) dfs(i);
    for(int i = 1; i <= n; i++){
        printf("%d %d %d\n", i, start[i], end[i]);
    }
    return 0;
}

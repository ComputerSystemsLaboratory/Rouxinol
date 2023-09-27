#include <stdio.h>
#include <queue>

int time, n;
int d[100], color[100];
int M[100][100];

void bfs(int s) {
    std::queue<int> Q;
    
    for (int i=0; i<100; i++){
        color[i] = 0;
        d[i] = -1;
    }
    
    color[s] = 1;
    d[s] = 0;
    Q.push(s);
    while (!Q.empty()) {
        int u = Q.front(); Q.pop();
        for (int i=0; i<n; i++) {
            if(M[u][i] && color[i] == 0) {
                color[i] = 1;
                d[i] = d[u]+1;
                Q.push(i);
            }
        }
        color[u] = 2;
    }
}

int main() {
    int u, k, v;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            M[i][j] = 0;
        }
    }
    
    for (int i=0; i<n; i++) {
        scanf("%d %d", &u, &k);
        for (int j=0; j<k; j++) {
            scanf("%d", &v);
            M[u-1][v-1] = 1;
        }
    }
    
    bfs(0);
    
    for (int i=0; i<n; i++) {
        printf("%d %d\n", i+1, d[i]);
    }
    return 0;
}

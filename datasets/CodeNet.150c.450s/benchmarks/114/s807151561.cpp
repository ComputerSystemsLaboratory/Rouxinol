#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 110
#define INF 0x3f3f3f3f
int m[N][N];
int used[N];
int d[N];
int n;
int sum = 0;
void prim(){
    used[1] = 1;
    d[1] = 0;
    for(int k = 1; k < n; k++){
        int min = INF, u;
        for(int i = 1; i <= n; i++){
            if(!used[i] && d[i] < min){
                min = d[i];
                u = i;
            }
        }

        used[u] = 1;
        sum += d[u];
        for(int v = 1; v <= n; v++){
            if(!used[v] && m[u][v] < d[v]){
                d[v] = m[u][v];
            }
        }
    }
    printf("%d\n", sum);
}
int main(){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) m[i][j] = INF;
    for(int i = 1; i <= n; i++){
        d[i] = INF;
        used[i] = 0;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int p;
            scanf("%d", &p);
            if(p != -1) m[i][j] = p;
        }
    }
    for(int i = 1; i <= n; i++) d[i] = m[1][i];
    prim();
    return 0;
}

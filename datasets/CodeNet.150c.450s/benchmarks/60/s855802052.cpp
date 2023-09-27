#include <stdio.h>
#include <string.h>
#define N 110
int m[N][N];
int n;
int main(){
    for(int i = 0 ; i <= n; i++) for(int j = 0; j <= n; j++) m[i][j] = 0;
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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j != n) printf("%d ", m[i][j]);
            else printf("%d\n", m[i][j]);
        }
    }
    return 0;
}

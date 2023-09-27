#include <cstdio>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int A[n][m];
    int b[m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++){
        int c = 0;
        for (int j = 0; j < m; j++){
            c += A[i][j] * b[j];
        }
        printf("%d\n", c);
    }
    return 0;
}
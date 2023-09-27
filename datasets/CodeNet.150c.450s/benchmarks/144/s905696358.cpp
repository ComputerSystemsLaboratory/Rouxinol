#include <cstdio>
int main(){
    int n, m, l;
    int i, j, k;
    scanf("%d%d%d", &n, &m, &l);
    
    int A[100][100] = {};
    int B[100][100] = {};
    long C[100][100] = {};
    
    for (i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    } 
    for (i = 0; i < m; i++){
        for (j = 0; j < l; j++){
            scanf("%d", &B[i][j]);
        }
    } 
    for (i = 0; i < n; i++){
        for (j = 0; j < l; j++){
            for (int k = 0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%ld", C[i][j]);
            if (j < l -1){
                printf(" ");
            }
        }
        printf("\n");
    } 
    return 0;
}
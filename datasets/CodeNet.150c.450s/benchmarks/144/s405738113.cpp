#include <cstdio>

int main()
{
    int n,m,l;
    scanf("%d %d %d", &n, &m, &l);

    int A[n][m], B[m][l];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            scanf("%d", &B[i][j]);
        }
    }

    unsigned long int C[n][l];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++) C[i][j] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < m; k++) C[i][j] += A[i][k]*B[k][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            if(n == 1 && l == 1) printf("%ld\n", C[i][j]);
            else if(j == 0) printf("%ld", C[i][j]);
            else if(j != l-1) printf(" %ld", C[i][j]);
            else printf(" %ld\n", C[i][j]);
        }
    }
    return 0;
}
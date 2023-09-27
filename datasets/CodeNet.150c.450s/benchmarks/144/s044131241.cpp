#include <stdio.h>

int main(void)
{
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    
    int a[n][m], b[m][l];
    long c[n][l];
    int i, j, k;
    
    /*init*/
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < m; ++i) {
        for (j = 0; j < l; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < l; ++j) {
            c[i][j] = 0;
        }
    }
    
    /*calc*/
    for (i = 0; i < n; ++i) {
        for (j = 0; j < l; ++j) {
            for (k = 0; k < m; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    /*output*/
    for (i = 0; i < n; ++i) {
        for (j = 0; j < l; ++j) {
            printf("%ld", c[i][j]);
            if (j < l - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
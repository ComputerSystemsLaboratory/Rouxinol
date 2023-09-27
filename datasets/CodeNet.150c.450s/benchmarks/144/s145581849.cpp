#include <stdio.h>

#define MAX 100

int main(void)
{
    int i, j, k;

    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    int a_mat[MAX][MAX];
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &a_mat[i][j]);
        }
    }

    int b_mat[MAX][MAX];
    for (i = 0; i < m; i++){
        for (j = 0; j < l; j++){
            scanf("%d", &b_mat[i][j]);
        }
    }

/*    for (i = 0; i < n; i++){
        for (j = 0; j < l; j++){
            int c = 0;
            for (k = 0; k < m; k++){
                c += a_mat[i][k] * b_mat[k][j];
            }
            if (j != 0){
                printf(" ");
            }
            printf("%d", c);
        }
        printf("\n");
    }*/

    long c_mat[MAX][MAX];
    for (i = 0; i < n; i++){
        for (j = 0; j < l; j++){
            c_mat[i][j] = 0;
            for (k = 0; k < m; k++){
                c_mat[i][j] += a_mat[i][k] * b_mat[k][j];
            }
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < l; j++){
            if (j != 0){
                printf(" ");
            }
            printf("%ld", c_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
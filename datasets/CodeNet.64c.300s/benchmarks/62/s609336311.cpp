#include <stdio.h>

#define MAX 101

int main(void)
{
    int i, j;

    int row, column;
    scanf("%d %d", &row, &column);

    int in_mat[MAX][MAX];
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            scanf("%d", &in_mat[i][j]);
        }
    }

    int in_vec[MAX];
    for (j = 0; j < column; j++){
        scanf("%d", &in_vec[j]);
    }

    int out_vec[MAX];
    for (i = 0; i < row; i++){
        out_vec[i] = 0;
        for (j = 0; j < column; j++){
            out_vec[i] += in_mat[i][j] * in_vec[j];
        }
        printf("%d\n", out_vec[i]);
    }

    return 0;

}
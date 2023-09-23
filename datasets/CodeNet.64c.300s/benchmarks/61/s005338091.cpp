#include <cstdio>

int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum_matrix[r + 1][c + 1];
    for(int i = 0; i < r + 1; i++){
        for(int j = 0; j < c + 1; j++){
            sum_matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum_matrix[i][j] = matrix[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum_matrix[i][c] += matrix[i][j];
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            sum_matrix[r][i] += matrix[j][i];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum_matrix[r][c] += matrix[i][j];
        }
    }
    for(int i = 0; i < r + 1; i++){
        for(int j = 0; j < c + 1; j++){
            if (j == 0) printf("%d", sum_matrix[i][j]);
            else printf(" %d", sum_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
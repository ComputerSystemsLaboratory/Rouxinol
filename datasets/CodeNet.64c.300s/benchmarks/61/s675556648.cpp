#include <stdio.h>

int main(void)
{
    int r, c;
   
    scanf("%d %d", &r, &c);

    int a[r + 1][c + 1];
    int i, j;

    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r + 1; ++i) {
        a[i][c] = 0;
    }
    
    for (i = 0; i < c + 1; ++i) {
        a[r][i] = 0;
    }
    

    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            a[i][c] += a[i][j];
        }
    }

    for (i = 0; i < c; ++i) {
        for (j = 0; j < r; ++j) {
            a[r][i] += a[j][i];
        }
    }
    
    for (i = 0; i < r; ++i) {
        a[r][c] += a[i][c];
    }

    for (i = 0; i < r + 1; ++i) {
        for (j = 0; j < c + 1; ++j) {
            printf("%d", a[i][j]);
            if (j == c) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
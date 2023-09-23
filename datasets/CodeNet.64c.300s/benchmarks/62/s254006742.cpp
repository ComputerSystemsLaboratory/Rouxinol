
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    int n, m, i, j, sum;

    scanf("%d%d", &n, &m);

    int a[n][m];
    int b[m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            getchar();
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < m; ++j)
    {
        getchar();
        scanf("%d", &b[j]);
    }

    for (int i = 0; i < n; ++i)
    {
        sum = 0;
        for (int j = 0; j < m; ++j)
        {
            sum += a[i][j]*b[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
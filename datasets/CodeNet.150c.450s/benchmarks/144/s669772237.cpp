#include <cstdio>

int main()
{
    int n, m, l;
    std::scanf("%d%d%d", &n, &m, &l);
    int gyoretsuA[n][m];
    int gyoretsuB[m][l];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::scanf("%d", &gyoretsuA[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            std::scanf("%d", &gyoretsuB[i][j]);
        }
    }

    long gyoretsuC[n][l];

    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < l; q++)
        {
            gyoretsuC[p][q] = 0;
            for (int r = 0; r < m; r++)
            {
                gyoretsuC[p][q] += (long)(gyoretsuA[p][r] * gyoretsuB[r][q]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {

            std::printf("%ld", gyoretsuC[i][j]);

            if (j != l - 1)
            {
                std::printf(" ");
            }
        }
        std::printf("\n");
    }
}

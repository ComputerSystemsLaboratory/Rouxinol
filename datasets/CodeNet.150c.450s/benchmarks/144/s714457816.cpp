#include <iostream>

using namespace std;

int main(void)
{
    u_int n, m, l;
    cin >> n >> m >> l;

    u_int a[n][m], b[m][l];
    unsigned long long c[n][l];

    for (u_int i = 0; i < n; i++)
        for (u_int j = 0; j < m; j++)
            cin >> a[i][j];

    for (u_int i = 0; i < m; i++)
        for (u_int j = 0; j < l; j++)
            cin >> b[i][j];

    for (u_int i = 0; i < n; i++)
        for (u_int j = 0; j < l; j++)
            c[i][j] = 0;

    for (u_int i = 0; i < n; i++) {
        for (u_int j = 0; j < l; j++)
            for (u_int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
    }

    for (u_int i = 0; i < n; i++) {
        for (u_int j = 0; j < l - 1; j++)
            printf("%llu ", c[i][j]);
        printf("%llu\n", c[i][l - 1]);
    }
    
    return 0;
}
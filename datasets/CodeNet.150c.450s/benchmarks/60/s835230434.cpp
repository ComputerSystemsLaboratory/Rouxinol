#include <iostream>
#define N 100

int v[N + 1][N + 1];

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            v[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        int u, k;
        std::cin >> u >> k;
        for (int j = 0; j < k; ++j)
        {
            int t;
            std::cin >> t;
            v[u][t] = 1;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j > 1)
            {
                std::cout<<' ';
            }
            std::cout << v[i][j];
        }
        std::cout << "\n";
    }
}

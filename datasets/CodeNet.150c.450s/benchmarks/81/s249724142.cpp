#include <cstring>
#include <iostream>
#include <utility>

using namespace std;

int n, ncities;
int cities[10][10];

pair<int, int> solve()
{
    for (int k = 0; k <= ncities; ++k)
    {
        for (int i = 0; i <= ncities; ++i)
        {
            for (int j = 0; j <= ncities; ++j)
            {
                cities[i][j] = min(cities[i][j], cities[i][k] + cities[k][j]);
            }
        }
    }
    pair<int, int> result;
    result.second = 1000000000;
    for (int i = 0; i <= ncities; ++i)
    {
        int total = 0;
        for (int j = 0; j <= ncities; ++j)
        {
            total += cities[i][j];
        }
        if (total < result.second)
        {
            result.first = i;
            result.second = total;
        }
    }
    return result;
}

int main()
{
    while (cin >> n, n > 0)
    {
        ncities = -1;
        memset(cities, 0x3f, sizeof cities);
        int a, b, c;
        for (int i = 0; i < n; ++i)
        {
            cin >> a >> b >> c;
            cities[a][b] = cities[b][a] = c;
            ncities = max(ncities, max(a, b));
        }
        for (int i = 0; i <= ncities; ++i)
        {
            cities[i][i] = 0;
        }
        pair<int, int> result = solve();
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int adj[101][101] = {};

int main()
{
    int n, u, k, v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> u >> k;
        while (k > 0)
        {
            cin >> v;
            adj[u][v] = 1;
            k--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > 1)
                cout << " ";
            cout << adj[i][j];
        }
        cout << "\n";
    }
    return 0;
}

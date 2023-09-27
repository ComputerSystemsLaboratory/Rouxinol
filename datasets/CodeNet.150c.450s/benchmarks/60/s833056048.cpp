#include <iostream>
#include <vector>

void solve()
{
    using namespace std;

    int n;
    cin >> n;

    vector<vector<bool>> edges(n, vector<bool>(n));

    for (int i = 0; i < n; ++i)
    {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; ++j)
        {
            int v;
            cin >> v;
            edges[u - 1][v - 1] = true;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << (edges[i][j] ? 1 : 0);
            if (j + 1 != n)
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}

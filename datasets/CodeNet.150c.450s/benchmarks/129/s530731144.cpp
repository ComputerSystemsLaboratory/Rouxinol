#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m + 1, 0);
    vector<vector<int> > a(n + 1, v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << "a[" << i << ", " << j << "] ?";
            cin >> a[i][j];
            a[i][m] += a[i][j];
            a[n][j] += a[i][j];
            a[n][m] += a[i][j];
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << a[i][m] << endl;
        // cout << endl;
    }

    return 0;
}

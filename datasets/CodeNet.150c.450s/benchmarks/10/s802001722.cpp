#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tenant[4][3][10]{};
    int b, f, r, v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        tenant[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << tenant[i][j][k];
            }
            cout << endl;
            // cout << tenant[i][j][9] << endl;
        }
        cout << "####################" << endl;
    }
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            cout << " " << tenant[3][j][k];
        }
        cout << endl;
        // cout << tenant[3][j][9] << endl;
    }

    return 0;
}
